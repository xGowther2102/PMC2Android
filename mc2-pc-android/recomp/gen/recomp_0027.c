/**
 * Midnight Club II (PC) - Recompiled code chunk 27
 * Functions: 250 (0x005554C0 - 0x0055EA70)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_005554C0
 * Original: 0x005554C0 - 0x005554DD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005554C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005554C0: ;
    eax = MEM32(0x6C4C78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005554DC; /* je: equal / zero */

loc_005554C9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005554CFu); RECOMP_ABI_CALL(0x00557860u, sub_00557860); /* call 0x00557860 */

loc_005554CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C4C78) = 0;

loc_005554DC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005554E0
 * Original: 0x005554E0 - 0x005554F9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005554E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005554E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 3;
    edi = 0x673898;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00555500
 * Original: 0x00555500 - 0x0055553E (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00555500: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    MEM16(esp + 4) = 2;
    PUSH32(esp, 0x00555510u); RECOMP_ABI_CALL(0x00627E2Cu, sub_00627E2C); /* call 0x00627E2C */

loc_00555510: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x10);
    edx = esp + 4;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    MEM16(esp + 0xE) = LO16(eax);
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055553Au); RECOMP_ABI_CALL(0x00627E74u, sub_00627E74); /* call 0x00627E74 */

loc_0055553A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00555540
 * Original: 0x00555540 - 0x005555A7 (103 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00555540: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x0055554Eu); RECOMP_ABI_CALL(0x00557550u, sub_00557550); /* call 0x00557550 */

loc_0055554E: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055555A; /* jne: not equal / not zero */

loc_00555554: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0055555A: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00555595; /* je: equal / zero */

loc_00555563: ;
    edi = MEM32(esi + eax);
    ebx = MEM32(edi);
    PUSH32(esp, 0x7F000001);
    PUSH32(esp, 0x00555572u); RECOMP_ABI_CALL(0x00627E8Cu, sub_00627E8C); /* call 0x00627E8C */

loc_00555572: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555587; /* je: equal / zero */

loc_00555576: ;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x00555580u); RECOMP_ABI_CALL(0x00557280u, sub_00557280); /* call 0x00557280 */

loc_00555580: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055559F; /* jne: not equal / not zero */

loc_00555587: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(esi + eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555563; /* jne: not equal / not zero */

loc_00555595: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0055559F: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005555B0
 * Original: 0x005555B0 - 0x005555DA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005555B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_005555B0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x10;
    PUSH32(esp, 0x005555CBu); RECOMP_ABI_CALL(0x00627E92u, sub_00627E92); /* call 0x00627E92 */

loc_005555CB: ;
    ecx = MEM32(esp + 6);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005555E0
 * Original: 0x005555E0 - 0x0055570E (302 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005555E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005555E0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x673898);
    SET_LO16(ecx, MEM16(0x67389C));
    SET_LO8(edx, MEM8(esi + 0xC));
    PUSH32(esp, ebx);
    MEM32(esp + 4) = eax;
    eax = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM16(esp + 0xC) = LO16(ecx);
    MEM8(esp + 0xE) = 2;
    MEM8(esp + 0xF) = LO8(ebx);
    MEM8(esp + 0x15) = LO8(edx);
    PUSH32(esp, 0x00555614u); RECOMP_ABI_CALL(0x00627E8Cu, sub_00627E8C); /* call 0x00627E8C */

loc_00555614: ;
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esp + 0x12) = LO8(ecx);
    PUSH32(esp, 0x00555628u); RECOMP_ABI_CALL(0x00555540u, sub_00555540); /* call 0x00555540 */

loc_00555628: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055562Eu); RECOMP_ABI_CALL(0x00627E26u, sub_00627E26); /* call 0x00627E26 */

loc_0055562E: ;
    edx = eax;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x13) = LO8(edx);
    ecx = eax;
    edx = eax;
    MEM8(esp + 0x16) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x12));
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esp + 0x14) = LO8(ecx);
    MEM8(esp + 0x15) = LO8(edx);
    MEM8(esp + 0x17) = LO8(ebx);
    MEM8(esp + 0x18) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00555685; /* je: equal / zero */

loc_0055565D: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555685; /* jne: not equal / not zero */

loc_00555662: ;
    ecx = MEM32(0x6C4C7C);
    edx = MEM32(esi + 4);
    PUSH32(esp, 0x15);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0x6CFD;
    MEM8(esp + 0x20) = LO8(ebx);
    PUSH32(esp, 0x00555682u); RECOMP_ABI_CALL(0x00555500u, sub_00555500); /* call 0x00555500 */

loc_00555682: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00555685: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005556AD; /* jne: not equal / not zero */

loc_0055568A: ;
    ecx = MEM32(0x6C4C7C);
    edx = MEM32(esi);
    PUSH32(esp, 0x15);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0x6CFD;
    MEM8(esp + 0x20) = 1;
    PUSH32(esp, 0x005556AAu); RECOMP_ABI_CALL(0x00555500u, sub_00555500); /* call 0x00555500 */

loc_005556AA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005556AD: ;
    _fa = (uint32_t)(MEM8(esp + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x12), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005556B8; /* je: equal / zero */

loc_005556B3: ;
    edx = MEM32(esi + 4);
    goto loc_005556BA;

loc_005556B8: ;
    edx = MEM32(esi);

loc_005556BA: ;
    PUSH32(esp, 0x005556BFu); RECOMP_ABI_CALL(0x005555B0u, sub_005555B0); /* call 0x005555B0 */

loc_005556BF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005556C5u); RECOMP_ABI_CALL(0x00627E86u, sub_00627E86); /* call 0x00627E86 */

loc_005556C5: ;
    MEM8(esp + 0x17) = HI8(eax);
    MEM8(esp + 0x18) = LO8(eax);
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_005556F6; /* jne: not equal / not zero */

loc_005556D3: ;
    ecx = MEM32(0x6C4C80);
    edx = MEM32(esi);
    PUSH32(esp, 0x15);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0x6CFD;
    MEM8(esp + 0x1C) = 2;
    PUSH32(esp, 0x005556F3u); RECOMP_ABI_CALL(0x00555500u, sub_00555500); /* call 0x00555500 */

loc_005556F3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005556F6: ;
    PUSH32(esp, 0x005556FBu); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_005556FB: ;
    _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x24) = 0x1E;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00555710
 * Original: 0x00555710 - 0x005557A9 (153 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00555710: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 8);
    eax = MEM32(0x673898);
    SET_LO16(ecx, MEM16(0x67389C));
    PUSH32(esp, edx);
    MEM32(esp + 4) = eax;
    MEM16(esp + 8) = LO16(ecx);
    MEM8(esp + 0xA) = 2;
    MEM8(esp + 0xB) = 7;
    PUSH32(esp, 0x0055573Bu); RECOMP_ABI_CALL(0x00627E8Cu, sub_00627E8C); /* call 0x00627E8C */

loc_0055573B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x30));
    MEM32(esp + 8) = eax;
    eax = MEM32(esi + 0x2C);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00555752u); RECOMP_ABI_CALL(0x00627E2Cu, sub_00627E2C); /* call 0x00627E2C */

loc_00555752: ;
    ecx = MEM32(esi + 0x2C);
    SET_LO8(edx, MEM8(esi + 0x32));
    MEM16(esp + 0x10) = LO16(eax);
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    MEM8(esp + 0x16) = LO8(edx);
    MEM8(esp + 0x17) = LO8(eax);
    PUSH32(esp, 0x00555772u); RECOMP_ABI_CALL(0x00627E20u, sub_00627E20); /* call 0x00627E20 */

loc_00555772: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055577C; /* jne: not equal / not zero */

loc_0055577A: ;
    eax = MEM32(esi);

loc_0055577C: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, 0x14);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    SET_LO16(eax, MEM16(esi + 0x30));
    PUSH32(esp, 0x00555791u); RECOMP_ABI_CALL(0x00555500u, sub_00555500); /* call 0x00555500 */

loc_00555791: ;
    PUSH32(esp, 0x00555796u); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_00555796: ;
    _fb = (uint32_t)(0x2BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2BC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x24) = 0x14;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005557B0
 * Original: 0x005557B0 - 0x005557D1 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005557B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005557B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005557B6u); RECOMP_ABI_CALL(0x00627E32u, sub_00627E32); /* call 0x00627E32 */

loc_005557B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005557D0; /* jne: not equal / not zero */

loc_005557BB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005557C1u); RECOMP_ABI_CALL(0x00557540u, sub_00557540); /* call 0x00557540 */

loc_005557C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005557C9; /* jne: not equal / not zero */

loc_005557C8: ;
    esp += 4; return; /* ret */

loc_005557C9: ;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax);
    eax = MEM32(ecx);

loc_005557D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005557E0
 * Original: 0x005557E0 - 0x0055582B (75 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005557E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005557E0: ;
    eax = MEM32(0x6C4C7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_005557FA; /* jne: not equal / not zero */

loc_005557EA: ;
    esi = MEM32(0x6738A0);
    PUSH32(esp, 0x005557F5u); RECOMP_ABI_CALL(0x005557B0u, sub_005557B0); /* call 0x005557B0 */

loc_005557F5: ;
    MEM32(0x6C4C7C) = eax;

loc_005557FA: ;
    eax = MEM32(0x6C4C80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555813; /* jne: not equal / not zero */

loc_00555803: ;
    esi = MEM32(0x6738A4);
    PUSH32(esp, 0x0055580Eu); RECOMP_ABI_CALL(0x005557B0u, sub_005557B0); /* call 0x005557B0 */

loc_0055580E: ;
    MEM32(0x6C4C80) = eax;

loc_00555813: ;
    ecx = MEM32(0x6C4C7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00555828; /* je: equal / zero */

loc_0055581E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555828; /* je: equal / zero */

loc_00555822: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00555828: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00555830
 * Original: 0x00555830 - 0x005558BE (142 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00555830: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00555836u); RECOMP_ABI_CALL(0x005553E0u, sub_005553E0); /* call 0x005553E0 */

loc_00555836: ;
    esi = eax;
    PUSH32(esp, 0x0055583Du); RECOMP_ABI_CALL(0x005557E0u, sub_005557E0); /* call 0x005557E0 */

loc_0055583D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555848; /* jne: not equal / not zero */

loc_00555841: ;
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00555848: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555857; /* jne: not equal / not zero */

loc_0055584F: ;
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00555857: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x11);
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(esi + 8) = edx;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = ecx;
    MEM32(esi + 0x3C) = edx;
    PUSH32(esp, 0x0055588Cu); RECOMP_ABI_CALL(0x00627E4Au, sub_00627E4A); /* call 0x00627E4A */

loc_0055588C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi) = eax;
    MEM32(esi + 0x20) = ebx;
    MEM8(esi + 0x32) = LO8(ebx);
    MEM32(esi + 0x2C) = ebx;
    MEM16(esi + 0x30) = LO16(ebx);
    MEM32(esi + 0x24) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_005558B4; /* jne: not equal / not zero */

loc_005558A3: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x005558ABu); RECOMP_ABI_CALL(0x00555440u, sub_00555440); /* call 0x00555440 */

loc_005558AB: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005558B4: ;
    PUSH32(esp, 0x005558B9u); RECOMP_ABI_CALL(0x005555E0u, sub_005555E0); /* call 0x005555E0 */

loc_005558B9: ;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005558C0
 * Original: 0x005558C0 - 0x005558EE (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005558C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005558C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x005558CBu); RECOMP_ABI_CALL(0x00555390u, sub_00555390); /* call 0x00555390 */

loc_005558CB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005558EB; /* je: equal / zero */

loc_005558D1: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005558DE; /* je: equal / zero */

loc_005558D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005558DEu); RECOMP_ABI_CALL(0x00627E38u, sub_00627E38); /* call 0x00627E38 */

loc_005558DE: ;
    MEM32(esi) = 0xFFFFFFFFu;
    MEM32(esi + 0x10) = 4;

loc_005558EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005558F0
 * Original: 0x005558F0 - 0x00555949 (89 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005558F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005558F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x673898);
    SET_LO16(ecx, MEM16(0x67389C));
    SET_LO8(edx, MEM8(esi + 0xC));
    MEM32(esp) = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    MEM16(esp + 8) = LO16(ecx);
    MEM8(esp + 0xA) = 2;
    MEM8(esp + 0xB) = 6;
    MEM8(esp + 0x11) = LO8(edx);
    PUSH32(esp, 0x00555922u); RECOMP_ABI_CALL(0x00627E8Cu, sub_00627E8C); /* call 0x00627E8C */

loc_00555922: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi + 2));
    PUSH32(esp, 0x15);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00555939u); RECOMP_ABI_CALL(0x00627E86u, sub_00627E86); /* call 0x00627E86 */

loc_00555939: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00555945u); RECOMP_ABI_CALL(0x00555500u, sub_00555500); /* call 0x00555500 */

loc_00555945: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00555950
 * Original: 0x00555950 - 0x005559F4 (164 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00555950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00555950: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00555961u); RECOMP_ABI_CALL(0x00627E20u, sub_00627E20); /* call 0x00627E20 */

loc_00555961: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(ebp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0055596Du); RECOMP_ABI_CALL(0x00627E86u, sub_00627E86); /* call 0x00627E86 */

loc_0055596D: ;
    SET_LO8(eax, MEM8(ebp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555979; /* jne: not equal / not zero */

loc_00555974: ;
    PUSH32(esp, 0x00555979u); RECOMP_ABI_CALL(0x005558F0u, sub_005558F0); /* call 0x005558F0 */

loc_00555979: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005559F1; /* jge: greater or equal (signed >=) */

loc_0055597F: ;
    SET_LO8(eax, MEM8(ebp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005559BC; /* je: equal / zero */

loc_00555986: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    ecx = 4;
    if (CMP_NE(_fa, _fb)) goto loc_00555996; /* jne: not equal / not zero */

loc_0055598F: ;
    ecx = 1;
    goto loc_0055599F;

loc_00555996: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055599F; /* jne: not equal / not zero */

loc_0055599A: ;
    ecx = 2;

loc_0055599F: ;
    edx = MEM32(esi + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(esi + 0x38); PUSH32(esp, 0x005559ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005559A8u); } /* indirect call */
    }

loc_005559AB: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_005558C0(); return; /* tail jmp 0x005558C0 */

loc_005559BC: ;
    ecx = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x2C) = ecx;
    SET_LO16(edx, MEM16(ebp + 0x10));
    PUSH32(esp, edx);
    PUSH32(esp, 0x005559CEu); RECOMP_ABI_CALL(0x00627E86u, sub_00627E86); /* call 0x00627E86 */

loc_005559CE: ;
    MEM16(esi + 0x30) = LO16(eax);
    eax = MEM32(esi + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    MEM32(esi + 0x20) = 0;
    MEM32(esi + 0x10) = 2;
    { uint32_t _icall_target = MEM32(esi + 0x34); PUSH32(esp, 0x005559E9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005559E6u); } /* indirect call */
    }

loc_005559E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005559F1u); RECOMP_ABI_CALL(0x00555710u, sub_00555710); /* call 0x00555710 */

loc_005559F1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00555A00
 * Original: 0x00555A00 - 0x00555A7F (127 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00555A00: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00555A7D; /* jl: less (signed <) */

loc_00555A09: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00555A12u); RECOMP_ABI_CALL(0x00627E20u, sub_00627E20); /* call 0x00627E20 */

loc_00555A12: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi + 2));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00555A1Eu); RECOMP_ABI_CALL(0x00627E86u, sub_00627E86); /* call 0x00627E86 */

loc_00555A1E: ;
    edx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x2C) = edx;
    SET_LO16(eax, MEM16(edi + 2));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00555A30u); RECOMP_ABI_CALL(0x00627E86u, sub_00627E86); /* call 0x00627E86 */

loc_00555A30: ;
    MEM16(esi + 0x30) = LO16(eax);
    MEM8(esi + 0x32) = 1;
    SET_LO8(eax, MEM8(ebx + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555A78; /* je: equal / zero */

loc_00555A3F: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555A71; /* jne: not equal / not zero */

loc_00555A45: ;
    MEM32(esi + 0x10) = 3;
    PUSH32(esp, 0x00555A51u); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_00555A51: ;
    _fb = (uint32_t)(0x1388) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1388;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555A7D; /* je: equal / zero */

loc_00555A61: ;
    ecx = MEM32(esi + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(esi + 0x38); PUSH32(esp, 0x00555A6Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00555A69u); } /* indirect call */
    }

loc_00555A6C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00555A71: ;
    SET_LO8(eax, MEM8(ebx + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555A7D; /* jne: not equal / not zero */

loc_00555A78: ;
    PUSH32(esp, 0x00555A7Du); RECOMP_ABI_CALL(0x00555710u, sub_00555710); /* call 0x00555710 */

loc_00555A7D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00555A80
 * Original: 0x00555A80 - 0x00555B01 (129 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00555A80: ;
    ecx = ZX8(MEM8(eax + 7));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00555AAD; /* je: equal / zero */

loc_00555A87: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00555B00; /* jne: not equal / not zero */

loc_00555A8A: ;
    PUSH32(esp, 0x15);
    PUSH32(esp, eax);
    MEM8(eax + 7) = 3;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 2));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00555A9Du); RECOMP_ABI_CALL(0x00627E86u, sub_00627E86); /* call 0x00627E86 */

loc_00555A9D: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00555AA9u); RECOMP_ABI_CALL(0x00555500u, sub_00555500); /* call 0x00555500 */

loc_00555AA9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00555AAD: ;
    SET_LO8(eax, MEM8(eax + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00555B00; /* ja: above (unsigned >) */

loc_00555AB4: ;
    ecx = ZX8(LO8(eax));
    eax = 1;
    MEM32(esi + ecx * 4 + 0x14) = eax;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555B00; /* jne: not equal / not zero */

loc_00555AC7: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555B00; /* je: equal / zero */

loc_00555ACE: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555B00; /* je: equal / zero */

loc_00555AD5: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555AE2; /* je: equal / zero */

loc_00555ADB: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555B00; /* je: equal / zero */

loc_00555AE2: ;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x00555AEAu); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_00555AEA: ;
    edx = MEM32(esi + 0x3C);
    _fb = (uint32_t)(0xEA60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xEA60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x34); PUSH32(esp, 0x00555AFDu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00555AFAu); } /* indirect call */
    }

loc_00555AFD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00555B00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00555B10
 * Original: 0x00555B10 - 0x00555BE5 (213 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00555B10: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    eax = MEM32(ebp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00555B22u); RECOMP_ABI_CALL(0x00627E20u, sub_00627E20); /* call 0x00627E20 */

loc_00555B22: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(ebp + 2));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00555B2Eu); RECOMP_ABI_CALL(0x00627E86u, sub_00627E86); /* call 0x00627E86 */

loc_00555B2E: ;
    esi = MEM32(esp + 0x38);
    eax = esi;
    PUSH32(esp, 0x00555B39u); RECOMP_ABI_CALL(0x005554E0u, sub_005554E0); /* call 0x005554E0 */

loc_00555B39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555BDF; /* je: equal / zero */

loc_00555B41: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esi + 7));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00555B91; /* je: equal / zero */

loc_00555B4B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555B91; /* je: equal / zero */

loc_00555B50: ;
    _fa = (uint32_t)(MEM32(esp + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x44), 0x15 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00555BDD; /* jl: less (signed <) */

loc_00555B5B: ;
    ecx = 5;
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
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00555B71u); RECOMP_ABI_CALL(0x00627E26u, sub_00627E26); /* call 0x00627E26 */

loc_00555B71: ;
    edi = eax;
    PUSH32(esp, 0x00555B78u); RECOMP_ABI_CALL(0x00555390u, sub_00555390); /* call 0x00555390 */

loc_00555B78: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555BDD; /* je: equal / zero */

loc_00555B7E: ;
    edi = ebp;
    eax = esp + 0x24;
    PUSH32(esp, 0x00555B89u); RECOMP_ABI_CALL(0x00555A80u, sub_00555A80); /* call 0x00555A80 */

loc_00555B89: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00555B91: ;
    _fa = (uint32_t)(MEM32(esp + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x44), 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00555BDD; /* jl: less (signed <) */

loc_00555B98: ;
    ecx = 5;
    edi = esp + 0x10;
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
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00555BADu); RECOMP_ABI_CALL(0x00627E26u, sub_00627E26); /* call 0x00627E26 */

loc_00555BAD: ;
    edi = eax;
    PUSH32(esp, 0x00555BB4u); RECOMP_ABI_CALL(0x00555390u, sub_00555390); /* call 0x00555390 */

loc_00555BB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555BDD; /* je: equal / zero */

loc_00555BB8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    edi = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00555BD4; /* jne: not equal / not zero */

loc_00555BBF: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00555BC9u); RECOMP_ABI_CALL(0x00555950u, sub_00555950); /* call 0x00555950 */

loc_00555BC9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00555BD4: ;
    ebx = esp + 0x10;
    PUSH32(esp, 0x00555BDDu); RECOMP_ABI_CALL(0x00555A00u, sub_00555A00); /* call 0x00555A00 */

loc_00555BDD: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00555BDF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00555BF0
 * Original: 0x00555BF0 - 0x00555D64 (372 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00555BF0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 8) = 0x10;
    if (CMP_NE(_fa, _fb)) goto loc_00555C1A; /* jne: not equal / not zero */

loc_00555C0D: ;
    edi = esi;
    PUSH32(esp, 0x00555C14u); RECOMP_ABI_CALL(0x00555440u, sub_00555440); /* call 0x00555440 */

loc_00555C14: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00555C1A: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555C8A; /* je: equal / zero */

loc_00555C21: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00555C27u); RECOMP_ABI_CALL(0x00557220u, sub_00557220); /* call 0x00557220 */

loc_00555C27: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555C8A; /* je: equal / zero */

loc_00555C2E: ;
    edi = edi;

loc_00555C30: ;
    edx = MEM32(esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x6C4C88);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00555C4Eu); RECOMP_ABI_CALL(0x00627E80u, sub_00627E80); /* call 0x00627E80 */

loc_00555C4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555C85; /* je: equal / zero */

loc_00555C53: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6C4C88);
    PUSH32(esp, 0x00555C63u); RECOMP_ABI_CALL(0x00555B10u, sub_00555B10); /* call 0x00555B10 */

loc_00555C63: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555C8A; /* je: equal / zero */

loc_00555C6D: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555C8A; /* je: equal / zero */

loc_00555C74: ;
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00555C7Cu); RECOMP_ABI_CALL(0x00557220u, sub_00557220); /* call 0x00557220 */

loc_00555C7C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555C30; /* jne: not equal / not zero */

loc_00555C83: ;
    goto loc_00555C8A;

loc_00555C85: ;
    PUSH32(esp, 0x00555C8Au); RECOMP_ABI_CALL(0x00627E68u, sub_00627E68); /* call 0x00627E68 */

loc_00555C8A: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555C96; /* je: equal / zero */

loc_00555C91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555CDA; /* jne: not equal / not zero */

loc_00555C96: ;
    PUSH32(esp, 0x00555C9Bu); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_00555C9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x28) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00555CDA; /* jbe: below or equal (unsigned <=) */

loc_00555CA0: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00555CC3; /* jle: less or equal (signed <=) */

loc_00555CA8: ;
    eax = MEM32(esi + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(esi + 0x38); PUSH32(esp, 0x00555CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00555CB2u); } /* indirect call */
    }

loc_00555CB5: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00555CBEu); RECOMP_ABI_CALL(0x005558C0u, sub_005558C0); /* call 0x005558C0 */

loc_00555CBE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00555CDA;

loc_00555CC3: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555CD5; /* jne: not equal / not zero */

loc_00555CCE: ;
    PUSH32(esp, 0x00555CD3u); RECOMP_ABI_CALL(0x005555E0u, sub_005555E0); /* call 0x005555E0 */

loc_00555CD3: ;
    goto loc_00555CDA;

loc_00555CD5: ;
    PUSH32(esp, 0x00555CDAu); RECOMP_ABI_CALL(0x00555710u, sub_00555710); /* call 0x00555710 */

loc_00555CDA: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555D35; /* jne: not equal / not zero */

loc_00555CE0: ;
    PUSH32(esp, 0x00555CE5u); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_00555CE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x28) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00555D35; /* jbe: below or equal (unsigned <=) */

loc_00555CEA: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555D29; /* jne: not equal / not zero */

loc_00555CF0: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 0x30));
    MEM16(esp + 0xC) = 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00555D03u); RECOMP_ABI_CALL(0x00627E2Cu, sub_00627E2C); /* call 0x00627E2C */

loc_00555D03: ;
    ecx = MEM32(esi + 0x3C);
    MEM16(esp + 0xE) = LO16(eax);
    eax = MEM32(esi + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(esi + 0x38); PUSH32(esp, 0x00555D20u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00555D1Du); } /* indirect call */
    }

loc_00555D20: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0xFFFFFFFFu;

loc_00555D29: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00555D32u); RECOMP_ABI_CALL(0x005558C0u, sub_005558C0); /* call 0x005558C0 */

loc_00555D32: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00555D35: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555D5E; /* jne: not equal / not zero */

loc_00555D3B: ;
    PUSH32(esp, 0x00555D40u); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_00555D40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x28) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00555D5E; /* jbe: below or equal (unsigned <=) */

loc_00555D45: ;
    edx = MEM32(esi + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(esi + 0x38); PUSH32(esp, 0x00555D52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00555D4Fu); } /* indirect call */
    }

loc_00555D52: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00555D5Bu); RECOMP_ABI_CALL(0x005558C0u, sub_005558C0); /* call 0x005558C0 */

loc_00555D5B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00555D5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00555D70
 * Original: 0x00555D70 - 0x00555DA2 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00555D70: ;
    eax = MEM32(0x6C4C78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555DA1; /* je: equal / zero */

loc_00555D79: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00555D80u); RECOMP_ABI_CALL(0x00557660u, sub_00557660); /* call 0x00557660 */

loc_00555D80: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00555DA0; /* js: sign (negative) */

loc_00555D88: ;
    eax = MEM32(0x6C4C78);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00555D94u); RECOMP_ABI_CALL(0x00557670u, sub_00557670); /* call 0x00557670 */

loc_00555D94: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00555D9Au); RECOMP_ABI_CALL(0x00555BF0u, sub_00555BF0); /* call 0x00555BF0 */

loc_00555D9A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00555D88; /* jns: not sign (positive) */

loc_00555DA0: ;
    POP32(esp, esi);

loc_00555DA1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00555DB0
 * Original: 0x00555DB0 - 0x00555DD3 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00555DB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555DC8; /* jne: not equal / not zero */

loc_00555DB8: ;
    eax = MEM32(0x6739B0);
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xA0) = ecx;
    esp += 4; return; /* ret */

loc_00555DC8: ;
    edx = MEM32(esp + 8);
    MEM32(eax + 0xA0) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00555DE0
 * Original: 0x00555DE0 - 0x00555E0D (45 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00555DE0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x100);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFE (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00555E0C; /* jge: greater or equal (signed >=) */

loc_00555DF2: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00555E0C; /* jl: less (signed <) */

loc_00555DFB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFE (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00555E0C; /* jg: greater (signed >) */

loc_00555E03: ;
    MEM8(ecx + eax) = LO8(edx);
    MEM32(eax + 0x100) = MEM32(eax + 0x100) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x100)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00555E0C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00555E10
 * Original: 0x00555E10 - 0x00555E77 (103 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00555E10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = esi;
    edx = eax + 1;
    goto loc_00555E20;

    /* nop */

loc_00555E20: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555E20; /* jne: not equal / not zero */

loc_00555E27: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax + 1;
    eax = MEM32(esp + 0xC);
    ebx = MEM32(eax + 0x800);
    ecx = 0x800;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00555E43; /* jle: less or equal (signed <=) */

loc_00555E41: ;
    edx = ecx;

loc_00555E43: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555E74; /* je: equal / zero */

loc_00555E47: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x800);
    ecx = edx;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    ecx = MEM32(eax + 0x800);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x800) = ecx;
    MEM8(ecx + eax + -1) = 0;
    POP32(esp, edi);

loc_00555E74: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00555E80
 * Original: 0x00555E80 - 0x00555EB1 (49 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00555E80: ;
    PUSH32(esp, 0x00555E85u); RECOMP_ABI_CALL(0x00557550u, sub_00557550); /* call 0x00557550 */

loc_00555E85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555EB0; /* je: equal / zero */

loc_00555E89: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x6C4EE0) = ecx;

loc_00555E91: ;
    edx = MEM32(eax + 0xC);
    edx = MEM32(edx + ecx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555EAA; /* je: equal / zero */

loc_00555E9B: ;
    edx = MEM32(edx);
    MEM32(ecx * 4 + 0x6C4E88) = edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00555E91; /* jl: less (signed <) */

loc_00555EAA: ;
    MEM32(0x6C4EE0) = ecx;

loc_00555EB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00555EC0
 * Original: 0x00555EC0 - 0x00555F33 (115 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00555EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00555EC0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ebx) = 2;
    PUSH32(esp, 0x00555ECFu); RECOMP_ABI_CALL(0x00627E2Cu, sub_00627E2C); /* call 0x00627E2C */

loc_00555ECF: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM16(ebx + 2) = LO16(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00555EE0; /* jne: not equal / not zero */

loc_00555EDB: ;
    MEM32(ebx + 4) = ebp;
    goto loc_00555EE9;

loc_00555EE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00555EE6u); RECOMP_ABI_CALL(0x00627E32u, sub_00627E32); /* call 0x00627E32 */

loc_00555EE6: ;
    MEM32(ebx + 4) = eax;

loc_00555EE9: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555F21; /* jne: not equal / not zero */

loc_00555EEF: ;
    PUSH32(esp, edi);
    edi = 0x64F47C;
    ecx = 0x10;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    if ((_flags != 0)) goto loc_00555F21; /* je: equal / zero */

loc_00555F01: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00555F0Bu); RECOMP_ABI_CALL(0x00557540u, sub_00557540); /* call 0x00557540 */

loc_00555F0B: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00555F17; /* jne: not equal / not zero */

loc_00555F14: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00555F17: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    eax = MEM32(edx);
    MEM32(ebx + 4) = eax;

loc_00555F21: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00555F2B; /* je: equal / zero */

loc_00555F29: ;
    MEM32(eax) = ebp;

loc_00555F2B: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00555F40
 * Original: 0x00555F40 - 0x00555F4B (11 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555F40(void)
{

loc_00555F40: ;
    SET_LO8(edx, MEM8(ecx));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax));
    MEM8(ecx) = LO8(ebx);
    MEM8(eax) = LO8(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00555F50
 * Original: 0x00555F50 - 0x00555F78 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00555F50: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1A (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00555F58; /* jae: above or equal (unsigned >=) */

loc_00555F54: ;
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x41;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00555F58: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x34) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x34 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00555F60; /* jae: above or equal (unsigned >=) */

loc_00555F5C: ;
    _fb = (uint32_t)(0x47) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00555F60: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3E (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00555F68; /* jae: above or equal (unsigned >=) */

loc_00555F64: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

loc_00555F68: ;
    if (CMP_NE(_fa, _fb)) goto loc_00555F6D; /* jne: not equal / not zero */

loc_00555F6A: ;
    SET_LO8(eax, 0x2B);
    esp += 4; return; /* ret */

loc_00555F6D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3F (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x2F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00555F80
 * Original: 0x00555F80 - 0x0055600E (142 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00555F80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00556006; /* jle: less or equal (signed <=) */

loc_00555F93: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00555F95: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00555FA2; /* jge: greater or equal (signed >=) */

loc_00555F99: ;
    SET_LO8(ecx, MEM8(edx));
    MEM8(esp + eax + 0x18) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00555FA6;

loc_00555FA2: ;
    MEM8(esp + eax + 0x18) = LO8(ebx);

loc_00555FA6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00555F95; /* jle: less or equal (signed <=) */

loc_00555FAD: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) >> 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x19));
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) >> 4);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esp + 0x11) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x1A));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(eax));
    SET_LO8(ebx, LO8(ebx) >> 6);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) << 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) & 0x3F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esp + 0x12) = LO8(ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x13) = LO8(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00555FF0: ;
    SET_LO8(eax, MEM8(esp + ecx + 0x10));
    PUSH32(esp, 0x00555FF9u); RECOMP_ABI_CALL(0x00555F50u, sub_00555F50); /* call 0x00555F50 */

loc_00555FF9: ;
    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00555FF0; /* jle: less or equal (signed <=) */

loc_00556002: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00555F93; /* jl: less (signed <) */

loc_00556006: ;
    MEM8(edi) = LO8(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00556010
 * Original: 0x00556010 - 0x00556136 (294 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00556010: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 4;
    /* nop */

loc_00556020: ;
    MEM8(ecx) = LO8(eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x100 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00556020; /* jl: less (signed <) */

loc_0055602A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esp + 0x14;
    ebp = 0x100;
    goto loc_00556040;

    /* nop */

loc_00556040: ;
    ecx = MEM32(esp + 0x118);
    eax = ZX8(LO8(ebx));
    edx = ZX8(MEM8(eax + ecx));
    ecx = ZX8(MEM8(edi));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0x800000FFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00556065; /* jns: not sign (positive) */

loc_0055605D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFF00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00556065: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x11C)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x11C))); }
    esi = ZX8(LO8(ecx));
    eax = esp + esi + 0x14;
    ecx = edi;
    SET_LO8(ebx, LO8(edx));
    PUSH32(esp, 0x0055607Eu); RECOMP_ABI_CALL(0x00555F40u, sub_00555F40); /* call 0x00555F40 */

loc_0055607E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00556040; /* jne: not equal / not zero */

loc_00556082: ;
    eax = MEM32(esp + 0x124);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0055612B; /* jle: less or equal (signed <=) */

loc_00556097: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005560A0;

    /* nop */

loc_005560A0: ;
    eax = MEM32(esp + 0x120);
    SET_LO8(ebx, MEM8(esi + eax));
    ecx = ZX8(LO8(ebx));
    eax = ecx + edi + 1;
    eax = eax & 0x800000FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_005560BF; /* jns: not sign (positive) */

loc_005560B8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005560BF: ;
    edi = ZX8(LO8(eax));
    eax = ZX8(MEM8(esp + edi + 0x14));
    ecx = esp + edi + 0x14;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x800000FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_005560DB; /* jns: not sign (positive) */

loc_005560D4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005560DB: ;
    ebp = ZX8(LO8(eax));
    eax = esp + ebp + 0x14;
    PUSH32(esp, 0x005560E7u); RECOMP_ABI_CALL(0x00555F40u, sub_00555F40); /* call 0x00555F40 */

loc_005560E7: ;
    edx = ZX8(MEM8(ecx));
    eax = ZX8(MEM8(eax));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0x800000FFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_005560FF; /* jns: not sign (positive) */

loc_005560F7: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005560FF: ;
    eax = MEM32(esp + 0x120);
    ecx = ZX8(LO8(edx));
    SET_LO8(edx, MEM8(esp + ecx + 0x14));
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + eax) = LO8(edx);
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = SX16(LO16(eax));
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x124)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x124) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005560A0; /* jl: less (signed <) */

loc_0055612B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00556140
 * Original: 0x00556140 - 0x00556152 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556140(void)
{

loc_00556140: ;
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(edx);
    MEM32(eax + 1) = ecx;
    MEM32(eax + 0x800) = 5;
    esp += 4; return; /* ret */

}

/**
 * sub_00556160
 * Original: 0x00556160 - 0x005561E9 (137 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00556160: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005561E5; /* jl: less (signed <) */

loc_00556168: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x41 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005561E5; /* jg: greater (signed >) */

loc_0055616D: ;
    SET_LO8(ecx, MEM8(eax + ebx + -1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005561E5; /* jne: not equal / not zero */

loc_00556175: ;
    edx = esp;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00556180;

    /* nop */

loc_00556180: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556180; /* jne: not equal / not zero */

loc_0055618A: ;
    ecx = MEM32(esp + 0x48);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    PUSH32(esp, esi);
    esi = eax + 1;

loc_00556197: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556197; /* jne: not equal / not zero */

loc_0055619E: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ebx + -1;
    PUSH32(esp, esi);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005561B0u); RECOMP_ABI_CALL(0x00556010u, sub_00556010); /* call 0x00556010 */

loc_005561B0: ;
    eax = MEM32(edi + 0x800);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    edx = esp + 0x18;
    PUSH32(esp, 0x005561C2u); RECOMP_ABI_CALL(0x00555F80u, sub_00555F80); /* call 0x00555F80 */

loc_005561C2: ;
    ecx = MEM32(edi + 0x800);
    eax = ecx + edi;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax + 1;

loc_005561D1: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005561D1; /* jne: not equal / not zero */

loc_005561D8: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + eax + 1;
    MEM32(edi + 0x800) = eax;
    POP32(esp, esi);

loc_005561E5: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005561F0
 * Original: 0x005561F0 - 0x00556430 (576 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005561F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005561F0: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x118);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x120);
    MEM32(esp + 0x110) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00556428; /* je: equal / zero */

loc_00556218: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x11C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00556234; /* je: equal / zero */

loc_00556225: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00556234; /* je: equal / zero */

loc_0055622A: ;
    MEM32(esp + 0xC) = 1;
    goto loc_00556276;

loc_00556234: ;
    edx = MEM32(esi + 0x800);
    eax = 0x800;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00556427; /* jl: less (signed <) */

loc_0055624A: ;
    ecx = MEM32(edi + 0x104);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edi + 0x98); PUSH32(esp, 0x00556258u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00556252u); } /* indirect call */
    }

loc_00556258: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00556265u); RECOMP_ABI_CALL(0x00627E2Cu, sub_00627E2C); /* call 0x00627E2C */

loc_00556265: ;
    edx = MEM32(esi + 0x800);
    MEM16(esi + edx) = LO16(eax);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x800) = MEM32(esi + 0x800) + 2;
    _fa = (uint32_t)(MEM32(esi + 0x800)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00556276: ;
    _fa = (uint32_t)(MEM32(esp + 0x120)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x120), 0xFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556361; /* jne: not equal / not zero */

loc_00556287: ;
    eax = MEM32(edi + 0x104);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edi + 0x94); PUSH32(esp, 0x0055629Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00556294u); } /* indirect call */
    }

loc_0055629A: ;
    ecx = MEM32(esp + 0x120);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00556320; /* jle: less or equal (signed <=) */

loc_005562AE: ;
    edi = edi;

loc_005562B0: ;
    edx = ZX8(MEM8(esp + eax + 0x14));
    eax = MEM32(edx * 4 + 0x6739B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005562C5; /* jne: not equal / not zero */

loc_005562C0: ;
    eax = 0x64C9F8;

loc_005562C5: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005562CCu); RECOMP_ABI_CALL(0x00555E10u, sub_00555E10); /* call 0x00555E10 */

loc_005562CC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055630C; /* jne: not equal / not zero */

loc_005562D3: ;
    eax = MEM32(edi + 0x104);
    ecx = MEM32(esp + 8);
    edx = ZX8(MEM8(esp + ecx + 0x14));
    ebp = MEM32(esi + 0x800);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x88); PUSH32(esp, 0x005562F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005562EBu); } /* indirect call */
    }

loc_005562F1: ;
    eax = MEM32(esi + 0x800);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055630C; /* jne: not equal / not zero */

loc_005562FE: ;
    PUSH32(esp, 0x62DF21);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00556309u); RECOMP_ABI_CALL(0x00555E10u, sub_00555E10); /* call 0x00555E10 */

loc_00556309: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055630C: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x114);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_005562B0; /* jl: less (signed <) */

loc_00556320: ;
    eax = MEM32(esi + 0x800);
    ecx = 0x800;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00556427; /* jl: less (signed <) */

loc_00556336: ;
    MEM8(eax + esi) = 0;
    ecx = MEM32(esi + 0x800);
    edx = MEM32(esp + 0x114);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 0x800) = ecx;
    MEM32(esp + 0x120) = edx;
    ebp = esp + 0x14;
    if (CMP_EQ(_fa, _fb)) goto loc_00556427; /* je: equal / zero */

loc_00556361: ;
    eax = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00556427; /* jle: less or equal (signed <=) */

loc_00556373: ;
    eax = MEM32(esp + 0x120);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00556416; /* jle: less or equal (signed <=) */

loc_00556384: ;
    eax = MEM32(esi + 0x800);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x11C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005563B1; /* jne: not equal / not zero */

loc_00556399: ;
    ecx = MEM32(edi + 0x104);
    edx = ZX8(MEM8(ebx + ebp));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x88); PUSH32(esp, 0x005563ACu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005563A6u); } /* indirect call */
    }

loc_005563AC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005563E8;

loc_005563B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005563CC; /* jne: not equal / not zero */

loc_005563B6: ;
    eax = MEM32(edi + 0x104);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(ebx + ebp));
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edi + 0x8C); PUSH32(esp, 0x005563CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005563C4u); } /* indirect call */
    }

loc_005563CA: ;
    goto loc_005563E5;

loc_005563CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005563E8; /* jne: not equal / not zero */

loc_005563D1: ;
    edx = MEM32(edi + 0x104);
    eax = ZX8(MEM8(ebx + ebp));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x90); PUSH32(esp, 0x005563E5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005563DFu); } /* indirect call */
    }

loc_005563E5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005563E8: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x800)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x800) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556402; /* jne: not equal / not zero */

loc_005563F4: ;
    PUSH32(esp, 0x62DF21);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005563FFu); RECOMP_ABI_CALL(0x00555E10u, sub_00555E10); /* call 0x00555E10 */

loc_005563FF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00556402: ;
    eax = MEM32(esp + 0x120);
    ecx = MEM32(esp + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00556384; /* jl: less (signed <) */

loc_00556416: ;
    eax = MEM32(esp + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00556373; /* jl: less (signed <) */

loc_00556427: ;
    POP32(esp, ebx);

loc_00556428: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00556430
 * Original: 0x00556430 - 0x00556469 (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00556430: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = edx;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00556441u); RECOMP_ABI_CALL(0x005561F0u, sub_005561F0); /* call 0x005561F0 */

loc_00556441: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00556452u); RECOMP_ABI_CALL(0x005561F0u, sub_005561F0); /* call 0x005561F0 */

loc_00556452: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00556463u); RECOMP_ABI_CALL(0x005561F0u, sub_005561F0); /* call 0x005561F0 */

loc_00556463: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00556470
 * Original: 0x00556470 - 0x00556504 (148 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00556470: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    MEM32(esp + 0xC) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_005564FE; /* jl: less (signed <) */

loc_00556482: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0xB) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0055649B; /* je: equal / zero */

loc_0055648E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055649B; /* je: equal / zero */

loc_00556492: ;
    eax = ZX8(LO8(eax));
    ebp = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0055649B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005564FE; /* jl: less (signed <) */

loc_005564A0: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005564B7; /* je: equal / zero */

loc_005564A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005564B7; /* je: equal / zero */

loc_005564AC: ;
    PUSH32(esp, esi);
    esi = ZX8(LO8(eax));
    edi = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);

loc_005564B7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005564FE; /* jl: less (signed <) */

loc_005564BC: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005564D3; /* je: equal / zero */

loc_005564C4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005564D3; /* je: equal / zero */

loc_005564C9: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    ecx = ZX8(LO8(ebx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_005564D3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005564FD; /* jl: less (signed <) */

loc_005564D7: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = ZX8(LO8(ebx));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esp + 0x17));
    edx = ZX8(LO8(eax));
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0x005564FAu); RECOMP_ABI_CALL(0x00556430u, sub_00556430); /* call 0x00556430 */

loc_005564FA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005564FD: ;
    POP32(esp, ebx);

loc_005564FE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00556510
 * Original: 0x00556510 - 0x005566A9 (409 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00556510: ;
    _fb = (uint32_t)(0x18C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x194);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x19C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(esp + 0x110) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00556545; /* je: equal / zero */

loc_00556536: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00556545; /* je: equal / zero */

loc_0055653B: ;
    MEM32(esp + 0xC) = 1;
    goto loc_0055655A;

loc_00556545: ;
    eax = MEM32(ebp + 0x104);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ebp + 0x98); PUSH32(esp, 0x00556553u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0055654Du); } /* indirect call */
    }

loc_00556553: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = eax;

loc_0055655A: ;
    ecx = MEM32(ebp + 0x104);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ebp + 0x94); PUSH32(esp, 0x0055656Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00556567u); } /* indirect call */
    }

loc_0055656D: ;
    eax = MEM32(esp + 0x11C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_005566A0; /* jle: less or equal (signed <=) */

loc_00556585: ;
    PUSH32(esp, ebx);
    goto loc_00556590;

    /* nop */
    /* nop */

loc_00556590: ;
    eax = ZX8(MEM8(esp + edi + 0x14));
    ebx = MEM32(eax * 4 + 0x6739B8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005565A5; /* jne: not equal / not zero */

loc_005565A0: ;
    ebx = 0x64C9F8;

loc_005565A5: ;
    eax = MEM32(esp + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005565E9; /* jne: not equal / not zero */

loc_005565B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005565B7u); RECOMP_ABI_CALL(0x00555E10u, sub_00555E10); /* call 0x00555E10 */

loc_005565B7: ;
    ecx = MEM32(esi + 0x800);
    MEM8(ecx + esi + -1) = 0x5C;
    edx = MEM32(ebp + 0x104);
    eax = ZX8(MEM8(esp + edi + 0x1C));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x88); PUSH32(esp, 0x005565D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005565D0u); } /* indirect call */
    }

loc_005565D6: ;
    ecx = MEM32(esi + 0x800);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + esi + -1) = 0x5C;
    goto loc_0055668B;

loc_005565E9: ;
    eax = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00556687; /* jle: less or equal (signed <=) */

loc_005565F7: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edx = esp + 0x120;
    PUSH32(esp, 0x64ACF8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055660Bu); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_0055660B: ;
    eax = esp + 0x128;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00556619u); RECOMP_ABI_CALL(0x00555E10u, sub_00555E10); /* call 0x00555E10 */

loc_00556619: ;
    eax = MEM32(esp + 0x1B8);
    ecx = MEM32(esi + 0x800);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM8(ecx + esi + -1) = 0x5C;
    if (CMP_NE(_fa, _fb)) goto loc_0055664E; /* jne: not equal / not zero */

loc_00556633: ;
    edx = MEM32(ebp + 0x104);
    eax = MEM32(esp + 0xC);
    ecx = ZX8(MEM8(esp + eax + 0x14));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp + 0x8C); PUSH32(esp, 0x0055664Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00556646u); } /* indirect call */
    }

loc_0055664C: ;
    goto loc_0055666C;

loc_0055664E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055666F; /* jne: not equal / not zero */

loc_00556653: ;
    edx = MEM32(ebp + 0x104);
    eax = MEM32(esp + 0xC);
    ecx = ZX8(MEM8(esp + eax + 0x14));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp + 0x90); PUSH32(esp, 0x0055666Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00556666u); } /* indirect call */
    }

loc_0055666C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055666F: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x800);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM8(edx + esi + -1) = 0x5C;
    if (CMP_L(_fas, _fbs)) goto loc_005565F7; /* jl: less (signed <) */

loc_00556687: ;
    edi = MEM32(esp + 0xC);

loc_0055668B: ;
    eax = MEM32(esp + 0x114);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0xC) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00556590; /* jl: less (signed <) */

loc_0055669F: ;
    POP32(esp, ebx);

loc_005566A0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005566B0
 * Original: 0x005566B0 - 0x005566F5 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005566B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005566B0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esi + 0x800) = 1;
    MEM8(esi) = 0x5C;
    PUSH32(esp, 0x005566C8u); RECOMP_ABI_CALL(0x00556510u, sub_00556510); /* call 0x00556510 */

loc_005566C8: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005566D0u); RECOMP_ABI_CALL(0x00556510u, sub_00556510); /* call 0x00556510 */

loc_005566D0: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005566D8u); RECOMP_ABI_CALL(0x00556510u, sub_00556510); /* call 0x00556510 */

loc_005566D8: ;
    PUSH32(esp, 0x64F48C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005566E3u); RECOMP_ABI_CALL(0x00555E10u, sub_00555E10); /* call 0x00555E10 */

loc_005566E3: ;
    eax = MEM32(esi + 0x800);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x800) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00556700
 * Original: 0x00556700 - 0x00556792 (146 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00556700: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    MEM8(esp + 0xC) = 0xFD;
    MEM8(esp + 0xD) = 0xFC;
    MEM8(esp + 0xE) = 0x1E;
    MEM8(esp + 0xF) = 0x66;
    MEM8(esp + 0x10) = 0x6A;
    MEM8(esp + 0x11) = 0xB2;
    if (CMP_L(_fas, _fbs)) goto loc_00556773; /* jl: less (signed <) */

loc_0055672D: ;
    esi = ebp;
    eax = esp + 0xC;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00556737: ;
    eax = esp + ecx + 0xC;
    SET_LO8(ebx, MEM8(esi + eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556773; /* jne: not equal / not zero */

loc_00556742: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00556737; /* jl: less (signed <) */

loc_00556748: ;
    ecx = MEM32(edi + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebp + 6);
    if (CMP_EQ(_fa, _fb)) goto loc_0055678B; /* je: equal / zero */

loc_00556755: ;
    ecx = MEM32(edi + 0x104);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00556762u); RECOMP_ABI_CALL(0x00627E26u, sub_00627E26); /* call 0x00627E26 */

loc_00556762: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0xA0); PUSH32(esp, 0x00556769u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00556763u); } /* indirect call */
    }

loc_00556769: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00556773: ;
    eax = MEM32(edi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055678B; /* je: equal / zero */

loc_0055677D: ;
    ecx = MEM32(edi + 0x104);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00556788u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00556786u); } /* indirect call */
    }

loc_00556788: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055678B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005567A0
 * Original: 0x005567A0 - 0x005567DA (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005567A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005567A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0xD8;

loc_005567A8: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005567D4; /* je: equal / zero */

loc_005567AC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005567A8; /* jl: less (signed <) */

loc_005567B5: ;
    eax = MEM32(esi + 0x100);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x100) = edx;
    MEM32(esi + edx * 4 + 0xD8) = edi;
    esp += 4; return; /* ret */

loc_005567D4: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_005567E0
 * Original: 0x005567E0 - 0x00556A4E (622 bytes, 181 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005567E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005567E0: ;
    _fb = (uint32_t)(0x808) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x808;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x810);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    MEM32(esp + 0x80C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00556802; /* jne: not equal / not zero */

loc_005567FC: ;
    ebp = MEM32(0x6739B0);

loc_00556802: ;
    eax = MEM32(esp + 0x818);
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3B (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055683D; /* jne: not equal / not zero */

loc_00556810: ;
    ebp = MEM32(ebp + 0xD4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00556A45; /* je: equal / zero */

loc_0055681E: ;
    ecx = MEM32(esp + 0x820);
    edx = MEM32(esp + 0x81C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x00556831u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0055682Fu); } /* indirect call */
    }

loc_00556831: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x808) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x808;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0055683D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5C (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0055687B; /* jne: not equal / not zero */

loc_00556844: ;
    eax = esp + 0x14;
    edi = ebp;
    PUSH32(esp, 0x0055684Fu); RECOMP_ABI_CALL(0x005566B0u, sub_005566B0); /* call 0x005566B0 */

loc_0055684F: ;
    eax = MEM32(esp + 0x828);
    ecx = MEM32(esp + 0x814);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00556870u); RECOMP_ABI_CALL(0x00627E74u, sub_00627E74); /* call 0x00627E74 */

loc_00556870: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x808) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x808;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0055687B: ;
    edi = MEM32(esp + 0x824);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00556A43; /* jl: less (signed <) */

loc_0055688B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFE (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556A43; /* jne: not equal / not zero */

loc_00556894: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0xFD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0xFD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556A43; /* jne: not equal / not zero */

loc_0055689E: ;
    _fa = (uint32_t)(MEM32(ebp + 0xB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xB0), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005568AC; /* jle: less or equal (signed <=) */

loc_005568A6: ;
    MEM32(ebp + 0xB0) = esi;

loc_005568AC: ;
    SET_LO8(ebx, MEM8(eax + 2));
    edx = eax + 3;
    esi = eax + 7;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ecx, LO8(ebx));
    eax = esp + 0x14;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x824) = edi;
    PUSH32(esp, 0x005568CEu); RECOMP_ABI_CALL(0x00556140u, sub_00556140); /* call 0x00556140 */

loc_005568CE: ;
    eax = SX8(LO8(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00556A43; /* ja: above (unsigned >) */

loc_005568DA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x556A50); /* switch: 7 entries, 6 targets */
    if (_jt == 0x005568E1u) goto loc_005568E1;
    if (_jt == 0x005568F8u) goto loc_005568F8;
    if (_jt == 0x0055690Bu) goto loc_0055690B;
    if (_jt == 0x00556955u) goto loc_00556955;
    if (_jt == 0x005569B8u) goto loc_005569B8;
    if (_jt == 0x00556A43u) goto loc_00556A43;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_005568E1: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0x005568F0u); RECOMP_ABI_CALL(0x00556470u, sub_00556470); /* call 0x00556470 */

loc_005568F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00556A21;

loc_005568F8: ;
    ebx = edi;
    PUSH32(esp, ebp);
    eax = esi;
    edi = esp + 0x18;
    PUSH32(esp, 0x00556906u); RECOMP_ABI_CALL(0x00556160u, sub_00556160); /* call 0x00556160 */

loc_00556906: ;
    goto loc_00556A1E;

loc_0055690B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00556922; /* jle: less or equal (signed <=) */

loc_00556910: ;
    MEM32(esp + 0x824) = 0x20;
    edi = MEM32(esp + 0x824);

loc_00556922: ;
    eax = MEM32(esp + 0x824);
    ecx = edi;
    edi = MEM32(esp + 0x814);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = esp + edi + 0x14;
    MEM8(esp + 0x14) = 5;
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
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x814) = MEM32(esp + 0x814) + eax;
    _fa = (uint32_t)(MEM32(esp + 0x814)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00556A21;

loc_00556955: ;
    eax = MEM32(ebp + 0xB0);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00556A43; /* je: equal / zero */

loc_00556966: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00556970;

    /* nop */

loc_00556970: ;
    SET_LO8(ebx, MEM8(eax + edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + ebp + 0x84)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax + ebp + 0x84) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556A43; /* jne: not equal / not zero */

loc_00556980: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00556970; /* jl: less (signed <) */

loc_00556986: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00556A43; /* jl: less (signed <) */

loc_0055698F: ;
    MEM32(ebp + 0xB0) = ecx;
    ecx = MEM32(ebp + 0x104);
    eax = (uint32_t)(int32_t)SMEM8(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esi + 1;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x9C); PUSH32(esp, 0x005569AAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005569A4u); } /* indirect call */
    }

loc_005569AA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x808) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x808;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005569B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_005569C0: ;
    SET_LO8(ecx, MEM8(eax + edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + ebp + 0x84)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + ebp + 0x84) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556A43; /* jne: not equal / not zero */

loc_005569CC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005569C0; /* jl: less (signed <) */

loc_005569D2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00556A43; /* jl: less (signed <) */

loc_005569D7: ;
    edx = MEM32(esp + 0x814);
    edi = MEM32(esi);
    MEM8(esp + 0x14) = 7;
    MEM32(esp + edx + 0x14) = edi;
    edx = MEM32(esp + 0x814);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebp;
    MEM32(esp + 0x814) = edx;
    PUSH32(esp, 0x00556A01u); RECOMP_ABI_CALL(0x005567A0u, sub_005567A0); /* call 0x005567A0 */

loc_00556A01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556A21; /* jne: not equal / not zero */

loc_00556A05: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x824);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edi = ebp;
    PUSH32(esp, 0x00556A1Eu); RECOMP_ABI_CALL(0x00556700u, sub_00556700); /* call 0x00556700 */

loc_00556A1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00556A21: ;
    ecx = MEM32(esp + 0x828);
    edx = MEM32(esp + 0x814);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00556A43u); RECOMP_ABI_CALL(0x00627E74u, sub_00627E74); /* call 0x00627E74 */

loc_00556A43: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00556A45: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x808) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x808;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00556A70
 * Original: 0x00556A70 - 0x00556AC4 (84 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00556A70: ;
    _fb = (uint32_t)(0x804) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x804;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esi + 0x84;
    SET_LO8(ecx, 8);
    eax = esp;
    MEM32(esp + 0x800) = 0;
    PUSH32(esp, 0x00556A92u); RECOMP_ABI_CALL(0x00556140u, sub_00556140); /* call 0x00556140 */

loc_00556A92: ;
    ecx = MEM32(esp + 0x800);
    PUSH32(esp, 0x10);
    eax = esi + 0xC4;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00556AB2u); RECOMP_ABI_CALL(0x00627E74u, sub_00627E74); /* call 0x00627E74 */

loc_00556AB2: ;
    PUSH32(esp, 0x00556AB7u); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_00556AB7: ;
    MEM32(esi + 0xAC) = eax;
    _fb = (uint32_t)(0x804) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x804;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00556AD0
 * Original: 0x00556AD0 - 0x00556C7D (429 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00556AD0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556AE6; /* jne: not equal / not zero */

loc_00556ADF: ;
    esi = 0x6738A8;
    goto loc_00556B01;

loc_00556AE6: ;
    PUSH32(esp, 0x82);
    PUSH32(esp, 0x64F4B8);
    PUSH32(esp, 0x108);
    PUSH32(esp, 0x00556AFAu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00556AFA: ;
    MEM32(esi) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_00556B01: ;
    PUSH32(esp, 0x00556B06u); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_00556B06: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00556B0Cu); RECOMP_ABI_CALL(0x0061AD81u, sub_0061AD81); /* call 0x0061AD81 */

loc_00556B0C: ;
    eax = MEM32(esp + 0x5C);
    ecx = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx + 4;
    /* nop */

loc_00556B20: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556B20; /* jne: not equal / not zero */

loc_00556B2A: ;
    eax = MEM32(esp + 0x5C);
    edx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x44;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00556B35: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556B35; /* jne: not equal / not zero */

loc_00556B3F: ;
    eax = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x80);
    MEM32(esi + 0xB8) = eax;
    eax = MEM32(esp + 0x68);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x6C);
    MEM32(esi + 0x104) = edx;
    edx = MEM32(esp + 0x70);
    MEM32(esi + 0x88) = eax;
    eax = MEM32(esp + 0x74);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x64);
    MEM32(esi + 0x8C) = ecx;
    ecx = MEM32(esp + 0x7C);
    MEM32(esi + 0x90) = edx;
    edx = MEM32(esp + 0x80);
    MEM32(esi + 0x94) = eax;
    eax = MEM32(esp + 0x68);
    PUSH32(esp, edi);
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0xB0) = 1;
    MEM32(esi + 0x98) = ecx;
    MEM32(esi + 0x9C) = edx;
    MEM32(esi + 0xA0) = ebx;
    MEM32(esi + 0xA4) = ebx;
    MEM32(esi + 0xD4) = ebx;
    MEM32(esi + 0xB4) = ebp;
    MEM32(esi + 0xBC) = ebx;
    MEM32(esi + 0xC0) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00556BE1: ;
    PUSH32(esp, 0x00556BE6u); RECOMP_ABI_CALL(0x0061AD8Bu, sub_0061AD8B); /* call 0x0061AD8B */

loc_00556BE6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xFF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    MEM8(esi + edi + 0x83) = LO8(edx);
    if (CMP_L(_fas, _fbs)) goto loc_00556BE1; /* jl: less (signed <) */

loc_00556BFB: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = esi + 0xD8;
    ecx = 0xA;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(MEM32(0x6C4EE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C4EE0), ebx (32-bit) */
    MEM32(esi + 0x100) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00556C1E; /* jne: not equal / not zero */

loc_00556C19: ;
    PUSH32(esp, 0x00556C1Eu); RECOMP_ABI_CALL(0x00555E80u, sub_00555E80); /* call 0x00555E80 */

loc_00556C1E: ;
    POP32(esp, edi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00556C75; /* je: equal / zero */

loc_00556C24: ;
    eax = (uint32_t)(int32_t)SMEM8(0x6C4EA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556C6E; /* jne: not equal / not zero */

loc_00556C2F: ;
    edx = MEM32(esp + 0x58);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, 0x64F4A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00556C43u); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_00556C43: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 8;

loc_00556C4A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ebx = esi + 0xC4;
    eax = 0x6CFC;
    PUSH32(esp, 0x00556C5Cu); RECOMP_ABI_CALL(0x00555EC0u, sub_00555EC0); /* call 0x00555EC0 */

loc_00556C5C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556C75; /* jne: not equal / not zero */

loc_00556C63: ;
    POP32(esp, esi);
    eax = 3;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00556C6E: ;
    eax = 0x6C4EA0;
    goto loc_00556C4A;

loc_00556C75: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00556C80
 * Original: 0x00556C80 - 0x00556D93 (275 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00556C80: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00556C89u); RECOMP_ABI_CALL(0x005571A0u, sub_005571A0); /* call 0x005571A0 */

loc_00556C89: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00556C94u); RECOMP_ABI_CALL(0x00627E4Au, sub_00627E4A); /* call 0x00627E4A */

loc_00556C94: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556CA5; /* jne: not equal / not zero */

loc_00556C9B: ;
    eax = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00556CA5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    ebp = esi + 0x64;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00556D03; /* jge: greater or equal (signed >=) */

loc_00556CB3: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ebx = esp + 0x1C;
    eax = esi;
    PUSH32(esp, 0x00556CC5u); RECOMP_ABI_CALL(0x00555EC0u, sub_00555EC0); /* call 0x00555EC0 */

loc_00556CC5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7F000001);
    PUSH32(esp, 0x00556CD2u); RECOMP_ABI_CALL(0x00627E8Cu, sub_00627E8C); /* call 0x00627E8C */

loc_00556CD2: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556CE0; /* jne: not equal / not zero */

loc_00556CD8: ;
    MEM32(esp + 0x18) = 0;

loc_00556CE0: ;
    PUSH32(esp, 0x10);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00556CEDu); RECOMP_ABI_CALL(0x00627E7Au, sub_00627E7A); /* call 0x00627E7A */

loc_00556CED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00556D03; /* je: equal / zero */

loc_00556CF1: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00556CB3; /* jl: less (signed <) */

loc_00556CF6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 2;
    POP32(esp, edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00556D03: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556D30; /* jne: not equal / not zero */

loc_00556D07: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = 0x10;
    PUSH32(esp, 0x00556D1Fu); RECOMP_ABI_CALL(0x00627E92u, sub_00627E92); /* call 0x00627E92 */

loc_00556D1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556CF6; /* jne: not equal / not zero */

loc_00556D23: ;
    ecx = MEM32(esp + 0x16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00556D2Du); RECOMP_ABI_CALL(0x00627E86u, sub_00627E86); /* call 0x00627E86 */

loc_00556D2D: ;
    esi = ZX16(LO16(eax));

loc_00556D30: ;
    edx = MEM32(esp + 0x5C);
    eax = MEM32(esp + 0x58);
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00556D73u); RECOMP_ABI_CALL(0x00556AD0u, sub_00556AD0); /* call 0x00556AD0 */

loc_00556D73: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556D7F; /* jne: not equal / not zero */

loc_00556D7A: ;
    esi = 0x6739B0;

loc_00556D7F: ;
    ecx = MEM32(esi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(ecx + 0xBC) = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00556DA0
 * Original: 0x00556DA0 - 0x00556E15 (117 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00556DA0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_00556E11; /* je: equal / zero */

loc_00556DB5: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00556DBDu); RECOMP_ABI_CALL(0x00557220u, sub_00557220); /* call 0x00557220 */

loc_00556DBD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00556E11; /* je: equal / zero */

loc_00556DC4: ;
    eax = MEM32(esi);
    ecx = esp;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x6C4EE8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00556DE2u); RECOMP_ABI_CALL(0x00627E80u, sub_00627E80); /* call 0x00627E80 */

loc_00556DE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00556E02; /* je: equal / zero */

loc_00556DE7: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6C4EE8);
    PUSH32(esp, esi);
    MEM8(eax + 0x6C4EE8) = 0;
    PUSH32(esp, 0x00556DFFu); RECOMP_ABI_CALL(0x005567E0u, sub_005567E0); /* call 0x005567E0 */

loc_00556DFF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00556E02: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00556E0Au); RECOMP_ABI_CALL(0x00557220u, sub_00557220); /* call 0x00557220 */

loc_00556E0A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556DC4; /* jne: not equal / not zero */

loc_00556E11: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00556E20
 * Original: 0x00556E20 - 0x00556E4A (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00556E20: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x6302A4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00556E37u); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_00556E37: ;
    eax = MEM32(esp + 0x24);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00556E46u); RECOMP_ABI_CALL(0x00555E10u, sub_00555E10); /* call 0x00555E10 */

loc_00556E46: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00556E50
 * Original: 0x00556E50 - 0x00556FDD (397 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00556E50: ;
    _fb = (uint32_t)(0x818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x818;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi + 0x84;
    SET_LO8(ecx, 3);
    eax = esp + 0x18;
    MEM32(esp + 0x818) = esi;
    PUSH32(esp, 0x00556E71u); RECOMP_ABI_CALL(0x00556140u, sub_00556140); /* call 0x00556140 */

loc_00556E71: ;
    _fa = (uint32_t)(MEM32(0x6C4EE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C4EE0), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00556EC7; /* jle: less or equal (signed <=) */

loc_00556E79: ;
    PUSH32(esp, ebp);
    ebp = 0x6C4E88;
    /* nop */

loc_00556E80: ;
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, 0x64F4F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00556E90u); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_00556E90: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00556E9Fu); RECOMP_ABI_CALL(0x00555E10u, sub_00555E10); /* call 0x00555E10 */

loc_00556E9F: ;
    eax = MEM32(ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00556EABu); RECOMP_ABI_CALL(0x00627E20u, sub_00627E20); /* call 0x00627E20 */

loc_00556EAB: ;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00556EB6u); RECOMP_ABI_CALL(0x00555E10u, sub_00555E10); /* call 0x00555E10 */

loc_00556EB6: ;
    eax = MEM32(0x6C4EE0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00556E80; /* jl: less (signed <) */

loc_00556EC6: ;
    POP32(esp, ebp);

loc_00556EC7: ;
    edx = esp + 0x18;
    PUSH32(esp, 0x64F4E4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00556ED6u); RECOMP_ABI_CALL(0x00555E10u, sub_00555E10); /* call 0x00555E10 */

loc_00556ED6: ;
    eax = MEM32(edi + 0xB8);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00556EE7u); RECOMP_ABI_CALL(0x00556E20u, sub_00556E20); /* call 0x00556E20 */

loc_00556EE7: ;
    edx = esp + 0x28;
    PUSH32(esp, 0x64F4DC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00556EF6u); RECOMP_ABI_CALL(0x00555E10u, sub_00555E10); /* call 0x00555E10 */

loc_00556EF6: ;
    eax = MEM32(edi + 0xC0);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    eax = 0x639BC0;
    if (CMP_NE(_fa, _fb)) goto loc_00556F0E; /* jne: not equal / not zero */

loc_00556F09: ;
    eax = 0x639BC8;

loc_00556F0E: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00556F19u); RECOMP_ABI_CALL(0x00555E10u, sub_00555E10); /* call 0x00555E10 */

loc_00556F19: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00556F3D; /* je: equal / zero */

loc_00556F20: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x64F4CC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00556F2Fu); RECOMP_ABI_CALL(0x00555E10u, sub_00555E10); /* call 0x00555E10 */

loc_00556F2F: ;
    edx = esp + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00556F3Au); RECOMP_ABI_CALL(0x00556E20u, sub_00556E20); /* call 0x00556E20 */

loc_00556F3A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00556F3D: ;
    eax = esp + 0x14;
    PUSH32(esp, 0x64F4C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00556F4Cu); RECOMP_ABI_CALL(0x00555E10u, sub_00555E10); /* call 0x00555E10 */

loc_00556F4C: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00556F5Au); RECOMP_ABI_CALL(0x00555E10u, sub_00555E10); /* call 0x00555E10 */

loc_00556F5A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00556F86; /* je: equal / zero */

loc_00556F62: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xFF;
    edx = esp + 0x28;
    PUSH32(esp, 0x00556F81u); RECOMP_ABI_CALL(0x00556430u, sub_00556430); /* call 0x00556430 */

loc_00556F81: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00556FA5;

loc_00556F86: ;
    eax = MEM32(esp + 0x814);
    ecx = 0x800;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00556FA5; /* jl: less (signed <) */

loc_00556F99: ;
    MEM8(esp + eax + 0x14) = 0;
    MEM32(esp + 0x814) = MEM32(esp + 0x814) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x814)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00556FA5: ;
    eax = MEM32(esp + 0x814);
    PUSH32(esp, 0x10);
    edx = edi + 0xC4;
    PUSH32(esp, edx);
    edx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00556FC5u); RECOMP_ABI_CALL(0x00627E74u, sub_00627E74); /* call 0x00627E74 */

loc_00556FC5: ;
    PUSH32(esp, 0x00556FCAu); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_00556FCA: ;
    MEM32(edi + 0xA8) = eax;
    MEM32(edi + 0xAC) = eax;
    _fb = (uint32_t)(0x818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x818;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00556FE0
 * Original: 0x00556FE0 - 0x00557085 (165 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00556FE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x00556FE9u); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_00556FE9: ;
    esi = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00557082; /* je: equal / zero */

loc_00556FF4: ;
    eax = MEM32(edi + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_0055704B; /* jle: less or equal (signed <=) */

loc_00556FFF: ;
    ebx = MEM32(edi + 0xA8);
    ecx = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2710 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055704B; /* jbe: below or equal (unsigned <=) */

loc_00557011: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00557039; /* jl: less (signed <) */

loc_00557016: ;
    edx = MEM32(edi + 0x104);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64F4FC);
    PUSH32(esp, 5);
    MEM32(edi + 0xB0) = 0;
    { uint32_t _icall_target = MEM32(edi + 0x9C); PUSH32(esp, 0x00557034u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0055702Eu); } /* indirect call */
    }

loc_00557034: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055706C;

loc_00557039: ;
    ebx = 3;
    PUSH32(esp, 0x00557043u); RECOMP_ABI_CALL(0x00556E50u, sub_00556E50); /* call 0x00556E50 */

loc_00557043: ;
    MEM32(edi + 0xB0) = MEM32(edi + 0xB0) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xB0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0055706C;

loc_0055704B: ;
    eax = MEM32(edi + 0xA8);
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEA60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xEA60 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00557065; /* ja: above (unsigned >) */

loc_0055705D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00557065; /* je: equal / zero */

loc_00557061: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055706C; /* jae: above or equal (unsigned >=) */

loc_00557065: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0055706Cu); RECOMP_ABI_CALL(0x00556E50u, sub_00556E50); /* call 0x00556E50 */

loc_0055706C: ;
    _fb = (uint32_t)(MEM32(edi + 0xAC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(edi + 0xAC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4E20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x4E20 (32-bit) */
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_00557082; /* jbe: below or equal (unsigned <=) */

loc_0055707B: ;
    esi = edi;
    PUSH32(esp, 0x00557082u); RECOMP_ABI_CALL(0x00556A70u, sub_00556A70); /* call 0x00556A70 */

loc_00557082: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00557090
 * Original: 0x00557090 - 0x005570C9 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557090: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055709F; /* jne: not equal / not zero */

loc_00557099: ;
    edi = MEM32(0x6739B0);

loc_0055709F: ;
    eax = MEM32(edi + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005570C7; /* je: equal / zero */

loc_005570A9: ;
    PUSH32(esp, 0x005570AEu); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_005570AE: ;
    _fb = (uint32_t)(MEM32(edi + 0xA8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2710 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005570C7; /* jb: below (unsigned <) */

loc_005570BB: ;
    PUSH32(esp, ebx);
    ebx = 1;
    PUSH32(esp, 0x005570C6u); RECOMP_ABI_CALL(0x00556E50u, sub_00556E50); /* call 0x00556E50 */

loc_005570C6: ;
    POP32(esp, ebx);

loc_005570C7: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_005570D0
 * Original: 0x005570D0 - 0x0055713E (110 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005570D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005570D0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005570DF; /* jne: not equal / not zero */

loc_005570D9: ;
    edi = MEM32(0x6739B0);

loc_005570DF: ;
    eax = MEM32(edi + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005570F5; /* je: equal / zero */

loc_005570E9: ;
    PUSH32(esp, ebx);
    ebx = 2;
    PUSH32(esp, 0x005570F4u); RECOMP_ABI_CALL(0x00556E50u, sub_00556E50); /* call 0x00556E50 */

loc_005570F4: ;
    POP32(esp, ebx);

loc_005570F5: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055710C; /* je: equal / zero */

loc_005570FC: ;
    ecx = MEM32(edi + 0xBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055710C; /* je: equal / zero */

loc_00557106: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055710Cu); RECOMP_ABI_CALL(0x00627E38u, sub_00627E38); /* call 0x00627E38 */

loc_0055710C: ;
    eax = MEM32(edi + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = 0xFFFFFFFFu;
    MEM32(edi + 0xA8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0055712B; /* je: equal / zero */

loc_00557126: ;
    PUSH32(esp, 0x0055712Bu); RECOMP_ABI_CALL(0x005571C0u, sub_005571C0); /* call 0x005571C0 */

loc_0055712B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6738A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x6738A8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055713C; /* je: equal / zero */

loc_00557133: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00557139u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00557139: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055713C: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00557140
 * Original: 0x00557140 - 0x00557167 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557140: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055714F; /* jne: not equal / not zero */

loc_00557149: ;
    esi = MEM32(0x6739B0);

loc_0055714F: ;
    eax = MEM32(esi + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00557160; /* je: equal / zero */

loc_00557159: ;
    eax = esi;
    PUSH32(esp, 0x00557160u); RECOMP_ABI_CALL(0x00556FE0u, sub_00556FE0); /* call 0x00556FE0 */

loc_00557160: ;
    PUSH32(esp, 0x00557165u); RECOMP_ABI_CALL(0x00556DA0u, sub_00556DA0); /* call 0x00556DA0 */

loc_00557165: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00557170
 * Original: 0x00557170 - 0x0055718C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557170: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055718B; /* jl: less (signed <) */

loc_00557179: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFE (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0055718B; /* jg: greater (signed >) */

loc_00557180: ;
    ecx = MEM32(esp + 8);
    MEM32(eax * 4 + 0x6739B8) = ecx;

loc_0055718B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00557190
 * Original: 0x00557190 - 0x00557196 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00557190: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x62D118)); return; /* indirect tail jmp */

}

/**
 * sub_005571A0
 * Original: 0x005571A0 - 0x005571BC (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005571A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005571A0: ;
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x190;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x101);
    PUSH32(esp, 0x005571B5u); RECOMP_ABI_CALL(0x00627E98u, sub_00627E98); /* call 0x00627E98 */

loc_005571B5: ;
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x190;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005571C0
 * Original: 0x005571C0 - 0x005571C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005571C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005571C0: ;
    g_seh_ebp = ebp; sub_00627E9E(); return; /* tail jmp 0x00627E9E */

}

/**
 * sub_005571D0
 * Original: 0x005571D0 - 0x0055721D (77 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005571D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005571D0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005571DD; /* jne: not equal / not zero */

loc_005571D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_005571DD: ;
    eax = edi;
    edx = eax + 1;

loc_005571E2: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005571E2; /* jne: not equal / not zero */

loc_005571E9: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x154);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x64F62C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005571FCu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005571FC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055721B; /* je: equal / zero */

loc_00557203: ;
    PUSH32(esp, esi);
    esi = eax;
    ecx = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00557210: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00557210; /* jne: not equal / not zero */

loc_0055721A: ;
    POP32(esp, esi);

loc_0055721B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00557220
 * Original: 0x00557220 - 0x0055727C (92 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557220: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x110);
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = 1;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0055725Eu); RECOMP_ABI_CALL(0x00627E5Cu, sub_00627E5C); /* call 0x00627E5C */

loc_0055725E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00557273; /* je: equal / zero */

loc_00557263: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00557273; /* je: equal / zero */

loc_00557267: ;
    eax = 1;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00557273: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00557280
 * Original: 0x00557280 - 0x005572CE (78 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557280: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0055728Du); RECOMP_ABI_CALL(0x00627E26u, sub_00627E26); /* call 0x00627E26 */

loc_0055728D: ;
    MEM32(esp) = eax;
    ecx = MEM32(esp);
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    ecx = ZX8(LO8(ecx));
    if (CMP_EQ(_fa, _fb)) goto loc_005572B4; /* je: equal / zero */

loc_005572A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005572BB; /* jne: not equal / not zero */

loc_005572AA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005572CA; /* jl: less (signed <) */

loc_005572AF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1F (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005572CA; /* jg: greater (signed >) */

loc_005572B4: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_005572BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005572CA; /* jne: not equal / not zero */

loc_005572C2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005572B4; /* je: equal / zero */

loc_005572CA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005572D0
 * Original: 0x005572D0 - 0x00557313 (67 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005572D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005572D0: ;
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x41A7);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x41A7);
    edx = ecx;
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFFFFFF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00557300; /* jbe: below or equal (unsigned <=) */

loc_005572FA: ;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00557300: ;
    ecx = ecx >> 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFFFFFF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00557312; /* jbe: below or equal (unsigned <=) */

loc_0055730C: ;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00557312: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00557320
 * Original: 0x00557320 - 0x00557330 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557320(void)
{

loc_00557320: ;
    eax = MEM32(0x673DB0);
    PUSH32(esp, 0x0055732Au); RECOMP_ABI_CALL(0x005572D0u, sub_005572D0); /* call 0x005572D0 */

loc_0055732A: ;
    MEM32(0x673DB0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00557330
 * Original: 0x00557330 - 0x0055734A (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557330: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055733F; /* je: equal / zero */

loc_00557334: ;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x673DB0) = eax;
    esp += 4; return; /* ret */

loc_0055733F: ;
    MEM32(0x673DB0) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00557350
 * Original: 0x00557350 - 0x00557363 (19 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557350: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x00557358u); RECOMP_ABI_CALL(0x00557320u, sub_00557320); /* call 0x00557320 */

loc_00557358: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    eax = edx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00557370
 * Original: 0x00557370 - 0x00557408 (152 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557370: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0xF;
    esi = 0x64F638;
    edi = esp + 0x10;
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
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    { uint32_t _icall_target = MEM32(0x62D120); PUSH32(esp, 0x00557393u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055738Du); } /* indirect call */
    }

loc_00557393: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005573A1; /* je: equal / zero */

loc_00557397: ;
    esi = MEM32(esp + 0xC);
    esi = esi ^ MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005573A3;

loc_005573A1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005573A3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x005573AAu); RECOMP_ABI_CALL(0x0061B149u, sub_0061B149); /* call 0x0061B149 */

loc_005573AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x005573B4u); RECOMP_ABI_CALL(0x0061B1DBu, sub_0061B1DB); /* call 0x0061B1DB */

loc_005573B4: ;
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x62D118); PUSH32(esp, 0x005573BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005573B6u); } /* indirect call */
    }

loc_005573BC: ;
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi ^ esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    PUSH32(esp, 0x005573C7u); RECOMP_ABI_CALL(0x00557330u, sub_00557330); /* call 0x00557330 */

loc_005573C7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_005573D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005573F4; /* je: equal / zero */

loc_005573D5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005573F4; /* je: equal / zero */

loc_005573DA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005573F4; /* je: equal / zero */

loc_005573DF: ;
    eax = 0x3E;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x005573EBu); RECOMP_ABI_CALL(0x00557350u, sub_00557350); /* call 0x00557350 */

loc_005573EB: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x10));
    MEM8(esi + ebx) = LO8(ecx);
    goto loc_005573F8;

loc_005573F4: ;
    MEM8(esi + ebx) = 0x2D;

loc_005573F8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x13 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005573D0; /* jl: less (signed <) */

loc_005573FE: ;
    POP32(esp, edi);
    MEM8(ebx + 0x13) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00557410
 * Original: 0x00557410 - 0x00557538 (296 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00557410: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF003F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64F680);
    PUSH32(esp, 0x80000001u);
    MEM32(esp + 0x20) = 1;
    MEM32(esp + 0x1C) = 0x104;
    { uint32_t _icall_target = MEM32(0x62D000); PUSH32(esp, 0x00557440u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055743Au); } /* indirect call */
    }

loc_00557440: ;
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6C4FE8);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    esi = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, 0x64F678);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint32_t _icall_target = MEM32(0x62D010); PUSH32(esp, 0x00557469u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00557463u); } /* indirect call */
    }

loc_00557469: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00557483; /* jne: not equal / not zero */

loc_0055746D: ;
    eax = 0x6C4FE8;
    edx = eax + 1;

loc_00557475: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00557475; /* jne: not equal / not zero */

loc_0055747C: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_005574E6; /* je: equal / zero */

loc_00557483: ;
    PUSH32(esp, ebx);
    ebx = 0x6C4FE8;
    PUSH32(esp, 0x0055748Eu); RECOMP_ABI_CALL(0x00557370u, sub_00557370); /* call 0x00557370 */

loc_0055748E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_005574BA; /* je: equal / zero */

loc_00557493: ;
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF003F);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64F680);
    PUSH32(esp, 0x80000001u);
    { uint32_t _icall_target = MEM32(0x62D00C); PUSH32(esp, 0x005574BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005574B4u); } /* indirect call */
    }

loc_005574BA: ;
    eax = 0x6C4FE8;
    edx = eax + 1;

loc_005574C2: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_005574C2; /* jne: not equal / not zero */

loc_005574C9: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x6C4FE8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64F678);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D008); PUSH32(esp, 0x005574E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005574E0u); } /* indirect call */
    }

loc_005574E6: ;
    ecx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x62D004); PUSH32(esp, 0x005574F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005574EBu); } /* indirect call */
    }

loc_005574F1: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x6C4FED);
    PUSH32(esp, 0x6C4FEC);
    PUSH32(esp, 0x00557502u); RECOMP_ABI_CALL(0x00619BF0u, sub_00619BF0); /* call 0x00619BF0 */

loc_00557502: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x6C4FF2);
    PUSH32(esp, 0x6C4FF0);
    PUSH32(esp, 0x00557513u); RECOMP_ABI_CALL(0x00619BF0u, sub_00619BF0); /* call 0x00619BF0 */

loc_00557513: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x6C4FF7);
    PUSH32(esp, 0x6C4FF4);
    PUSH32(esp, 0x00557524u); RECOMP_ABI_CALL(0x00619BF0u, sub_00619BF0); /* call 0x00619BF0 */

loc_00557524: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x6C4FF8) = 0;
    eax = 0x6C4FE8;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00557540
 * Original: 0x00557540 - 0x0055754B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557540(void)
{

loc_00557540: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055754Au); RECOMP_ABI_CALL(0x00627EA4u, sub_00627EA4); /* call 0x00627EA4 */

loc_0055754A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00557550
 * Original: 0x00557550 - 0x00557593 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00557550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 8) = 0;
    ecx = 0x3F;
    edi = esp + 9;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, 0x100);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00557581u); RECOMP_ABI_CALL(0x00627EAAu, sub_00627EAA); /* call 0x00627EAA */

loc_00557581: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055758Bu); RECOMP_ABI_CALL(0x00557540u, sub_00557540); /* call 0x00557540 */

loc_0055758B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_005575A0
 * Original: 0x005575A0 - 0x005575B6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005575A0(void)
{

loc_005575A0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C5258);
    PUSH32(esp, 0x005575B5u); RECOMP_ABI_CALL(0x005770A0u, sub_005770A0); /* call 0x005770A0 */

loc_005575B5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005575C0
 * Original: 0x005575C0 - 0x005575E4 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005575C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005575C0: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = ecx;
    eax = ecx;
    ecx = MEM32(esi + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005575DDu); RECOMP_ABI_CALL(0x005575A0u, sub_005575A0); /* call 0x005575A0 */

loc_005575DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_005575F0
 * Original: 0x005575F0 - 0x00557654 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005575F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005575F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x59);
    PUSH32(esp, 0x64F6AC);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x005575FFu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005575FF: ;
    esi = eax;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00557611; /* jne: not equal / not zero */

loc_0055760C: ;
    eax = 8;

loc_00557611: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    MEM32(esi) = 0;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00557649; /* je: equal / zero */

loc_0055762F: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x64F6AC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0055763Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0055763F: ;
    MEM32(esi + 0x14) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00557649: ;
    MEM32(esi + 0x14) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00557660
 * Original: 0x00557660 - 0x00557667 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557660(void)
{

loc_00557660: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00557670
 * Original: 0x00557670 - 0x00557680 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557670: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00557680
 * Original: 0x00557680 - 0x005576BF (63 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557680: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = eax + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005576BB; /* jge: greater or equal (signed >=) */

loc_00557692: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 8));
    PUSH32(esp, eax);
    eax = edx + 1;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005576A4u); RECOMP_ABI_CALL(0x00557670u, sub_00557670); /* call 0x00557670 */

loc_005576A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005576AFu); RECOMP_ABI_CALL(0x00557670u, sub_00557670); /* call 0x00557670 */

loc_005576AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x005576B8u); RECOMP_ABI_CALL(0x00619BF0u, sub_00619BF0); /* call 0x00619BF0 */

loc_005576B8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005576BB: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005576C0
 * Original: 0x005576C0 - 0x005576F5 (53 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005576C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005576C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005576F2; /* jle: less or equal (signed <=) */

loc_005576CE: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);

loc_005576D8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005576E0u); RECOMP_ABI_CALL(0x00557670u, sub_00557670); /* call 0x00557670 */

loc_005576E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x005576E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005576E4u); } /* indirect call */
    }

loc_005576E6: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005576D8; /* jl: less (signed <) */

loc_005576F0: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_005576F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00557700
 * Original: 0x00557700 - 0x0055772E (46 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00557700: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0055772B; /* js: sign (negative) */

loc_0055770B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);

loc_00557715: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055771Du); RECOMP_ABI_CALL(0x00557670u, sub_00557670); /* call 0x00557670 */

loc_0055771D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x00557723u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00557721u); } /* indirect call */
    }

loc_00557723: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00557715; /* jns: not sign (positive) */

loc_00557729: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0055772B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00557730
 * Original: 0x00557730 - 0x0055776F (63 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00557730: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00557761; /* jle: less or equal (signed <=) */

loc_00557740: ;
    ebp = MEM32(esp + 0x1C);

loc_00557744: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0055774Bu); RECOMP_ABI_CALL(0x00557670u, sub_00557670); /* call 0x00557670 */

loc_0055774B: ;
    esi = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esp + 0x28); PUSH32(esp, 0x00557753u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0055774Fu); } /* indirect call */
    }

loc_00557753: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00557768; /* je: equal / zero */

loc_0055775A: ;
    eax = MEM32(ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00557744; /* jl: less (signed <) */

loc_00557761: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00557768: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00557770
 * Original: 0x00557770 - 0x005577AE (62 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00557770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557770: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00557799; /* jle: less or equal (signed <=) */

loc_0055777D: ;
    edi = MEM32(esp + 0x14);

loc_00557781: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esp + 0x24); PUSH32(esp, 0x0055778Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00557787u); } /* indirect call */
    }

loc_0055778B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055779F; /* je: equal / zero */

loc_00557792: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00557781; /* jl: less (signed <) */

loc_00557799: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0055779F: ;
    ecx = MEM32(esp + 0x14);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_005577B0
 * Original: 0x005577B0 - 0x0055780E (94 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005577B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005577B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax;
    eax = MEM32(esp + 0x20);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(eax) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_005577F8; /* jl: less (signed <) */

loc_005577C6: ;
    PUSH32(esp, esi);

loc_005577C7: ;
    ecx = MEM32(esp + 0x14);
    esi = edi + ebx;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esp + 0x28); PUSH32(esp, 0x005577DFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005577DBu); } /* indirect call */
    }

loc_005577DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00557807; /* jne: not equal / not zero */

loc_005577E6: ;
    eax = MEM32(esp + 0x24);
    MEM32(eax) = 1;

loc_005577F0: ;
    edi = esi + -1;

loc_005577F3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005577C7; /* jle: less or equal (signed <=) */

loc_005577F7: ;
    POP32(esp, esi);

loc_005577F8: ;
    ecx = MEM32(esp + 0x14);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00557807: ;
    if (CMP_GE(_fas, _fbs)) goto loc_005577F0; /* jge: greater or equal (signed >=) */

loc_00557809: ;
    ebx = esi + 1;
    goto loc_005577F3;

}

/**
 * sub_00557810
 * Original: 0x00557810 - 0x00557825 (21 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557810: ;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00557824; /* je: equal / zero */

loc_00557817: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055781Eu); RECOMP_ABI_CALL(0x00557670u, sub_00557670); /* call 0x00557670 */

loc_0055781E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edx; PUSH32(esp, 0x00557821u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0055781Fu); } /* indirect call */
    }

loc_00557821: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00557824: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00557830
 * Original: 0x00557830 - 0x00557854 (36 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557830: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    esi = ecx;
    PUSH32(esp, 0x0055783Bu); RECOMP_ABI_CALL(0x00557670u, sub_00557670); /* call 0x00557670 */

loc_0055783B: ;
    ecx = MEM32(edx + 8);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    ecx = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00557860
 * Original: 0x00557860 - 0x00557895 (53 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557860: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00557880; /* jle: less or equal (signed <=) */

loc_0055786E: ;
    edi = edi;

loc_00557870: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0x00557879u); RECOMP_ABI_CALL(0x00557810u, sub_00557810); /* call 0x00557810 */

loc_00557879: ;
    eax = MEM32(edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00557870; /* jl: less (signed <) */

loc_00557880: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00557889u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00557889: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055788Fu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055788F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005578A0
 * Original: 0x005578A0 - 0x005578FC (92 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005578A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005578A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_005578B2; /* jne: not equal / not zero */

loc_005578AD: ;
    PUSH32(esp, 0x005578B2u); RECOMP_ABI_CALL(0x005575C0u, sub_005575C0); /* call 0x005575C0 */

loc_005578B2: ;
    edi = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    MEM32(esi) = edi;
    edi = MEM32(esp + 0x14);
    ecx = eax + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005578ED; /* jge: greater or equal (signed >=) */

loc_005578C4: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 8));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005578D3u); RECOMP_ABI_CALL(0x00557670u, sub_00557670); /* call 0x00557670 */

loc_005578D3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = edi + 1;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005578E1u); RECOMP_ABI_CALL(0x00557670u, sub_00557670); /* call 0x00557670 */

loc_005578E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x005578EAu); RECOMP_ABI_CALL(0x00619BF0u, sub_00619BF0); /* call 0x00619BF0 */

loc_005578EA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005578ED: ;
    ecx = MEM32(esp + 0x10);
    eax = edi;
    POP32(esp, edi);
    edx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00557830(); return; /* tail jmp 0x00557830 */

}

/**
 * sub_00557900
 * Original: 0x00557900 - 0x00557920 (32 bytes, 14 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557900: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0x00557913u); RECOMP_ABI_CALL(0x00557810u, sub_00557810); /* call 0x00557810 */

loc_00557913: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055791Au); RECOMP_ABI_CALL(0x00557680u, sub_00557680); /* call 0x00557680 */

loc_0055791A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00557920
 * Original: 0x00557920 - 0x00557942 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00557920: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0x00557933u); RECOMP_ABI_CALL(0x00557810u, sub_00557810); /* call 0x00557810 */

loc_00557933: ;
    ecx = MEM32(esp + 0x10);
    edx = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00557830(); return; /* tail jmp 0x00557830 */

}

/**
 * sub_00557950
 * Original: 0x00557950 - 0x005579DF (143 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557950: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 8) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_005579D8; /* je: equal / zero */

loc_00557963: ;
    ebx = MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005579D8; /* je: equal / zero */

loc_00557969: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esi + 8);
    ecx = MEM32(esp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_005579A1; /* je: equal / zero */

loc_00557978: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0055798Cu); RECOMP_ABI_CALL(0x00557670u, sub_00557670); /* call 0x00557670 */

loc_0055798C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0x0055799Cu); RECOMP_ABI_CALL(0x005577B0u, sub_005577B0); /* call 0x005577B0 */

loc_0055799C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005579C1;

loc_005579A1: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x005579B0u); RECOMP_ABI_CALL(0x00557670u, sub_00557670); /* call 0x00557670 */

loc_005579B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005579BEu); RECOMP_ABI_CALL(0x00557770u, sub_00557770); /* call 0x00557770 */

loc_005579BE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005579C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005579D8; /* je: equal / zero */

loc_005579C5: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005579D8; /* je: equal / zero */

loc_005579CD: ;
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 8))); }
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_005579D8: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005579E0
 * Original: 0x005579E0 - 0x00557A04 (36 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005579E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005579E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005579ECu); RECOMP_ABI_CALL(0x00557660u, sub_00557660); /* call 0x00557660 */

loc_005579EC: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00557A01; /* js: sign (negative) */

loc_005579F4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005579FBu); RECOMP_ABI_CALL(0x00557900u, sub_00557900); /* call 0x00557900 */

loc_005579FB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_005579F4; /* jns: not sign (positive) */

loc_00557A01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00557A10
 * Original: 0x00557A10 - 0x00557A2A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557A10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00557A29; /* je: equal / zero */

loc_00557A18: ;
    ecx = MEM32(eax);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00557A26u); RECOMP_ABI_CALL(0x005578A0u, sub_005578A0); /* call 0x005578A0 */

loc_00557A26: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00557A29: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00557A30
 * Original: 0x00557A30 - 0x00557AA8 (120 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00557A30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0x64F6B8);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00557A42u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00557A42: ;
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, 0x40);
    edi = eax;
    eax = ebx * 4;
    PUSH32(esp, 0x64F6B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00557A5Cu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00557A5C: ;
    ebp = MEM32(esp + 0x40);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(edi) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00557A8D; /* jle: less or equal (signed <=) */

loc_00557A6B: ;
    goto loc_00557A70;

    /* nop */

loc_00557A70: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00557A80u); RECOMP_ABI_CALL(0x005575F0u, sub_005575F0); /* call 0x005575F0 */

loc_00557A80: ;
    ecx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + esi * 4) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00557A70; /* jl: less (signed <) */

loc_00557A8D: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 0x10) = edx;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00557AB0
 * Original: 0x00557AB0 - 0x00557AEA (58 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557AB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00557AD6; /* jle: less or equal (signed <=) */

loc_00557ABF: ;
    /* nop */

loc_00557AC0: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00557ACBu); RECOMP_ABI_CALL(0x00557860u, sub_00557860); /* call 0x00557860 */

loc_00557ACB: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00557AC0; /* jl: less (signed <) */

loc_00557AD6: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00557ADEu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00557ADE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00557AE4u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00557AE4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00557AF0
 * Original: 0x00557AF0 - 0x00557B20 (48 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557AF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00557B1A; /* jle: less or equal (signed <=) */

loc_00557B02: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00557B0Du); RECOMP_ABI_CALL(0x00557660u, sub_00557660); /* call 0x00557660 */

loc_00557B0D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00557B02; /* jl: less (signed <) */

loc_00557B1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00557B20
 * Original: 0x00557B20 - 0x00557B78 (88 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557B20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x00557B33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00557B30u); } /* indirect call */
    }

loc_00557B33: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ebx = eax;
    eax = MEM32(edx + ebx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00557B49u); RECOMP_ABI_CALL(0x00557950u, sub_00557950); /* call 0x00557950 */

loc_00557B49: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00557B64; /* jne: not equal / not zero */

loc_00557B51: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + ebx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00557B5Du); RECOMP_ABI_CALL(0x00557A10u, sub_00557A10); /* call 0x00557A10 */

loc_00557B5D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00557B64: ;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = MEM32(eax + ebx * 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00557B71u); RECOMP_ABI_CALL(0x00557920u, sub_00557920); /* call 0x00557920 */

loc_00557B71: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00557B80
 * Original: 0x00557B80 - 0x00557BCF (79 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557B80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x00557B93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00557B90u); } /* indirect call */
    }

loc_00557B93: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(edx + edi * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00557BA9u); RECOMP_ABI_CALL(0x00557950u, sub_00557950); /* call 0x00557950 */

loc_00557BA9: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00557BB7; /* jne: not equal / not zero */

loc_00557BB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00557BB7: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + edi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00557BC3u); RECOMP_ABI_CALL(0x00557900u, sub_00557900); /* call 0x00557900 */

loc_00557BC3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00557BD0
 * Original: 0x00557BD0 - 0x00557C1A (74 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557BD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x00557BE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00557BE0u); } /* indirect call */
    }

loc_00557BE3: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(edx + edi * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00557BF9u); RECOMP_ABI_CALL(0x00557950u, sub_00557950); /* call 0x00557950 */

loc_00557BF9: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00557C07; /* jne: not equal / not zero */

loc_00557C01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00557C07: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + edi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00557C13u); RECOMP_ABI_CALL(0x00557670u, sub_00557670); /* call 0x00557670 */

loc_00557C13: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00557C20
 * Original: 0x00557C20 - 0x00557C5D (61 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00557C20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00557C5A; /* jle: less or equal (signed <=) */

loc_00557C2F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    /* nop */

loc_00557C40: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00557C4Du); RECOMP_ABI_CALL(0x005576C0u, sub_005576C0); /* call 0x005576C0 */

loc_00557C4D: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00557C40; /* jl: less (signed <) */

loc_00557C58: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00557C5A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00557C60
 * Original: 0x00557C60 - 0x00557C9D (61 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00557C60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00557C9A; /* jle: less or equal (signed <=) */

loc_00557C6F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    /* nop */

loc_00557C80: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00557C8Du); RECOMP_ABI_CALL(0x00557700u, sub_00557700); /* call 0x00557700 */

loc_00557C8D: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00557C80; /* jl: less (signed <) */

loc_00557C98: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00557C9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00557CA0
 * Original: 0x00557CA0 - 0x00557CE3 (67 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00557CA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00557CDC; /* jle: less or equal (signed <=) */

loc_00557CB1: ;
    ebx = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x18);
    /* nop */

loc_00557CC0: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00557CCDu); RECOMP_ABI_CALL(0x00557730u, sub_00557730); /* call 0x00557730 */

loc_00557CCD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00557CDE; /* jne: not equal / not zero */

loc_00557CD4: ;
    eax = MEM32(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00557CC0; /* jl: less (signed <) */

loc_00557CDC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00557CDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00557CF0
 * Original: 0x00557CF0 - 0x00557D19 (41 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557CF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00557D16; /* jle: less or equal (signed <=) */

loc_00557CFF: ;
    /* nop */

loc_00557D00: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00557D0Bu); RECOMP_ABI_CALL(0x005579E0u, sub_005579E0); /* call 0x005579E0 */

loc_00557D0B: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00557D00; /* jl: less (signed <) */

loc_00557D16: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00557D20
 * Original: 0x00557D20 - 0x00557D44 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557D20: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00557D40u); RECOMP_ABI_CALL(0x00557A30u, sub_00557A30); /* call 0x00557A30 */

loc_00557D40: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00557D50
 * Original: 0x00557D50 - 0x00557DAC (92 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00557D50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x194C);
    PUSH32(esp, eax);
    MEM32(esi) = 0x64F6C4;
    PUSH32(esp, 0x00557D65u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00557D65: ;
    ecx = MEM32(esi + 0x1890);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00557D71u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00557D71: ;
    edx = MEM32(esi + 0x1894);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00557D7Du); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00557D7D: ;
    eax = MEM32(esi + 0x1898);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00557D89u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00557D89: ;
    ecx = MEM32(esi + 0x189C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00557D95u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00557D95: ;
    edx = MEM32(esi + 0x18A0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00557DA1u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00557DA1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_00557DB0
 * Original: 0x00557DB0 - 0x00557DB7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557DB0(void)
{

loc_00557DB0: ;
    eax = ecx + 0x180C;
    esp += 4; return; /* ret */

}

/**
 * sub_00557DC0
 * Original: 0x00557DC0 - 0x00557DEB (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557DC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1908);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1908) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_00557DE9; /* jg: greater (signed >) */

loc_00557DD6: ;
    PUSH32(esp, esi);
    ecx = 0x6C50F0;
    PUSH32(esp, 0x00557DE1u); RECOMP_ABI_CALL(0x00612440u, sub_00612440); /* call 0x00612440 */

loc_00557DE1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00557DE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00557DE7u); } /* indirect call */
    }

loc_00557DE9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00557DF0
 * Original: 0x00557DF0 - 0x00557F2A (314 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557DF0(void)
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

loc_00557DF0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x194C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00557E02u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00557E02: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x188E);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x188C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0xCC);
    edx = eax * 8;
    PUSH32(esp, 0x64F6E4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00557E2Cu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00557E2C: ;
    MEM32(esi + 0x194C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x188C);
    MEM32(esp + 0x20) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x188E);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEM32(esp + 0x20) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_00557F25; /* jle: less or equal (signed <=) */

loc_00557E75: ;
    PUSH32(esp, edi);
    goto loc_00557E80;

    /* nop */
    /* nop */

loc_00557E80: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0x188C)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x188C), LO16(ecx) (16-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00557F10; /* jle: less or equal (signed <=) */

loc_00557E93: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    eax = edx + 1;
    MEM32(esp + 0x14) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    /* nop */

loc_00557EB0: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x188C);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edi = MEM32(esi + 0x194C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    MEMF(eax + edi) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esi + 0x194C);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esp + 0x10) = ecx;
    MEMF(eax + edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esi + 0x194C);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(eax + edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esi + 0x194C);
    MEMF(eax + edi + 0xC) = (float)fp_top(); /* fst */
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x188C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00557EB0; /* jl: less (signed <) */

loc_00557F0C: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_00557F10: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x188E);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00557E80; /* jl: less (signed <) */

loc_00557F24: ;
    POP32(esp, edi);

loc_00557F25: ;
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
 * sub_00557F30
 * Original: 0x00557F30 - 0x00557F98 (104 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00557F30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x188E);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x188C);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00557F5B; /* jle: less or equal (signed <=) */

loc_00557F4E: ;
    PUSH32(esp, 0x64F6F0);
    PUSH32(esp, 0x00557F58u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00557F58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00557F5B: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x1888);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00557F71; /* jle: less or equal (signed <=) */

loc_00557F66: ;
    SET_LO16(edx, ZX8(LO8(ebx)));
    MEM16(esi + 0x1888) = LO16(edx);

loc_00557F71: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x188A);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00557F87; /* jle: less or equal (signed <=) */

loc_00557F7C: ;
    SET_LO16(ecx, ZX8(LO8(ebx)));
    MEM16(esi + 0x188A) = LO16(ecx);

loc_00557F87: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x184D) = LO8(eax);
    MEM8(esi + 0x1948) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00557FA0
 * Original: 0x00557FA0 - 0x005581F8 (600 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557FA0(void)
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

loc_00557FA0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x18A4)); /* fld float */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18AC)); /* fmul dword ptr [esi + 0x18ac] */
    PUSH32(esp, edi);
    fp_push(MEMF(esi + 0x18A8)); /* fld float */
    MEM32(esp + 0x10) = ebp;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18AC)); /* fmul dword ptr [esi + 0x18ac] */
    edi = esi + 0x28;
    /* nop */

loc_00557FD0: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    eax = MEM32(esi + 0x18D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    if (CMP_EQ(_fa, _fb)) goto loc_005580C0; /* je: equal / zero */

loc_00557FE8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x40 (32-bit) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    if (CMP_GE(_fas, _fbs)) goto loc_00558054; /* jge: greater or equal (signed >=) */

loc_00557FF1: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B4)); /* fsub dword ptr [esi + 0x18b4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B4)); /* fadd dword ptr [esi + 0x18b4] */
    fp_push(MEMF(esi + 0x18C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B8)); /* fsub dword ptr [esi + 0x18b8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B8)); /* fadd dword ptr [esi + 0x18b8] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18BC)); /* fsub dword ptr [esi + 0x18bc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18BC)); /* fadd dword ptr [esi + 0x18bc] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C0)); /* fsub dword ptr [esi + 0x18c0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    goto loc_00558112;

loc_00558054: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18B4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C4)); /* fsub dword ptr [esi + 0x18c4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C4)); /* fadd dword ptr [esi + 0x18c4] */
    fp_push(MEMF(esi + 0x18B8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C8)); /* fsub dword ptr [esi + 0x18c8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C8)); /* fadd dword ptr [esi + 0x18c8] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18BC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18CC)); /* fsub dword ptr [esi + 0x18cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18CC)); /* fadd dword ptr [esi + 0x18cc] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18D0)); /* fsub dword ptr [esi + 0x18d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18D0)); /* fadd dword ptr [esi + 0x18d0] */
    goto loc_00558118;

loc_005580C0: ;
    fp_push(MEMF(esi + 0x18C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B4)); /* fsub dword ptr [esi + 0x18b4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B4)); /* fadd dword ptr [esi + 0x18b4] */
    fp_push(MEMF(esi + 0x18C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B8)); /* fsub dword ptr [esi + 0x18b8] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B8)); /* fadd dword ptr [esi + 0x18b8] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18BC)); /* fsub dword ptr [esi + 0x18bc] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18BC)); /* fadd dword ptr [esi + 0x18bc] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C0)); /* fsub dword ptr [esi + 0x18c0] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */

loc_00558112: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C0)); /* fadd dword ptr [esi + 0x18c0] */

loc_00558118: ;
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18A4)); /* fsub dword ptr [esi + 0x18a4] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18A4)); /* fadd dword ptr [esi + 0x18a4] */
    MEMF(edi + -28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18A8)); /* fsub dword ptr [esi + 0x18a8] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18A8)); /* fadd dword ptr [esi + 0x18a8] */
    MEMF(edi + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00558149u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558149: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x00558158u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558158: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0055816Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0055816C: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    eax = ZX8(LO8(eax));
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00558183u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558183: ;
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + -20) = ebx;
    edx = MEM32(esi + 0x187C);
    MEM32(edi + -4) = edx;
    eax = MEM32(esi + 0x1880);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 0x1884);
    MEM32(edi + 4) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(MEMF(esi + 0x18B0)); /* fld float */
    MEM32(edi + -16) = eax;
    MEMF(edi + -12) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + -8) = eax;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x80 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18D4)); /* fmul dword ptr [esi + 0x18d4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1850)); /* fmul dword ptr [esi + 0x1850] */
    MEMF(edi + -40) = (float)fp_top(); /* fst */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEMF(edi + -36) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + -40)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(edi + -32) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00557FD0; /* jl: less (signed <) */

loc_005581EC: ;
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_00558200
 * Original: 0x00558200 - 0x00558426 (550 bytes, 140 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00558200(void)
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

loc_00558200: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx + 0x18A4)); /* fld float */
    edx = 2;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18AC)); /* fmul dword ptr [ecx + 0x18ac] */
    MEM32(esp) = edx;
    fp_push(MEMF(ecx + 0x18A8)); /* fld float */
    eax = ecx + 0x40;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18AC)); /* fmul dword ptr [ecx + 0x18ac] */
    PUSH32(esp, esi);
    goto loc_00558230;

    /* nop */

loc_00558230: ;
    esi = edx + -2;
    MEM32(esp + 8) = esi;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    esi = edx + -1;
    MEM32(esp + 8) = esi;
    esi = edx + 1;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18A4)); /* fsub dword ptr [ecx + 0x18a4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18A4)); /* fadd dword ptr [ecx + 0x18a4] */
    MEMF(eax + -52) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18A8)); /* fsub dword ptr [ecx + 0x18a8] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18A8)); /* fadd dword ptr [ecx + 0x18a8] */
    MEMF(eax + -48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = esi;
    esi = edx + 2;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18A4)); /* fsub dword ptr [ecx + 0x18a4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18A4)); /* fadd dword ptr [ecx + 0x18a4] */
    MEMF(eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18A8)); /* fsub dword ptr [ecx + 0x18a8] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18A8)); /* fadd dword ptr [ecx + 0x18a8] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18A4)); /* fsub dword ptr [ecx + 0x18a4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18A4)); /* fadd dword ptr [ecx + 0x18a4] */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18A8)); /* fsub dword ptr [ecx + 0x18a8] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18A8)); /* fadd dword ptr [ecx + 0x18a8] */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18A4)); /* fsub dword ptr [ecx + 0x18a4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18A4)); /* fadd dword ptr [ecx + 0x18a4] */
    MEMF(eax + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18A8)); /* fsub dword ptr [ecx + 0x18a8] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18A8)); /* fadd dword ptr [ecx + 0x18a8] */
    MEMF(eax + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18A4)); /* fsub dword ptr [ecx + 0x18a4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18A4)); /* fadd dword ptr [ecx + 0x18a4] */
    MEMF(eax + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18A8)); /* fsub dword ptr [ecx + 0x18a8] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18A8)); /* fadd dword ptr [ecx + 0x18a8] */
    MEMF(eax + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    esi = edx + 3;
    MEM32(esp + 8) = esi;
    fp_pop(); /* fstp st(0) */
    esi = edx + 4;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = esi;
    esi = edx + 5;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x180;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(esp + 4) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18A4)); /* fsub dword ptr [ecx + 0x18a4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18A4)); /* fadd dword ptr [ecx + 0x18a4] */
    MEMF(eax + -196) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18A8)); /* fsub dword ptr [ecx + 0x18a8] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18A8)); /* fadd dword ptr [ecx + 0x18a8] */
    MEMF(eax + -192) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = esi;
    esi = edx + -2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18A4)); /* fsub dword ptr [ecx + 0x18a4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18A4)); /* fadd dword ptr [ecx + 0x18a4] */
    MEMF(eax + -148) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18A8)); /* fsub dword ptr [ecx + 0x18a8] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18A8)); /* fadd dword ptr [ecx + 0x18a8] */
    MEMF(eax + -144) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18A4)); /* fsub dword ptr [ecx + 0x18a4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18A4)); /* fadd dword ptr [ecx + 0x18a4] */
    MEMF(eax + -100) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18A8)); /* fsub dword ptr [ecx + 0x18a8] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18A8)); /* fadd dword ptr [ecx + 0x18a8] */
    MEMF(eax + -96) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_L(_fas, _fbs)) goto loc_00558230; /* jl: less (signed <) */

loc_0055841D: ;
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    fp_pop(); /* fstp st(0) */
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
 * sub_00558430
 * Original: 0x00558430 - 0x00558EDE (2734 bytes, 595 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558430(void)
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

loc_00558430: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 2;
    MEM32(esp + 0x14) = edi;
    ebp = esi + 0x44;

loc_00558445: ;
    ecx = MEM32(esi + 0x18D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edi + -2;
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00558477; /* je: equal / zero */

loc_00558464: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    if (CMP_GE(_fas, _fbs)) goto loc_00558B66; /* jge: greater or equal (signed >=) */

loc_00558473: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_00558477: ;
    fp_push(MEMF(esi + 0x18C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B4)); /* fsub dword ptr [esi + 0x18b4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B4)); /* fadd dword ptr [esi + 0x18b4] */
    fp_push(MEMF(esi + 0x18C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B8)); /* fsub dword ptr [esi + 0x18b8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B8)); /* fadd dword ptr [esi + 0x18b8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18BC)); /* fsub dword ptr [esi + 0x18bc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18BC)); /* fadd dword ptr [esi + 0x18bc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C0)); /* fsub dword ptr [esi + 0x18c0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C0)); /* fadd dword ptr [esi + 0x18c0] */

loc_005584D7: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x005584E2u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005584E2: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x005584F1u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005584F1: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00558505u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558505: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    eax = ZX8(LO8(eax));
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0055851Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0055851C: ;
    ecx = ZX8(LO8(eax));
    eax = edi + -1;
    MEM32(esp + 0x10) = eax;
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -48) = ebx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = MEM32(esi + 0x18D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00558556; /* je: equal / zero */

loc_00558543: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    if (CMP_GE(_fas, _fbs)) goto loc_00558BD5; /* jge: greater or equal (signed >=) */

loc_00558552: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_00558556: ;
    fp_push(MEMF(esi + 0x18C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B4)); /* fsub dword ptr [esi + 0x18b4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B4)); /* fadd dword ptr [esi + 0x18b4] */
    fp_push(MEMF(esi + 0x18C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B8)); /* fsub dword ptr [esi + 0x18b8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B8)); /* fadd dword ptr [esi + 0x18b8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18BC)); /* fsub dword ptr [esi + 0x18bc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18BC)); /* fadd dword ptr [esi + 0x18bc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C0)); /* fsub dword ptr [esi + 0x18c0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C0)); /* fadd dword ptr [esi + 0x18c0] */

loc_005585B6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x005585C1u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005585C1: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x005585D0u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005585D0: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x005585E4u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005585E4: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x005585FBu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005585FB: ;
    eax = ZX8(LO8(eax));
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp) = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    eax = MEM32(esi + 0x18D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0055862E; /* je: equal / zero */

loc_0055861B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40 (32-bit) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    if (CMP_GE(_fas, _fbs)) goto loc_00558C44; /* jge: greater or equal (signed >=) */

loc_0055862A: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_0055862E: ;
    fp_push(MEMF(esi + 0x18C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B4)); /* fsub dword ptr [esi + 0x18b4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B4)); /* fadd dword ptr [esi + 0x18b4] */
    fp_push(MEMF(esi + 0x18C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B8)); /* fsub dword ptr [esi + 0x18b8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B8)); /* fadd dword ptr [esi + 0x18b8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18BC)); /* fsub dword ptr [esi + 0x18bc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18BC)); /* fadd dword ptr [esi + 0x18bc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C0)); /* fsub dword ptr [esi + 0x18c0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C0)); /* fadd dword ptr [esi + 0x18c0] */

loc_0055868E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00558699u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558699: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x005586A8u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005586A8: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x005586BCu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005586BC: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x005586D3u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005586D3: ;
    edx = ZX8(LO8(eax));
    eax = edi + 1;
    MEM32(esp + 0x14) = eax;
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x30) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ecx = MEM32(esi + 0x18D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0055870D; /* je: equal / zero */

loc_005586FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    if (CMP_GE(_fas, _fbs)) goto loc_00558CB3; /* jge: greater or equal (signed >=) */

loc_00558709: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_0055870D: ;
    fp_push(MEMF(esi + 0x18C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B4)); /* fsub dword ptr [esi + 0x18b4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B4)); /* fadd dword ptr [esi + 0x18b4] */
    fp_push(MEMF(esi + 0x18C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B8)); /* fsub dword ptr [esi + 0x18b8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B8)); /* fadd dword ptr [esi + 0x18b8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18BC)); /* fsub dword ptr [esi + 0x18bc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18BC)); /* fadd dword ptr [esi + 0x18bc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C0)); /* fsub dword ptr [esi + 0x18c0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C0)); /* fadd dword ptr [esi + 0x18c0] */

loc_0055876D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00558778u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558778: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x00558787u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558787: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0055879Bu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0055879B: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    eax = ZX8(LO8(eax));
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x005587B2u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005587B2: ;
    ecx = ZX8(LO8(eax));
    eax = edi + 2;
    MEM32(esp + 0x14) = eax;
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x60) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ecx = MEM32(esi + 0x18D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_005587EC; /* je: equal / zero */

loc_005587D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    if (CMP_GE(_fas, _fbs)) goto loc_00558D22; /* jge: greater or equal (signed >=) */

loc_005587E8: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_005587EC: ;
    fp_push(MEMF(esi + 0x18C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B4)); /* fsub dword ptr [esi + 0x18b4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B4)); /* fadd dword ptr [esi + 0x18b4] */
    fp_push(MEMF(esi + 0x18C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B8)); /* fsub dword ptr [esi + 0x18b8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B8)); /* fadd dword ptr [esi + 0x18b8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18BC)); /* fsub dword ptr [esi + 0x18bc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18BC)); /* fadd dword ptr [esi + 0x18bc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C0)); /* fsub dword ptr [esi + 0x18c0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C0)); /* fadd dword ptr [esi + 0x18c0] */

loc_0055884C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00558857u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558857: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x00558866u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558866: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0055887Au); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0055887A: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00558891u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558891: ;
    eax = ZX8(LO8(eax));
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = edi + 3;
    MEM32(esp + 0x14) = eax;
    MEM32(ebp + 0x90) = ebx;
    ecx = MEM32(esi + 0x18D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_005588CE; /* je: equal / zero */

loc_005588BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    if (CMP_GE(_fas, _fbs)) goto loc_00558D91; /* jge: greater or equal (signed >=) */

loc_005588CA: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_005588CE: ;
    fp_push(MEMF(esi + 0x18C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B4)); /* fsub dword ptr [esi + 0x18b4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B4)); /* fadd dword ptr [esi + 0x18b4] */
    fp_push(MEMF(esi + 0x18C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B8)); /* fsub dword ptr [esi + 0x18b8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B8)); /* fadd dword ptr [esi + 0x18b8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18BC)); /* fsub dword ptr [esi + 0x18bc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18BC)); /* fadd dword ptr [esi + 0x18bc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C0)); /* fsub dword ptr [esi + 0x18c0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C0)); /* fadd dword ptr [esi + 0x18c0] */

loc_0055892E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00558939u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558939: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x00558948u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558948: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0055895Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0055895C: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00558973u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558973: ;
    edx = ZX8(LO8(eax));
    eax = edi + 4;
    MEM32(esp + 0x14) = eax;
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0xC0) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ecx = MEM32(esi + 0x18D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_005589B0; /* je: equal / zero */

loc_0055899D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    if (CMP_GE(_fas, _fbs)) goto loc_00558E00; /* jge: greater or equal (signed >=) */

loc_005589AC: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_005589B0: ;
    fp_push(MEMF(esi + 0x18C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B4)); /* fsub dword ptr [esi + 0x18b4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B4)); /* fadd dword ptr [esi + 0x18b4] */
    fp_push(MEMF(esi + 0x18C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B8)); /* fsub dword ptr [esi + 0x18b8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B8)); /* fadd dword ptr [esi + 0x18b8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18BC)); /* fsub dword ptr [esi + 0x18bc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18BC)); /* fadd dword ptr [esi + 0x18bc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C0)); /* fsub dword ptr [esi + 0x18c0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C0)); /* fadd dword ptr [esi + 0x18c0] */

loc_00558A10: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00558A1Bu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558A1B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x00558A2Au); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558A2A: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00558A3Eu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558A3E: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    eax = ZX8(LO8(eax));
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00558A55u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558A55: ;
    ecx = ZX8(LO8(eax));
    eax = edi + 5;
    MEM32(esp + 0x14) = eax;
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0xF0) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ecx = MEM32(esi + 0x18D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00558A92; /* je: equal / zero */

loc_00558A7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    if (CMP_GE(_fas, _fbs)) goto loc_00558E6F; /* jge: greater or equal (signed >=) */

loc_00558A8E: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_00558A92: ;
    fp_push(MEMF(esi + 0x18C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B4)); /* fsub dword ptr [esi + 0x18b4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B4)); /* fadd dword ptr [esi + 0x18b4] */
    fp_push(MEMF(esi + 0x18C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18B8)); /* fsub dword ptr [esi + 0x18b8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18B8)); /* fadd dword ptr [esi + 0x18b8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18BC)); /* fsub dword ptr [esi + 0x18bc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18BC)); /* fadd dword ptr [esi + 0x18bc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C0)); /* fsub dword ptr [esi + 0x18c0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C0)); /* fadd dword ptr [esi + 0x18c0] */

loc_00558AF2: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00558AFDu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558AFD: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x00558B0Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558B0C: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00558B20u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558B20: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00558B37u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00558B37: ;
    eax = ZX8(LO8(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x120) = ebx;
    ecx = edi + -2;
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x180;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00558445; /* jl: less (signed <) */

loc_00558B5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00558B66: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18B4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C4)); /* fsub dword ptr [esi + 0x18c4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C4)); /* fadd dword ptr [esi + 0x18c4] */
    fp_push(MEMF(esi + 0x18B8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C8)); /* fsub dword ptr [esi + 0x18c8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C8)); /* fadd dword ptr [esi + 0x18c8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18BC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18CC)); /* fsub dword ptr [esi + 0x18cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18CC)); /* fadd dword ptr [esi + 0x18cc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18D0)); /* fsub dword ptr [esi + 0x18d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18D0)); /* fadd dword ptr [esi + 0x18d0] */
    goto loc_005584D7;

loc_00558BD5: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18B4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C4)); /* fsub dword ptr [esi + 0x18c4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C4)); /* fadd dword ptr [esi + 0x18c4] */
    fp_push(MEMF(esi + 0x18B8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C8)); /* fsub dword ptr [esi + 0x18c8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C8)); /* fadd dword ptr [esi + 0x18c8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18BC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18CC)); /* fsub dword ptr [esi + 0x18cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18CC)); /* fadd dword ptr [esi + 0x18cc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18D0)); /* fsub dword ptr [esi + 0x18d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18D0)); /* fadd dword ptr [esi + 0x18d0] */
    goto loc_005585B6;

loc_00558C44: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18B4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C4)); /* fsub dword ptr [esi + 0x18c4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C4)); /* fadd dword ptr [esi + 0x18c4] */
    fp_push(MEMF(esi + 0x18B8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C8)); /* fsub dword ptr [esi + 0x18c8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C8)); /* fadd dword ptr [esi + 0x18c8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18BC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18CC)); /* fsub dword ptr [esi + 0x18cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18CC)); /* fadd dword ptr [esi + 0x18cc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18D0)); /* fsub dword ptr [esi + 0x18d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18D0)); /* fadd dword ptr [esi + 0x18d0] */
    goto loc_0055868E;

loc_00558CB3: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18B4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C4)); /* fsub dword ptr [esi + 0x18c4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C4)); /* fadd dword ptr [esi + 0x18c4] */
    fp_push(MEMF(esi + 0x18B8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C8)); /* fsub dword ptr [esi + 0x18c8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C8)); /* fadd dword ptr [esi + 0x18c8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18BC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18CC)); /* fsub dword ptr [esi + 0x18cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18CC)); /* fadd dword ptr [esi + 0x18cc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18D0)); /* fsub dword ptr [esi + 0x18d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18D0)); /* fadd dword ptr [esi + 0x18d0] */
    goto loc_0055876D;

loc_00558D22: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18B4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C4)); /* fsub dword ptr [esi + 0x18c4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C4)); /* fadd dword ptr [esi + 0x18c4] */
    fp_push(MEMF(esi + 0x18B8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C8)); /* fsub dword ptr [esi + 0x18c8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C8)); /* fadd dword ptr [esi + 0x18c8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18BC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18CC)); /* fsub dword ptr [esi + 0x18cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18CC)); /* fadd dword ptr [esi + 0x18cc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18D0)); /* fsub dword ptr [esi + 0x18d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18D0)); /* fadd dword ptr [esi + 0x18d0] */
    goto loc_0055884C;

loc_00558D91: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18B4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C4)); /* fsub dword ptr [esi + 0x18c4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C4)); /* fadd dword ptr [esi + 0x18c4] */
    fp_push(MEMF(esi + 0x18B8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C8)); /* fsub dword ptr [esi + 0x18c8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C8)); /* fadd dword ptr [esi + 0x18c8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18BC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18CC)); /* fsub dword ptr [esi + 0x18cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18CC)); /* fadd dword ptr [esi + 0x18cc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18D0)); /* fsub dword ptr [esi + 0x18d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18D0)); /* fadd dword ptr [esi + 0x18d0] */
    goto loc_0055892E;

loc_00558E00: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18B4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C4)); /* fsub dword ptr [esi + 0x18c4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C4)); /* fadd dword ptr [esi + 0x18c4] */
    fp_push(MEMF(esi + 0x18B8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C8)); /* fsub dword ptr [esi + 0x18c8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C8)); /* fadd dword ptr [esi + 0x18c8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18BC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18CC)); /* fsub dword ptr [esi + 0x18cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18CC)); /* fadd dword ptr [esi + 0x18cc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18D0)); /* fsub dword ptr [esi + 0x18d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18D0)); /* fadd dword ptr [esi + 0x18d0] */
    goto loc_00558A10;

loc_00558E6F: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18B4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C4)); /* fsub dword ptr [esi + 0x18c4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C4)); /* fadd dword ptr [esi + 0x18c4] */
    fp_push(MEMF(esi + 0x18B8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18C8)); /* fsub dword ptr [esi + 0x18c8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C8)); /* fadd dword ptr [esi + 0x18c8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18BC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18CC)); /* fsub dword ptr [esi + 0x18cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18CC)); /* fadd dword ptr [esi + 0x18cc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18D0)); /* fsub dword ptr [esi + 0x18d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18D0)); /* fadd dword ptr [esi + 0x18d0] */
    goto loc_00558AF2;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00558EE0
 * Original: 0x00558EE0 - 0x00558FA2 (194 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558EE0(void)
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

loc_00558EE0: ;
    PUSH32(esp, esi);
    eax = ecx + 0x20;
    esi = 0x10;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00558EF0;

    /* nop */

loc_00558EF0: ;
    fp_push(MEMF(ecx + 0x18B0)); /* fld float */
    MEM32(eax + -8) = edx;
    MEMF(eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax) = edx;
    fp_push(MEMF(ecx + 0x18B0)); /* fld float */
    MEM32(eax + 0x28) = edx;
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x30) = edx;
    fp_push(MEMF(ecx + 0x18B0)); /* fld float */
    MEM32(eax + 0x58) = edx;
    MEMF(eax + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x60) = edx;
    fp_push(MEMF(ecx + 0x18B0)); /* fld float */
    MEM32(eax + 0x88) = edx;
    MEMF(eax + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x90) = edx;
    fp_push(MEMF(ecx + 0x18B0)); /* fld float */
    MEM32(eax + 0xB8) = edx;
    MEMF(eax + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC0) = edx;
    fp_push(MEMF(ecx + 0x18B0)); /* fld float */
    MEM32(eax + 0xE8) = edx;
    MEMF(eax + 0xEC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xF0) = edx;
    fp_push(MEMF(ecx + 0x18B0)); /* fld float */
    MEM32(eax + 0x118) = edx;
    MEMF(eax + 0x11C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x120) = edx;
    fp_push(MEMF(ecx + 0x18B0)); /* fld float */
    MEM32(eax + 0x148) = edx;
    MEMF(eax + 0x14C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x150) = edx;
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x180;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00558EF0; /* jne: not equal / not zero */

loc_00558FA0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00558FB0
 * Original: 0x00558FB0 - 0x00558FE2 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558FB0: ;
    eax = ecx + 0x2C;
    edx = 0x80;
    PUSH32(esp, esi);
    /* nop */

loc_00558FC0: ;
    esi = MEM32(ecx + 0x187C);
    MEM32(eax + -8) = esi;
    esi = MEM32(ecx + 0x1880);
    MEM32(eax + -4) = esi;
    esi = MEM32(ecx + 0x1884);
    MEM32(eax) = esi;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00558FC0; /* jne: not equal / not zero */

loc_00558FE0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00558FF0
 * Original: 0x00558FF0 - 0x0055903E (78 bytes, 23 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00558FF0(void)
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

loc_00558FF0: ;
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = edx;
    eax = ecx + 0x30;
    /* nop */

loc_00559000: ;
    fp_push((double)SMEM32(esp)); /* fild */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    MEM32(esp) = edx;
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18D4)); /* fmul dword ptr [ecx + 0x18d4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x1850)); /* fmul dword ptr [ecx + 0x1850] */
    MEMF(eax + -48) = (float)fp_top(); /* fst */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEMF(eax + -44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + -48)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(eax + -40) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00559000; /* jl: less (signed <) */

loc_0055903C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00559040
 * Original: 0x00559040 - 0x0055934B (779 bytes, 247 insns)
 * Category: game_physics
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559040: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0x1914;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64F868);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00559061u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00559061: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x1858;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64F85C);
    PUSH32(esp, 8);
    ecx = edi;
    MEM16(eax + 0xA) = 0x28;
    PUSH32(esp, 0x00559080u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00559080: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x18FC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64F850);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00559099u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00559099: ;
    eax = MEM32(esi + 0x1890);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esi + 0x18A4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64F844);
    PUSH32(esp, 7);
    ecx = edi;
    PUSH32(esp, 0x005590B7u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005590B7: ;
    edx = MEM32(esi + 0x1890);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    eax = esi + 0x18AC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64F830);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005590D5u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005590D5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x1850;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64F828);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005590EEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005590EE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x1854;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64F820);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00559107u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00559107: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x1864;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64F814);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x00559120u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00559120: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x1870;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64F808);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x00559139u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00559139: ;
    edx = MEM32(esi + 0x189C);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    eax = esi + 0x187C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64F7F8);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x00559157u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00559157: ;
    ecx = MEM32(esi + 0x1898);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    edx = esi + 0x18B0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64F7F0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00559175u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00559175: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x1888;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64F7DC);
    PUSH32(esp, 4);
    ecx = edi;
    PUSH32(esp, 0x0055918Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0055918E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x188A;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64F7CC);
    PUSH32(esp, 4);
    ecx = edi;
    PUSH32(esp, 0x005591A7u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005591A7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x1904;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64F7C0);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x005591C0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005591C0: ;
    eax = MEM32(esi + 0x1894);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esi + 0x18B4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64F7B4);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x005591DEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005591DE: ;
    edx = MEM32(esi + 0x1894);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    eax = esi + 0x18C4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64F7A8);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x005591FCu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005591FC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x1910;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64F794);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x00559215u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00559215: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x190C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64F78C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0055922Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0055922E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x18DC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62FFF8);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x00559247u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00559247: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x18E0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64F780);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00559260u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00559260: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x18E4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64F778);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x00559279u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00559279: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x18F0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64F770);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x00559292u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00559292: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x193C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64F764);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x005592ABu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005592AB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x18D8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64F758);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x005592C4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005592C4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x184C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64F74C);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x005592DDu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005592DD: ;
    ecx = MEM32(esi + 0x18A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    edx = esi + 0x18D4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64F740);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005592FBu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005592FB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x1900;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64F734);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00559314u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00559314: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x1940;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64F728);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0055932Du); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0055932D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1944) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1944;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x64F718);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00559346u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00559346: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00559350
 * Original: 0x00559350 - 0x00559356 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559350(void)
{

loc_00559350: ;
    eax = 0x6C50F0;
    esp += 4; return; /* ret */

}

/**
 * sub_00559360
 * Original: 0x00559360 - 0x005595E5 (645 bytes, 149 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559360: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00559369u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_00559369: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x64F6C4;
    MEM8(esi + 0x184C) = LO8(ebx);
    MEM8(esi + 0x184D) = LO8(ebx);
    MEM32(esi + 0x1854) = ebx;
    eax = 0x3F800000;
    MEM32(esi + 0x1850) = eax;
    MEM32(esi + 0x1858) = ebx;
    MEM32(esi + 0x185C) = ebx;
    MEM32(esi + 0x1860) = ebx;
    MEM32(esi + 0x1864) = ebx;
    MEM32(esi + 0x1868) = ebx;
    MEM32(esi + 0x186C) = ebx;
    MEM32(esi + 0x1870) = ebx;
    MEM32(esi + 0x1874) = ebx;
    MEM32(esi + 0x1878) = ebx;
    MEM32(esi + 0x187C) = ebx;
    MEM32(esi + 0x1880) = ebx;
    MEM32(esi + 0x1884) = ebx;
    MEM16(esi + 0x1888) = LO16(ebx);
    MEM16(esi + 0x188A) = LO16(ebx);
    MEM16(esi + 0x188C) = 1;
    MEM16(esi + 0x188E) = 1;
    MEM32(esi + 0x1910) = ebx;
    MEM8(esi + 0x1914) = LO8(ebx);
    MEM32(esi + 0x193C) = ebx;
    MEM8(esi + 0x1940) = LO8(ebx);
    MEM8(esi + 0x1948) = LO8(ebx);
    MEM8(esi + 0x1904) = LO8(ebx);
    MEM32(esi + 0x18A4) = eax;
    MEM32(esi + 0x18A8) = eax;
    MEM32(esi + 0x18AC) = eax;
    MEM32(esi + 0x18B0) = 0xC11CCCCDu;
    MEM32(esi + 0x18C0) = eax;
    MEM32(esi + 0x18BC) = eax;
    MEM32(esi + 0x18B8) = eax;
    MEM32(esi + 0x18B4) = eax;
    MEM32(esi + 0x18D0) = eax;
    MEM32(esi + 0x18CC) = eax;
    MEM32(esi + 0x18C8) = eax;
    MEM32(esi + 0x18C4) = eax;
    MEM32(esi + 0x18D4) = ebx;
    MEM32(esi + 0x18DC) = ebx;
    MEM32(esi + 0x18E0) = 0x41F00000;
    MEM32(esi + 0x18EC) = ebx;
    MEM32(esi + 0x18E8) = ebx;
    MEM32(esi + 0x18E4) = ebx;
    PUSH32(esp, 0x40);
    eax = esi + 0x180C;
    MEM32(esi + 0x18F8) = ebx;
    MEM32(esi + 0x18F4) = ebx;
    MEM32(esi + 0x18F0) = ebx;
    PUSH32(esp, 0x62DF21);
    PUSH32(esp, eax);
    MEM32(esi + 0x18FC) = ebx;
    MEM32(esi + 0x1900) = ebx;
    PUSH32(esp, 0x005594BFu); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_005594BF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi + 0x1908) = ebx;
    MEM32(esi + 0x1944) = ebx;
    MEM32(esi + 0x18D4) = ebx;
    MEM32(esi + 0x18D8) = ebx;
    MEM32(esi + 0x190C) = ebx;
    MEM32(esi + 0x193C) = 1;
    MEM32(esi + 0x1950) = ebx;
    MEM32(esi + 0x194C) = ebx;
    PUSH32(esp, 0x005594FDu); RECOMP_ABI_CALL(0x00557FA0u, sub_00557FA0); /* call 0x00557FA0 */

loc_005594FD: ;
    PUSH32(esp, 0x71);
    PUSH32(esp, 0x64F6E4);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0055950Bu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0055950B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559521; /* je: equal / zero */

loc_00559512: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x558200);
    ecx = eax;
    PUSH32(esp, 0x0055951Fu); RECOMP_ABI_CALL(0x00614390u, sub_00614390); /* call 0x00614390 */

loc_0055951F: ;
    goto loc_00559523;

loc_00559521: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00559523: ;
    PUSH32(esp, 0x72);
    PUSH32(esp, 0x64F6E4);
    PUSH32(esp, 0x10);
    MEM32(esi + 0x1890) = eax;
    PUSH32(esp, 0x00559537u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00559537: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055954D; /* je: equal / zero */

loc_0055953E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x558430);
    ecx = eax;
    PUSH32(esp, 0x0055954Bu); RECOMP_ABI_CALL(0x00614390u, sub_00614390); /* call 0x00614390 */

loc_0055954B: ;
    goto loc_0055954F;

loc_0055954D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055954F: ;
    PUSH32(esp, 0x73);
    PUSH32(esp, 0x64F6E4);
    PUSH32(esp, 0x10);
    MEM32(esi + 0x1894) = eax;
    PUSH32(esp, 0x00559563u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00559563: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559579; /* je: equal / zero */

loc_0055956A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x558EE0);
    ecx = eax;
    PUSH32(esp, 0x00559577u); RECOMP_ABI_CALL(0x00614390u, sub_00614390); /* call 0x00614390 */

loc_00559577: ;
    goto loc_0055957B;

loc_00559579: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055957B: ;
    PUSH32(esp, 0x74);
    PUSH32(esp, 0x64F6E4);
    PUSH32(esp, 0x10);
    MEM32(esi + 0x1898) = eax;
    PUSH32(esp, 0x0055958Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0055958F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005595A5; /* je: equal / zero */

loc_00559596: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x558FB0);
    ecx = eax;
    PUSH32(esp, 0x005595A3u); RECOMP_ABI_CALL(0x00614390u, sub_00614390); /* call 0x00614390 */

loc_005595A3: ;
    goto loc_005595A7;

loc_005595A5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005595A7: ;
    PUSH32(esp, 0x75);
    PUSH32(esp, 0x64F6E4);
    PUSH32(esp, 0x10);
    MEM32(esi + 0x189C) = eax;
    PUSH32(esp, 0x005595BBu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005595BB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005595DA; /* je: equal / zero */

loc_005595C2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x558FF0);
    ecx = eax;
    PUSH32(esp, 0x005595CFu); RECOMP_ABI_CALL(0x00614390u, sub_00614390); /* call 0x00614390 */

loc_005595CF: ;
    MEM32(esi + 0x18A0) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_005595DA: ;
    MEM32(esi + 0x18A0) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005595F0
 * Original: 0x005595F0 - 0x0055960E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005595F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005595F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005595F8u); RECOMP_ABI_CALL(0x00557D50u, sub_00557D50); /* call 0x00557D50 */

loc_005595F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00559608; /* je: equal / zero */

loc_005595FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00559605u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00559605: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00559608: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00559610
 * Original: 0x00559610 - 0x00559660 (80 bytes, 21 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559610: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559631; /* je: equal / zero */

loc_0055961C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00559626u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_00559626: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1950) = eax;
    goto loc_0055963B;

loc_00559631: ;
    MEM32(esi + 0x1950) = 0;

loc_0055963B: ;
    SET_LO16(ecx, ZX8(MEM8(esp + 0x10)));
    SET_LO16(eax, ZX8(MEM8(esp + 0xC)));
    MEM16(esi + 0x188E) = LO16(ecx);
    ecx = esi;
    MEM16(esi + 0x188C) = LO16(eax);
    PUSH32(esp, 0x0055965Cu); RECOMP_ABI_CALL(0x00557DF0u, sub_00557DF0); /* call 0x00557DF0 */

loc_0055965C: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00559660
 * Original: 0x00559660 - 0x0055968C (44 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559660(void)
{

loc_00559660: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, ZX8(MEM8(esp + 8)));
    MEM32(ecx + 0x1950) = eax;
    SET_LO16(eax, ZX8(MEM8(esp + 0xC)));
    MEM16(ecx + 0x188C) = LO16(edx);
    MEM16(ecx + 0x188E) = LO16(eax);
    PUSH32(esp, 0x00559689u); RECOMP_ABI_CALL(0x00557DF0u, sub_00557DF0); /* call 0x00557DF0 */

loc_00559689: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00559690
 * Original: 0x00559690 - 0x00559734 (164 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559690: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = 0x6C50F0;
    PUSH32(esp, 0x005596A0u); RECOMP_ABI_CALL(0x006124A0u, sub_006124A0); /* call 0x006124A0 */

loc_005596A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005596A9; /* jne: not equal / not zero */

loc_005596A5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_005596A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005596B5; /* je: equal / zero */

loc_005596AD: ;
    MEM32(eax + 0x1908) = MEM32(eax + 0x1908) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x1908)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_005596B5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x11A);
    PUSH32(esp, 0x64F6E4);
    PUSH32(esp, 0x1954);
    PUSH32(esp, 0x005596CAu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005596CA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005596DC; /* je: equal / zero */

loc_005596D1: ;
    ecx = eax;
    PUSH32(esp, 0x005596D8u); RECOMP_ABI_CALL(0x00559360u, sub_00559360); /* call 0x00559360 */

loc_005596D8: ;
    esi = eax;
    goto loc_005596DE;

loc_005596DC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005596DE: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x005596E6u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_005596E6: ;
    ecx = esi;
    PUSH32(esp, 0x005596EDu); RECOMP_ABI_CALL(0x005E3320u, sub_005E3320); /* call 0x005E3320 */

loc_005596ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x188E));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x188C));
    edx = esi + 0x1914;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0055970Fu); RECOMP_ABI_CALL(0x00559610u, sub_00559610); /* call 0x00559610 */

loc_0055970F: ;
    ecx = esi;
    PUSH32(esp, 0x00559716u); RECOMP_ABI_CALL(0x00557FA0u, sub_00557FA0); /* call 0x00557FA0 */

loc_00559716: ;
    ecx = esi;
    PUSH32(esp, 0x0055971Du); RECOMP_ABI_CALL(0x00557F30u, sub_00557F30); /* call 0x00557F30 */

loc_0055971D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x6C50F0;
    PUSH32(esp, 0x00559729u); RECOMP_ABI_CALL(0x00612150u, sub_00612150); /* call 0x00612150 */

loc_00559729: ;
    MEM32(esi + 0x1908) = MEM32(esi + 0x1908) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1908)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00559740
 * Original: 0x00559740 - 0x0055995E (542 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559740(void)
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

loc_00559740: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    PUSH32(esp, ebx);
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0055975D; /* jge: greater or equal (signed >=) */

loc_00559757: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_0055975D: ;
    edx = ecx;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0055977A; /* jge: greater or equal (signed >=) */

loc_00559774: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_0055977A: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00559797; /* jge: greater or equal (signed >=) */

loc_00559791: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00559797: ;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_005597AF; /* jge: greater or equal (signed >=) */

loc_005597A9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_005597AF: ;
    ecx = eax;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_005597D0; /* jge: greater or equal (signed >=) */

loc_005597CA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_005597D0: ;
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    edx = eax;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_005597F9; /* jge: greater or equal (signed >=) */

loc_005597F3: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_005597F9: ;
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    ecx = eax;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    MEM32(esp + 0x18) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00559823; /* jge: greater or equal (signed >=) */

loc_0055981D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00559823: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    MEM32(esp + 0x18) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00559848; /* jge: greater or equal (signed >=) */

loc_00559842: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00559848: ;
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D528)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d528] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00559872; /* jne: not equal / not zero */

loc_0055986B: ;
    ebx = 0xFF;
    goto loc_00559896;

loc_00559872: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00559887; /* jp: parity */

loc_00559883: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00559896;

loc_00559887: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00559891u); RECOMP_ABI_CALL(0x0057BF10u, sub_0057BF10); /* call 0x0057BF10 */

loc_00559891: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_00559896: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D528)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d528] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005598AE; /* jne: not equal / not zero */

loc_005598A7: ;
    edi = 0xFF;
    goto loc_005598D2;

loc_005598AE: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005598C3; /* jp: parity */

loc_005598BF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005598D2;

loc_005598C3: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005598CDu); RECOMP_ABI_CALL(0x0057BF10u, sub_0057BF10); /* call 0x0057BF10 */

loc_005598CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_005598D2: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D528)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d528] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005598EA; /* jne: not equal / not zero */

loc_005598E3: ;
    esi = 0xFF;
    goto loc_0055990E;

loc_005598EA: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005598FF; /* jp: parity */

loc_005598FB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055990E;

loc_005598FF: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00559909u); RECOMP_ABI_CALL(0x0057BF10u, sub_0057BF10); /* call 0x0057BF10 */

loc_00559909: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_0055990E: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D528)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d528] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00559926; /* jne: not equal / not zero */

loc_0055991F: ;
    eax = 0xFF;
    goto loc_00559948;

loc_00559926: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0055993B; /* jp: parity */

loc_00559937: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00559948;

loc_0055993B: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00559945u); RECOMP_ABI_CALL(0x0057BF10u, sub_0057BF10); /* call 0x0057BF10 */

loc_00559945: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00559948: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
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
 * sub_00559960
 * Original: 0x00559960 - 0x00559967 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559960(void)
{

loc_00559960: ;
    MEM32(ecx) = 0x64F874;
    esp += 4; return; /* ret */

}

/**
 * sub_00559970
 * Original: 0x00559970 - 0x005599A6 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559970: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x18) = 0x3F800000;
    MEM32(eax + 0x1C) = 0x3FC00000;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = edx;
    MEM8(eax + 0x34) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005599B0
 * Original: 0x005599B0 - 0x005599DF (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005599B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005599B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi) = 0x64F884;
    PUSH32(esp, 0x005599C2u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005599C2: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005599CBu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005599CB: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005599D4u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005599D4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00559960(); return; /* tail jmp 0x00559960 */

}

/**
 * sub_005599E0
 * Original: 0x005599E0 - 0x00559ED8 (1272 bytes, 380 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005599E0(void)
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

loc_005599E0: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00559ED0; /* je: equal / zero */

loc_005599F8: ;
    eax = MEM32(0x8583E8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x00559A0Au); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_00559A0A: ;
    SET_LO8(ecx, MEM8(0x858404));
    PUSH32(esp, esi);
    MEM8(esp + 0x40) = LO8(ecx);
    PUSH32(esp, 0x00559A1Au); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00559A1A: ;
    edx = MEM32(0x8583E4);
    PUSH32(esp, esi);
    MEM32(esp + 0x48) = edx;
    PUSH32(esp, 0x00559A2Au); RECOMP_ABI_CALL(0x005EE8C0u, sub_005EE8C0); /* call 0x005EE8C0 */

loc_00559A2A: ;
    SET_LO8(eax, MEM8(0x674FCA));
    PUSH32(esp, esi);
    MEM8(esp + 0x50) = LO8(eax);
    PUSH32(esp, 0x00559A39u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_00559A39: ;
    ecx = MEM32(0x858430);
    PUSH32(esp, 1);
    MEM32(esp + 0x58) = ecx;
    PUSH32(esp, 0x00559A4Au); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_00559A4A: ;
    SET_LO8(edx, MEM8(0x85843E));
    PUSH32(esp, 1);
    MEM8(esp + 0x60) = LO8(edx);
    PUSH32(esp, 0x00559A5Bu); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_00559A5B: ;
    eax = MEM32(0x858438);
    PUSH32(esp, 5);
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, 0x00559A6Bu); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_00559A6B: ;
    SET_LO8(ecx, MEM8(0x8583E0));
    PUSH32(esp, esi);
    MEM8(esp + 0x70) = LO8(ecx);
    PUSH32(esp, 0x00559A7Bu); RECOMP_ABI_CALL(0x005EE520u, sub_005EE520); /* call 0x005EE520 */

loc_00559A7B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00559A81u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_00559A81: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00559A88u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_00559A88: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00559A8Fu); RECOMP_ABI_CALL(0x005EE3E0u, sub_005EE3E0); /* call 0x005EE3E0 */

loc_00559A8F: ;
    PUSH32(esp, 0x674FD0);
    PUSH32(esp, 0x00559A99u); RECOMP_ABI_CALL(0x005EDB00u, sub_005EDB00); /* call 0x005EDB00 */

loc_00559A99: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00559AA4u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00559AA4: ;
    edx = MEM32(ebp + 0x2C);
    PUSH32(esp, edx);
    MEM32(esp + 0x54) = esi;
    PUSH32(esp, 0x00559AB1u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_00559AB1: ;
    eax = MEM32(ebp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00559ABAu); RECOMP_ABI_CALL(0x0057C1D0u, sub_0057C1D0); /* call 0x0057C1D0 */

loc_00559ABA: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00559AC8u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00559AC8: ;
    eax = MEM32(ebp + 0x18);
    edi = eax;
    ebx = 0x20;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00559AE7; /* jl: less (signed <) */

loc_00559AE1: ;
    MEM32(esp + 0x10) = ebx;
    edi = ebx;

loc_00559AE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559CA7; /* je: equal / zero */

loc_00559AEF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00559AF5u); RECOMP_ABI_CALL(0x0057BEF0u, sub_0057BEF0); /* call 0x0057BEF0 */

loc_00559AF5: ;
    ecx = MEM32(ebp + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(esp + 0x1C) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_00559CA2; /* jle: less or equal (signed <=) */

loc_00559B09: ;
    /* nop */

loc_00559B10: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + edx * 4);
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00559C90; /* jp: parity */

loc_00559B2A: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00559B64; /* jl: less (signed <) */

loc_00559B30: ;
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00559B46; /* jl: less (signed <) */

loc_00559B3E: ;
    MEM32(esp + 0x10) = ebx;
    edi = ebx;
    goto loc_00559B4E;

loc_00559B46: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559CA0; /* je: equal / zero */

loc_00559B4E: ;
    PUSH32(esp, 0x00559B53u); RECOMP_ABI_CALL(0x0057C1C0u, sub_0057C1C0); /* call 0x0057C1C0 */

loc_00559B53: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00559B59u); RECOMP_ABI_CALL(0x0057BEF0u, sub_0057BEF0); /* call 0x0057BEF0 */

loc_00559B59: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = 0;

loc_00559B64: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648168)); /* fmul dword ptr [0x648168] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00559B76u); RECOMP_ABI_CALL(0x0057BF10u, sub_0057BF10); /* call 0x0057BF10 */

loc_00559B76: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    MEM32(esp + 0x34) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648168)); /* fmul dword ptr [0x648168] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00559B9Au); RECOMP_ABI_CALL(0x0057BF10u, sub_0057BF10); /* call 0x0057BF10 */

loc_00559B9A: ;
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00559BAD; /* jl: less (signed <) */

loc_00559BA7: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00559BAD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00559BB7; /* jge: greater or equal (signed >=) */

loc_00559BB1: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00559BB7: ;
    eax = MEM32(esi + 0x24);
    SET_LO8(ecx, MEM8(eax + 0x1904));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559C21; /* je: equal / zero */

loc_00559BC4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x188A));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1888);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00559C21; /* je: equal / zero */

loc_00559BE1: ;
    edx = ZX8(MEM8(esi + 0x34));
    MEM32(esp + 0x24) = edx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_push(MEMF(0x8602E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6306E8)); /* fmul dword ptr [0x6306e8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    PUSH32(esp, 0x00559C00u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00559C00: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x28);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00559C25; /* jle: less or equal (signed <=) */

loc_00559C0B: ;
    ebp = (uint32_t)(int32_t)SMEM16(esp + 0x2C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x20);
    edi = edx;
    goto loc_00559C25;

loc_00559C21: ;
    edi = ZX8(MEM8(esi + 0x34));

loc_00559C25: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, 0x00559C39u); RECOMP_ABI_CALL(0x00559740u, sub_00559740); /* call 0x00559740 */

loc_00559C39: ;
    edx = MEM32(esp + 0x38);
    ecx = MEM32(esi + 0x24);
    edx = edx + edx * 2;
    PUSH32(esp, eax);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edx + ecx + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = ebx + ebx * 2 + 3;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edx + ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00559C6Eu); RECOMP_ABI_CALL(0x0057BF30u, sub_0057BF30); /* call 0x0057BF30 */

loc_00559C6E: ;
    ecx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x3C);
    edi = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x44);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    ebx = 0x20;

loc_00559C90: ;
    ecx = MEM32(ebp + 0x18);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x1C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00559B10; /* jl: less (signed <) */

loc_00559CA0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00559CA2: ;
    PUSH32(esp, 0x00559CA7u); RECOMP_ABI_CALL(0x0057C1C0u, sub_0057C1C0); /* call 0x0057C1C0 */

loc_00559CA7: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x00559CB7u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00559CB7: ;
    eax = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00559E7B; /* je: equal / zero */

loc_00559CC9: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00559CD9; /* jl: less (signed <) */

loc_00559CD3: ;
    MEM32(esp + 0x10) = ebx;
    edi = ebx;

loc_00559CD9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00559CDFu); RECOMP_ABI_CALL(0x0057BEF0u, sub_0057BEF0); /* call 0x0057BEF0 */

loc_00559CDF: ;
    ecx = MEM32(ebp + 0x1C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(esp + 0x1C) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_00559E76; /* jle: less or equal (signed <=) */

loc_00559CF3: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(eax + edx * 4);
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00559E66; /* jp: parity */

loc_00559D0D: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00559D47; /* jl: less (signed <) */

loc_00559D13: ;
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00559D29; /* jl: less (signed <) */

loc_00559D21: ;
    MEM32(esp + 0x10) = ebx;
    edi = ebx;
    goto loc_00559D31;

loc_00559D29: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559E76; /* je: equal / zero */

loc_00559D31: ;
    PUSH32(esp, 0x00559D36u); RECOMP_ABI_CALL(0x0057C1C0u, sub_0057C1C0); /* call 0x0057C1C0 */

loc_00559D36: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00559D3Cu); RECOMP_ABI_CALL(0x0057BEF0u, sub_0057BEF0); /* call 0x0057BEF0 */

loc_00559D3C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = 0;

loc_00559D47: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648168)); /* fmul dword ptr [0x648168] */
    PUSH32(esp, 0x00559D55u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00559D55: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    ebp = eax;
    MEM32(esp + 0x24) = ebp;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648168)); /* fmul dword ptr [0x648168] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    PUSH32(esp, 0x00559D72u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00559D72: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00559D82; /* jl: less (signed <) */

loc_00559D7C: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00559D82: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00559D8C; /* jge: greater or equal (signed >=) */

loc_00559D86: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00559D8C: ;
    eax = MEM32(esi + 0x24);
    SET_LO8(ecx, MEM8(eax + 0x1904));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559DF6; /* je: equal / zero */

loc_00559D99: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x188A));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1888);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00559DF6; /* je: equal / zero */

loc_00559DB6: ;
    ecx = ZX8(MEM8(esi + 0x34));
    MEM32(esp + 0x30) = ecx;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    fp_push(MEMF(0x8602E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6306E8)); /* fmul dword ptr [0x6306e8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    PUSH32(esp, 0x00559DD5u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00559DD5: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x2C);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00559DFA; /* jle: less or equal (signed <=) */

loc_00559DE0: ;
    ebp = (uint32_t)(int32_t)SMEM16(esp + 0x28);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x24);
    edi = edx;
    goto loc_00559DFA;

loc_00559DF6: ;
    edi = ZX8(MEM8(esi + 0x34));

loc_00559DFA: ;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00559E0Eu); RECOMP_ABI_CALL(0x00559740u, sub_00559740); /* call 0x00559740 */

loc_00559E0E: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    edx = ebp + ebp * 2;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edx + ecx + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = ebx + ebx * 2 + 3;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edx + ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00559E40u); RECOMP_ABI_CALL(0x0057BF30u, sub_0057BF30); /* call 0x0057BF30 */

loc_00559E40: ;
    ecx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x3C);
    edi = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x44);
    ebp = MEM32(esp + 0x48);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    ebx = 0x20;

loc_00559E66: ;
    ecx = MEM32(ebp + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x1C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00559CF3; /* jl: less (signed <) */

loc_00559E76: ;
    PUSH32(esp, 0x00559E7Bu); RECOMP_ABI_CALL(0x0057C1C0u, sub_0057C1C0); /* call 0x0057C1C0 */

loc_00559E7B: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00559E85u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_00559E85: ;
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00559E8Fu); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00559E8F: ;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00559E99u); RECOMP_ABI_CALL(0x005EE8C0u, sub_005EE8C0); /* call 0x005EE8C0 */

loc_00559E99: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00559EA3u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_00559EA3: ;
    edx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00559EADu); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_00559EAD: ;
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00559EB7u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_00559EB7: ;
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00559EC1u); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_00559EC1: ;
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00559ECBu); RECOMP_ABI_CALL(0x005EE520u, sub_005EE520); /* call 0x005EE520 */

loc_00559ECB: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00559ED0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_00559EE0
 * Original: 0x00559EE0 - 0x0055A067 (391 bytes, 122 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559EE0(void)
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

loc_00559EE0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x6797CC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x858568);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x858578);
    ecx = esp + 0x14;
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    PUSH32(esp, 0x00559F0Bu); RECOMP_ABI_CALL(0x00611BF0u, sub_00611BF0); /* call 0x00611BF0 */

loc_00559F0B: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    MEM32(esi + 0x28) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0055A061; /* jle: less or equal (signed <=) */

loc_00559F17: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    /* nop */

loc_00559F20: ;
    edx = MEM32(esi + 4);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + ecx + 0x18)); /* fmul dword ptr [edx + ecx + 0x18] */
    eax = edx + ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x1C)); /* fadd dword ptr [eax + 0x1c] */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 4);
    fp_push(MEMF(eax + ecx + 0x1C)); /* fld float */
    edx = eax + ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0055A051; /* jp: parity */

loc_00559F4F: ;
    eax = MEM32(edx + 0x24);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x10)); /* fadd dword ptr [edx + 0x10] */
    MEMF(edx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 4);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = edx + ecx;
    edx = MEM32(eax + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x24)); /* fmul dword ptr [edx + 0x24] */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 4);
    edx = MEM32(eax + ecx + 0x24);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x28)); /* fmul dword ptr [edx + 0x28] */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 4);
    edx = MEM32(eax + ecx + 0x24);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x2C)); /* fmul dword ptr [edx + 0x2c] */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 4);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 4);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = edx + ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 4);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 4);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = edx + ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 4);
    fp_push(MEMF(eax + ecx + 0x30)); /* fld float */
    edx = eax + ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055A04E; /* jne: not equal / not zero */

loc_0055A026: ;
    eax = MEM32(edx + 0x24);
    _fa = (uint32_t)(MEM32(eax + 0x193C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x193C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055A041; /* jne: not equal / not zero */

loc_0055A032: ;
    eax = MEM32(esi + 0x1C);
    ebp = MEM32(esi + 0xC);
    MEM32(ebp + eax * 4) = edx;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0055A04E;

loc_0055A041: ;
    eax = MEM32(esi + 0x18);
    ebp = MEM32(esi + 8);
    MEM32(ebp + eax * 4) = edx;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0055A04E: ;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0055A051: ;
    eax = MEM32(esi + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x38;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00559F20; /* jl: less (signed <) */

loc_0055A060: ;
    POP32(esp, ebp);

loc_0055A061: ;
    POP32(esp, edi);
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
 * sub_0055A070
 * Original: 0x0055A070 - 0x0055A48D (1053 bytes, 275 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A070(void)
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

loc_0055A070: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055A486; /* je: equal / zero */

loc_0055A082: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x48);
    PUSH32(esp, edi);
    MEM32(esp + 0x48) = eax;
    /* nop */

loc_0055A090: ;
    edi = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 4);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x38);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x24) = esi;
    eax = MEM32(esi + 0x18B8);
    fp_push(MEMF(esi + 0x18B4)); /* fld float */
    ecx = MEM32(esi + 0x18BC);
    fp_push(MEMF(esi + 0x18C0)); /* fld float */
    MEM32(esp + 0x24) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0x0055A0C9u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0055A0C9: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x0055A0D8u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0055A0D8: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0055A0ECu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0055A0EC: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0055A103u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0055A103: ;
    eax = ZX8(LO8(eax));
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x28) = ebx;
    ecx = MEM32(esi + 0x18C8);
    fp_push(MEMF(esi + 0x18C4)); /* fld float */
    edx = MEM32(esi + 0x18CC);
    fp_push(MEMF(esi + 0x18D0)); /* fld float */
    MEM32(esp + 0x34) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    MEM32(esp + 0x38) = edx;
    PUSH32(esp, 0x0055A136u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0055A136: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x0055A145u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0055A145: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0055A159u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0055A159: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    eax = ZX8(LO8(eax));
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0055A170u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0055A170: ;
    ecx = ZX8(LO8(eax));
    MEM32(edi + 0x1C) = 0;
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x2C) = ebx;
    edx = MEM32(0x679680);
    fp_push(MEMF(esi + 0x1854)); /* fld float */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    fp_push(MEMF(esi + 0x1854)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x4C) = eax;
    MEM32(0x679680) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x4C)); /* fimul dword ptr [esp + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1850)); /* fadd dword ptr [esi + 0x1850] */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0055A1E0; /* jp: parity */

loc_0055A1D8: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    goto loc_0055A1FB;

loc_0055A1E0: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0055A1FB; /* jp: parity */

loc_0055A1ED: ;
    fp_push(MEMF(esi + 0x1854)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */

loc_0055A1FB: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(edi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x1858)); /* fld float */
    fp_push(MEMF(esi + 0x1858)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x679680) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    MEM32(esp + 0x4C) = ecx;
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x4C)); /* fimul dword ptr [esp + 0x4c] */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x4C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x185C)); /* fld float */
    fp_push(MEMF(esi + 0x185C)); /* fld float */
    MEM32(0x679680) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x4C)); /* fimul dword ptr [esp + 0x4c] */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x4C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x1860)); /* fld float */
    fp_push(MEMF(esi + 0x1860)); /* fld float */
    MEM32(0x679680) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x4C)); /* fimul dword ptr [esp + 0x4c] */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x4C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x1870)); /* fld float */
    fp_push(MEMF(esi + 0x1870)); /* fld float */
    MEM32(0x679680) = eax;
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x4C)); /* fimul dword ptr [esp + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x1874)); /* fld float */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    fp_push(MEMF(esi + 0x1874)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x4C) = ecx;
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x4C)); /* fimul dword ptr [esp + 0x4c] */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x4C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x1878)); /* fld float */
    fp_push(MEMF(esi + 0x1878)); /* fld float */
    MEM32(0x679680) = eax;
    fp_top() = -fp_top(); /* fchs */
    eax = MEM32(esp + 0x44);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x4C)); /* fimul dword ptr [esp + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x186C)); /* fadd dword ptr [esi + 0x186c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1868)); /* fadd dword ptr [esi + 0x1868] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1864)); /* fadd dword ptr [esi + 0x1864] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x679680);
    fp_push(MEMF(esi + 0x1900)); /* fld float */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    fp_push(MEMF(esi + 0x1900)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x4C) = ecx;
    MEM32(0x679680) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x4C)); /* fimul dword ptr [esp + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(edi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x679680);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x188A);
    fp_pop(); /* fstp st(0) */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x1888);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x679680) = edx;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edi + 0x34) = LO8(edx);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0055A479; /* jl: less (signed <) */

loc_0055A472: ;
    MEM32(ebp + 0x14) = 0;

loc_0055A479: ;
    MEM32(esp + 0x48) = MEM32(esp + 0x48) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055A090; /* jne: not equal / not zero */

loc_0055A483: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0055A486: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0055A490
 * Original: 0x0055A490 - 0x0055A672 (482 bytes, 160 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A490(void)
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

loc_0055A490: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x58);
    eax = MEM32(edx + 0x1864);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(edx + 0x1868);
    PUSH32(esp, esi);
    esi = edx + 0x1864;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esi + 8);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(edx + 0x1870);
    PUSH32(esp, edi);
    edi = edx + 0x1870;
    MEM32(esp + 0x40) = eax;
    eax = MEM32(edi + 4);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(edi + 8);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(edx + 0x1858);
    ebx = edx + 0x1858;
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(ebx + 4);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(ebx + 8);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esp + 0x64);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 8)); /* fld float */
    ebp = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    PUSH32(esp, edx);
    fp_push(MEMF(ebx)); /* fld float */
    edx = MEM32(esp + 0x64);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    PUSH32(esp, edx);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEM32(eax) = ebp;
    ebp = MEM32(esp + 0x1C);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(esp + 0x20);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(eax + 8) = ebp;
    ebp = MEM32(esp + 0x24);
    eax = edi;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax) = ebp;
    ebp = MEM32(esp + 0x28);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(esp + 0x2C);
    MEM32(eax + 8) = ebp;
    ebp = MEM32(esp + 0x30);
    eax = ebx;
    MEM32(eax) = ebp;
    ebp = MEM32(esp + 0x34);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(esp + 0x38);
    MEM32(eax + 8) = ebp;
    eax = MEM32(esp + 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055A62Cu); RECOMP_ABI_CALL(0x0055A070u, sub_0055A070); /* call 0x0055A070 */

loc_0055A62C: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(esi + 4) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(edi) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEM32(edi + 4) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(edi + 8) = eax;
    eax = MEM32(esp + 0x54);
    POP32(esp, edi);
    MEM32(ebx) = ecx;
    POP32(esp, esi);
    MEM32(ebx + 4) = edx;
    POP32(esp, ebp);
    MEM32(ebx + 8) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0055A680
 * Original: 0x0055A680 - 0x0055A6A8 (40 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A680: ;
    edx = MEM32(ecx + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055A6A7; /* jle: less or equal (signed <=) */

loc_0055A689: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    /* nop */

loc_0055A690: ;
    edi = MEM32(ecx + 4);
    MEM32(edi + edx + 0x1C) = 0x447A0000;
    edi = MEM32(ecx + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x38;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055A690; /* jl: less (signed <) */

loc_0055A6A6: ;
    POP32(esp, edi);

loc_0055A6A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055A6B0
 * Original: 0x0055A6B0 - 0x0055A9DF (815 bytes, 215 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A6B0(void)
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

loc_0055A6B0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    MEM32(esi + 0x20) = 0;
    eax = MEM32(ecx + 0x10);
    fp_push(MEMF(eax + 0x1854)); /* fld float */
    PUSH32(esp, edi);
    fp_push(MEMF(eax + 0x1854)); /* fld float */
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    edx = MEM32(ecx + 0x10);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x1C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x1C)); /* fimul dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x1850)); /* fadd dword ptr [edx + 0x1850] */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0055A722; /* jp: parity */

loc_0055A71A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    goto loc_0055A73D;

loc_0055A722: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0055A73D; /* jp: parity */

loc_0055A72F: ;
    fp_push(MEMF(edx + 0x1854)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */

loc_0055A73D: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x10);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(eax + 0x1858)); /* fld float */
    fp_push(MEMF(eax + 0x1858)); /* fld float */
    eax = MEM32(0x679680);
    fp_top() = -fp_top(); /* fchs */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x1C) = edx;
    MEM32(0x679680) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x1C)); /* fimul dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    edx = MEM32(ecx + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(edx + 0x185C)); /* fld float */
    fp_push(MEMF(edx + 0x185C)); /* fld float */
    edx = eax;
    fp_top() = -fp_top(); /* fchs */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEM32(esp + 0x1C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x1C)); /* fimul dword ptr [esp + 0x1c] */
    MEM32(0x679680) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    edx = MEM32(ecx + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(edx + 0x1860)); /* fld float */
    fp_push(MEMF(edx + 0x1860)); /* fld float */
    edx = eax;
    fp_top() = -fp_top(); /* fchs */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEM32(esp + 0x1C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x1C)); /* fimul dword ptr [esp + 0x1c] */
    MEM32(0x679680) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    edx = MEM32(ecx + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(edx + 0x1870)); /* fld float */
    fp_push(MEMF(edx + 0x1870)); /* fld float */
    edx = eax;
    fp_top() = -fp_top(); /* fchs */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEM32(esp + 0x1C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x1C)); /* fimul dword ptr [esp + 0x1c] */
    MEM32(0x679680) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    edx = MEM32(ecx + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(edx + 0x1874)); /* fld float */
    fp_push(MEMF(edx + 0x1874)); /* fld float */
    MEM32(0x679680) = eax;
    fp_top() = -fp_top(); /* fchs */
    edx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x1C)); /* fimul dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(edx + 0x1878)); /* fld float */
    fp_push(MEMF(edx + 0x1878)); /* fld float */
    MEM32(0x679680) = eax;
    fp_top() = -fp_top(); /* fchs */
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEM32(esp + 0x1C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x1C)); /* fimul dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x24)); /* fadd dword ptr [ecx + 0x24] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x20)); /* fadd dword ptr [ecx + 0x20] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x1C)); /* fadd dword ptr [ecx + 0x1c] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x10);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x186C)); /* fadd dword ptr [eax + 0x186c] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x1868)); /* fadd dword ptr [eax + 0x1868] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x1864)); /* fadd dword ptr [eax + 0x1864] */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x10)); /* fadd dword ptr [esi + 0x10] */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x14)); /* fadd dword ptr [esi + 0x14] */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18)); /* fadd dword ptr [esi + 0x18] */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x679680);
    eax = MEM32(ecx + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    fp_push(MEMF(eax + 0x1900)); /* fld float */
    fp_push(MEMF(eax + 0x1900)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = edx;
    eax = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x1C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x1C)); /* fimul dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x679680);
    ecx = MEM32(ecx + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    fp_pop(); /* fstp st(0) */
    edi = (uint32_t)(int32_t)SMEM16(ecx + 0x188A);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x1888);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x679680) = edx;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    POP32(esp, edi);
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 0x28) = LO8(edx);
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
 * sub_0055A9E0
 * Original: 0x0055A9E0 - 0x0055AC18 (568 bytes, 159 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A9E0(void)
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

loc_0055A9E0: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx + 0x1864);
    edx = ecx + 0x1864;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(edx + 4);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(edx + 8);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(ecx + 0x1870);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(ecx + 0x1874);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(ecx + 0x1878);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(ecx + 0x1858);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(ecx + 0x185C);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(ecx + 0x1860);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0x54);
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x1874)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_push(MEMF(ecx + 0x1870)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x1878)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x1870)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(ecx + 0x1878)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x1874)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x1878)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    fp_push(MEMF(ecx + 0x1874)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x1870)); /* fmul dword ptr [ecx + 0x1870] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x1860)); /* fmul dword ptr [ecx + 0x1860] */
    fp_push(MEMF(ecx + 0x185C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x1858)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x1860)); /* fmul dword ptr [ecx + 0x1860] */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x185C)); /* fmul dword ptr [ecx + 0x185c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x1858)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x1858)); /* fmul dword ptr [ecx + 0x1858] */
    fp_push(MEMF(ecx + 0x1860)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x185C)); /* fld float */
    ecx = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    eax = MEM32(esp + 8);
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(edx + 4) = eax;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    eax = MEM32(esp + 0x10);
    MEM32(edx + 8) = ecx;
    edx = MEM32(esi + 0x10);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x1870) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1870;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x1858) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1858;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x50);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0055ABBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055ABB8u); } /* indirect call */
    }

loc_0055ABBB: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x1864) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1864;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x1870) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1870;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    _fb = (uint32_t)(0x1858) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1858;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
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
 * sub_0055AC20
 * Original: 0x0055AC20 - 0x0055AC2F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AC20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AC20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055AC30
 * Original: 0x0055AC30 - 0x0055AC49 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AC30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AC30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0055AC3Fu); RECOMP_ABI_CALL(0x00559690u, sub_00559690); /* call 0x00559690 */

loc_0055AC3F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055AC50
 * Original: 0x0055AC50 - 0x0055ACB8 (104 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AC50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055AC80; /* jne: not equal / not zero */

loc_0055AC5A: ;
    PUSH32(esp, 0x4A2);
    PUSH32(esp, 0x64F894);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0055AC6Bu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0055AC6B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AC7B; /* je: equal / zero */

loc_0055AC72: ;
    ecx = eax;
    PUSH32(esp, 0x0055AC79u); RECOMP_ABI_CALL(0x0055B750u, sub_0055B750); /* call 0x0055B750 */

loc_0055AC79: ;
    goto loc_0055AC7D;

loc_0055AC7B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055AC7D: ;
    MEM32(esi + 0xC) = eax;

loc_0055AC80: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0055AC9B; /* je: equal / zero */

loc_0055AC8B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055AC95; /* jne: not equal / not zero */

loc_0055AC8F: ;
    ecx = MEM32(eax + 0x1910);

loc_0055AC95: ;
    MEM32(eax + 0x1910) = ecx;

loc_0055AC9B: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x0055ACA4u); RECOMP_ABI_CALL(0x0055B770u, sub_0055B770); /* call 0x0055B770 */

loc_0055ACA4: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0x18) = 0x3F800000;
    ecx = MEM32(eax + 8);
    MEM32(esi + 4) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055ACC0
 * Original: 0x0055ACC0 - 0x0055AD30 (112 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ACC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055ACC0: ;
    SET_LO16(eax, MEM16(ecx));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM16(esi) = LO16(eax);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edx = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2E8BA2E9;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 2) = LO16(edx);
    SET_LO16(ebx, MEM16(ecx));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AD14; /* je: equal / zero */

loc_0055ACF4: ;
    edx = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2E8BA2E9;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(LO16(ebx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    MEM16(eax + edi + 2) = LO16(edx);

loc_0055AD14: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2E8BA2E9;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    POP32(esp, edi);
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM16(ecx) = LO16(edx);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055AD30
 * Original: 0x0055AD30 - 0x0055AD6A (58 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AD30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AD30: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x64F8A0;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM16(eax + 0x14) = LO16(ecx);
    MEM16(eax + 0x16) = 0xFFFF;
    MEM32(eax + 0x18) = 0x3F800000;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x34) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0055AD70
 * Original: 0x0055AD70 - 0x0055AD8E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AD70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055AD78u); RECOMP_ABI_CALL(0x00559960u, sub_00559960); /* call 0x00559960 */

loc_0055AD78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055AD88; /* je: equal / zero */

loc_0055AD7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055AD85u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055AD85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055AD88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055AD90
 * Original: 0x0055AD90 - 0x0055ADBA (42 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055AD90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x64F8A0;
    if (CMP_EQ(_fa, _fb)) goto loc_0055ADB1; /* je: equal / zero */

loc_0055ADA1: ;
    ecx = edi;
    PUSH32(esp, 0x0055ADA8u); RECOMP_ABI_CALL(0x0055B760u, sub_0055B760); /* call 0x0055B760 */

loc_0055ADA8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055ADAEu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055ADAE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055ADB1: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00559960(); return; /* tail jmp 0x00559960 */

}

/**
 * sub_0055ADC0
 * Original: 0x0055ADC0 - 0x0055AE7A (186 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ADC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055ADC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    eax = ebx;
    PUSH32(esp, esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10D);
    esi = ecx;
    PUSH32(esp, 0x64F894);
    PUSH32(esp, eax);
    MEM32(esi) = 0x64F884;
    PUSH32(esp, 0x0055ADE6u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0055ADE6: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055AE1C; /* je: equal / zero */

loc_0055ADF3: ;
    ecx = ebx + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    edi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0055AE1E; /* jl: less (signed <) */

loc_0055ADFC: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;

loc_0055AE01: ;
    ecx = edi;
    PUSH32(esp, 0x0055AE08u); RECOMP_ABI_CALL(0x00559970u, sub_00559970); /* call 0x00559970 */

loc_0055AE08: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x38;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_0055AE01; /* jne: not equal / not zero */

loc_0055AE16: ;
    eax = MEM32(esp + 0x10);
    goto loc_0055AE1E;

loc_0055AE1C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055AE1E: ;
    PUSH32(esp, 0x10E);
    edi = ebx * 4;
    PUSH32(esp, 0x64F894);
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0055AE38u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0055AE38: ;
    PUSH32(esp, 0x10F);
    PUSH32(esp, 0x64F894);
    PUSH32(esp, edi);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0055AE4Bu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0055AE4B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x28) = ebp;
    MEM32(esi + 0x2C) = ebp;
    MEM32(esi + 0x1C) = ebp;
    MEM32(esi + 0x18) = ebp;
    MEM32(esi + 0x20) = ebp;
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x30) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055AE80
 * Original: 0x0055AE80 - 0x0055AE9E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AE80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055AE88u); RECOMP_ABI_CALL(0x005599B0u, sub_005599B0); /* call 0x005599B0 */

loc_0055AE88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055AE98; /* je: equal / zero */

loc_0055AE8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055AE95u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055AE95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055AE98: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055AEA0
 * Original: 0x0055AEA0 - 0x0055B066 (454 bytes, 153 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055AEA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B062; /* je: equal / zero */

loc_0055AEAE: ;
    SET_LO16(eax, MEM16(esi + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = ZX16(LO16(eax));
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1910);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055AECE; /* jge: greater or equal (signed >=) */

loc_0055AEC4: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 0x16) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055AECE; /* jae: above or equal (unsigned >=) */

loc_0055AECA: ;
    SET_LO8(edx, 1);
    goto loc_0055AED0;

loc_0055AECE: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0055AED0: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 4);
    SET_LO16(ecx, MEM16(ecx));
    ebp = 0xFFFF;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AEEF; /* je: equal / zero */

loc_0055AEE3: ;
    edi = ZX16(LO16(ecx));
    ecx = MEM32(eax);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055AEF1;

loc_0055AEEF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055AEF1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AFAD; /* je: equal / zero */

loc_0055AEF9: ;
    /* nop */

loc_0055AF00: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055AFAD; /* jge: greater or equal (signed >=) */

loc_0055AF0A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AFAD; /* je: equal / zero */

loc_0055AF12: ;
    SET_LO16(ecx, MEM16(edi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebp) (16-bit) */
    eax = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0055AF2B; /* je: equal / zero */

loc_0055AF1C: ;
    SET_LO16(edx, MEM16(edi + 2));
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    MEM16(ecx + eax + 2) = LO16(edx);

loc_0055AF2B: ;
    SET_LO16(ecx, MEM16(edi + 2));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AF41; /* je: equal / zero */

loc_0055AF34: ;
    SET_LO16(edx, MEM16(edi));
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    MEM16(ecx + eax) = LO16(edx);

loc_0055AF41: ;
    MEM16(edi) = LO16(ebp);
    MEM16(edi + 2) = LO16(ebp);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055AF57u); RECOMP_ABI_CALL(0x0055ACC0u, sub_0055ACC0); /* call 0x0055ACC0 */

loc_0055AF57: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AF63; /* je: equal / zero */

loc_0055AF5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055AF66; /* jne: not equal / not zero */

loc_0055AF63: ;
    MEM32(esi + 8) = edi;

loc_0055AF66: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esi + 0x14) = MEM16(esi + 0x14) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x14)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0055AF73u); RECOMP_ABI_CALL(0x0055A6B0u, sub_0055A6B0); /* call 0x0055A6B0 */

loc_0055AF73: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 4);
    SET_LO16(ecx, MEM16(ecx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AF8D; /* je: equal / zero */

loc_0055AF81: ;
    edi = ZX16(LO16(ecx));
    ecx = MEM32(eax);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055AF8F;

loc_0055AF8D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055AF8F: ;
    edx = ZX16(MEM16(esi + 0x14));
    ecx = edx + ebx;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x1910)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x1910) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055AFAD; /* jge: greater or equal (signed >=) */

loc_0055AFA1: ;
    edx = ZX16(MEM16(esi + 0x16));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055AF00; /* jl: less (signed <) */

loc_0055AFAD: ;
    eax = MEM32(esi + 0x10);
    SET_LO8(ecx, MEM8(eax + 0x184D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B05F; /* je: equal / zero */

loc_0055AFBE: ;
    edi = edi;

loc_0055AFC0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055B05F; /* jge: greater or equal (signed >=) */

loc_0055AFCA: ;
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B05F; /* je: equal / zero */

loc_0055AFD5: ;
    SET_LO16(eax, MEM16(edi + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AFED; /* je: equal / zero */

loc_0055AFDE: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055AFEF;

loc_0055AFED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055AFEF: ;
    edx = MEM32(esi + 0xC);
    MEM32(esi + 8) = eax;
    SET_LO16(eax, MEM16(edi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebp) (16-bit) */
    ecx = MEM32(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055B00E; /* je: equal / zero */

loc_0055AFFF: ;
    SET_LO16(edx, MEM16(edi + 2));
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    MEM16(eax + ecx + 2) = LO16(edx);

loc_0055B00E: ;
    SET_LO16(eax, MEM16(edi + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B024; /* je: equal / zero */

loc_0055B017: ;
    SET_LO16(edx, MEM16(edi));
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    MEM16(eax + ecx) = LO16(edx);

loc_0055B024: ;
    MEM16(edi) = LO16(ebp);
    MEM16(edi + 2) = LO16(ebp);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055B03Au); RECOMP_ABI_CALL(0x0055ACC0u, sub_0055ACC0); /* call 0x0055ACC0 */

loc_0055B03A: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0055B042u); RECOMP_ABI_CALL(0x0055A6B0u, sub_0055A6B0); /* call 0x0055A6B0 */

loc_0055B042: ;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B04D; /* jne: not equal / not zero */

loc_0055B04A: ;
    MEM32(esi + 8) = edi;

loc_0055B04D: ;
    eax = MEM32(esi + 0x10);
    SET_LO8(ecx, MEM8(eax + 0x184D));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055AFC0; /* jne: not equal / not zero */

loc_0055B05F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0055B062: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B070
 * Original: 0x0055B070 - 0x0055B18C (284 bytes, 98 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B070(void)
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

loc_0055B070: ;
    PUSH32(esp, ecx);
    eax = ecx;
    ecx = MEM32(eax + 4);
    SET_LO16(ecx, MEM16(ecx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFF (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055B17F; /* je: equal / zero */

loc_0055B08A: ;
    esi = ZX16(LO16(ecx));
    ecx = MEM32(eax + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B181; /* je: equal / zero */

loc_0055B09F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_0055B0A1: ;
    SET_LO16(edx, MEM16(esi));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B0BA; /* je: equal / zero */

loc_0055B0AB: ;
    edi = MEM32(eax + 0xC);
    ebx = MEM32(edi);
    ecx = ZX16(LO16(edx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055B0BC;

loc_0055B0BA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055B0BC: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xFFFF (16-bit) */
    edi = MEM32(eax + 0xC);
    edi = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055B0D7; /* je: equal / zero */

loc_0055B0C8: ;
    SET_LO16(ebx, MEM16(esi + 2));
    edx = ZX16(LO16(edx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    MEM16(edx + edi + 2) = LO16(ebx);

loc_0055B0D7: ;
    SET_LO16(edx, MEM16(esi + 2));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B0EF; /* je: equal / zero */

loc_0055B0E2: ;
    SET_LO16(ebx, MEM16(esi));
    edx = ZX16(LO16(edx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    MEM16(edx + edi) = LO16(ebx);

loc_0055B0EF: ;
    MEM16(esi) = 0xFFFF;
    MEM16(esi + 2) = 0xFFFF;
    eax = MEM32(eax + 0xC);
    edi = MEM32(eax + 4);
    ebx = MEM32(eax);
    SET_LO16(eax, MEM16(edi));
    MEM16(esi) = LO16(eax);
    edx = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2E8BA2E9;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 2) = LO16(edx);
    SET_LO16(ebp, MEM16(edi));
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebp), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B14B; /* je: equal / zero */

loc_0055B12B: ;
    edx = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2E8BA2E9;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(LO16(ebp));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    MEM16(eax + ebx + 2) = LO16(edx);

loc_0055B14B: ;
    edx = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2E8BA2E9;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 0x10);
    MEM16(edi) = LO16(edx);
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63D438)); /* fadd dword ptr [0x63d438] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0055B0A1; /* jne: not equal / not zero */

loc_0055B17D: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0055B17F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055B181: ;
    POP32(esp, edi);
    MEM16(eax + 0x14) = LO16(ecx);
    MEM32(eax + 8) = ecx;
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
 * sub_0055B190
 * Original: 0x0055B190 - 0x0055B399 (521 bytes, 165 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B190(void)
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

loc_0055B190: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B396; /* je: equal / zero */

loc_0055B19F: ;
    fp_push(MEMF(ecx + 0x190C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0055B1E3; /* jnp: not parity */

loc_0055B1B2: ;
    fp_push(MEMF(0x6797CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x190C)); /* fmul dword ptr [ecx + 0x190c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x18)); /* fadd dword ptr [edi + 0x18] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, 0x0055B1C8u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0055B1C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    MEMF(edi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B1E3; /* je: equal / zero */

loc_0055B1DB: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0055B1E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055B1E0u); } /* indirect call */
    }

loc_0055B1E3: ;
    eax = MEM32(edi + 4);
    SET_LO16(eax, MEM16(eax));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055B1FD; /* je: equal / zero */

loc_0055B1F0: ;
    esi = ZX16(LO16(eax));
    eax = MEM32(edi + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055B1FF;

loc_0055B1FD: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055B1FF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM16(edi + 0x14) = 0;
    ecx = MEM32(0x6797CC);
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055B395; /* je: equal / zero */

loc_0055B217: ;
    PUSH32(esp, ebx);
    goto loc_0055B220;

    /* nop */

loc_0055B220: ;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B238; /* je: equal / zero */

loc_0055B229: ;
    edx = MEM32(edi + 0xC);
    ebx = ZX16(LO16(eax));
    eax = MEM32(edx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055B23A;

loc_0055B238: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055B23A: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x20)); /* fadd dword ptr [esi + 0x20] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    MEMF(esi + 0x20) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0055B315; /* jp: parity */

loc_0055B258: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648168)); /* fmul dword ptr [0x648168] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0055B267u); RECOMP_ABI_CALL(0x0057BF10u, sub_0057BF10); /* call 0x0057BF10 */

loc_0055B267: ;
    ecx = MEM32(edi + 0x10);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + ecx + 0x18)); /* fmul dword ptr [eax + ecx + 0x18] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x10)); /* fadd dword ptr [esi + 0x10] */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi + 0x10);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + edx + 0x1C)); /* fmul dword ptr [eax + edx + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x14)); /* fadd dword ptr [esi + 0x14] */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi + 0x10);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + ecx + 0x20)); /* fmul dword ptr [eax + ecx + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18)); /* fadd dword ptr [esi + 0x18] */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi + 0x10);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + edx + 0x24)); /* fmul dword ptr [eax + edx + 0x24] */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi + 0x10);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + ecx + 0x28)); /* fmul dword ptr [eax + ecx + 0x28] */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi + 0x10);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + edx + 0x2C)); /* fmul dword ptr [eax + edx + 0x2c] */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xC)); /* fadd dword ptr [esi + 0xc] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM16(edi + 0x14) = MEM16(edi + 0x14) + 1;
    _fa = (uint32_t)(MEM16(edi + 0x14)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0055B38A;

loc_0055B315: ;
    eax = MEM32(edi + 8);
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B33C; /* jne: not equal / not zero */

loc_0055B31E: ;
    SET_LO16(eax, MEM16(esi + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B337; /* je: equal / zero */

loc_0055B328: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055B339;

loc_0055B337: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055B339: ;
    MEM32(edi + 8) = eax;

loc_0055B33C: ;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    edx = MEM32(edi + 0xC);
    ecx = MEM32(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055B359; /* je: equal / zero */

loc_0055B34A: ;
    SET_LO16(edx, MEM16(esi + 2));
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    MEM16(eax + ecx + 2) = LO16(edx);

loc_0055B359: ;
    SET_LO16(eax, MEM16(esi + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B370; /* je: equal / zero */

loc_0055B363: ;
    SET_LO16(edx, MEM16(esi));
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    MEM16(eax + ecx) = LO16(edx);

loc_0055B370: ;
    MEM16(esi) = 0xFFFF;
    MEM16(esi + 2) = 0xFFFF;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055B38Au); RECOMP_ABI_CALL(0x0055ACC0u, sub_0055ACC0); /* call 0x0055ACC0 */

loc_0055B38A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0055B220; /* jne: not equal / not zero */

loc_0055B394: ;
    POP32(esp, ebx);

loc_0055B395: ;
    POP32(esp, esi);

loc_0055B396: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0055B3A0
 * Original: 0x0055B3A0 - 0x0055B3E5 (69 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B3A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B3BB; /* je: equal / zero */

loc_0055B3AB: ;
    ecx = edi;
    PUSH32(esp, 0x0055B3B2u); RECOMP_ABI_CALL(0x0055B760u, sub_0055B760); /* call 0x0055B760 */

loc_0055B3B2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055B3B8u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055B3B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055B3BB: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B3C8; /* je: equal / zero */

loc_0055B3C2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0055B3C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055B3C6u); } /* indirect call */
    }

loc_0055B3C8: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0055B3D4u); RECOMP_ABI_CALL(0x0055AC30u, sub_0055AC30); /* call 0x0055AC30 */

loc_0055B3D4: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0055B3E0u); RECOMP_ABI_CALL(0x0055AC50u, sub_0055AC50); /* call 0x0055AC50 */

loc_0055B3E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055B3F0
 * Original: 0x0055B3F0 - 0x0055B5B3 (451 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B3F0(void)
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

loc_0055B3F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x188C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0x0055B412u); RECOMP_ABI_CALL(0x0057C1D0u, sub_0057C1D0); /* call 0x0057C1D0 */

loc_0055B412: ;
    eax = MEM32(edi + 4);
    SET_LO16(eax, MEM16(eax));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B430; /* je: equal / zero */

loc_0055B421: ;
    edx = MEM32(edi + 0xC);
    esi = ZX16(LO16(eax));
    eax = MEM32(edx);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055B432;

loc_0055B430: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055B432: ;
    eax = ZX16(MEM16(edi + 0x14));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055B5AC; /* jle: less or equal (signed <=) */

loc_0055B43E: ;
    PUSH32(esp, ebx);
    /* nop */

loc_0055B440: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055B44F; /* jge: greater or equal (signed >=) */

loc_0055B447: ;
    ebx = eax;
    MEM32(esp + 0x14) = ebx;
    goto loc_0055B45B;

loc_0055B44F: ;
    MEM32(esp + 0x14) = 0x20;
    ebx = MEM32(esp + 0x14);

loc_0055B45B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0055B461u); RECOMP_ABI_CALL(0x0057BEF0u, sub_0057BEF0); /* call 0x0057BEF0 */

loc_0055B461: ;
    eax = ebx + -1;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B594; /* jl: less (signed <) */

loc_0055B46F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;

loc_0055B474: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648168)); /* fmul dword ptr [0x648168] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0055B486u); RECOMP_ABI_CALL(0x0057BF10u, sub_0057BF10); /* call 0x0057BF10 */

loc_0055B486: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    ebp = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = ebp;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648168)); /* fmul dword ptr [0x648168] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    PUSH32(esp, 0x0055B4A6u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0055B4A6: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B4B6; /* jl: less (signed <) */

loc_0055B4B0: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0055B4B6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055B4C0; /* jge: greater or equal (signed >=) */

loc_0055B4BA: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055B4C0: ;
    edi = MEM32(edi + 0x10);
    SET_LO8(eax, MEM8(edi + 0x1904));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B51F; /* je: equal / zero */

loc_0055B4CD: ;
    SET_LO16(eax, MEM16(edi + 0x188A));
    _fa = (uint32_t)(MEM16(edi + 0x1888)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x1888), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B51F; /* je: equal / zero */

loc_0055B4DD: ;
    eax = ZX8(MEM8(esi + 0x28));
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_push(MEMF(0x8602E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6306E8)); /* fmul dword ptr [0x6306e8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    PUSH32(esp, 0x0055B4FCu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0055B4FC: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x188A);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055B523; /* jle: less or equal (signed <=) */

loc_0055B507: ;
    ebp = (uint32_t)(int32_t)SMEM16(edi + 0x1888);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x24);
    eax = edx;
    goto loc_0055B523;

loc_0055B51F: ;
    eax = ZX8(MEM8(esi + 0x28));

loc_0055B523: ;
    ecx = ebp + ebp * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ecx + edi + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(ecx + edi + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx + ebx * 2 + 3;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ecx + edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055B557u); RECOMP_ABI_CALL(0x0057BF30u, sub_0057BF30); /* call 0x0057BF30 */

loc_0055B557: ;
    SET_LO16(esi, MEM16(esi));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B577; /* je: equal / zero */

loc_0055B564: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    esi = ZX16(LO16(esi));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055B579;

loc_0055B577: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055B579: ;
    eax = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_0055B474; /* jne: not equal / not zero */

loc_0055B58C: ;
    ebx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x1C);

loc_0055B594: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0x0055B59Fu); RECOMP_ABI_CALL(0x0057C1C0u, sub_0057C1C0); /* call 0x0057C1C0 */

loc_0055B59F: ;
    eax = ZX16(MEM16(edi + 0x14));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B440; /* jl: less (signed <) */

loc_0055B5AB: ;
    POP32(esp, ebx);

loc_0055B5AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0055B5C0
 * Original: 0x0055B5C0 - 0x0055B5DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B5C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055B5C8u); RECOMP_ABI_CALL(0x0055AD90u, sub_0055AD90); /* call 0x0055AD90 */

loc_0055B5C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055B5D8; /* je: equal / zero */

loc_0055B5CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055B5D5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055B5D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055B5D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B5E0
 * Original: 0x0055B5E0 - 0x0055B74C (364 bytes, 102 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055B5E0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B745; /* je: equal / zero */

loc_0055B5F1: ;
    _fa = (uint32_t)(MEM16(esi + 0x14)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x14), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B745; /* je: equal / zero */

loc_0055B5FC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(0x8583E8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0055B60Cu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0055B60C: ;
    SET_LO8(eax, MEM8(0x858404));
    PUSH32(esp, 0);
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0x0055B61Cu); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_0055B61C: ;
    ecx = MEM32(0x8583E4);
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x0055B62Du); RECOMP_ABI_CALL(0x005EE8C0u, sub_005EE8C0); /* call 0x005EE8C0 */

loc_0055B62D: ;
    SET_LO8(edx, MEM8(0x674FCA));
    PUSH32(esp, 0);
    MEM8(esp + 0x28) = LO8(edx);
    PUSH32(esp, 0x0055B63Eu); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_0055B63E: ;
    ebx = MEM32(0x858430);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0055B64Bu); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_0055B64B: ;
    SET_LO8(eax, MEM8(0x85843E));
    PUSH32(esp, 1);
    MEM8(esp + 0x34) = LO8(eax);
    PUSH32(esp, 0x0055B65Bu); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_0055B65B: ;
    edx = MEM32(esi + 0x10);
    SET_LO8(ecx, MEM8(0x85843F));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edx + 0x1948));
    MEM8(esp + 0x38) = LO8(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055B676u); RECOMP_ABI_CALL(0x005EE3E0u, sub_005EE3E0); /* call 0x005EE3E0 */

loc_0055B676: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x193C);
    ebp = MEM32(0x8583F8);
    PUSH32(esp, 0x80);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055B690u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0055B690: ;
    eax = MEM32(0x858438);
    PUSH32(esp, 5);
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0x0055B6A0u); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_0055B6A0: ;
    SET_LO8(ecx, MEM8(0x8583E0));
    PUSH32(esp, 0);
    MEM8(esp + 0x54) = LO8(ecx);
    PUSH32(esp, 0x0055B6B1u); RECOMP_ABI_CALL(0x005EE520u, sub_005EE520); /* call 0x005EE520 */

loc_0055B6B1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0055B6B8u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_0055B6B8: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0055B6BFu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0055B6BF: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + 0x1950);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055B6CEu); RECOMP_ABI_CALL(0x005FB260u, sub_005FB260); /* call 0x005FB260 */

loc_0055B6CE: ;
    PUSH32(esp, 0x674FD0);
    PUSH32(esp, 0x0055B6D8u); RECOMP_ABI_CALL(0x005EDB00u, sub_005EDB00); /* call 0x005EDB00 */

loc_0055B6D8: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0055B6E2u); RECOMP_ABI_CALL(0x0055B3F0u, sub_0055B3F0); /* call 0x0055B3F0 */

loc_0055B6E2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055B6E8u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0055B6E8: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0055B6F2u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_0055B6F2: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055B6FCu); RECOMP_ABI_CALL(0x005EE8C0u, sub_005EE8C0); /* call 0x005EE8C0 */

loc_0055B6FC: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055B706u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_0055B706: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0055B70Cu); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_0055B70C: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0055B716u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_0055B716: ;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055B720u); RECOMP_ABI_CALL(0x005EE3E0u, sub_005EE3E0); /* call 0x005EE3E0 */

loc_0055B720: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0055B72Bu); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0055B72B: ;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055B735u); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_0055B735: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0055B73Fu); RECOMP_ABI_CALL(0x005EE520u, sub_005EE520); /* call 0x005EE520 */

loc_0055B73F: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0055B745: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B750
 * Original: 0x0055B750 - 0x0055B75D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B750: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0055B760
 * Original: 0x0055B760 - 0x0055B76A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B760(void)
{

loc_0055B760: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055B768u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055B768: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055B770
 * Original: 0x0055B770 - 0x0055B7EC (124 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B770: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ebx + 2;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x64F8B8);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x0055B78Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0055B78E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B7B3; /* je: equal / zero */

loc_0055B795: ;
    edx = esi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0055B7B5; /* jl: less (signed <) */

loc_0055B79E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = 0xFFFF;

loc_0055B7A4: ;
    MEM16(ecx) = LO16(esi);
    MEM16(ecx + 2) = LO16(esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055B7A4; /* jne: not equal / not zero */

loc_0055B7B1: ;
    goto loc_0055B7B5;

loc_0055B7B3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055B7B5: ;
    MEM32(edi) = eax;
    MEM32(edi + 4) = eax;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(edi + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0055B7E6; /* jle: less or equal (signed <=) */

loc_0055B7C4: ;
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    /* nop */

loc_0055B7D0: ;
    eax = MEM32(edi);
    ecx = esi + eax + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0x0055B7E0u); RECOMP_ABI_CALL(0x0055ACC0u, sub_0055ACC0); /* call 0x0055ACC0 */

loc_0055B7E0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055B7D0; /* jne: not equal / not zero */

loc_0055B7E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B7F0
 * Original: 0x0055B7F0 - 0x0055B80F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B7F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x64F8C4;
    if (TEST_Z(_fa, _fb)) goto loc_0055B809; /* je: equal / zero */

loc_0055B800: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055B806u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055B806: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055B809: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B810
 * Original: 0x0055B810 - 0x0055B828 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B810: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B81E; /* je: equal / zero */

loc_0055B818: ;
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

loc_0055B81E: ;
    MEM32(ecx + 4) = 0x62DF21;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B830
 * Original: 0x0055B830 - 0x0055B8AD (125 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055B830: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x70);
    PUSH32(esp, esi);
    eax = ebp;
    PUSH32(esp, edi);
    esi = eax + 1;

loc_0055B840: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B840; /* jne: not equal / not zero */

loc_0055B847: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0055B85C; /* je: equal / zero */

loc_0055B84B: ;
    SET_LO8(eax, MEM8(eax + ebp + -1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B85C; /* je: equal / zero */

loc_0055B853: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    ebx = 0x639B68;
    if (CMP_NE(_fa, _fb)) goto loc_0055B861; /* jne: not equal / not zero */

loc_0055B85C: ;
    ebx = 0x62DF21;

loc_0055B861: ;
    esi = 0x6745EC;
    edi = ecx + 0xAC;
    /* nop */

loc_0055B870: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x6466EC);
    ecx = esp + 0x20;
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0055B886u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0055B886: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055B895u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055B892u); } /* indirect call */
    }

loc_0055B895: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x674614) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x674614 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B870; /* jl: less (signed <) */

loc_0055B8A3: ;
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
 * sub_0055B8B0
 * Original: 0x0055B8B0 - 0x0055B8C0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B8B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B8B0: ;
    eax = MEM32(ecx + 0xA0);
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055B8C0
 * Original: 0x0055B8C0 - 0x0055B8E1 (33 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B8C0(void)
{

loc_0055B8C0: ;
    eax = MEM32(ecx + 0xA0);
    edx = MEM32(esp + 4);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0xA4);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    eax = ecx + 0x80;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055B8F0
 * Original: 0x0055B8F0 - 0x0055B900 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B8F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B8F0: ;
    ecx = MEM32(0x673DF8);
    eax = ecx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x673DF8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0055B900
 * Original: 0x0055B900 - 0x0055B90D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B900(void)
{

loc_0055B900: ;
    eax = MEM32(ecx + 0x150);
    edx = MEM32(ecx + 0x154);
    esp += 4; return; /* ret */

}

/**
 * sub_0055B910
 * Original: 0x0055B910 - 0x0055B917 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B910(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0055B910: ;
    fp_push(MEMF(0x8602E0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0055B920
 * Original: 0x0055B920 - 0x0055B96F (79 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055B920: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = MEM32(ecx + 4);

loc_0055B930: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055B960; /* jne: not equal / not zero */

loc_0055B93A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B954; /* je: equal / zero */

loc_0055B93E: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055B960; /* jne: not equal / not zero */

loc_0055B94A: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0055B930; /* jne: not equal / not zero */

loc_0055B954: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0055B960: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055B970
 * Original: 0x0055B970 - 0x0055B98D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B970: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B98C; /* jne: not equal / not zero */

loc_0055B97E: ;
    edi = edi;

loc_0055B980: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B980; /* je: equal / zero */

loc_0055B98C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055B990
 * Original: 0x0055B990 - 0x0055B9AC (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B990: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B9AB; /* jne: not equal / not zero */

loc_0055B99D: ;
    /* nop */

loc_0055B9A0: ;
    eax = ecx;
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B9A0; /* je: equal / zero */

loc_0055B9AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055B9B0
 * Original: 0x0055B9B0 - 0x0055BA07 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B9B0: ;
    eax = MEM32(ecx);
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BA06; /* jne: not equal / not zero */

loc_0055B9B9: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B9DF; /* jne: not equal / not zero */

loc_0055B9C4: ;
    eax = MEM32(edx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B9DB; /* jne: not equal / not zero */

loc_0055B9CD: ;
    /* nop */

loc_0055B9D0: ;
    edx = eax;
    eax = MEM32(edx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B9D0; /* je: equal / zero */

loc_0055B9DB: ;
    MEM32(ecx) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0055B9DF: ;
    eax = MEM32(eax + 4);
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BA03; /* jne: not equal / not zero */

loc_0055B9E9: ;
    /* nop */

loc_0055B9F0: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BA03; /* jne: not equal / not zero */

loc_0055B9F7: ;
    MEM32(ecx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B9F0; /* je: equal / zero */

loc_0055BA03: ;
    MEM32(ecx) = eax;
    POP32(esp, ebx);

loc_0055BA06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055BA10
 * Original: 0x0055BA10 - 0x0055BA75 (101 bytes, 35 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BA10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x43);
    PUSH32(esp, 0x64F8E4);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x0055BA1Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0055BA1F: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BA5E; /* je: equal / zero */

loc_0055BA28: ;
    ecx = esi;
    PUSH32(esp, 0x0055BA2Fu); RECOMP_ABI_CALL(0x00606090u, sub_00606090); /* call 0x00606090 */

loc_0055BA2F: ;
    eax = 0x62DF21;
    edx = esi + 8;
    MEM32(esi) = 0x64F8D4;
    MEM32(esi + 0x28) = 0;
    MEM32(esi + 0x2C) = 0xFFFFFFFFu;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0055BA50: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BA50; /* jne: not equal / not zero */

loc_0055BA5A: ;
    ecx = esi;
    goto loc_0055BA60;

loc_0055BA5E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055BA60: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(esp + 8);
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055BA6F; /* je: equal / zero */

loc_0055BA6A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055BA6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055BA6Cu); } /* indirect call */
    }

loc_0055BA6F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BA80
 * Original: 0x0055BA80 - 0x0055BA9E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BA80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055BA88u); RECOMP_ABI_CALL(0x00606080u, sub_00606080); /* call 0x00606080 */

loc_0055BA88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055BA98; /* je: equal / zero */

loc_0055BA8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055BA95u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055BA95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055BA98: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BAA0
 * Original: 0x0055BAA0 - 0x0055BAAF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055BAA0: ;
    MEM8(ecx + 0x15C) = 1;
    ecx = MEM32(ecx + 0x7C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_0055BAB0
 * Original: 0x0055BAB0 - 0x0055BABF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055BAB0: ;
    MEM8(ecx + 0x15D) = 1;
    ecx = MEM32(ecx + 0x7C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_0055BAC0
 * Original: 0x0055BAC0 - 0x0055BB00 (64 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055BAC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x15C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055BAD2; /* jne: not equal / not zero */

loc_0055BACD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0055BAD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055BACFu); } /* indirect call */
    }

loc_0055BAD2: ;
    ecx = MEM32(esi + 0x150);
    eax = MEM32(esi + 0x154);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x150) = ecx;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    ecx = esi;
    MEM32(esi + 0x154) = eax;
    PUSH32(esp, 0x0055BAF7u); RECOMP_ABI_CALL(0x0055F0B0u, sub_0055F0B0); /* call 0x0055F0B0 */

loc_0055BAF7: ;
    ecx = MEM32(esi + 0x7C);
    edx = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x1C)); return; /* indirect tail jmp */

}

/**
 * sub_0055BB00
 * Original: 0x0055BB00 - 0x0055BB0F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055BB00: ;
    _fa = (uint32_t)(MEM8(ecx + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055BB0E; /* je: equal / zero */

loc_0055BB06: ;
    ecx = MEM32(ecx + 0x7C);
    g_seh_ebp = ebp; sub_0055F0E0(); return; /* tail jmp 0x0055F0E0 */

loc_0055BB0E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055BB10
 * Original: 0x0055BB10 - 0x0055BB74 (100 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BB10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xA8);
    edx = edi + 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0055BB23: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BB23; /* jne: not equal / not zero */

loc_0055BB2D: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    MEM32(edi + 0x28) = eax;
    MEM32(edi + 0x2C) = ecx;
    ecx = MEM32(esi + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055BB4E; /* je: equal / zero */

loc_0055BB49: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055BB4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055BB4Bu); } /* indirect call */
    }

loc_0055BB4E: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x0055BB62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055BB5Cu); } /* indirect call */
    }

loc_0055BB62: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055BB71; /* je: equal / zero */

loc_0055BB6C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0055BB71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055BB6Eu); } /* indirect call */
    }

loc_0055BB71: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055BB80
 * Original: 0x0055BB80 - 0x0055BC79 (249 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055BB80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    edx = MEM32(eax + 0x28);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xA0), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0055BBE1; /* jne: not equal / not zero */

loc_0055BB98: ;
    ecx = MEM32(esi + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x2C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055BBE1; /* jne: not equal / not zero */

loc_0055BBA3: ;
    edi = eax + 8;
    eax = esi + 0x80;
    /* nop */

loc_0055BBB0: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(edi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055BBD4; /* jne: not equal / not zero */

loc_0055BBB8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BBD0; /* je: equal / zero */

loc_0055BBBC: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(edi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055BBD4; /* jne: not equal / not zero */

loc_0055BBC6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(2)) >> 32) & 1);
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055BBB0; /* jne: not equal / not zero */

loc_0055BBD0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055BBD9;

loc_0055BBD4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0055BBD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BC72; /* je: equal / zero */

loc_0055BBE1: ;
    MEM32(esi + 0xA0) = edx;
    edx = MEM32(ebp);
    eax = MEM32(edx + 0x2C);
    MEM32(esi + 0xA4) = eax;
    eax = MEM32(ebp);
    edi = esi + 0x80;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi;

loc_0055BC01: ;
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
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055BC01; /* jne: not equal / not zero */

loc_0055BC0B: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055BC38; /* jne: not equal / not zero */

loc_0055BC13: ;
    ecx = 0x8582C8;
    PUSH32(esp, 0x0055BC1Du); RECOMP_ABI_CALL(0x005E1A80u, sub_005E1A80); /* call 0x005E1A80 */

loc_0055BC1D: ;
    ecx = MEM32(esi + 0xA4);
    edx = MEM32(esi + 0xA0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = 0x8582C8;
    PUSH32(esp, 0x0055BC38u); RECOMP_ABI_CALL(0x005E1500u, sub_005E1500); /* call 0x005E1500 */

loc_0055BC38: ;
    ecx = MEM32(esi + 0x7C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0055BC42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055BC3Fu); } /* indirect call */
    }

loc_0055BC42: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ebp);
    MEM32(eax) = 0;
    edx = MEM32(esi);
    PUSH32(esp, 0xC0001770u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0055BC58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055BC55u); } /* indirect call */
    }

loc_0055BC58: ;
    _fa = (uint32_t)(MEM8(esi + 0x15D)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x15D), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055BC72; /* jne: not equal / not zero */

loc_0055BC61: ;
    SET_LO8(eax, MEM8(esi + 0x15C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BC72; /* je: equal / zero */

loc_0055BC6B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0055BC72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055BC6Fu); } /* indirect call */
    }

loc_0055BC72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055BC80
 * Original: 0x0055BC80 - 0x0055BCD5 (85 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BC80: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(edx + 8) = esi;
    esi = MEM32(eax);
    SET_LO8(ebx, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BC9A; /* jne: not equal / not zero */

loc_0055BC97: ;
    MEM32(esi + 4) = edx;

loc_0055BC9A: ;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BCB5; /* jne: not equal / not zero */

loc_0055BCA8: ;
    MEM32(ecx + 4) = eax;
    POP32(esp, esi);
    MEM32(eax) = edx;
    MEM32(edx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055BCB5: ;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BCC8; /* jne: not equal / not zero */

loc_0055BCBC: ;
    MEM32(ecx) = eax;
    POP32(esp, esi);
    MEM32(eax) = edx;
    MEM32(edx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055BCC8: ;
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    MEM32(eax) = edx;
    MEM32(edx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BCE0
 * Original: 0x0055BCE0 - 0x0055BD39 (89 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BCE0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    MEM32(edx) = esi;
    esi = MEM32(eax + 8);
    SET_LO8(ebx, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BCFA; /* jne: not equal / not zero */

loc_0055BCF7: ;
    MEM32(esi + 4) = edx;

loc_0055BCFA: ;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BD16; /* jne: not equal / not zero */

loc_0055BD08: ;
    MEM32(ecx + 4) = eax;
    POP32(esp, esi);
    MEM32(eax + 8) = edx;
    MEM32(edx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055BD16: ;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BD2C; /* jne: not equal / not zero */

loc_0055BD1E: ;
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    MEM32(eax + 8) = edx;
    MEM32(edx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055BD2C: ;
    MEM32(ecx) = eax;
    POP32(esp, esi);
    MEM32(eax + 8) = edx;
    MEM32(edx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BD40
 * Original: 0x0055BD40 - 0x0055BD9D (93 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BD40: ;
    eax = MEM32(ecx);
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BD4F; /* je: equal / zero */

loc_0055BD49: ;
    eax = MEM32(eax + 8);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

loc_0055BD4F: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BD73; /* jne: not equal / not zero */

loc_0055BD59: ;
    eax = MEM32(edx + 8);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BD6F; /* jne: not equal / not zero */

loc_0055BD63: ;
    edx = eax;
    eax = MEM32(edx + 8);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BD63; /* je: equal / zero */

loc_0055BD6F: ;
    MEM32(ecx) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0055BD73: ;
    eax = MEM32(eax + 4);
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BD9B; /* jne: not equal / not zero */

loc_0055BD7D: ;
    /* nop */

loc_0055BD80: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BD92; /* jne: not equal / not zero */

loc_0055BD86: ;
    MEM32(ecx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BD80; /* je: equal / zero */

loc_0055BD92: ;
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BD9B; /* jne: not equal / not zero */

loc_0055BD99: ;
    MEM32(ecx) = eax;

loc_0055BD9B: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055BDA0
 * Original: 0x0055BDA0 - 0x0055BE04 (100 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055BDA0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(edi + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055BE00; /* jne: not equal / not zero */

loc_0055BDAE: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 4);
    PUSH32(esp, esi);

loc_0055BDB8: ;
    ecx = MEM32(edi + 0x10);
    esi = ebp;
    /* nop */

loc_0055BDC0: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055BDE4; /* jne: not equal / not zero */

loc_0055BDC8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BDE0; /* je: equal / zero */

loc_0055BDCC: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055BDE4; /* jne: not equal / not zero */

loc_0055BDD6: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0055BDC0; /* jne: not equal / not zero */

loc_0055BDE0: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055BDE9;

loc_0055BDE4: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0055BDE9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0055BDF2; /* jge: greater or equal (signed >=) */

loc_0055BDED: ;
    edi = MEM32(edi + 8);
    goto loc_0055BDF6;

loc_0055BDF2: ;
    eax = edi;
    edi = MEM32(edi);

loc_0055BDF6: ;
    SET_LO8(ecx, MEM8(edi + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BDB8; /* je: equal / zero */

loc_0055BDFD: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0055BE00: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BE10
 * Original: 0x0055BE10 - 0x0055BE74 (100 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BE10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055BE10: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(edi + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055BE70; /* jne: not equal / not zero */

loc_0055BE1E: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 4);
    PUSH32(esp, esi);

loc_0055BE28: ;
    esi = MEM32(edi + 0x10);
    ecx = ebp;
    /* nop */

loc_0055BE30: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055BE54; /* jne: not equal / not zero */

loc_0055BE38: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BE50; /* je: equal / zero */

loc_0055BE3C: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055BE54; /* jne: not equal / not zero */

loc_0055BE46: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0055BE30; /* jne: not equal / not zero */

loc_0055BE50: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055BE59;

loc_0055BE54: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0055BE59: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0055BE63; /* jge: greater or equal (signed >=) */

loc_0055BE5D: ;
    eax = edi;
    edi = MEM32(edi);
    goto loc_0055BE66;

loc_0055BE63: ;
    edi = MEM32(edi + 8);

loc_0055BE66: ;
    SET_LO8(ecx, MEM8(edi + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BE28; /* je: equal / zero */

loc_0055BE6D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0055BE70: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BE80
 * Original: 0x0055BE80 - 0x0055BED9 (89 bytes, 30 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BE80: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 8) = edx;
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esi) = eax;
    edx = 0x62DF21;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0xC) = 0x64F8CC;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BEB6; /* je: equal / zero */

loc_0055BEB1: ;
    MEM32(esi + 0x10) = eax;
    goto loc_0055BEB9;

loc_0055BEB6: ;
    MEM32(esi + 0x10) = edx;

loc_0055BEB9: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055BEC8; /* je: equal / zero */

loc_0055BEC3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055BEC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055BEC5u); } /* indirect call */
    }

loc_0055BEC8: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    MEM8(esi + 0x18) = LO8(ecx);
    MEM8(esi + 0x19) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0055BEE0
 * Original: 0x0055BEE0 - 0x0055BF20 (64 bytes, 23 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BEE0: ;
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
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055BF0F; /* je: equal / zero */

loc_0055BF0A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055BF0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055BF0Cu); } /* indirect call */
    }

loc_0055BF0F: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    MEM8(esi + 0x14) = LO8(eax);
    MEM8(esi + 0x15) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0055BF20
 * Original: 0x0055BF20 - 0x0055BF81 (97 bytes, 27 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BF20: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = 0x62DF21;
    MEM32(eax + 0xC) = 0x64F8CC;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BF66; /* je: equal / zero */

loc_0055BF4F: ;
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(edx + 8);
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM32(eax + 0x14) = edx;
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(eax + 0x19) = 0;
    esp += 24; return; /* ret 20 */

loc_0055BF66: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM32(eax + 0x10) = 0x62DF21;
    edx = MEM32(edx + 8);
    MEM32(eax + 0x14) = edx;
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(eax + 0x19) = 0;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0055BF90
 * Original: 0x0055BF90 - 0x0055BFE6 (86 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055BF90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BFD9; /* je: equal / zero */

loc_0055BF9E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);

loc_0055BFA4: ;
    esi = MEM32(ebx + -4);
    ecx = MEM32(edi + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BFCA; /* je: equal / zero */

loc_0055BFB4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BFBD; /* je: equal / zero */

loc_0055BFB8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055BFBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055BFBAu); } /* indirect call */
    }

loc_0055BFBD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055BFCA; /* je: equal / zero */

loc_0055BFC3: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055BFCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055BFC7u); } /* indirect call */
    }

loc_0055BFCA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BFA4; /* jne: not equal / not zero */

loc_0055BFCE: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0055BFD9: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x18);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055BFF0
 * Original: 0x0055BFF0 - 0x0055C00C (28 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BFF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C009; /* je: equal / zero */

loc_0055BFF8: ;
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055C009; /* je: equal / zero */

loc_0055C004: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055C009u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C006u); } /* indirect call */
    }

loc_0055C009: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055C010
 * Original: 0x0055C010 - 0x0055C082 (114 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C010: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    eax = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_0055C06C; /* je: equal / zero */

loc_0055C01D: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0001770u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA0001770u (32-bit) */
    ecx = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0055C03D; /* je: equal / zero */

loc_0055C02B: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0055C039u); RECOMP_ABI_CALL(0x0055F100u, sub_0055F100); /* call 0x0055F100 */

loc_0055C039: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0055C03D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C07E; /* je: equal / zero */

loc_0055C041: ;
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055C04Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C047u); } /* indirect call */
    }

loc_0055C04A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x0055C05Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C055u); } /* indirect call */
    }

loc_0055C05B: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C07E; /* je: equal / zero */

loc_0055C063: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0055C068u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C065u); } /* indirect call */
    }

loc_0055C068: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0055C06C: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0055C07Eu); RECOMP_ABI_CALL(0x0055F100u, sub_0055F100); /* call 0x0055F100 */

loc_0055C07E: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055C090
 * Original: 0x0055C090 - 0x0055C105 (117 bytes, 43 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x629BD0);
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
    PUSH32(esp, 0x0055C0B8u); RECOMP_ABI_CALL(0x005772A0u, sub_005772A0); /* call 0x005772A0 */

loc_0055C0B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -24) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C0E9; /* je: equal / zero */

loc_0055C0CE: ;
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
    PUSH32(esp, 0x0055C0E9u); RECOMP_ABI_CALL(0x0055BE80u, sub_0055BE80); /* call 0x0055BE80 */

loc_0055C0E9: ;
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
 * sub_0055C105
 * Original: 0x0055C105 - 0x0055C120 (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C105(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055C105: ;
    edx = MEM32(ebp + -20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055C10Eu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055C10E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0055C11Au); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055C11A: ;
    /* int3: debug-trap slide byte, stepped over */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_0055C120(); return; /* fallthrough 0x0055C120 */

}

/**
 * sub_0055C120
 * Original: 0x0055C120 - 0x0055C195 (117 bytes, 43 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C120: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x629BE0);
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
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C148u); RECOMP_ABI_CALL(0x005772A0u, sub_005772A0); /* call 0x005772A0 */

loc_0055C148: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -24) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C179; /* je: equal / zero */

loc_0055C15E: ;
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
    PUSH32(esp, 0x0055C179u); RECOMP_ABI_CALL(0x0055BEE0u, sub_0055BEE0); /* call 0x0055BEE0 */

loc_0055C179: ;
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
 * sub_0055C195
 * Original: 0x0055C195 - 0x0055C1B0 (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C195(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055C195: ;
    edx = MEM32(ebp + -20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055C19Eu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055C19E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0055C1AAu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055C1AA: ;
    /* int3: debug-trap slide byte, stepped over */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_0055C1B0(); return; /* fallthrough 0x0055C1B0 */

}

/**
 * sub_0055C1B0
 * Original: 0x0055C1B0 - 0x0055C225 (117 bytes, 43 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C1B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x629BF0);
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
    PUSH32(esp, 0x0055C1D8u); RECOMP_ABI_CALL(0x005772A0u, sub_005772A0); /* call 0x005772A0 */

loc_0055C1D8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -24) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C209; /* je: equal / zero */

loc_0055C1EE: ;
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
    PUSH32(esp, 0x0055C209u); RECOMP_ABI_CALL(0x0055BF20u, sub_0055BF20); /* call 0x0055BF20 */

loc_0055C209: ;
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
 * sub_0055C225
 * Original: 0x0055C225 - 0x0055C240 (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C225(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055C225: ;
    edx = MEM32(ebp + -20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055C22Eu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055C22E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0055C23Au); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055C23A: ;
    /* int3: debug-trap slide byte, stepped over */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_0055C240(); return; /* fallthrough 0x0055C240 */

}

/**
 * sub_0055C240
 * Original: 0x0055C240 - 0x0055C2CA (138 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x629C10);
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
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C268u); RECOMP_ABI_CALL(0x005772A0u, sub_005772A0); /* call 0x005772A0 */

loc_0055C268: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0055C27F; /* je: equal / zero */

loc_0055C27D: ;
    MEM32(eax) = edx;

loc_0055C27F: ;
    ebx = 1;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -36) = edx;
    ecx = eax + 4;
    MEM32(ebp + -40) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C296; /* je: equal / zero */

loc_0055C294: ;
    MEM32(ecx) = edx;

loc_0055C296: ;
    MEM32(ebp + -32) = 2;
    MEM32(ebp + -44) = edx;
    ecx = eax + 8;
    MEM32(ebp + -48) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C2AC; /* je: equal / zero */

loc_0055C2AA: ;
    MEM32(ecx) = edx;

loc_0055C2AC: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    MEM8(eax + 0x14) = LO8(ebx);
    MEM8(eax + 0x15) = LO8(edx);
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
 * sub_0055C2CA
 * Original: 0x0055C2CA - 0x0055C2E0 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C2CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055C2CA: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055C2D3u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055C2D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055C2DFu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055C2DF: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0055C2E0
 * Original: 0x0055C2E0 - 0x0055C36A (138 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C2E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x629C00);
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
    PUSH32(esp, 0x0055C308u); RECOMP_ABI_CALL(0x005772A0u, sub_005772A0); /* call 0x005772A0 */

loc_0055C308: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0055C31F; /* je: equal / zero */

loc_0055C31D: ;
    MEM32(eax) = edx;

loc_0055C31F: ;
    ebx = 1;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -36) = edx;
    ecx = eax + 4;
    MEM32(ebp + -40) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C336; /* je: equal / zero */

loc_0055C334: ;
    MEM32(ecx) = edx;

loc_0055C336: ;
    MEM32(ebp + -32) = 2;
    MEM32(ebp + -44) = edx;
    ecx = eax + 8;
    MEM32(ebp + -48) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C34C; /* je: equal / zero */

loc_0055C34A: ;
    MEM32(ecx) = edx;

loc_0055C34C: ;
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
 * sub_0055C36A
 * Original: 0x0055C36A - 0x0055C380 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C36A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055C36A: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055C373u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055C373: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055C37Fu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055C37F: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0055C380
 * Original: 0x0055C380 - 0x0055C3B4 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C380: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055C3B2; /* je: equal / zero */

loc_0055C391: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    goto loc_0055C3A0;

    /* nop */
    /* nop */

loc_0055C3A0: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esp + 0xC;
    PUSH32(esp, 0x0055C3ABu); RECOMP_ABI_CALL(0x0055F350u, sub_0055F350); /* call 0x0055F350 */

loc_0055C3AB: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C3A0; /* jne: not equal / not zero */

loc_0055C3B1: ;
    POP32(esp, esi);

loc_0055C3B2: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055C3C0
 * Original: 0x0055C3C0 - 0x0055C3F4 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C3C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055C3F2; /* je: equal / zero */

loc_0055C3D1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    goto loc_0055C3E0;

    /* nop */
    /* nop */

loc_0055C3E0: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esp + 0xC;
    PUSH32(esp, 0x0055C3EBu); RECOMP_ABI_CALL(0x0055B9B0u, sub_0055B9B0); /* call 0x0055B9B0 */

loc_0055C3EB: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C3E0; /* jne: not equal / not zero */

loc_0055C3F1: ;
    POP32(esp, esi);

loc_0055C3F2: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055C400
 * Original: 0x0055C400 - 0x0055C43E (62 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C400: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C43B; /* je: equal / zero */

loc_0055C40E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);

loc_0055C414: ;
    esi = MEM32(ebx);
    ecx = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C432; /* je: equal / zero */

loc_0055C41C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C425; /* je: equal / zero */

loc_0055C420: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055C425u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C422u); } /* indirect call */
    }

loc_0055C425: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055C432; /* je: equal / zero */

loc_0055C42B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055C432u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C42Fu); } /* indirect call */
    }

loc_0055C432: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C414; /* jne: not equal / not zero */

loc_0055C439: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0055C43B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0055C440
 * Original: 0x0055C440 - 0x0055C472 (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C440: ;
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
    PUSH32(esp, 0x0055C46Bu); RECOMP_ABI_CALL(0x0055BF90u, sub_0055BF90); /* call 0x0055BF90 */

loc_0055C46B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055C480
 * Original: 0x0055C480 - 0x0055C4FE (126 bytes, 57 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055C480: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0055C490u); RECOMP_ABI_CALL(0x0055BDA0u, sub_0055BDA0); /* call 0x0055BDA0 */

loc_0055C490: ;
    ebp = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055C4E7; /* je: equal / zero */

loc_0055C49B: ;
    esi = MEM32(eax + 0x10);
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);

loc_0055C4A2: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055C4CA; /* jne: not equal / not zero */

loc_0055C4AC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C4C6; /* je: equal / zero */

loc_0055C4B0: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055C4CA; /* jne: not equal / not zero */

loc_0055C4BC: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0055C4A2; /* jne: not equal / not zero */

loc_0055C4C6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055C4CF;

loc_0055C4CA: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0055C4CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_L(_fas, _fbs)) goto loc_0055C4E7; /* jl: less (signed <) */

loc_0055C4D4: ;
    eax = esp + 0x18;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0055C4E7: ;
    eax = esp + 0xC;
    MEM32(esp + 0xC) = ebp;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055C500
 * Original: 0x0055C500 - 0x0055C56E (110 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C500: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    edx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0055C535; /* jne: not equal / not zero */

loc_0055C517: ;
    esi = MEM32(edi);
    /* nop */

loc_0055C520: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055C52A; /* jae: above or equal (unsigned >=) */

loc_0055C525: ;
    eax = MEM32(eax + 8);
    goto loc_0055C52E;

loc_0055C52A: ;
    edx = eax;
    eax = MEM32(eax);

loc_0055C52E: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C520; /* je: equal / zero */

loc_0055C535: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055C557; /* je: equal / zero */

loc_0055C53D: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055C557; /* jb: below (unsigned <) */

loc_0055C544: ;
    eax = esp + 0x18;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0055C557: ;
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
 * sub_0055C570
 * Original: 0x0055C570 - 0x0055C5D4 (100 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C570: ;
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    eax = edx;
    SET_LO8(ebx, MEM8(eax + 0x15));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ebx = MEM32(esp + 0x14);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0055C5A4; /* jne: not equal / not zero */

loc_0055C588: ;
    esi = MEM32(ebx);
    /* nop */

loc_0055C590: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055C59B; /* jae: above or equal (unsigned >=) */

loc_0055C595: ;
    edi = eax;
    eax = MEM32(eax);
    goto loc_0055C59E;

loc_0055C59B: ;
    eax = MEM32(eax + 8);

loc_0055C59E: ;
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x15), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C590; /* je: equal / zero */

loc_0055C5A4: ;
    eax = edx;
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C5C5; /* jne: not equal / not zero */

loc_0055C5AD: ;
    edx = MEM32(ebx);
    /* nop */

loc_0055C5B0: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055C5BA; /* jae: above or equal (unsigned >=) */

loc_0055C5B5: ;
    eax = MEM32(eax + 8);
    goto loc_0055C5BE;

loc_0055C5BA: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0055C5BE: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C5B0; /* je: equal / zero */

loc_0055C5C5: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055C5E0
 * Original: 0x0055C5E0 - 0x0055C64A (106 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C5E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x629C20);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -4) = 0;
    ebx = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 8);

loc_0055C614: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C630; /* je: equal / zero */

loc_0055C619: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C622u); RECOMP_ABI_CALL(0x0055BFF0u, sub_0055BFF0); /* call 0x0055BFF0 */

loc_0055C622: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = esi;
    goto loc_0055C614;

loc_0055C630: ;
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
 * sub_0055C64A
 * Original: 0x0055C64A - 0x0055C670 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C64A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055C64A: ;
    esi = MEM32(ebp + -20);
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C666; /* je: equal / zero */

loc_0055C654: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C65F; /* je: equal / zero */

loc_0055C65A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055C65Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C65Cu); } /* indirect call */
    }

loc_0055C65F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C654; /* jne: not equal / not zero */

loc_0055C666: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0055C66Fu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055C66F: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0055C670
 * Original: 0x0055C670 - 0x0055C677 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C670: ;
    eax = MEM32(ecx + 0x50);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055C680
 * Original: 0x0055C680 - 0x0055C720 (160 bytes, 60 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C680: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 8) = 0x64F8CC;
    MEM32(esp + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0055C6A3; /* jne: not equal / not zero */

loc_0055C69B: ;
    MEM32(esp + 0xC) = 0x62DF21;

loc_0055C6A3: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = edi + 0x58;
    PUSH32(esp, 0x0055C6B5u); RECOMP_ABI_CALL(0x0055C480u, sub_0055C480); /* call 0x0055C480 */

loc_0055C6B5: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x5C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C701; /* je: equal / zero */

loc_0055C6BC: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C6D4; /* je: equal / zero */

loc_0055C6C4: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0055C6D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C6CAu); } /* indirect call */
    }

loc_0055C6D0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C716; /* je: equal / zero */

loc_0055C6D4: ;
    edi = MEM32(esp + 0x18);
    esi = MEM32(esi + 0x14);
    ecx = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C6F7; /* je: equal / zero */

loc_0055C6E1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C6EA; /* je: equal / zero */

loc_0055C6E5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055C6EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C6E7u); } /* indirect call */
    }

loc_0055C6EA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055C6F7; /* je: equal / zero */

loc_0055C6F0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055C6F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C6F4u); } /* indirect call */
    }

loc_0055C6F7: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0055C701: ;
    esi = MEM32(esp + 0x18);
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C716; /* je: equal / zero */

loc_0055C70B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055C710u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C70Du); } /* indirect call */
    }

loc_0055C710: ;
    MEM32(esi) = 0;

loc_0055C716: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055C720
 * Original: 0x0055C720 - 0x0055C75C (60 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C720: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = 0x64F8CC;
    MEM32(esp + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0055C73F; /* jne: not equal / not zero */

loc_0055C737: ;
    MEM32(esp + 4) = 0x62DF21;

loc_0055C73F: ;
    eax = esp;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0055C751u); RECOMP_ABI_CALL(0x0055C480u, sub_0055C480); /* call 0x0055C480 */

loc_0055C751: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055C760
 * Original: 0x0055C760 - 0x0055C7DE (126 bytes, 54 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C760: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi + 0x64;
    PUSH32(esp, 0x0055C777u); RECOMP_ABI_CALL(0x0055C500u, sub_0055C500); /* call 0x0055C500 */

loc_0055C777: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x68) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C7C1; /* je: equal / zero */

loc_0055C77E: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C796; /* je: equal / zero */

loc_0055C786: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0055C792u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C78Cu); } /* indirect call */
    }

loc_0055C792: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C7D6; /* je: equal / zero */

loc_0055C796: ;
    edi = MEM32(esp + 0x14);
    esi = MEM32(esi + 0x10);
    ecx = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C7B9; /* je: equal / zero */

loc_0055C7A3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C7AC; /* je: equal / zero */

loc_0055C7A7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055C7ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C7A9u); } /* indirect call */
    }

loc_0055C7AC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055C7B9; /* je: equal / zero */

loc_0055C7B2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055C7B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C7B6u); } /* indirect call */
    }

loc_0055C7B9: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0055C7C1: ;
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C7D6; /* je: equal / zero */

loc_0055C7CB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055C7D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C7CDu); } /* indirect call */
    }

loc_0055C7D0: ;
    MEM32(esi) = 0;

loc_0055C7D6: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055C7E0
 * Original: 0x0055C7E0 - 0x0055C7FC (28 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C7E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C7E0: ;
    PUSH32(esp, ecx);
    eax = esp + 8;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0055C7F3u); RECOMP_ABI_CALL(0x0055C500u, sub_0055C500); /* call 0x0055C500 */

loc_0055C7F3: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055C800
 * Original: 0x0055C800 - 0x0055C83E (62 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C800: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0055C838; /* jne: not equal / not zero */

loc_0055C812: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0055C81Du); RECOMP_ABI_CALL(0x0055C800u, sub_0055C800); /* call 0x0055C800 */

loc_0055C81D: ;
    esi = MEM32(esi);
    PUSH32(esp, edi);
    MEM32(edi + 0xC) = 0x64F8C4;
    PUSH32(esp, 0x0055C82Cu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055C82C: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055C812; /* je: equal / zero */

loc_0055C838: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055C840
 * Original: 0x0055C840 - 0x0055C8A8 (104 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x629C30);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    ebx = MEM32(ebp + 0x14);
    edi = MEM32(ebp + 0xC);

loc_0055C874: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055C890; /* jbe: below or equal (unsigned <=) */

loc_0055C878: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C884u); RECOMP_ABI_CALL(0x0055BFF0u, sub_0055BFF0); /* call 0x0055BFF0 */

loc_0055C884: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = esi;
    goto loc_0055C874;

loc_0055C890: ;
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
 * sub_0055C8A8
 * Original: 0x0055C8A8 - 0x0055C8D0 (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C8A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055C8A8: ;
    esi = MEM32(ebp + -20);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C8C4; /* je: equal / zero */

loc_0055C8B2: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C8BD; /* je: equal / zero */

loc_0055C8B8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055C8BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C8BAu); } /* indirect call */
    }

loc_0055C8BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C8B2; /* jne: not equal / not zero */

loc_0055C8C4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0055C8CDu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055C8CD: ;
    /* int3: debug-trap slide byte, stepped over */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_0055C8D0(); return; /* fallthrough 0x0055C8D0 */

}

/**
 * sub_0055C8D0
 * Original: 0x0055C8D0 - 0x0055C91A (74 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C8D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0055C914; /* jne: not equal / not zero */

loc_0055C8E2: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0055C8EDu); RECOMP_ABI_CALL(0x0055C8D0u, sub_0055C8D0); /* call 0x0055C8D0 */

loc_0055C8ED: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055C8FB; /* je: equal / zero */

loc_0055C8F6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055C8FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C8F8u); } /* indirect call */
    }

loc_0055C8FB: ;
    PUSH32(esp, edi);
    MEM32(edi + 0xC) = 0x64F8C4;
    PUSH32(esp, 0x0055C908u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055C908: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055C8E2; /* je: equal / zero */

loc_0055C914: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055C920
 * Original: 0x0055C920 - 0x0055C963 (67 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C920: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0055C95D; /* jne: not equal / not zero */

loc_0055C932: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0055C93Du); RECOMP_ABI_CALL(0x0055C920u, sub_0055C920); /* call 0x0055C920 */

loc_0055C93D: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055C94B; /* je: equal / zero */

loc_0055C946: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055C94Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C948u); } /* indirect call */
    }

loc_0055C94B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055C951u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055C951: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055C932; /* je: equal / zero */

loc_0055C95D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055C970
 * Original: 0x0055C970 - 0x0055C998 (40 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C970: ;
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
    PUSH32(esp, 0x0055C992u); RECOMP_ABI_CALL(0x0055C5E0u, sub_0055C5E0); /* call 0x0055C5E0 */

loc_0055C992: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055C9A0
 * Original: 0x0055C9A0 - 0x0055C9C7 (39 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C9A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C9C2; /* je: equal / zero */

loc_0055C9AE: ;
    edi = edi;

loc_0055C9B0: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C9BB; /* je: equal / zero */

loc_0055C9B6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055C9BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C9B8u); } /* indirect call */
    }

loc_0055C9BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C9B0; /* jne: not equal / not zero */

loc_0055C9C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055C9D0
 * Original: 0x0055C9D0 - 0x0055C9F7 (39 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C9D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C9D0: ;
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
    PUSH32(esp, 0x0055C9ECu); RECOMP_ABI_CALL(0x0055C840u, sub_0055C840); /* call 0x0055C840 */

loc_0055C9EC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + esi * 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055CA00
 * Original: 0x0055CA00 - 0x0055CA3B (59 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CA00: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CA39; /* je: equal / zero */

loc_0055CA0A: ;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 8);
    eax = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CA38; /* je: equal / zero */

loc_0055CA19: ;
    PUSH32(esp, esi);
    esi = edi + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CA33; /* je: equal / zero */

loc_0055CA21: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CA2C; /* je: equal / zero */

loc_0055CA27: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055CA2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CA29u); } /* indirect call */
    }

loc_0055CA2C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CA21; /* jne: not equal / not zero */

loc_0055CA33: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 8) = MEM32(ebx + 8) + 0xFFFFFFFCu;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_0055CA38: ;
    POP32(esp, edi);

loc_0055CA39: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055CA40
 * Original: 0x0055CA40 - 0x0055CA8A (74 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CA40: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CA72; /* je: equal / zero */

loc_0055CA4B: ;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CA65; /* je: equal / zero */

loc_0055CA53: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CA5E; /* je: equal / zero */

loc_0055CA59: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055CA5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CA5Bu); } /* indirect call */
    }

loc_0055CA5E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CA53; /* jne: not equal / not zero */

loc_0055CA65: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0055CA6Eu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055CA6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_0055CA72: ;
    POP32(esp, esi);
    MEM32(ebx + 4) = 0;
    MEM32(ebx + 8) = 0;
    MEM32(ebx + 0xC) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055CA90
 * Original: 0x0055CA90 - 0x0055CC63 (467 bytes, 162 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055CA90: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15555554) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0x15555554 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055CB1E; /* jb: below (unsigned <) */

loc_0055CAA0: ;
    edi = 0xF;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x63A548;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = esi;
    MEM8(esp + 0xC) = 0;
    edx = eax + 1;
    /* nop */

loc_0055CAC0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CAC0; /* jne: not equal / not zero */

loc_0055CAC7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x63A548);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0055CAD8u); RECOMP_ABI_CALL(0x0041E9F0u, sub_0041E9F0); /* call 0x0041E9F0 */

loc_0055CAD8: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x0055CAE1u); RECOMP_ABI_CALL(0x0061A390u, sub_0061A390); /* call 0x0061A390 */

loc_0055CAE1: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x65EB4C;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x50) = esi;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0x0055CB07u); RECOMP_ABI_CALL(0x0041E940u, sub_0041E940); /* call 0x0041E940 */

loc_0055CB07: ;
    PUSH32(esp, 0x65F6E8);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x65EB58;
    PUSH32(esp, 0x0055CB1Eu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055CB1E: ;
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
    PUSH32(esp, 0x0055CB37u); RECOMP_ABI_CALL(0x0055C090u, sub_0055C090); /* call 0x0055C090 */

loc_0055CB37: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0055CB5B; /* jne: not equal / not zero */

loc_0055CB4B: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 4);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(edx + 8) = ecx;
    goto loc_0055CB7E;

loc_0055CB5B: ;
    SET_LO8(eax, MEM8(esp + 0x58));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CB70; /* je: equal / zero */

loc_0055CB63: ;
    MEM32(esi) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CB7E; /* jne: not equal / not zero */

loc_0055CB6C: ;
    MEM32(eax) = ecx;
    goto loc_0055CB7E;

loc_0055CB70: ;
    MEM32(esi + 8) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CB7E; /* jne: not equal / not zero */

loc_0055CB7B: ;
    MEM32(eax + 8) = ecx;

loc_0055CB7E: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), 0 (8-bit) */
    eax = ecx + 4;
    esi = ecx;
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_0055CC4B; /* jne: not equal / not zero */

loc_0055CB92: ;
    PUSH32(esp, ebp);

loc_0055CB93: ;
    ecx = MEM32(eax);
    ebp = MEM32(ecx + 4);
    edx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CBED; /* jne: not equal / not zero */

loc_0055CB9F: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CBBE; /* jne: not equal / not zero */

loc_0055CBA8: ;
    MEM8(ecx + 0x18) = LO8(ebx);
    MEM8(edx + 0x18) = LO8(ebx);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x18) = 0;
    eax = MEM32(eax);
    esi = MEM32(eax + 4);
    goto loc_0055CC35;

loc_0055CBBE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CBCD; /* jne: not equal / not zero */

loc_0055CBC3: ;
    esi = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0055CBCDu); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_0055CBCD: ;
    ecx = MEM32(esi + 4);
    MEM8(ecx + 0x18) = LO8(ebx);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x18) = 0;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0055CBEBu); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_0055CBEB: ;
    goto loc_0055CC35;

loc_0055CBED: ;
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CC09; /* jne: not equal / not zero */

loc_0055CBF3: ;
    MEM8(ecx + 0x18) = LO8(ebx);
    MEM8(edx + 0x18) = LO8(ebx);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x18) = 0;
    eax = MEM32(eax);
    esi = MEM32(eax + 4);
    goto loc_0055CC35;

loc_0055CC09: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CC17; /* jne: not equal / not zero */

loc_0055CC0D: ;
    esi = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0055CC17u); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_0055CC17: ;
    ecx = MEM32(esi + 4);
    MEM8(ecx + 0x18) = LO8(ebx);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x18) = 0;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0055CC35u); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_0055CC35: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x18));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0055CB93; /* je: equal / zero */

loc_0055CC46: ;
    ecx = MEM32(esp + 0x64);
    POP32(esp, ebp);

loc_0055CC4B: ;
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
 * sub_0055CC70
 * Original: 0x0055CC70 - 0x0055CE43 (467 bytes, 162 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055CC70: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FFFFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0x1FFFFFFE (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055CCFE; /* jb: below (unsigned <) */

loc_0055CC80: ;
    edi = 0xF;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x63A548;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = esi;
    MEM8(esp + 0xC) = 0;
    edx = eax + 1;
    /* nop */

loc_0055CCA0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CCA0; /* jne: not equal / not zero */

loc_0055CCA7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x63A548);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0055CCB8u); RECOMP_ABI_CALL(0x0041E9F0u, sub_0041E9F0); /* call 0x0041E9F0 */

loc_0055CCB8: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x0055CCC1u); RECOMP_ABI_CALL(0x0061A390u, sub_0061A390); /* call 0x0061A390 */

loc_0055CCC1: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x65EB4C;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x50) = esi;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0x0055CCE7u); RECOMP_ABI_CALL(0x0041E940u, sub_0041E940); /* call 0x0041E940 */

loc_0055CCE7: ;
    PUSH32(esp, 0x65F6E8);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x65EB58;
    PUSH32(esp, 0x0055CCFEu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055CCFE: ;
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
    PUSH32(esp, 0x0055CD17u); RECOMP_ABI_CALL(0x0055C120u, sub_0055C120); /* call 0x0055C120 */

loc_0055CD17: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0055CD3B; /* jne: not equal / not zero */

loc_0055CD2B: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 4);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(edx + 8) = ecx;
    goto loc_0055CD5E;

loc_0055CD3B: ;
    SET_LO8(eax, MEM8(esp + 0x58));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CD50; /* je: equal / zero */

loc_0055CD43: ;
    MEM32(esi) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CD5E; /* jne: not equal / not zero */

loc_0055CD4C: ;
    MEM32(eax) = ecx;
    goto loc_0055CD5E;

loc_0055CD50: ;
    MEM32(esi + 8) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CD5E; /* jne: not equal / not zero */

loc_0055CD5B: ;
    MEM32(eax + 8) = ecx;

loc_0055CD5E: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), 0 (8-bit) */
    eax = ecx + 4;
    esi = ecx;
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_0055CE2B; /* jne: not equal / not zero */

loc_0055CD72: ;
    PUSH32(esp, ebp);

loc_0055CD73: ;
    ecx = MEM32(eax);
    ebp = MEM32(ecx + 4);
    edx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CDCD; /* jne: not equal / not zero */

loc_0055CD7F: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CD9E; /* jne: not equal / not zero */

loc_0055CD88: ;
    MEM8(ecx + 0x14) = LO8(ebx);
    MEM8(edx + 0x14) = LO8(ebx);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x14) = 0;
    eax = MEM32(eax);
    esi = MEM32(eax + 4);
    goto loc_0055CE15;

loc_0055CD9E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CDAD; /* jne: not equal / not zero */

loc_0055CDA3: ;
    esi = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0055CDADu); RECOMP_ABI_CALL(0x0055BC80u, sub_0055BC80); /* call 0x0055BC80 */

loc_0055CDAD: ;
    ecx = MEM32(esi + 4);
    MEM8(ecx + 0x14) = LO8(ebx);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x14) = 0;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0055CDCBu); RECOMP_ABI_CALL(0x0055BCE0u, sub_0055BCE0); /* call 0x0055BCE0 */

loc_0055CDCB: ;
    goto loc_0055CE15;

loc_0055CDCD: ;
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CDE9; /* jne: not equal / not zero */

loc_0055CDD3: ;
    MEM8(ecx + 0x14) = LO8(ebx);
    MEM8(edx + 0x14) = LO8(ebx);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x14) = 0;
    eax = MEM32(eax);
    esi = MEM32(eax + 4);
    goto loc_0055CE15;

loc_0055CDE9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CDF7; /* jne: not equal / not zero */

loc_0055CDED: ;
    esi = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0055CDF7u); RECOMP_ABI_CALL(0x0055BCE0u, sub_0055BCE0); /* call 0x0055BCE0 */

loc_0055CDF7: ;
    ecx = MEM32(esi + 4);
    MEM8(ecx + 0x14) = LO8(ebx);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x14) = 0;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0055CE15u); RECOMP_ABI_CALL(0x0055BC80u, sub_0055BC80); /* call 0x0055BC80 */

loc_0055CE15: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0055CD73; /* je: equal / zero */

loc_0055CE26: ;
    ecx = MEM32(esp + 0x64);
    POP32(esp, ebp);

loc_0055CE2B: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x14) = LO8(ebx);
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
 * sub_0055CE50
 * Original: 0x0055CE50 - 0x0055D023 (467 bytes, 162 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055CE50: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15555554) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0x15555554 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055CEDE; /* jb: below (unsigned <) */

loc_0055CE60: ;
    edi = 0xF;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x63A548;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = esi;
    MEM8(esp + 0xC) = 0;
    edx = eax + 1;
    /* nop */

loc_0055CE80: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CE80; /* jne: not equal / not zero */

loc_0055CE87: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x63A548);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0055CE98u); RECOMP_ABI_CALL(0x0041E9F0u, sub_0041E9F0); /* call 0x0041E9F0 */

loc_0055CE98: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x0055CEA1u); RECOMP_ABI_CALL(0x0061A390u, sub_0061A390); /* call 0x0061A390 */

loc_0055CEA1: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x65EB4C;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x50) = esi;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0x0055CEC7u); RECOMP_ABI_CALL(0x0041E940u, sub_0041E940); /* call 0x0041E940 */

loc_0055CEC7: ;
    PUSH32(esp, 0x65F6E8);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x65EB58;
    PUSH32(esp, 0x0055CEDEu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055CEDE: ;
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
    PUSH32(esp, 0x0055CEF7u); RECOMP_ABI_CALL(0x0055C1B0u, sub_0055C1B0); /* call 0x0055C1B0 */

loc_0055CEF7: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0055CF1B; /* jne: not equal / not zero */

loc_0055CF0B: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 4);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(edx + 8) = ecx;
    goto loc_0055CF3E;

loc_0055CF1B: ;
    SET_LO8(eax, MEM8(esp + 0x58));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CF30; /* je: equal / zero */

loc_0055CF23: ;
    MEM32(esi) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CF3E; /* jne: not equal / not zero */

loc_0055CF2C: ;
    MEM32(eax) = ecx;
    goto loc_0055CF3E;

loc_0055CF30: ;
    MEM32(esi + 8) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CF3E; /* jne: not equal / not zero */

loc_0055CF3B: ;
    MEM32(eax + 8) = ecx;

loc_0055CF3E: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), 0 (8-bit) */
    eax = ecx + 4;
    esi = ecx;
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_0055D00B; /* jne: not equal / not zero */

loc_0055CF52: ;
    PUSH32(esp, ebp);

loc_0055CF53: ;
    ecx = MEM32(eax);
    ebp = MEM32(ecx + 4);
    edx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CFAD; /* jne: not equal / not zero */

loc_0055CF5F: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CF7E; /* jne: not equal / not zero */

loc_0055CF68: ;
    MEM8(ecx + 0x18) = LO8(ebx);
    MEM8(edx + 0x18) = LO8(ebx);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x18) = 0;
    eax = MEM32(eax);
    esi = MEM32(eax + 4);
    goto loc_0055CFF5;

loc_0055CF7E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CF8D; /* jne: not equal / not zero */

loc_0055CF83: ;
    esi = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0055CF8Du); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_0055CF8D: ;
    ecx = MEM32(esi + 4);
    MEM8(ecx + 0x18) = LO8(ebx);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x18) = 0;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0055CFABu); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_0055CFAB: ;
    goto loc_0055CFF5;

loc_0055CFAD: ;
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CFC9; /* jne: not equal / not zero */

loc_0055CFB3: ;
    MEM8(ecx + 0x18) = LO8(ebx);
    MEM8(edx + 0x18) = LO8(ebx);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x18) = 0;
    eax = MEM32(eax);
    esi = MEM32(eax + 4);
    goto loc_0055CFF5;

loc_0055CFC9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CFD7; /* jne: not equal / not zero */

loc_0055CFCD: ;
    esi = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0055CFD7u); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_0055CFD7: ;
    ecx = MEM32(esi + 4);
    MEM8(ecx + 0x18) = LO8(ebx);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x18) = 0;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0055CFF5u); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_0055CFF5: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x18));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0055CF53; /* je: equal / zero */

loc_0055D006: ;
    ecx = MEM32(esp + 0x64);
    POP32(esp, ebp);

loc_0055D00B: ;
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
 * sub_0055D030
 * Original: 0x0055D030 - 0x0055D314 (740 bytes, 264 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055D030: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0055D0BE; /* je: equal / zero */

loc_0055D044: ;
    edi = 0xF;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x63A52C;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    edx = eax + 1;

loc_0055D060: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D060; /* jne: not equal / not zero */

loc_0055D067: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x63A52C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0055D078u); RECOMP_ABI_CALL(0x0041E9F0u, sub_0041E9F0); /* call 0x0041E9F0 */

loc_0055D078: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0055D081u); RECOMP_ABI_CALL(0x0061A390u, sub_0061A390); /* call 0x0061A390 */

loc_0055D081: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    MEM32(esp + 0x38) = 0x65EB4C;
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x58) = esi;
    MEM8(esp + 0x48) = 0;
    PUSH32(esp, 0x0055D0A7u); RECOMP_ABI_CALL(0x0041E940u, sub_0041E940); /* call 0x0041E940 */

loc_0055D0A7: ;
    PUSH32(esp, 0x65FBD0);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = 0x65EB64;
    PUSH32(esp, 0x0055D0BEu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055D0BE: ;
    PUSH32(esp, ebx);
    ebx = edi;
    PUSH32(esp, ebp);
    ecx = esp + 0x64;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0055D0CFu); RECOMP_ABI_CALL(0x0055F350u, sub_0055F350); /* call 0x0055F350 */

loc_0055D0CF: ;
    ebp = MEM32(edi);
    SET_LO8(eax, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = edi + 8;
    if (CMP_NE(_fa, _fb)) goto loc_0055D0ED; /* jne: not equal / not zero */

loc_0055D0DB: ;
    edx = MEM32(eax);
    SET_LO8(ecx, MEM8(edx + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D0EF; /* jne: not equal / not zero */

loc_0055D0E4: ;
    eax = MEM32(esp + 0x64);
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055D0ED: ;
    ebp = MEM32(eax);

loc_0055D0EF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D161; /* jne: not equal / not zero */

loc_0055D0F3: ;
    SET_LO8(eax, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ebx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0055D100; /* jne: not equal / not zero */

loc_0055D0FD: ;
    MEM32(ebp + 4) = esi;

loc_0055D100: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D111; /* jne: not equal / not zero */

loc_0055D10C: ;
    MEM32(eax + 4) = ebp;
    goto loc_0055D11C;

loc_0055D111: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D119; /* jne: not equal / not zero */

loc_0055D115: ;
    MEM32(esi) = ebp;
    goto loc_0055D11C;

loc_0055D119: ;
    MEM32(esi + 8) = ebp;

loc_0055D11C: ;
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D13D; /* jne: not equal / not zero */

loc_0055D123: ;
    SET_LO8(eax, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D12E; /* je: equal / zero */

loc_0055D12A: ;
    eax = esi;
    goto loc_0055D13B;

loc_0055D12E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0055D134u); RECOMP_ABI_CALL(0x0055F270u, sub_0055F270); /* call 0x0055F270 */

loc_0055D134: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055D13B: ;
    MEM32(edi) = eax;

loc_0055D13D: ;
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D1BE; /* jne: not equal / not zero */

loc_0055D145: ;
    SET_LO8(eax, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D153; /* je: equal / zero */

loc_0055D14C: ;
    eax = esi;
    MEM32(edi + 8) = eax;
    goto loc_0055D1BE;

loc_0055D153: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0055D159u); RECOMP_ABI_CALL(0x0055F250u, sub_0055F250); /* call 0x0055F250 */

loc_0055D159: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = eax;
    goto loc_0055D1BE;

loc_0055D161: ;
    ecx = MEM32(ebx);
    MEM32(ecx + 4) = edi;
    edx = MEM32(ebx);
    MEM32(edi) = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D173; /* jne: not equal / not zero */

loc_0055D16F: ;
    esi = edi;
    goto loc_0055D18D;

loc_0055D173: ;
    SET_LO8(ecx, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    esi = MEM32(edi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0055D180; /* jne: not equal / not zero */

loc_0055D17D: ;
    MEM32(ebp + 4) = esi;

loc_0055D180: ;
    MEM32(esi) = ebp;
    ecx = MEM32(ebx + 8);
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 8);
    MEM32(edx + 4) = edi;

loc_0055D18D: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D19E; /* jne: not equal / not zero */

loc_0055D199: ;
    MEM32(eax + 4) = edi;
    goto loc_0055D1AC;

loc_0055D19E: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D1A9; /* jne: not equal / not zero */

loc_0055D1A5: ;
    MEM32(eax) = edi;
    goto loc_0055D1AC;

loc_0055D1A9: ;
    MEM32(eax + 8) = edi;

loc_0055D1AC: ;
    ecx = MEM32(ebx + 4);
    MEM32(edi + 4) = ecx;
    SET_LO8(edx, MEM8(ebx + 0x18));
    SET_LO8(eax, MEM8(edi + 0x18));
    MEM8(edi + 0x18) = LO8(edx);
    MEM8(ebx + 0x18) = LO8(eax);

loc_0055D1BE: ;
    eax = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(eax + 0x18));
    edi = MEM32(esp + 0x10);
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D2D1; /* jne: not equal / not zero */

loc_0055D1D3: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D2CE; /* je: equal / zero */

loc_0055D1DF: ;
    /* nop */

loc_0055D1E0: ;
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D2CE; /* jne: not equal / not zero */

loc_0055D1E9: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D256; /* jne: not equal / not zero */

loc_0055D1EF: ;
    eax = MEM32(esi + 8);
    SET_LO8(ecx, MEM8(eax + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D20B; /* jne: not equal / not zero */

loc_0055D1F9: ;
    MEM8(eax + 0x18) = LO8(ebx);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 0x18) = 0;
    PUSH32(esp, 0x0055D208u); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_0055D208: ;
    eax = MEM32(esi + 8);

loc_0055D20B: ;
    SET_LO8(ecx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D288; /* jne: not equal / not zero */

loc_0055D212: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D221; /* jne: not equal / not zero */

loc_0055D219: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D284; /* je: equal / zero */

loc_0055D221: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D23D; /* jne: not equal / not zero */

loc_0055D229: ;
    edx = MEM32(eax);
    MEM8(edx + 0x18) = LO8(ebx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax + 0x18) = 0;
    PUSH32(esp, 0x0055D23Au); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_0055D23A: ;
    eax = MEM32(esi + 8);

loc_0055D23D: ;
    SET_LO8(ecx, MEM8(esi + 0x18));
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(esi + 0x18) = LO8(ebx);
    edx = MEM32(eax + 8);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(edx + 0x18) = LO8(ebx);
    PUSH32(esp, 0x0055D254u); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_0055D254: ;
    goto loc_0055D2CE;

loc_0055D256: ;
    SET_LO8(ecx, MEM8(eax + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D26E; /* jne: not equal / not zero */

loc_0055D25D: ;
    MEM8(eax + 0x18) = LO8(ebx);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 0x18) = 0;
    PUSH32(esp, 0x0055D26Cu); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_0055D26C: ;
    eax = MEM32(esi);

loc_0055D26E: ;
    SET_LO8(ecx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D288; /* jne: not equal / not zero */

loc_0055D275: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D29D; /* jne: not equal / not zero */

loc_0055D27D: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D29D; /* jne: not equal / not zero */

loc_0055D284: ;
    MEM8(eax + 0x18) = 0;

loc_0055D288: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    ebp = esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    esi = MEM32(esi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0055D1E0; /* jne: not equal / not zero */

loc_0055D29B: ;
    goto loc_0055D2CE;

loc_0055D29D: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D2B8; /* jne: not equal / not zero */

loc_0055D2A4: ;
    edx = MEM32(eax + 8);
    MEM8(edx + 0x18) = LO8(ebx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax + 0x18) = 0;
    PUSH32(esp, 0x0055D2B6u); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_0055D2B6: ;
    eax = MEM32(esi);

loc_0055D2B8: ;
    SET_LO8(ecx, MEM8(esi + 0x18));
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(esi + 0x18) = LO8(ebx);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(edx + 0x18) = LO8(ebx);
    PUSH32(esp, 0x0055D2CEu); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_0055D2CE: ;
    MEM8(ebp + 0x18) = LO8(ebx);

loc_0055D2D1: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055D2E3; /* je: equal / zero */

loc_0055D2DE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055D2E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055D2E0u); } /* indirect call */
    }

loc_0055D2E3: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    MEM32(eax + 0xC) = 0x64F8C4;
    PUSH32(esp, 0x0055D2F4u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055D2F4: ;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055D302; /* jbe: below or equal (unsigned <=) */

loc_0055D2FE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 8) = eax;

loc_0055D302: ;
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
 * sub_0055D320
 * Original: 0x0055D320 - 0x0055D5FD (733 bytes, 263 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055D320: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x5C);
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055D3AE; /* je: equal / zero */

loc_0055D334: ;
    edi = 0xF;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x63A52C;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    edx = eax + 1;

loc_0055D350: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D350; /* jne: not equal / not zero */

loc_0055D357: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x63A52C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0055D368u); RECOMP_ABI_CALL(0x0041E9F0u, sub_0041E9F0); /* call 0x0041E9F0 */

loc_0055D368: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0055D371u); RECOMP_ABI_CALL(0x0061A390u, sub_0061A390); /* call 0x0061A390 */

loc_0055D371: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    MEM32(esp + 0x38) = 0x65EB4C;
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x58) = esi;
    MEM8(esp + 0x48) = 0;
    PUSH32(esp, 0x0055D397u); RECOMP_ABI_CALL(0x0041E940u, sub_0041E940); /* call 0x0041E940 */

loc_0055D397: ;
    PUSH32(esp, 0x65FBD0);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = 0x65EB64;
    PUSH32(esp, 0x0055D3AEu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055D3AE: ;
    PUSH32(esp, ebx);
    ebx = edi;
    PUSH32(esp, ebp);
    ecx = esp + 0x64;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0055D3BFu); RECOMP_ABI_CALL(0x0055B9B0u, sub_0055B9B0); /* call 0x0055B9B0 */

loc_0055D3BF: ;
    ebp = MEM32(edi);
    SET_LO8(eax, MEM8(ebp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = edi + 8;
    if (CMP_NE(_fa, _fb)) goto loc_0055D3DD; /* jne: not equal / not zero */

loc_0055D3CB: ;
    edx = MEM32(eax);
    SET_LO8(ecx, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D3DF; /* jne: not equal / not zero */

loc_0055D3D4: ;
    eax = MEM32(esp + 0x64);
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055D3DD: ;
    ebp = MEM32(eax);

loc_0055D3DF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D451; /* jne: not equal / not zero */

loc_0055D3E3: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ebx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0055D3F0; /* jne: not equal / not zero */

loc_0055D3ED: ;
    MEM32(ebp + 4) = esi;

loc_0055D3F0: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D401; /* jne: not equal / not zero */

loc_0055D3FC: ;
    MEM32(eax + 4) = ebp;
    goto loc_0055D40C;

loc_0055D401: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D409; /* jne: not equal / not zero */

loc_0055D405: ;
    MEM32(esi) = ebp;
    goto loc_0055D40C;

loc_0055D409: ;
    MEM32(esi + 8) = ebp;

loc_0055D40C: ;
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D42D; /* jne: not equal / not zero */

loc_0055D413: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D41E; /* je: equal / zero */

loc_0055D41A: ;
    eax = esi;
    goto loc_0055D42B;

loc_0055D41E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0055D424u); RECOMP_ABI_CALL(0x0055B990u, sub_0055B990); /* call 0x0055B990 */

loc_0055D424: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055D42B: ;
    MEM32(edi) = eax;

loc_0055D42D: ;
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D4AE; /* jne: not equal / not zero */

loc_0055D435: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D443; /* je: equal / zero */

loc_0055D43C: ;
    eax = esi;
    MEM32(edi + 8) = eax;
    goto loc_0055D4AE;

loc_0055D443: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0055D449u); RECOMP_ABI_CALL(0x0055B970u, sub_0055B970); /* call 0x0055B970 */

loc_0055D449: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = eax;
    goto loc_0055D4AE;

loc_0055D451: ;
    ecx = MEM32(ebx);
    MEM32(ecx + 4) = edi;
    edx = MEM32(ebx);
    MEM32(edi) = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D463; /* jne: not equal / not zero */

loc_0055D45F: ;
    esi = edi;
    goto loc_0055D47D;

loc_0055D463: ;
    SET_LO8(ecx, MEM8(ebp + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    esi = MEM32(edi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0055D470; /* jne: not equal / not zero */

loc_0055D46D: ;
    MEM32(ebp + 4) = esi;

loc_0055D470: ;
    MEM32(esi) = ebp;
    ecx = MEM32(ebx + 8);
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 8);
    MEM32(edx + 4) = edi;

loc_0055D47D: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D48E; /* jne: not equal / not zero */

loc_0055D489: ;
    MEM32(eax + 4) = edi;
    goto loc_0055D49C;

loc_0055D48E: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D499; /* jne: not equal / not zero */

loc_0055D495: ;
    MEM32(eax) = edi;
    goto loc_0055D49C;

loc_0055D499: ;
    MEM32(eax + 8) = edi;

loc_0055D49C: ;
    ecx = MEM32(ebx + 4);
    MEM32(edi + 4) = ecx;
    SET_LO8(edx, MEM8(ebx + 0x14));
    SET_LO8(eax, MEM8(edi + 0x14));
    MEM8(edi + 0x14) = LO8(edx);
    MEM8(ebx + 0x14) = LO8(eax);

loc_0055D4AE: ;
    eax = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(eax + 0x14));
    edi = MEM32(esp + 0x10);
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D5C1; /* jne: not equal / not zero */

loc_0055D4C3: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D5BE; /* je: equal / zero */

loc_0055D4CF: ;
    /* nop */

loc_0055D4D0: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D5BE; /* jne: not equal / not zero */

loc_0055D4D9: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D546; /* jne: not equal / not zero */

loc_0055D4DF: ;
    eax = MEM32(esi + 8);
    SET_LO8(ecx, MEM8(eax + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D4FB; /* jne: not equal / not zero */

loc_0055D4E9: ;
    MEM8(eax + 0x14) = LO8(ebx);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 0x14) = 0;
    PUSH32(esp, 0x0055D4F8u); RECOMP_ABI_CALL(0x0055BC80u, sub_0055BC80); /* call 0x0055BC80 */

loc_0055D4F8: ;
    eax = MEM32(esi + 8);

loc_0055D4FB: ;
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D578; /* jne: not equal / not zero */

loc_0055D502: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D511; /* jne: not equal / not zero */

loc_0055D509: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D574; /* je: equal / zero */

loc_0055D511: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D52D; /* jne: not equal / not zero */

loc_0055D519: ;
    edx = MEM32(eax);
    MEM8(edx + 0x14) = LO8(ebx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax + 0x14) = 0;
    PUSH32(esp, 0x0055D52Au); RECOMP_ABI_CALL(0x0055BCE0u, sub_0055BCE0); /* call 0x0055BCE0 */

loc_0055D52A: ;
    eax = MEM32(esi + 8);

loc_0055D52D: ;
    SET_LO8(ecx, MEM8(esi + 0x14));
    MEM8(eax + 0x14) = LO8(ecx);
    MEM8(esi + 0x14) = LO8(ebx);
    edx = MEM32(eax + 8);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(edx + 0x14) = LO8(ebx);
    PUSH32(esp, 0x0055D544u); RECOMP_ABI_CALL(0x0055BC80u, sub_0055BC80); /* call 0x0055BC80 */

loc_0055D544: ;
    goto loc_0055D5BE;

loc_0055D546: ;
    SET_LO8(ecx, MEM8(eax + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D55E; /* jne: not equal / not zero */

loc_0055D54D: ;
    MEM8(eax + 0x14) = LO8(ebx);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 0x14) = 0;
    PUSH32(esp, 0x0055D55Cu); RECOMP_ABI_CALL(0x0055BCE0u, sub_0055BCE0); /* call 0x0055BCE0 */

loc_0055D55C: ;
    eax = MEM32(esi);

loc_0055D55E: ;
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D578; /* jne: not equal / not zero */

loc_0055D565: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D58D; /* jne: not equal / not zero */

loc_0055D56D: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D58D; /* jne: not equal / not zero */

loc_0055D574: ;
    MEM8(eax + 0x14) = 0;

loc_0055D578: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    ebp = esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    esi = MEM32(esi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0055D4D0; /* jne: not equal / not zero */

loc_0055D58B: ;
    goto loc_0055D5BE;

loc_0055D58D: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D5A8; /* jne: not equal / not zero */

loc_0055D594: ;
    edx = MEM32(eax + 8);
    MEM8(edx + 0x14) = LO8(ebx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax + 0x14) = 0;
    PUSH32(esp, 0x0055D5A6u); RECOMP_ABI_CALL(0x0055BC80u, sub_0055BC80); /* call 0x0055BC80 */

loc_0055D5A6: ;
    eax = MEM32(esi);

loc_0055D5A8: ;
    SET_LO8(ecx, MEM8(esi + 0x14));
    MEM8(eax + 0x14) = LO8(ecx);
    MEM8(esi + 0x14) = LO8(ebx);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(edx + 0x14) = LO8(ebx);
    PUSH32(esp, 0x0055D5BEu); RECOMP_ABI_CALL(0x0055BCE0u, sub_0055BCE0); /* call 0x0055BCE0 */

loc_0055D5BE: ;
    MEM8(ebp + 0x14) = LO8(ebx);

loc_0055D5C1: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055D5D3; /* je: equal / zero */

loc_0055D5CE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055D5D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055D5D0u); } /* indirect call */
    }

loc_0055D5D3: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055D5DDu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055D5DD: ;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055D5EB; /* jbe: below or equal (unsigned <=) */

loc_0055D5E7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 8) = eax;

loc_0055D5EB: ;
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
 * sub_0055D600
 * Original: 0x0055D600 - 0x0055D8D4 (724 bytes, 258 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055D600: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0055D68E; /* je: equal / zero */

loc_0055D614: ;
    edi = 0xF;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x63A52C;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    edx = eax + 1;

loc_0055D630: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D630; /* jne: not equal / not zero */

loc_0055D637: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x63A52C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0055D648u); RECOMP_ABI_CALL(0x0041E9F0u, sub_0041E9F0); /* call 0x0041E9F0 */

loc_0055D648: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0055D651u); RECOMP_ABI_CALL(0x0061A390u, sub_0061A390); /* call 0x0061A390 */

loc_0055D651: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    MEM32(esp + 0x38) = 0x65EB4C;
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x58) = esi;
    MEM8(esp + 0x48) = 0;
    PUSH32(esp, 0x0055D677u); RECOMP_ABI_CALL(0x0041E940u, sub_0041E940); /* call 0x0041E940 */

loc_0055D677: ;
    PUSH32(esp, 0x65FBD0);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = 0x65EB64;
    PUSH32(esp, 0x0055D68Eu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055D68E: ;
    PUSH32(esp, ebx);
    ebx = edi;
    PUSH32(esp, ebp);
    ecx = esp + 0x64;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0055D69Fu); RECOMP_ABI_CALL(0x0055F350u, sub_0055F350); /* call 0x0055F350 */

loc_0055D69F: ;
    ebp = MEM32(edi);
    SET_LO8(eax, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = edi + 8;
    if (CMP_NE(_fa, _fb)) goto loc_0055D6BD; /* jne: not equal / not zero */

loc_0055D6AB: ;
    edx = MEM32(eax);
    SET_LO8(ecx, MEM8(edx + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D6BF; /* jne: not equal / not zero */

loc_0055D6B4: ;
    eax = MEM32(esp + 0x64);
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055D6BD: ;
    ebp = MEM32(eax);

loc_0055D6BF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D731; /* jne: not equal / not zero */

loc_0055D6C3: ;
    SET_LO8(eax, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ebx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0055D6D0; /* jne: not equal / not zero */

loc_0055D6CD: ;
    MEM32(ebp + 4) = esi;

loc_0055D6D0: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D6E1; /* jne: not equal / not zero */

loc_0055D6DC: ;
    MEM32(eax + 4) = ebp;
    goto loc_0055D6EC;

loc_0055D6E1: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D6E9; /* jne: not equal / not zero */

loc_0055D6E5: ;
    MEM32(esi) = ebp;
    goto loc_0055D6EC;

loc_0055D6E9: ;
    MEM32(esi + 8) = ebp;

loc_0055D6EC: ;
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D70D; /* jne: not equal / not zero */

loc_0055D6F3: ;
    SET_LO8(eax, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D6FE; /* je: equal / zero */

loc_0055D6FA: ;
    eax = esi;
    goto loc_0055D70B;

loc_0055D6FE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0055D704u); RECOMP_ABI_CALL(0x0055F270u, sub_0055F270); /* call 0x0055F270 */

loc_0055D704: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055D70B: ;
    MEM32(edi) = eax;

loc_0055D70D: ;
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D78E; /* jne: not equal / not zero */

loc_0055D715: ;
    SET_LO8(eax, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D723; /* je: equal / zero */

loc_0055D71C: ;
    eax = esi;
    MEM32(edi + 8) = eax;
    goto loc_0055D78E;

loc_0055D723: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0055D729u); RECOMP_ABI_CALL(0x0055F250u, sub_0055F250); /* call 0x0055F250 */

loc_0055D729: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = eax;
    goto loc_0055D78E;

loc_0055D731: ;
    ecx = MEM32(ebx);
    MEM32(ecx + 4) = edi;
    edx = MEM32(ebx);
    MEM32(edi) = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D743; /* jne: not equal / not zero */

loc_0055D73F: ;
    esi = edi;
    goto loc_0055D75D;

loc_0055D743: ;
    SET_LO8(ecx, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    esi = MEM32(edi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0055D750; /* jne: not equal / not zero */

loc_0055D74D: ;
    MEM32(ebp + 4) = esi;

loc_0055D750: ;
    MEM32(esi) = ebp;
    ecx = MEM32(ebx + 8);
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 8);
    MEM32(edx + 4) = edi;

loc_0055D75D: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D76E; /* jne: not equal / not zero */

loc_0055D769: ;
    MEM32(eax + 4) = edi;
    goto loc_0055D77C;

loc_0055D76E: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D779; /* jne: not equal / not zero */

loc_0055D775: ;
    MEM32(eax) = edi;
    goto loc_0055D77C;

loc_0055D779: ;
    MEM32(eax + 8) = edi;

loc_0055D77C: ;
    ecx = MEM32(ebx + 4);
    MEM32(edi + 4) = ecx;
    SET_LO8(edx, MEM8(ebx + 0x18));
    SET_LO8(eax, MEM8(edi + 0x18));
    MEM8(edi + 0x18) = LO8(edx);
    MEM8(ebx + 0x18) = LO8(eax);

loc_0055D78E: ;
    eax = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(eax + 0x18));
    edi = MEM32(esp + 0x10);
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D8A5; /* jne: not equal / not zero */

loc_0055D7A3: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D89E; /* je: equal / zero */

loc_0055D7AF: ;
    /* nop */

loc_0055D7B0: ;
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D89E; /* jne: not equal / not zero */

loc_0055D7B9: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D826; /* jne: not equal / not zero */

loc_0055D7BF: ;
    eax = MEM32(esi + 8);
    SET_LO8(ecx, MEM8(eax + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D7DB; /* jne: not equal / not zero */

loc_0055D7C9: ;
    MEM8(eax + 0x18) = LO8(ebx);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 0x18) = 0;
    PUSH32(esp, 0x0055D7D8u); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_0055D7D8: ;
    eax = MEM32(esi + 8);

loc_0055D7DB: ;
    SET_LO8(ecx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D858; /* jne: not equal / not zero */

loc_0055D7E2: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D7F1; /* jne: not equal / not zero */

loc_0055D7E9: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D854; /* je: equal / zero */

loc_0055D7F1: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D80D; /* jne: not equal / not zero */

loc_0055D7F9: ;
    edx = MEM32(eax);
    MEM8(edx + 0x18) = LO8(ebx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax + 0x18) = 0;
    PUSH32(esp, 0x0055D80Au); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_0055D80A: ;
    eax = MEM32(esi + 8);

loc_0055D80D: ;
    SET_LO8(ecx, MEM8(esi + 0x18));
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(esi + 0x18) = LO8(ebx);
    edx = MEM32(eax + 8);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(edx + 0x18) = LO8(ebx);
    PUSH32(esp, 0x0055D824u); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_0055D824: ;
    goto loc_0055D89E;

loc_0055D826: ;
    SET_LO8(ecx, MEM8(eax + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D83E; /* jne: not equal / not zero */

loc_0055D82D: ;
    MEM8(eax + 0x18) = LO8(ebx);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 0x18) = 0;
    PUSH32(esp, 0x0055D83Cu); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_0055D83C: ;
    eax = MEM32(esi);

loc_0055D83E: ;
    SET_LO8(ecx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D858; /* jne: not equal / not zero */

loc_0055D845: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D86D; /* jne: not equal / not zero */

loc_0055D84D: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D86D; /* jne: not equal / not zero */

loc_0055D854: ;
    MEM8(eax + 0x18) = 0;

loc_0055D858: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 4);
    ebp = esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    esi = MEM32(esi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0055D7B0; /* jne: not equal / not zero */

loc_0055D86B: ;
    goto loc_0055D89E;

loc_0055D86D: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D888; /* jne: not equal / not zero */

loc_0055D874: ;
    edx = MEM32(eax + 8);
    MEM8(edx + 0x18) = LO8(ebx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax + 0x18) = 0;
    PUSH32(esp, 0x0055D886u); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_0055D886: ;
    eax = MEM32(esi);

loc_0055D888: ;
    SET_LO8(ecx, MEM8(esi + 0x18));
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(esi + 0x18) = LO8(ebx);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(edx + 0x18) = LO8(ebx);
    PUSH32(esp, 0x0055D89Eu); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_0055D89E: ;
    eax = MEM32(esp + 0x14);
    MEM8(ebp + 0x18) = LO8(ebx);

loc_0055D8A5: ;
    PUSH32(esp, eax);
    MEM32(eax + 0xC) = 0x64F8C4;
    PUSH32(esp, 0x0055D8B2u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055D8B2: ;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_0055D8C2; /* jbe: below or equal (unsigned <=) */

loc_0055D8BE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 8) = eax;

loc_0055D8C2: ;
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
 * sub_0055D8E0
 * Original: 0x0055D8E0 - 0x0055D9ED (269 bytes, 111 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055D8E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    SET_LO8(ecx, MEM8(edi + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, 1);
    MEM8(esp + 0x14) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0055D954; /* jne: not equal / not zero */

loc_0055D8FC: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x10) = ecx;

loc_0055D907: ;
    esi = MEM32(edi + 0x10);
    eax = MEM32(esp + 0x10);
    ebp = edi;

loc_0055D910: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055D934; /* jne: not equal / not zero */

loc_0055D918: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D930; /* je: equal / zero */

loc_0055D91C: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055D934; /* jne: not equal / not zero */

loc_0055D926: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0055D910; /* jne: not equal / not zero */

loc_0055D930: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055D939;

loc_0055D934: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0055D939: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 0x14) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0055D94A; /* je: equal / zero */

loc_0055D946: ;
    edi = MEM32(edi);
    goto loc_0055D94D;

loc_0055D94A: ;
    edi = MEM32(edi + 8);

loc_0055D94D: ;
    SET_LO8(ecx, MEM8(edi + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D907; /* je: equal / zero */

loc_0055D954: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = ebp;
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055D99C; /* je: equal / zero */

loc_0055D95E: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055D98F; /* jne: not equal / not zero */

loc_0055D965: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0055D979u); RECOMP_ABI_CALL(0x0055CA90u, sub_0055CA90); /* call 0x0055CA90 */

loc_0055D979: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    MEM8(eax + 4) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0055D98F: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0055D998u); RECOMP_ABI_CALL(0x0055F2F0u, sub_0055F2F0); /* call 0x0055F2F0 */

loc_0055D998: ;
    esi = MEM32(esp + 0x10);

loc_0055D99C: ;
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0055D9ACu); RECOMP_ABI_CALL(0x0055B920u, sub_0055B920); /* call 0x0055B920 */

loc_0055D9AC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D9D9; /* je: equal / zero */

loc_0055D9B0: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0055D9C3u); RECOMP_ABI_CALL(0x0055CA90u, sub_0055CA90); /* call 0x0055CA90 */

loc_0055D9C3: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    MEM8(eax + 4) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0055D9D9: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 4) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D9F0
 * Original: 0x0055D9F0 - 0x0055DAAE (190 bytes, 83 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D9F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055D9F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    SET_LO8(ecx, 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ebx = MEM32(esp + 0x1C);
    esi = edx;
    MEM8(esp + 0x10) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0055DA2F; /* jne: not equal / not zero */

loc_0055DA10: ;
    ebp = MEM32(ebx);

loc_0055DA12: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 0xC) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    esi = eax;
    MEM8(esp + 0x10) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055DA26; /* je: equal / zero */

loc_0055DA22: ;
    eax = MEM32(eax);
    goto loc_0055DA29;

loc_0055DA26: ;
    eax = MEM32(eax + 8);

loc_0055DA29: ;
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x15), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DA12; /* je: equal / zero */

loc_0055DA2F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ebp = esi;
    MEM32(esp + 0x1C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0055DA6E; /* je: equal / zero */

loc_0055DA39: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DA61; /* jne: not equal / not zero */

loc_0055DA3D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0055DA4Du); RECOMP_ABI_CALL(0x0055CC70u, sub_0055CC70); /* call 0x0055CC70 */

loc_0055DA4D: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    MEM8(eax + 4) = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0055DA61: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0055DA6Au); RECOMP_ABI_CALL(0x0055BD40u, sub_0055BD40); /* call 0x0055BD40 */

loc_0055DA6A: ;
    ebp = MEM32(esp + 0x1C);

loc_0055DA6E: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055DA9C; /* jae: above or equal (unsigned >=) */

loc_0055DA75: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0055DA88u); RECOMP_ABI_CALL(0x0055CC70u, sub_0055CC70); /* call 0x0055CC70 */

loc_0055DA88: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    MEM8(eax + 4) = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0055DA9C: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    MEM8(eax + 4) = 0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055DAB0
 * Original: 0x0055DAB0 - 0x0055DBBD (269 bytes, 111 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055DAB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    SET_LO8(ecx, MEM8(edi + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, 1);
    MEM8(esp + 0x14) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0055DB24; /* jne: not equal / not zero */

loc_0055DACC: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x10) = ecx;

loc_0055DAD7: ;
    esi = MEM32(edi + 0x10);
    eax = MEM32(esp + 0x10);
    ebp = edi;

loc_0055DAE0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055DB04; /* jne: not equal / not zero */

loc_0055DAE8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DB00; /* je: equal / zero */

loc_0055DAEC: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055DB04; /* jne: not equal / not zero */

loc_0055DAF6: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0055DAE0; /* jne: not equal / not zero */

loc_0055DB00: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055DB09;

loc_0055DB04: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0055DB09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 0x14) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0055DB1A; /* je: equal / zero */

loc_0055DB16: ;
    edi = MEM32(edi);
    goto loc_0055DB1D;

loc_0055DB1A: ;
    edi = MEM32(edi + 8);

loc_0055DB1D: ;
    SET_LO8(ecx, MEM8(edi + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DAD7; /* je: equal / zero */

loc_0055DB24: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = ebp;
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055DB6C; /* je: equal / zero */

loc_0055DB2E: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055DB5F; /* jne: not equal / not zero */

loc_0055DB35: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0055DB49u); RECOMP_ABI_CALL(0x0055CE50u, sub_0055CE50); /* call 0x0055CE50 */

loc_0055DB49: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    MEM8(eax + 4) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0055DB5F: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0055DB68u); RECOMP_ABI_CALL(0x0055F2F0u, sub_0055F2F0); /* call 0x0055F2F0 */

loc_0055DB68: ;
    esi = MEM32(esp + 0x10);

loc_0055DB6C: ;
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0055DB7Cu); RECOMP_ABI_CALL(0x0055B920u, sub_0055B920); /* call 0x0055B920 */

loc_0055DB7C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DBA9; /* je: equal / zero */

loc_0055DB80: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0055DB93u); RECOMP_ABI_CALL(0x0055CE50u, sub_0055CE50); /* call 0x0055CE50 */

loc_0055DB93: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    MEM8(eax + 4) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0055DBA9: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 4) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055DBC0
 * Original: 0x0055DBC0 - 0x0055DC77 (183 bytes, 77 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DBC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DC0C; /* jne: not equal / not zero */

loc_0055DBD4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DC0C; /* jne: not equal / not zero */

loc_0055DBD8: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0055DBE3u); RECOMP_ABI_CALL(0x0055C8D0u, sub_0055C8D0); /* call 0x0055C8D0 */

loc_0055DBE3: ;
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

loc_0055DC0C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DC6B; /* je: equal / zero */

loc_0055DC10: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0055DC5A; /* jne: not equal / not zero */

loc_0055DC19: ;
    eax = MEM32(esi + 8);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DC3D; /* jne: not equal / not zero */

loc_0055DC23: ;
    esi = eax;
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DC5A; /* jne: not equal / not zero */

loc_0055DC2E: ;
    edi = edi;

loc_0055DC30: ;
    esi = eax;
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DC30; /* je: equal / zero */

loc_0055DC3B: ;
    goto loc_0055DC5A;

loc_0055DC3D: ;
    eax = MEM32(esi + 4);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DC58; /* jne: not equal / not zero */

loc_0055DC47: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DC58; /* jne: not equal / not zero */

loc_0055DC4C: ;
    esi = eax;
    eax = MEM32(eax + 4);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DC47; /* je: equal / zero */

loc_0055DC58: ;
    esi = eax;

loc_0055DC5A: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0055DC67u); RECOMP_ABI_CALL(0x0055D030u, sub_0055D030); /* call 0x0055D030 */

loc_0055DC67: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DC10; /* jne: not equal / not zero */

loc_0055DC6B: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055DC80
 * Original: 0x0055DC80 - 0x0055DD37 (183 bytes, 77 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DC80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DCCC; /* jne: not equal / not zero */

loc_0055DC94: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DCCC; /* jne: not equal / not zero */

loc_0055DC98: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0055DCA3u); RECOMP_ABI_CALL(0x0055C920u, sub_0055C920); /* call 0x0055C920 */

loc_0055DCA3: ;
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

loc_0055DCCC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DD2B; /* je: equal / zero */

loc_0055DCD0: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0055DD1A; /* jne: not equal / not zero */

loc_0055DCD9: ;
    eax = MEM32(esi + 8);
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DCFD; /* jne: not equal / not zero */

loc_0055DCE3: ;
    esi = eax;
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DD1A; /* jne: not equal / not zero */

loc_0055DCEE: ;
    edi = edi;

loc_0055DCF0: ;
    esi = eax;
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DCF0; /* je: equal / zero */

loc_0055DCFB: ;
    goto loc_0055DD1A;

loc_0055DCFD: ;
    eax = MEM32(esi + 4);
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DD18; /* jne: not equal / not zero */

loc_0055DD07: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DD18; /* jne: not equal / not zero */

loc_0055DD0C: ;
    esi = eax;
    eax = MEM32(eax + 4);
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DD07; /* je: equal / zero */

loc_0055DD18: ;
    esi = eax;

loc_0055DD1A: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0055DD27u); RECOMP_ABI_CALL(0x0055D320u, sub_0055D320); /* call 0x0055D320 */

loc_0055DD27: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DCD0; /* jne: not equal / not zero */

loc_0055DD2B: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055DD40
 * Original: 0x0055DD40 - 0x0055DDF7 (183 bytes, 77 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DD40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DD8C; /* jne: not equal / not zero */

loc_0055DD54: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DD8C; /* jne: not equal / not zero */

loc_0055DD58: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0055DD63u); RECOMP_ABI_CALL(0x0055C800u, sub_0055C800); /* call 0x0055C800 */

loc_0055DD63: ;
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

loc_0055DD8C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DDEB; /* je: equal / zero */

loc_0055DD90: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0055DDDA; /* jne: not equal / not zero */

loc_0055DD99: ;
    eax = MEM32(esi + 8);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DDBD; /* jne: not equal / not zero */

loc_0055DDA3: ;
    esi = eax;
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DDDA; /* jne: not equal / not zero */

loc_0055DDAE: ;
    edi = edi;

loc_0055DDB0: ;
    esi = eax;
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DDB0; /* je: equal / zero */

loc_0055DDBB: ;
    goto loc_0055DDDA;

loc_0055DDBD: ;
    eax = MEM32(esi + 4);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DDD8; /* jne: not equal / not zero */

loc_0055DDC7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DDD8; /* jne: not equal / not zero */

loc_0055DDCC: ;
    esi = eax;
    eax = MEM32(eax + 4);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DDC7; /* je: equal / zero */

loc_0055DDD8: ;
    esi = eax;

loc_0055DDDA: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0055DDE7u); RECOMP_ABI_CALL(0x0055D600u, sub_0055D600); /* call 0x0055D600 */

loc_0055DDE7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DD90; /* jne: not equal / not zero */

loc_0055DDEB: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055DE00
 * Original: 0x0055DE00 - 0x0055DF99 (409 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055DE00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DE00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x629C40);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    MEM32(ebp + -20) = esi;
    eax = MEM32(ebp + 0x10);
    ebx = MEM32(eax);
    MEM32(ebp + -24) = ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DE39; /* je: equal / zero */

loc_0055DE32: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055DE39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055DE36u); } /* indirect call */
    }

loc_0055DE39: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DE44; /* jne: not equal / not zero */

loc_0055DE40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055DE4C;

loc_0055DE44: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0055DE4C: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0055E0B9(); return; } /* je: equal / zero */

loc_0055DE57: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DE5F; /* jne: not equal / not zero */

loc_0055DE5B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055DE67;

loc_0055DE5F: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0055DE67: ;
    ebx = 0x3FFFFFFF;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055DE7E; /* jae: above or equal (unsigned >=) */

loc_0055DE72: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DE79u); RECOMP_ABI_CALL(0x00439FC0u, sub_00439FC0); /* call 0x00439FC0 */

loc_0055DE79: ;
    g_seh_ebp = ebp; sub_0055E0B6(); return; /* tail jmp 0x0055E0B6 */

loc_0055DE7E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DE86; /* jne: not equal / not zero */

loc_0055DE82: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055DE8E;

loc_0055DE86: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0055DE8E: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0055DFBB(); return; } /* jae: above or equal (unsigned >=) */

loc_0055DE98: ;
    edx = eax;
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = 0x3FFFFFFF;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055DEAB; /* jae: above or equal (unsigned >=) */

loc_0055DEA7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055DEAD;

loc_0055DEAB: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055DEAD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DEB5; /* jne: not equal / not zero */

loc_0055DEB1: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055DEBD;

loc_0055DEB5: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0055DEBD: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055DED5; /* jae: above or equal (unsigned >=) */

loc_0055DEC3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DECB; /* jne: not equal / not zero */

loc_0055DEC7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055DED3;

loc_0055DECB: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0055DED3: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055DED5: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -28) = eax;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DEE1u); RECOMP_ABI_CALL(0x005772A0u, sub_005772A0); /* call 0x005772A0 */

loc_0055DEE1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -36) = ebx;
    MEM32(ebp + -4) = 0;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -40) = eax;
    edi = MEM32(ebp + 8);
    MEM32(eax) = edi;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -44) = eax;
    ecx = MEM32(esi + 4);
    MEM32(ebp + -48) = ecx;
    MEM32(eax) = ecx;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DF14u); RECOMP_ABI_CALL(0x0055C970u, sub_0055C970); /* call 0x0055C970 */

loc_0055DF14: ;
    MEM32(ebp + -36) = eax;
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DF27u); RECOMP_ABI_CALL(0x0055C9D0u, sub_0055C9D0); /* call 0x0055C9D0 */

loc_0055DF27: ;
    MEM32(ebp + -36) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -52) = eax;
    ecx = MEM32(esi + 8);
    MEM32(ebp + -56) = ecx;
    MEM32(eax) = ecx;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -60) = eax;
    MEM32(eax) = edi;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DF48u); RECOMP_ABI_CALL(0x0055C970u, sub_0055C970); /* call 0x0055C970 */

loc_0055DF48: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DF5A; /* jne: not equal / not zero */

loc_0055DF56: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055DF62;

loc_0055DF5A: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0055DF62: ;
    edi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DF83; /* je: equal / zero */

loc_0055DF6B: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DF77u); RECOMP_ABI_CALL(0x0055C9A0u, sub_0055C9A0); /* call 0x0055C9A0 */

loc_0055DF77: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DF80u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055DF80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055DF83: ;
    edx = MEM32(ebp + -28);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = edx;
    eax = ebx + edi * 4;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = ebx;
    g_seh_ebp = ebp; sub_0055E0B6(); return; /* tail jmp 0x0055E0B6 */

}

/**
 * sub_0055DF99
 * Original: 0x0055DF99 - 0x0055E038 (159 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DF99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055DF99: ;
    ecx = MEM32(ebp + -36);
    PUSH32(esp, ecx);
    esi = MEM32(ebp + -32);
    PUSH32(esp, esi);
    ecx = MEM32(ebp + -20);
    PUSH32(esp, 0x0055DFA9u); RECOMP_ABI_CALL(0x0055C9A0u, sub_0055C9A0); /* call 0x0055C9A0 */

loc_0055DFA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055DFAFu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055DFAF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0055DFBBu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055DFBB: ;
    ebx = MEM32(esi + 8);
    edx = ebx;
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0055E05B(); return; } /* jae: above or equal (unsigned >=) */

loc_0055DFD0: ;
    eax = ecx * 4;
    MEM32(ebp + -64) = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    ecx = esi;
    PUSH32(esp, 0x0055DFEEu); RECOMP_ABI_CALL(0x0055C970u, sub_0055C970); /* call 0x0055C970 */

loc_0055DFEE: ;
    MEM32(ebp + -4) = 2;
    ecx = MEM32(esi + 8);
    eax = ecx;
    MEM32(ebp + -68) = eax;
    MEM32(ebp + -72) = eax;
    edx = ebp + -24;
    PUSH32(esp, edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0055E017u); RECOMP_ABI_CALL(0x0055C9D0u, sub_0055C9D0); /* call 0x0055C9D0 */

loc_0055E017: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -64);
    ebx = MEM32(esi + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ebx;
    esi = ebx;
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = esi;
    g_seh_ebp = ebp; sub_0055E0A9(); return; /* tail jmp 0x0055E0A9 */

}

/**
 * sub_0055DFBB
 * Original: 0x0055DFBB - 0x0055E038 (125 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DFBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055DFBB: ;
    ebx = MEM32(esi + 8);
    edx = ebx;
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0055E05B(); return; } /* jae: above or equal (unsigned >=) */

loc_0055DFD0: ;
    eax = ecx * 4;
    MEM32(ebp + -64) = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    ecx = esi;
    PUSH32(esp, 0x0055DFEEu); RECOMP_ABI_CALL(0x0055C970u, sub_0055C970); /* call 0x0055C970 */

loc_0055DFEE: ;
    MEM32(ebp + -4) = 2;
    ecx = MEM32(esi + 8);
    eax = ecx;
    MEM32(ebp + -68) = eax;
    MEM32(ebp + -72) = eax;
    edx = ebp + -24;
    PUSH32(esp, edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0055E017u); RECOMP_ABI_CALL(0x0055C9D0u, sub_0055C9D0); /* call 0x0055C9D0 */

loc_0055E017: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -64);
    ebx = MEM32(esi + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ebx;
    esi = ebx;
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = esi;
    g_seh_ebp = ebp; sub_0055E0A9(); return; /* tail jmp 0x0055E0A9 */

}

/**
 * sub_0055E038
 * Original: 0x0055E038 - 0x0055E0D7 (159 bytes, 68 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E038(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E038: ;
    eax = MEM32(ebp + 0xC);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -20);
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055E052u); RECOMP_ABI_CALL(0x0055C9A0u, sub_0055C9A0); /* call 0x0055C9A0 */

loc_0055E052: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0055E05Bu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055E05B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, ecx);
    edx = esp;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -64) = ecx;
    eax = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -76) = eax;
    MEM32(edx) = eax;
    ecx = esi;
    PUSH32(esp, 0x0055E07Au); RECOMP_ABI_CALL(0x0055C970u, sub_0055C970); /* call 0x0055C970 */

loc_0055E07A: ;
    MEM32(esi + 8) = eax;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, ecx);
    eax = esp;
    ecx = MEM32(ebp + -76);
    MEM32(eax) = ecx;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    edx = ebp + -80;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055E098u); RECOMP_ABI_CALL(0x0055C440u, sub_0055C440); /* call 0x0055C440 */

loc_0055E098: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = MEM32(ebp + -64);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    PUSH32(esp, 0x0055E0B3u); RECOMP_ABI_CALL(0x0055C400u, sub_0055C400); /* call 0x0055C400 */

loc_0055E0B3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebp + -24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E0C4; /* je: equal / zero */

loc_0055E0BD: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055E0C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E0C1u); } /* indirect call */
    }

loc_0055E0C4: ;
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
 * sub_0055E05B
 * Original: 0x0055E05B - 0x0055E0D7 (124 bytes, 55 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E05B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E05B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, ecx);
    edx = esp;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -64) = ecx;
    eax = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -76) = eax;
    MEM32(edx) = eax;
    ecx = esi;
    PUSH32(esp, 0x0055E07Au); RECOMP_ABI_CALL(0x0055C970u, sub_0055C970); /* call 0x0055C970 */

loc_0055E07A: ;
    MEM32(esi + 8) = eax;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, ecx);
    eax = esp;
    ecx = MEM32(ebp + -76);
    MEM32(eax) = ecx;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    edx = ebp + -80;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055E098u); RECOMP_ABI_CALL(0x0055C440u, sub_0055C440); /* call 0x0055C440 */

loc_0055E098: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = MEM32(ebp + -64);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    PUSH32(esp, 0x0055E0B3u); RECOMP_ABI_CALL(0x0055C400u, sub_0055C400); /* call 0x0055C400 */

loc_0055E0B3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebp + -24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E0C4; /* je: equal / zero */

loc_0055E0BD: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055E0C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E0C1u); } /* indirect call */
    }

loc_0055E0C4: ;
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
 * sub_0055E0A9
 * Original: 0x0055E0A9 - 0x0055E0D7 (46 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E0A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E0A9: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    PUSH32(esp, 0x0055E0B3u); RECOMP_ABI_CALL(0x0055C400u, sub_0055C400); /* call 0x0055C400 */

loc_0055E0B3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebp + -24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E0C4; /* je: equal / zero */

loc_0055E0BD: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055E0C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E0C1u); } /* indirect call */
    }

loc_0055E0C4: ;
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
 * sub_0055E0B6
 * Original: 0x0055E0B6 - 0x0055E0D7 (33 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E0B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E0B6: ;
    ebx = MEM32(ebp + -24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E0C4; /* je: equal / zero */

loc_0055E0BD: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055E0C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E0C1u); } /* indirect call */
    }

loc_0055E0C4: ;
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
 * sub_0055E0B9
 * Original: 0x0055E0B9 - 0x0055E0D7 (30 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E0B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E0B9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E0C4; /* je: equal / zero */

loc_0055E0BD: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055E0C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E0C1u); } /* indirect call */
    }

loc_0055E0C4: ;
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
 * sub_0055E0E0
 * Original: 0x0055E0E0 - 0x0055E14C (108 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E0E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E0E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x15F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E144; /* jne: not equal / not zero */

loc_0055E0ED: ;
    ecx = MEM32(esi + 4);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E144; /* jne: not equal / not zero */

loc_0055E0F9: ;
    ecx = esi + 0x48;
    MEM8(esi + 0x15F) = LO8(eax);
    PUSH32(esp, 0x0055E107u); RECOMP_ABI_CALL(0x0055CA00u, sub_0055CA00); /* call 0x0055CA00 */

loc_0055E107: ;
    ecx = MEM32(esi + 0x7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E126; /* je: equal / zero */

loc_0055E10E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0055E113u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E110u); } /* indirect call */
    }

loc_0055E113: ;
    ecx = MEM32(esi + 0x7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E126; /* je: equal / zero */

loc_0055E11A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055E11Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E11Cu); } /* indirect call */
    }

loc_0055E11F: ;
    MEM32(esi + 0x7C) = 0;

loc_0055E126: ;
    SET_LO8(eax, MEM8(esi + 0x15E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E13A; /* je: equal / zero */

loc_0055E130: ;
    ecx = 0x8582C8;
    PUSH32(esp, 0x0055E13Au); RECOMP_ABI_CALL(0x005E1A80u, sub_005E1A80); /* call 0x005E1A80 */

loc_0055E13A: ;
    MEM32(0x6C5108) = 0;

loc_0055E144: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0055FAF0(); return; /* tail jmp 0x0055FAF0 */

}

/**
 * sub_0055E150
 * Original: 0x0055E150 - 0x0055E158 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E150: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0055CA00(); return; /* tail jmp 0x0055CA00 */

}

/**
 * sub_0055E160
 * Original: 0x0055E160 - 0x0055E209 (169 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E160: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    ebx = ecx;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0055E173u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E170u); } /* indirect call */
    }

loc_0055E173: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E17C; /* jne: not equal / not zero */

loc_0055E177: ;
    eax = 0x62DF21;

loc_0055E17C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0x64F8CC;
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0055E194; /* jne: not equal / not zero */

loc_0055E18C: ;
    MEM32(esp + 0x18) = 0x62DF21;

loc_0055E194: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055E1A5; /* je: equal / zero */

loc_0055E19E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055E1A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E1A2u); } /* indirect call */
    }

loc_0055E1A5: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebx + 0x58;
    PUSH32(esp, 0x0055E1B7u); RECOMP_ABI_CALL(0x0055D8E0u, sub_0055D8E0); /* call 0x0055D8E0 */

loc_0055E1B7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E1C2; /* je: equal / zero */

loc_0055E1BB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055E1C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E1BFu); } /* indirect call */
    }

loc_0055E1C2: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0055E1C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E1C6u); } /* indirect call */
    }

loc_0055E1C9: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055E1DE; /* je: equal / zero */

loc_0055E1D7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055E1DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E1DBu); } /* indirect call */
    }

loc_0055E1DE: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebx + 0x64;
    PUSH32(esp, 0x0055E1F0u); RECOMP_ABI_CALL(0x0055D9F0u, sub_0055D9F0); /* call 0x0055D9F0 */

loc_0055E1F0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E1FB; /* je: equal / zero */

loc_0055E1F4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055E1FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E1F8u); } /* indirect call */
    }

loc_0055E1FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055E210
 * Original: 0x0055E210 - 0x0055E2C6 (182 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E210: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    MEM32(esp + 0xC) = 0x64F8CC;
    MEM32(esp + 0x10) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0055E234; /* jne: not equal / not zero */

loc_0055E22C: ;
    MEM32(esp + 0x10) = 0x62DF21;

loc_0055E234: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    ebx = esi + 0x70;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0055E248u); RECOMP_ABI_CALL(0x0055C480u, sub_0055C480); /* call 0x0055C480 */

loc_0055E248: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x74) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E266; /* je: equal / zero */

loc_0055E24F: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E2BA; /* je: equal / zero */

loc_0055E257: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx) = 1;
    eax = MEM32(eax + 0x14);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0055E266: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E271; /* je: equal / zero */

loc_0055E26E: ;
    MEM8(eax) = 0;

loc_0055E271: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(esi + 0x158);
    edx = ecx + 1;
    MEM32(esi + 0x158) = edx;
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0055E28B; /* jne: not equal / not zero */

loc_0055E286: ;
    eax = 0x62DF21;

loc_0055E28B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0x64F8CC;
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0055E2A3; /* jne: not equal / not zero */

loc_0055E29B: ;
    MEM32(esp + 0x18) = 0x62DF21;

loc_0055E2A3: ;
    MEM32(esp + 0x1C) = ecx;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0055E2B8u); RECOMP_ABI_CALL(0x0055DAB0u, sub_0055DAB0); /* call 0x0055DAB0 */

loc_0055E2B8: ;
    eax = MEM32(eax);

loc_0055E2BA: ;
    eax = MEM32(eax + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055E2D0
 * Original: 0x0055E2D0 - 0x0055E323 (83 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E2D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E2D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0055E2E9u); RECOMP_ABI_CALL(0x0055C570u, sub_0055C570); /* call 0x0055C570 */

loc_0055E2E9: ;
    edi = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0xC);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0055E305u); RECOMP_ABI_CALL(0x0055C3C0u, sub_0055C3C0); /* call 0x0055C3C0 */

loc_0055E305: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0055E316u); RECOMP_ABI_CALL(0x0055DC80u, sub_0055DC80); /* call 0x0055DC80 */

loc_0055E316: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055E330
 * Original: 0x0055E330 - 0x0055E3CC (156 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E330: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0055E344u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E341u); } /* indirect call */
    }

loc_0055E344: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0x64F8CC;
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0055E35C; /* jne: not equal / not zero */

loc_0055E354: ;
    MEM32(esp + 0x18) = 0x62DF21;

loc_0055E35C: ;
    eax = esp + 0x14;
    esi = ebp + 0x58;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0055E36Bu); RECOMP_ABI_CALL(0x0055BDA0u, sub_0055BDA0); /* call 0x0055BDA0 */

loc_0055E36B: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0055E379u); RECOMP_ABI_CALL(0x0055BE10u, sub_0055BE10); /* call 0x0055BE10 */

loc_0055E379: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x0055E38Fu); RECOMP_ABI_CALL(0x0055C380u, sub_0055C380); /* call 0x0055C380 */

loc_0055E38F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0055E3A0u); RECOMP_ABI_CALL(0x0055DBC0u, sub_0055DBC0); /* call 0x0055DBC0 */

loc_0055E3A0: ;
    ecx = MEM32(esp + 0x20);
    ecx = MEM32(ecx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0055E3ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E3A8u); } /* indirect call */
    }

loc_0055E3AB: ;
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebp + 0x64;
    PUSH32(esp, 0x0055E3BCu); RECOMP_ABI_CALL(0x0055E2D0u, sub_0055E2D0); /* call 0x0055E2D0 */

loc_0055E3BC: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055E3D0
 * Original: 0x0055E3D0 - 0x0055E436 (102 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E3D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0055E3DF; /* jne: not equal / not zero */

loc_0055E3DB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055E3E7;

loc_0055E3DF: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0055E3E7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E41B; /* je: equal / zero */

loc_0055E3EB: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055E41B; /* jae: above or equal (unsigned >=) */

loc_0055E3F7: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0xC);
    edi = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055E40Du); RECOMP_ABI_CALL(0x0055C840u, sub_0055C840); /* call 0x0055C840 */

loc_0055E40D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0055E41B: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = eax;
    ecx = esi;
    PUSH32(esp, 0x0055E431u); RECOMP_ABI_CALL(0x0055DE00u, sub_0055DE00); /* call 0x0055DE00 */

loc_0055E431: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055E440
 * Original: 0x0055E440 - 0x0055E517 (215 bytes, 80 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E440: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x64F8F8;
    PUSH32(esp, 0x0055E451u); RECOMP_ABI_CALL(0x00567090u, sub_00567090); /* call 0x00567090 */

loc_0055E451: ;
    PUSH32(esp, 0x0055E456u); RECOMP_ABI_CALL(0x005650D0u, sub_005650D0); /* call 0x005650D0 */

loc_0055E456: ;
    esi = edi + 0x14C;
    ebx = 0xA;

loc_0055E461: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0055E46Bu); RECOMP_ABI_CALL(0x00566E70u, sub_00566E70); /* call 0x00566E70 */

loc_0055E46B: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055E461; /* jne: not equal / not zero */

loc_0055E46E: ;
    ecx = MEM32(edi + 0xA8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E47F; /* je: equal / zero */

loc_0055E47A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0055E47Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E47Cu); } /* indirect call */
    }

loc_0055E47F: ;
    ecx = MEM32(edi + 0x7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E48B; /* je: equal / zero */

loc_0055E486: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055E48Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E488u); } /* indirect call */
    }

loc_0055E48B: ;
    eax = MEM32(edi + 0x74);
    ecx = MEM32(eax);
    esi = edi + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0055E4A1u); RECOMP_ABI_CALL(0x0055DD40u, sub_0055DD40); /* call 0x0055DD40 */

loc_0055E4A1: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0055E4AAu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055E4AA: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    eax = MEM32(edi + 0x68);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0055E4C9u); RECOMP_ABI_CALL(0x0055DC80u, sub_0055DC80); /* call 0x0055DC80 */

loc_0055E4C9: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055E4D2u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055E4D2: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    eax = MEM32(edi + 0x5C);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0055E4F1u); RECOMP_ABI_CALL(0x0055DBC0u, sub_0055DBC0); /* call 0x0055DBC0 */

loc_0055E4F1: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055E4FAu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055E4FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi + 0x48;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0x0055E50Bu); RECOMP_ABI_CALL(0x0055CA40u, sub_0055CA40); /* call 0x0055CA40 */

loc_0055E50B: ;
    ecx = edi;
    PUSH32(esp, 0x0055E512u); RECOMP_ABI_CALL(0x00560CF0u, sub_00560CF0); /* call 0x00560CF0 */

loc_0055E512: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E520
 * Original: 0x0055E520 - 0x0055E526 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E520(void)
{

loc_0055E520: ;
    eax = 0x64F994;
    esp += 4; return; /* ret */

}

/**
 * sub_0055E530
 * Original: 0x0055E530 - 0x0055E5A9 (121 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055E530: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ecx;
    edi = edx;
    esi = 0x64F994;
    ecx = 7;
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
    if ((_flags == 0)) goto loc_0055E553; /* jne: not equal / not zero */

loc_0055E54B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055E553: ;
    esi = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0055E55Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E559u); } /* indirect call */
    }

loc_0055E55F: ;
    /* nop */

loc_0055E560: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055E595; /* jne: not equal / not zero */

loc_0055E56A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E584; /* je: equal / zero */

loc_0055E56E: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055E595; /* jne: not equal / not zero */

loc_0055E57A: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0055E560; /* jne: not equal / not zero */

loc_0055E584: ;
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

loc_0055E595: ;
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
 * sub_0055E5B0
 * Original: 0x0055E5B0 - 0x0055E887 (727 bytes, 220 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E5B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E5B0: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x70);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0055E5D0; /* jne: not equal / not zero */

loc_0055E5CB: ;
    eax = 0x64F9C4;

loc_0055E5D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0055E5DFu); RECOMP_ABI_CALL(0x00560D90u, sub_00560D90); /* call 0x00560D90 */

loc_0055E5DF: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E5EC; /* je: equal / zero */

loc_0055E5E7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055E5ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E5E9u); } /* indirect call */
    }

loc_0055E5EC: ;
    SET_LO8(eax, MEM8(esp + 0x80));
    MEM32(esi) = 0x64F8F8;
    ebp = esi + 0x48;
    edi = esi + 0x58;
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0xC) = ebx;
    ecx = edi;
    MEM8(edi) = LO8(eax);
    PUSH32(esp, 0x0055E611u); RECOMP_ABI_CALL(0x0055C2E0u, sub_0055C2E0); /* call 0x0055C2E0 */

loc_0055E611: ;
    SET_LO8(ecx, MEM8(esp + 0x80));
    MEM32(edi + 4) = eax;
    MEM8(eax + 0x19) = 1;
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax + 8) = eax;
    MEM32(edi + 8) = ebx;
    edi = esi + 0x64;
    MEM8(edi) = LO8(ecx);
    ecx = edi;
    PUSH32(esp, 0x0055E63Fu); RECOMP_ABI_CALL(0x0055C240u, sub_0055C240); /* call 0x0055C240 */

loc_0055E63F: ;
    SET_LO8(edx, MEM8(esp + 0x80));
    MEM32(edi + 4) = eax;
    MEM8(eax + 0x15) = 1;
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax + 8) = eax;
    MEM32(edi + 8) = ebx;
    edi = esi + 0x70;
    ecx = edi;
    MEM8(edi) = LO8(edx);
    PUSH32(esp, 0x0055E66Du); RECOMP_ABI_CALL(0x0055C2E0u, sub_0055C2E0); /* call 0x0055C2E0 */

loc_0055E66D: ;
    MEM32(edi + 4) = eax;
    MEM8(eax + 0x19) = 1;
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax + 8) = eax;
    MEM32(edi + 8) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0xA0) = ebx;
    MEM32(esi + 0xA4) = ebx;
    MEM32(esi + 0xA8) = ebx;
    edi = esi + 0xAC;
    MEM32(esp + 0x80) = 0xA;
    edi = edi;

loc_0055E6B0: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0055E6B8u); RECOMP_ABI_CALL(0x00566E20u, sub_00566E20); /* call 0x00566E20 */

loc_0055E6B8: ;
    eax = MEM32(esp + 0x80);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x80) = eax;
    if ((_fa != 0)) goto loc_0055E6B0; /* jne: not equal / not zero */

loc_0055E6CC: ;
    MEM32(esi + 0x150) = ebx;
    MEM32(esi + 0x154) = ebx;
    edi = 1;
    MEM32(esi + 0x158) = edi;
    MEM8(esi + 0x15C) = LO8(ebx);
    MEM8(esi + 0x15D) = LO8(ebx);
    MEM8(esi + 0x15E) = LO8(ebx);
    MEM8(esi + 0x15F) = LO8(ebx);
    MEM32(0x6C5108) = esi;
    eax = MEM32(esi + 0x158);
    MEM32(esi + 0xC) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x158) = eax;
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x7E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x7E (8-bit) */
    ecx = 0x62DF21;
    if (CMP_EQ(_fa, _fb)) goto loc_0055E726; /* je: equal / zero */

loc_0055E721: ;
    ecx = 0x64F9C0;

loc_0055E726: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64F9AC);
    ecx = esp + 0x24;
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0055E739u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0055E739: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x2B);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x64F9A4);
    PUSH32(esp, 0x70);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0055E74Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0055E74E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E779; /* je: equal / zero */

loc_0055E755: ;
    PUSH32(esp, ebx);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x8C) = ebx;
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0x0055E775u); RECOMP_ABI_CALL(0x00566B80u, sub_00566B80); /* call 0x00566B80 */

loc_0055E775: ;
    edi = eax;
    goto loc_0055E77B;

loc_0055E779: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055E77B: ;
    ecx = MEM32(esi + 0x7C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E799; /* je: equal / zero */

loc_0055E782: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E78B; /* je: equal / zero */

loc_0055E786: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055E78Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E788u); } /* indirect call */
    }

loc_0055E78B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x7C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055E799; /* je: equal / zero */

loc_0055E792: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055E799u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E796u); } /* indirect call */
    }

loc_0055E799: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E7B0; /* je: equal / zero */

loc_0055E7A0: ;
    ecx = MEM32(esp + 0x80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E7B0; /* je: equal / zero */

loc_0055E7AB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055E7B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E7ADu); } /* indirect call */
    }

loc_0055E7B0: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x31);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x64F9A4);
    MEM32(esi + 4) = ecx;
    MEM8(esi + 0x80) = LO8(ebx);
    PUSH32(esp, 0x30);
    MEM32(0x673DF8) = 1;
    PUSH32(esp, 0x0055E7D5u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0055E7D5: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E80C; /* je: equal / zero */

loc_0055E7DE: ;
    ecx = edi;
    PUSH32(esp, 0x0055E7E5u); RECOMP_ABI_CALL(0x00606090u, sub_00606090); /* call 0x00606090 */

loc_0055E7E5: ;
    eax = 0x62DF21;
    edx = edi + 8;
    MEM32(edi) = 0x64F8D4;
    MEM32(edi + 0x28) = ebx;
    MEM32(edi + 0x2C) = 0xFFFFFFFFu;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0055E800: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E800; /* jne: not equal / not zero */

loc_0055E80A: ;
    goto loc_0055E80E;

loc_0055E80C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055E80E: ;
    ecx = MEM32(esi + 0xA8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E832; /* je: equal / zero */

loc_0055E818: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E821; /* je: equal / zero */

loc_0055E81C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0055E821u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E81Eu); } /* indirect call */
    }

loc_0055E821: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0xA8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055E832; /* je: equal / zero */

loc_0055E82B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055E832u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E82Fu); } /* indirect call */
    }

loc_0055E832: ;
    _fa = (uint32_t)(MEM32(0x8582C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8582C8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E84B; /* jne: not equal / not zero */

loc_0055E83A: ;
    ecx = 0x8582C8;
    PUSH32(esp, 0x0055E844u); RECOMP_ABI_CALL(0x005E14D0u, sub_005E14D0); /* call 0x005E14D0 */

loc_0055E844: ;
    MEM8(esi + 0x15E) = 1;

loc_0055E84B: ;
    PUSH32(esp, 0x64F99C);
    ecx = esi;
    MEM32(0x6745C0) = 2;
    PUSH32(esp, 0x0055E861u); RECOMP_ABI_CALL(0x0055B830u, sub_0055B830); /* call 0x0055B830 */

loc_0055E861: ;
    eax = esi + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0055E86Cu); RECOMP_ABI_CALL(0x0055E3D0u, sub_0055E3D0); /* call 0x0055E3D0 */

loc_0055E86C: ;
    PUSH32(esp, 0x0055E871u); RECOMP_ABI_CALL(0x005611D0u, sub_005611D0); /* call 0x005611D0 */

loc_0055E871: ;
    PUSH32(esp, 0x0055E876u); RECOMP_ABI_CALL(0x00565090u, sub_00565090); /* call 0x00565090 */

loc_0055E876: ;
    PUSH32(esp, 0x0055E87Bu); RECOMP_ABI_CALL(0x00567060u, sub_00567060); /* call 0x00567060 */

loc_0055E87B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055E890
 * Original: 0x0055E890 - 0x0055E8AE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E890: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055E898u); RECOMP_ABI_CALL(0x0055E440u, sub_0055E440); /* call 0x0055E440 */

loc_0055E898: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E8A8; /* je: equal / zero */

loc_0055E89F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055E8A5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055E8A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055E8A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055E8B0
 * Original: 0x0055E8B0 - 0x0055E8B8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E8B0: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0055E3D0(); return; /* tail jmp 0x0055E3D0 */

}

/**
 * sub_0055E8C0
 * Original: 0x0055E8C0 - 0x0055E917 (87 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055E8C0: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0055E8CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E8C8u); } /* indirect call */
    }

loc_0055E8CB: ;
    goto loc_0055E8D0;

    /* nop */

loc_0055E8D0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055E904; /* jne: not equal / not zero */

loc_0055E8DA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E8F4; /* je: equal / zero */

loc_0055E8DE: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055E904; /* jne: not equal / not zero */

loc_0055E8EA: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0055E8D0; /* jne: not equal / not zero */

loc_0055E8F4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055E904: ;
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
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055E920
 * Original: 0x0055E920 - 0x0055E924 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E920(void)
{

loc_0055E920: ;
    eax = MEM32(ecx + 0x5C);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E930
 * Original: 0x0055E930 - 0x0055E934 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E930(void)
{

loc_0055E930: ;
    eax = MEM32(ecx + 0x48);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E940
 * Original: 0x0055E940 - 0x0055E944 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E940(void)
{

loc_0055E940: ;
    eax = MEM32(ecx + 0x50);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E950
 * Original: 0x0055E950 - 0x0055E956 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E950(void)
{

loc_0055E950: ;
    eax = 0x64F9EC;
    esp += 4; return; /* ret */

}

/**
 * sub_0055E960
 * Original: 0x0055E960 - 0x0055E98E (46 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E960: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    esi = 0x64F9EC;
    ecx = 0x11;
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
    if ((_flags == 0)) goto loc_0055E983; /* jne: not equal / not zero */

loc_0055E97E: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_0055E983: ;
    MEM32(esp + 4) = edx;
    ecx = eax;
    g_seh_ebp = ebp; sub_0055E8C0(); return; /* tail jmp 0x0055E8C0 */

}

/**
 * sub_0055E990
 * Original: 0x0055E990 - 0x0055E9C6 (54 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055E990: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0055E9A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E99Du); } /* indirect call */
    }

loc_0055E9A0: ;
    edx = MEM32(esi);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0055E9A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E9A6u); } /* indirect call */
    }

loc_0055E9A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055E9BE; /* jne: not equal / not zero */

loc_0055E9AD: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(edi + 8)));
    eax = eax - MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055E9BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055E9D0
 * Original: 0x0055E9D0 - 0x0055EA0A (58 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E9D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0055E9E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E9DDu); } /* indirect call */
    }

loc_0055E9E0: ;
    edx = MEM32(esi);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0055E9E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E9E6u); } /* indirect call */
    }

loc_0055E9E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055EA02; /* jne: not equal / not zero */

loc_0055E9ED: ;
    eax = MEM32(esi + 8);
    edx = MEM32(edi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055EA02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055EA10
 * Original: 0x0055EA10 - 0x0055EA57 (71 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EA10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x64FA00);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0055EA1Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0055EA1F: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EA40; /* je: equal / zero */

loc_0055EA28: ;
    ecx = esi;
    PUSH32(esp, 0x0055EA2Fu); RECOMP_ABI_CALL(0x00606090u, sub_00606090); /* call 0x00606090 */

loc_0055EA2F: ;
    MEM32(esi) = 0x64F9CC;
    MEM32(esi + 8) = 0;
    ecx = esi;
    goto loc_0055EA42;

loc_0055EA40: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055EA42: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(esp + 8);
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055EA51; /* je: equal / zero */

loc_0055EA4C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055EA51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EA4Eu); } /* indirect call */
    }

loc_0055EA51: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055EA60
 * Original: 0x0055EA60 - 0x0055EA66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EA60(void)
{

loc_0055EA60: ;
    eax = 0x64FA34;
    esp += 4; return; /* ret */

}

/**
 * sub_0055EA70
 * Original: 0x0055EA70 - 0x0055EA9E (46 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055EA70: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    esi = 0x64FA34;
    ecx = 0x15;
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
    if ((_flags == 0)) goto loc_0055EA93; /* jne: not equal / not zero */

loc_0055EA8E: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_0055EA93: ;
    MEM32(esp + 4) = edx;
    ecx = eax;
    g_seh_ebp = ebp; sub_0055E8C0(); return; /* tail jmp 0x0055E8C0 */

}
