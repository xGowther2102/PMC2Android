/**
 * Midnight Club II (PC) - Recompiled code chunk 44
 * Functions: 226 (0x00627EA4 - 0x0062CDD0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00627EA4
 * Original: 0x00627EA4 - 0x00627EAA (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00627EA4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00627EA4: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x62D200)); return; /* indirect tail jmp */

}

/**
 * sub_00627EAA
 * Original: 0x00627EAA - 0x00627EB0 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00627EAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00627EAA: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x62D1FC)); return; /* indirect tail jmp */

}

/**
 * sub_00627EB0
 * Original: 0x00627EB0 - 0x00627EB6 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00627EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00627EB0: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x62D288)); return; /* indirect tail jmp */

}

/**
 * sub_00627EB6
 * Original: 0x00627EB6 - 0x00627EBC (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00627EB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00627EB6: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x62D018)); return; /* indirect tail jmp */

}

/**
 * sub_00627EC0
 * Original: 0x00627EC0 - 0x00627EC9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00627EC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00627EC0: ;
    POP32(esp, esp);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

}

/**
 * sub_00628900
 * Original: 0x00628900 - 0x00629900 (4096 bytes, 1211 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00628900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00628900: ;
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + eax) = MEM8(ecx + eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + eax) = MEM8(edx + eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + eax) = MEM8(ebx + eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0xC000000)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(0xC000000) = MEM8(0xC000000) + LO8(eax);
    _fa = (uint32_t)(MEM8(0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8000)) >> 32) & 1);
    eax = eax + 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(eax);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi + eax) = MEM8(esi + eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + LO8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + eax) = MEM8(edi + eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + ecx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + ecx) = MEM8(eax + ecx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + ecx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + ecx) = MEM8(ecx + ecx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + ecx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + ecx) = MEM8(edx + ecx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + ecx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + ecx) = MEM8(ebx + ecx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0xC000000)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(0xC000000) = MEM8(0xC000000) + LO8(ecx);
    _fa = (uint32_t)(MEM8(0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + ecx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi + ecx) = MEM8(esi + ecx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + ecx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + ecx) = MEM8(edi + ecx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + edx) = MEM8(eax + edx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(edx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + edx) = MEM8(ecx + edx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(edx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + edx) = MEM8(edx + edx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(edx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + edx) = MEM8(ebx + edx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x14);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0xC000000)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(0xC000000) = MEM8(0xC000000) + LO8(edx);
    _fa = (uint32_t)(MEM8(0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x8000) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(edx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi + edx) = MEM8(esi + edx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + LO8(edx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + edx) = MEM8(edi + edx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + ebx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + ebx) = MEM8(eax + ebx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + ebx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + ebx) = MEM8(ecx + ebx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + ebx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + ebx) = MEM8(edx + ebx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + ebx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + ebx) = MEM8(ebx + ebx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(ebx);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x1C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0xC000000)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(0xC000000) = MEM8(0xC000000) + LO8(ebx);
    _fa = (uint32_t)(MEM8(0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x8000) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(ebx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + ebx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi + ebx) = MEM8(esi + ebx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + ebx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + ebx) = MEM8(edi + ebx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + HI8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + HI8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + HI8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x24);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0xC000000)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(0xC000000) = MEM8(0xC000000) + HI8(eax);
    _fa = (uint32_t)(MEM8(0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + HI8(eax);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + HI8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + ebp)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + ebp) = MEM8(eax + ebp) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + ebp)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + ebp)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + ebp) = MEM8(ecx + ebp) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + ebp)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + ebp)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + ebp) = MEM8(edx + ebp) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + ebp)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + ebp)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + ebp) = MEM8(ebx + ebp) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + ebp)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + HI8(ecx);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x2C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0xC000000)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(0xC000000) = MEM8(0xC000000) + HI8(ecx);
    _fa = (uint32_t)(MEM8(0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x8000));
    eax = eax - 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + HI8(ecx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + ebp)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi + ebp) = MEM8(esi + ebp) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + ebp)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + ebp)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + ebp) = MEM8(edi + ebp) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + ebp)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + esi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + esi) = MEM8(eax + esi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + HI8(edx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + esi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + esi) = MEM8(ecx + esi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + HI8(edx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + esi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + esi) = MEM8(edx + esi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + HI8(edx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + esi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + esi) = MEM8(ebx + esi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + HI8(edx);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x34);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0xC000000)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(0xC000000) = MEM8(0xC000000) + HI8(edx);
    _fa = (uint32_t)(MEM8(0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + esi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi + esi) = MEM8(esi + esi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + HI8(edx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + esi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + esi) = MEM8(edi + esi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + edi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + edi) = MEM8(eax + edi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + edi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + edi) = MEM8(ecx + edi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + edi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + edi) = MEM8(edx + edi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + edi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + edi) = MEM8(ebx + edi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + HI8(ebx);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x3C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0xC000000)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(0xC000000) = MEM8(0xC000000) + HI8(ebx);
    _fa = (uint32_t)(MEM8(0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    _cf = (int)(_fa < _fb);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + HI8(ebx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + edi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi + edi) = MEM8(esi + edi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + edi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + edi) = MEM8(edi + edi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x41);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x42);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x43);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esp + eax * 2)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esp + eax * 2) = MEM8(esp + eax * 2) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esp + eax * 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebp) = MEM8(ebp) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x45);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(eax);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x46);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + LO8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x47);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x48);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x49);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x4A);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x4B);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esp + ecx * 2)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esp + ecx * 2) = MEM8(esp + ecx * 2) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esp + ecx * 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebp) = MEM8(ebp) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x4D);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x4E);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x4F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x50);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(edx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x51);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(edx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x52);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(edx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x53);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esp + edx * 2)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esp + edx * 2) = MEM8(esp + edx * 2) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esp + edx * 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebp) = MEM8(ebp) + LO8(edx);
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x55);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(edx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x56);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + LO8(edx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x57);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x58);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x59);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x5A);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x5B);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(ebx);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esp + ebx * 2)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esp + ebx * 2) = MEM8(esp + ebx * 2) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esp + ebx * 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ebp) = MEM8(ebp) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x5D);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(ebx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x5E);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x5F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x60);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + HI8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x61);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + HI8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x62);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + HI8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x63);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esp)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esp) = MEM8(esp) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esp)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ebp) = MEM8(ebp) + HI8(eax);
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x65);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + HI8(eax);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x66);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + HI8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x67);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x68);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x69);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x6A);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x6B);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + HI8(ecx);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esp + ebp * 2)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esp + ebp * 2) = MEM8(esp + ebp * 2) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esp + ebp * 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebp) = MEM8(ebp) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x6D);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + HI8(ecx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x6E);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x6F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x70);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + HI8(edx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x71);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + HI8(edx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x72);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + HI8(edx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x73);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + HI8(edx);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esp + esi * 2)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esp + esi * 2) = MEM8(esp + esi * 2) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esp + esi * 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebp) = MEM8(ebp) + HI8(edx);
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x75);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x76);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + HI8(edx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x77);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x78);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x79);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x7A);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x7B);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + HI8(ebx);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esp + edi * 2)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esp + edi * 2) = MEM8(esp + edi * 2) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esp + edi * 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(ebp) = MEM8(ebp) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x7D);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + HI8(ebx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x7E);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + 0xC000000)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax + 0xC000000) = MEM8(eax + 0xC000000) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0x80)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0x80;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0xC000000)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ecx + 0xC000000) = MEM8(ecx + 0xC000000) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(0x80)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + 0x80;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + HI8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0xC000000)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx + 0xC000000) = MEM8(edx + 0xC000000) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0x80)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0x80;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + 0xC000000)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx + 0xC000000) = MEM8(ebx + 0xC000000) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFF80u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(0xFFFFFF80u)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + 0xFFFFFF80u;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax + -2079588352)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax + eax + -2079588352) = MEM8(eax + eax + -2079588352) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax + eax + -2079588352)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0xC000000)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebp + 0xC000000) = MEM8(ebp + 0xC000000) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebp + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + 0xC000000)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(esi + 0xC000000) = MEM8(esi + 0xC000000) + LO8(eax);
    _fa = (uint32_t)(MEM8(esi + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = MEM8(eax);
    MEM8(eax) = LO8(eax);
    SET_LO8(eax, _tmp); }
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0xC000000)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edi + 0xC000000) = MEM8(edi + 0xC000000) + LO8(eax);
    _fa = (uint32_t)(MEM8(edi + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = MEM32(eax);
    MEM32(eax) = eax;
    eax = _tmp; }
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + 0xC000000)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + 0xC000000) = MEM8(eax + 0xC000000) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(eax) = LO8(eax);
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0xC000000)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + 0xC000000) = MEM8(ecx + 0xC000000) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(eax) = eax;
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0xC000000)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + 0xC000000) = MEM8(edx + 0xC000000) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(eax));
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + 0xC000000)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + 0xC000000) = MEM8(ebx + 0xC000000) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = MEM32(eax);
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax + -1945370624)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + eax + -1945370624) = MEM8(eax + eax + -1945370624) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + eax + -1945370624)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0xC000000)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebp + 0xC000000) = MEM8(ebp + 0xC000000) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebp + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* nop */
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + 0xC000000)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi + 0xC000000) = MEM8(esi + 0xC000000) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* mov es, MEM16(eax) - segment register */;
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0xC000000)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + 0xC000000) = MEM8(edi + 0xC000000) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); MEM32(eax) = _tmp; }
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + 0xC000000)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(eax + 0xC000000) = MEM8(eax + 0xC000000) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* nop */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0xC000000)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ecx + 0xC000000) = MEM8(ecx + 0xC000000) + LO8(edx);
    _fa = (uint32_t)(MEM8(ecx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = ecx;
    ecx = eax;
    eax = _tmp; }
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0xC000000)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edx + 0xC000000) = MEM8(edx + 0xC000000) + LO8(edx);
    _fa = (uint32_t)(MEM8(edx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = edx;
    edx = eax;
    eax = _tmp; }
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + 0xC000000)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebx + 0xC000000) = MEM8(ebx + 0xC000000) + LO8(edx);
    _fa = (uint32_t)(MEM8(ebx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = ebx;
    ebx = eax;
    eax = _tmp; }
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax + -1811152896)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(eax + eax + -1811152896) = MEM8(eax + eax + -1811152896) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax + eax + -1811152896)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0xC000000)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebp + 0xC000000) = MEM8(ebp + 0xC000000) + LO8(edx);
    _fa = (uint32_t)(MEM8(ebp + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = ebp;
    ebp = eax;
    eax = _tmp; }
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + 0xC000000)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(esi + 0xC000000) = MEM8(esi + 0xC000000) + LO8(edx);
    _fa = (uint32_t)(MEM8(esi + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = esi;
    esi = eax;
    eax = _tmp; }
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0xC000000)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edi + 0xC000000) = MEM8(edi + 0xC000000) + LO8(edx);
    _fa = (uint32_t)(MEM8(edi + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = edi;
    edi = eax;
    eax = _tmp; }
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + 0xC000000)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(eax + 0xC000000) = MEM8(eax + 0xC000000) + LO8(ebx);
    _fa = (uint32_t)(MEM8(eax + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = SX16(eax); /* cwde */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0xC000000)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ecx + 0xC000000) = MEM8(ecx + 0xC000000) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ecx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0xC000000)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edx + 0xC000000) = MEM8(edx + 0xC000000) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("lcall 0, 0x8000", 0x006292A9u); /* TODO: lcall 0, 0x8000 */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + 0xC000000)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ebx + 0xC000000) = MEM8(ebx + 0xC000000) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ebx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* wait - FPU sync */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax + -1676935168)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(eax + eax + -1676935168) = MEM8(eax + eax + -1676935168) + LO8(ebx);
    _fa = (uint32_t)(MEM8(eax + eax + -1676935168)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0xC000000)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ebp + 0xC000000) = MEM8(ebp + 0xC000000) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ebp + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _efl; POP32(esp, _efl); recomp_popfd(_efl); } /* popfd */
    _cf = (int)(g_eflags & 1u); /* popfd: CF */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + 0xC000000)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(esi + 0xC000000) = MEM8(esi + 0xC000000) + LO8(ebx);
    _fa = (uint32_t)(MEM8(esi + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (((((uint8_t)(((uint8_t)~((uint8_t)((_fa - _fb)) ^ (uint8_t)(_fb))) & ((uint8_t)((_fa - _fb)) ^ (uint8_t)(_fa)))) >> 7) != 0)) != 0; /* SAHF preserves OF */
    _fa = ((eax >> 8) & 0xD5u) | (_fb << 11); /* sahf */
    _cf = _fa & 1u;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0xC000000)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edi + 0xC000000) = MEM8(edi + 0xC000000) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edi + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fas < 0)) ? 0x80u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x04u : 0u) | ((_cf) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (add) */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + 0xC000000)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax + 0xC000000) = MEM8(eax + 0xC000000) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(0x8000));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0xC000000)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ecx + 0xC000000) = MEM8(ecx + 0xC000000) + HI8(eax);
    _fa = (uint32_t)(MEM8(ecx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = MEM32(0x8000);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0xC000000)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edx + 0xC000000) = MEM8(edx + 0xC000000) + HI8(eax);
    _fa = (uint32_t)(MEM8(edx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(0x8000) = LO8(eax);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + 0xC000000)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ebx + 0xC000000) = MEM8(ebx + 0xC000000) + HI8(eax);
    _fa = (uint32_t)(MEM8(ebx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(0x8000) = eax;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax + -1542717440)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax + eax + -1542717440) = MEM8(eax + eax + -1542717440) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + eax + -1542717440)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0xC000000)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ebp + 0xC000000) = MEM8(ebp + 0xC000000) + HI8(eax);
    _fa = (uint32_t)(MEM8(ebp + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + 0xC000000)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(esi + 0xC000000) = MEM8(esi + 0xC000000) + HI8(eax);
    _fa = (uint32_t)(MEM8(esi + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    ecx = _rc; }
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0xC000000)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edi + 0xC000000) = MEM8(edi + 0xC000000) + HI8(eax);
    _fa = (uint32_t)(MEM8(edi + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        _cf = (MEM32(esi) < MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    ecx = _rc; }
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + 0xC000000)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(eax + 0xC000000) = MEM8(eax + 0xC000000) + HI8(ecx);
    _fa = (uint32_t)(MEM8(eax + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0xC000000)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx + 0xC000000) = MEM8(ecx + 0xC000000) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ecx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x8000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0xC000000)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edx + 0xC000000) = MEM8(edx + 0xC000000) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + 0xC000000)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebx + 0xC000000) = MEM8(ebx + 0xC000000) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax + -1408499712)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(eax + eax + -1408499712) = MEM8(eax + eax + -1408499712) + HI8(ecx);
    _fa = (uint32_t)(MEM8(eax + eax + -1408499712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0xC000000)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebp + 0xC000000) = MEM8(ebp + 0xC000000) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebp + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = MEM32(esi); esi += RECOMP_DF_STEP(4); /* lodsd */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + 0xC000000)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(esi + 0xC000000) = MEM8(esi + 0xC000000) + HI8(ecx);
    _fa = (uint32_t)(MEM8(esi + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (LO8(eax) == MEM8(edi));
        _cf = (LO8(eax) < MEM8(edi));
        edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe scasb */
    ecx = _rc; }
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0xC000000)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edi + 0xC000000) = MEM8(edi + 0xC000000) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edi + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (eax == MEM32(edi));
        _cf = (eax < MEM32(edi));
        edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe scasd */
    ecx = _rc; }
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + 0xC000000)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0xC000000) = MEM8(eax + 0xC000000) + HI8(edx);
    _fa = (uint32_t)(MEM8(eax + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, 0);
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0xC000000)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ecx + 0xC000000) = MEM8(ecx + 0xC000000) + HI8(edx);
    _fa = (uint32_t)(MEM8(ecx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ecx, 0);
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0xC000000)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(edx + 0xC000000) = MEM8(edx + 0xC000000) + HI8(edx);
    _fa = (uint32_t)(MEM8(edx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(edx, 0);
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + 0xC000000)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebx + 0xC000000) = MEM8(ebx + 0xC000000) + HI8(edx);
    _fa = (uint32_t)(MEM8(ebx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, 0);
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax + -1274281984)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + eax + -1274281984) = MEM8(eax + eax + -1274281984) + HI8(edx);
    _fa = (uint32_t)(MEM8(eax + eax + -1274281984)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0xC000000)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebp + 0xC000000) = MEM8(ebp + 0xC000000) + HI8(edx);
    _fa = (uint32_t)(MEM8(ebp + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_HI8(ecx, 0);
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + 0xC000000)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(esi + 0xC000000) = MEM8(esi + 0xC000000) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_HI8(edx, 0);
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0xC000000)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(edi + 0xC000000) = MEM8(edi + 0xC000000) + HI8(edx);
    _fa = (uint32_t)(MEM8(edi + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_HI8(ebx, 0);
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(0)) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + 0xC000000)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(eax + 0xC000000) = MEM8(eax + 0xC000000) + HI8(ebx);
    _fa = (uint32_t)(MEM8(eax + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = 0x8000;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0xC000000)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(ecx + 0xC000000) = MEM8(ecx + 0xC000000) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ecx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx = 0x8000;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0xC000000)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(edx + 0xC000000) = MEM8(edx + 0xC000000) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = 0x8000;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + 0xC000000)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(ebx + 0xC000000) = MEM8(ebx + 0xC000000) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ebx + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebx = 0x8000;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax + -1140064256)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(eax + eax + -1140064256) = MEM8(eax + eax + -1140064256) + HI8(ebx);
    _fa = (uint32_t)(MEM8(eax + eax + -1140064256)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0xC000000)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(ebp + 0xC000000) = MEM8(ebp + 0xC000000) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ebp + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebp = 0x8000;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + 0xC000000)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(esi + 0xC000000) = MEM8(esi + 0xC000000) + HI8(ebx);
    _fa = (uint32_t)(MEM8(esi + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esi = 0x8000;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0xC000000)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(edi + 0xC000000) = MEM8(edi + 0xC000000) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edi + 0xC000000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edi = 0x8000;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + eax * 8) = MEM8(eax + eax * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + eax * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + eax * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + eax * 8) = MEM8(ecx + eax * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + eax * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + eax * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + eax * 8) = MEM8(edx + eax * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + eax * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + eax * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + eax * 8) = MEM8(ebx + eax * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + eax * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + LO8(eax));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esp + eax * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esp + eax * 8) = MEM8(esp + eax * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esp + eax * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + LO8(eax));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax * 8 + 0x8000)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax * 8 + 0x8000) = MEM8(eax * 8 + 0x8000) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax * 8 + 0x8000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + LO8(eax));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + eax * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi + eax * 8) = MEM8(esi + eax * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + eax * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + LO8(eax));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + eax * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + eax * 8) = MEM8(edi + eax * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + eax * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + ecx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + ecx * 8) = MEM8(eax + ecx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + ecx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + ecx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + ecx * 8) = MEM8(ecx + ecx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + ecx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + ecx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + ecx * 8) = MEM8(edx + ecx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + ecx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + ecx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + ecx * 8) = MEM8(ebx + ecx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + ecx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esp + ecx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esp + ecx * 8) = MEM8(esp + ecx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esp + ecx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + LO8(ecx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx * 8 + 0x8000)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx * 8 + 0x8000) = MEM8(ecx * 8 + 0x8000) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx * 8 + 0x8000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + LO8(ecx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + ecx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi + ecx * 8) = MEM8(esi + ecx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + ecx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + LO8(ecx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + ecx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + ecx * 8) = MEM8(edi + ecx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + ecx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + edx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + edx * 8) = MEM8(eax + edx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + edx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + edx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + edx * 8) = MEM8(ecx + edx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + edx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + edx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + edx * 8) = MEM8(edx + edx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + edx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + edx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + edx * 8) = MEM8(ebx + edx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + edx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + LO8(edx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esp + edx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esp + edx * 8) = MEM8(esp + edx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esp + edx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + LO8(edx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx * 8 + 0x8000)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx * 8 + 0x8000) = MEM8(edx * 8 + 0x8000) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx * 8 + 0x8000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + LO8(edx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + edx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi + edx * 8) = MEM8(esi + edx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + edx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + LO8(edx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + edx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + edx * 8) = MEM8(edi + edx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + edx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + ebx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + ebx * 8) = MEM8(eax + ebx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + ebx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + ebx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + ebx * 8) = MEM8(ecx + ebx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + ebx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + ebx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + ebx * 8) = MEM8(edx + ebx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + ebx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + ebx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + ebx * 8) = MEM8(ebx + ebx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + ebx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + LO8(ebx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esp + ebx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esp + ebx * 8) = MEM8(esp + ebx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esp + ebx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + LO8(ebx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx * 8 + 0x8000)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx * 8 + 0x8000) = MEM8(ebx * 8 + 0x8000) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx * 8 + 0x8000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + LO8(ebx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + ebx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi + ebx * 8) = MEM8(esi + ebx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + ebx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + LO8(ebx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + ebx * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + ebx * 8) = MEM8(edi + ebx * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + ebx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + HI8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + HI8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + HI8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + HI8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + HI8(eax));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esp)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esp) = MEM8(esp) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esp)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + HI8(eax));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0x8000)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(0x8000) = MEM8(0x8000) + LO8(ecx);
    _fa = (uint32_t)(MEM8(0x8000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + HI8(eax));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + HI8(eax));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + HI8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + ebp * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + ebp * 8) = MEM8(eax + ebp * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + ebp * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + HI8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + ebp * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + ebp * 8) = MEM8(ecx + ebp * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + ebp * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + HI8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + ebp * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + ebp * 8) = MEM8(edx + ebp * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + ebp * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + HI8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + ebp * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + ebp * 8) = MEM8(ebx + ebp * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + ebp * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + HI8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esp + ebp * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esp + ebp * 8) = MEM8(esp + ebp * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esp + ebp * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + HI8(ecx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp * 8 + 0x8000)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebp * 8 + 0x8000) = MEM8(ebp * 8 + 0x8000) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebp * 8 + 0x8000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + HI8(ecx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + ebp * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi + ebp * 8) = MEM8(esi + ebp * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + ebp * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + HI8(ecx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + ebp * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + ebp * 8) = MEM8(edi + ebp * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + ebp * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + HI8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + esi * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + esi * 8) = MEM8(eax + esi * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + esi * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + HI8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + esi * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + esi * 8) = MEM8(ecx + esi * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + esi * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + HI8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + esi * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + esi * 8) = MEM8(edx + esi * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + esi * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + HI8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + esi * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + esi * 8) = MEM8(ebx + esi * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + esi * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + HI8(edx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esp + esi * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esp + esi * 8) = MEM8(esp + esi * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esp + esi * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + HI8(edx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi * 8 + 0x8000)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi * 8 + 0x8000) = MEM8(esi * 8 + 0x8000) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi * 8 + 0x8000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + HI8(edx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + esi * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi + esi * 8) = MEM8(esi + esi * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + esi * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + HI8(edx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + esi * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + esi * 8) = MEM8(edi + esi * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + esi * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + HI8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + edi * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + edi * 8) = MEM8(eax + edi * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + edi * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + HI8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + edi * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + edi * 8) = MEM8(ecx + edi * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + edi * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + HI8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + edi * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + edi * 8) = MEM8(edx + edi * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + edi * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + HI8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + edi * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + edi * 8) = MEM8(ebx + edi * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + edi * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + HI8(ebx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esp + edi * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esp + edi * 8) = MEM8(esp + edi * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esp + edi * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + HI8(ebx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi * 8 + 0x8000)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi * 8 + 0x8000) = MEM8(edi * 8 + 0x8000) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi * 8 + 0x8000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + HI8(ebx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + edi * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi + edi * 8) = MEM8(esi + edi * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + edi * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + edi * 8)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + edi * 8) = MEM8(edi + edi * 8) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + edi * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00629900(); return; /* fallthrough 0x00629900 */

}

/**
 * sub_00629900
 * Original: 0x00629900 - 0x00629909 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00629900: ;
    POP32(esp, esp);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

}

/**
 * sub_006299B0
 * Original: 0x006299B0 - 0x006299B6 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006299B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006299B0: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x62D0A0)); return; /* indirect tail jmp */

}

/**
 * sub_006299B6
 * Original: 0x006299B6 - 0x00629A0B (85 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_006299B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006299B6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00629A07; /* je: equal / zero */

loc_006299BF: ;
    _fa = (uint32_t)(MEM32(0x86D8A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x86D8A8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006299CE; /* jne: not equal / not zero */

loc_006299C8: ;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00629A30(); return; /* tail jmp 0x00629A30 */

loc_006299CE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);

loc_006299D7: ;
    eax = ZX8(MEM8(esi));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x006299E0u); RECOMP_ABI_CALL(0x0061AF0Fu, sub_0061AF0F); /* call 0x0061AF0F */

loc_006299E0: ;
    ebx = eax;
    eax = ZX8(MEM8(edi));
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x006299ECu); RECOMP_ABI_CALL(0x0061AF0Fu, sub_0061AF0F); /* call 0x0061AF0F */

loc_006299EC: ;
    POP32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    ecx = eax;
    if ((_fa == 0)) goto loc_006299FE; /* je: equal / zero */

loc_006299F6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006299FE; /* je: equal / zero */

loc_006299FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006299D7; /* je: equal / zero */

loc_006299FE: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00629A07: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00629A10
 * Original: 0x00629A10 - 0x00629A2F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629A10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = esp;
    MEM32(esp + 0xC) = ebp;
    ebp = esp + 0xC;
    PUSH32(esp, eax);
    g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00629A30
 * Original: 0x00629A30 - 0x00629A91 (97 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00629A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00629A30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = MEM32(ebp + 0x10);
    ecx = ecx | ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00629A8A; /* je: equal / zero */

loc_00629A3D: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    SET_HI8(ebx, 0x41);
    SET_LO8(ebx, 0x5A);
    SET_HI8(edx, 0x20);
    /* nop */

loc_00629A4C: ;
    SET_HI8(eax, MEM8(esi));
    SET_HI8(eax, HI8(eax) | HI8(eax));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, MEM8(edi));
    if ((_fa == 0)) goto loc_00629A7B; /* je: equal / zero */

loc_00629A54: ;
    SET_LO8(eax, LO8(eax) | LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00629A7B; /* je: equal / zero */

loc_00629A58: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), HI8(ebx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00629A68; /* jb: below (unsigned <) */

loc_00629A62: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(ebx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00629A68; /* ja: above (unsigned >) */

loc_00629A66: ;
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + HI8(edx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_00629A68: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), HI8(ebx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00629A72; /* jb: below (unsigned <) */

loc_00629A6C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00629A72; /* ja: above (unsigned >) */

loc_00629A70: ;
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + HI8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_00629A72: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00629A81; /* jne: not equal / not zero */

loc_00629A76: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00629A4C; /* jne: not equal / not zero */

loc_00629A7B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00629A8A; /* je: equal / zero */

loc_00629A81: ;
    ecx = 0xFFFFFFFFu;
    if (CMP_B(_fa, _fb)) goto loc_00629A8A; /* jb: below (unsigned <) */

loc_00629A88: ;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00629A8A: ;
    eax = ecx;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00629AA0
 * Original: 0x00629AA0 - 0x00629AAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629AA0: ;
    eax = 0x65F594;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629AB0
 * Original: 0x00629AB0 - 0x00629ABA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629AB0: ;
    eax = 0x65F618;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629AC0
 * Original: 0x00629AC0 - 0x00629ACA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629AC0: ;
    eax = 0x65F668;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629AD0
 * Original: 0x00629AD0 - 0x00629ADA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629AD0: ;
    eax = 0x65F760;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629AE0
 * Original: 0x00629AE0 - 0x00629AEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629AE0: ;
    eax = 0x65F7B0;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629AF0
 * Original: 0x00629AF0 - 0x00629AFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629AF0: ;
    eax = 0x65F800;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629B00
 * Original: 0x00629B00 - 0x00629B0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629B00: ;
    eax = 0x65F850;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629B10
 * Original: 0x00629B10 - 0x00629B1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629B10: ;
    eax = 0x65F8A0;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629B20
 * Original: 0x00629B20 - 0x00629B2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629B20: ;
    eax = 0x65F8F0;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629B30
 * Original: 0x00629B30 - 0x00629B3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629B30: ;
    eax = 0x65F974;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629B40
 * Original: 0x00629B40 - 0x00629B4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629B40: ;
    eax = 0x65F9C4;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629B50
 * Original: 0x00629B50 - 0x00629B5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629B50: ;
    eax = 0x65FA14;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629B60
 * Original: 0x00629B60 - 0x00629B6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629B60: ;
    eax = 0x65FA64;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629B70
 * Original: 0x00629B70 - 0x00629B7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629B70: ;
    eax = 0x65FAE8;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629B80
 * Original: 0x00629B80 - 0x00629B8A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629B80: ;
    eax = 0x65FB38;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629B90
 * Original: 0x00629B90 - 0x00629B9A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629B90: ;
    eax = 0x65FB88;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629BA0
 * Original: 0x00629BA0 - 0x00629BAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629BA0: ;
    eax = 0x65FC14;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629BB0
 * Original: 0x00629BB0 - 0x00629BBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629BB0: ;
    eax = 0x65FC64;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629BC0
 * Original: 0x00629BC0 - 0x00629BCA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629BC0: ;
    eax = 0x65FCE8;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629BD0
 * Original: 0x00629BD0 - 0x00629BDA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629BD0: ;
    eax = 0x65FD38;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629BE0
 * Original: 0x00629BE0 - 0x00629BEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629BE0: ;
    eax = 0x65FD88;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629BF0
 * Original: 0x00629BF0 - 0x00629BFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629BF0: ;
    eax = 0x65FDD8;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629C00
 * Original: 0x00629C00 - 0x00629C0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629C00: ;
    eax = 0x65FE28;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629C10
 * Original: 0x00629C10 - 0x00629C1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629C10: ;
    eax = 0x65FE78;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629C20
 * Original: 0x00629C20 - 0x00629C2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629C20: ;
    eax = 0x65FEC8;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629C30
 * Original: 0x00629C30 - 0x00629C3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629C30: ;
    eax = 0x65FF18;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629C40
 * Original: 0x00629C40 - 0x00629C4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629C40: ;
    eax = 0x65FF9C;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629C50
 * Original: 0x00629C50 - 0x00629C5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629C50: ;
    eax = 0x65FFEC;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629C60
 * Original: 0x00629C60 - 0x00629C6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629C60: ;
    eax = 0x66003C;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629C70
 * Original: 0x00629C70 - 0x00629C7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629C70: ;
    eax = 0x66008C;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629C80
 * Original: 0x00629C80 - 0x00629C8A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629C80: ;
    eax = 0x6600DC;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629C90
 * Original: 0x00629C90 - 0x00629C9A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629C90: ;
    eax = 0x66012C;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629CA0
 * Original: 0x00629CA0 - 0x00629CAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629CA0: ;
    eax = 0x6601B0;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629CB0
 * Original: 0x00629CB0 - 0x00629CBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629CB0: ;
    eax = 0x660200;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629CC0
 * Original: 0x00629CC0 - 0x00629CCA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629CC0: ;
    eax = 0x660250;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629CD0
 * Original: 0x00629CD0 - 0x00629CDA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629CD0: ;
    eax = 0x6602A0;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629CE0
 * Original: 0x00629CE0 - 0x00629CEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629CE0: ;
    eax = 0x6602F0;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629CEA
 * Original: 0x00629CEA - 0x00629CF2 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629CEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629CEA: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_0041D790(); return; /* tail jmp 0x0041D790 */

}

/**
 * sub_00629CF2
 * Original: 0x00629CF2 - 0x00629CFC (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629CF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629CF2: ;
    eax = 0x660314;
    g_seh_ebp = ebp; sub_00619FB6(); return; /* tail jmp 0x00619FB6 */

}

/**
 * sub_00629D00
 * Original: 0x00629D00 - 0x00629D0A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629D00: ;
    ecx = 0x692E68;
    g_seh_ebp = ebp; sub_00611C60(); return; /* tail jmp 0x00611C60 */

}

/**
 * sub_00629D10
 * Original: 0x00629D10 - 0x00629D30 (32 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629D10: ;
    fp_push(MEMF(0x62D524)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x692E80) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00629D30(); return; /* fallthrough 0x00629D30 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00629D30
 * Original: 0x00629D30 - 0x00629D41 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00629D30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00629D30: ;
    fp_push(MEMF(0x62DD30)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x692EAC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00629D50
 * Original: 0x00629D50 - 0x00629D61 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00629D50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00629D50: ;
    fp_push(MEMF(0x62E010)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x692EBC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00629D70
 * Original: 0x00629D70 - 0x00629D81 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00629D70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00629D70: ;
    fp_push(MEMF(0x62F3C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x692EC4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00629D90
 * Original: 0x00629D90 - 0x00629DA1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00629D90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00629D90: ;
    fp_push(MEMF(0x62F5AC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x692EC8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00629DB0
 * Original: 0x00629DB0 - 0x00629DE5 (53 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00629DB0: ;
    eax = 0x695AC2;
    edx = 6;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00629DC0: ;
    MEM32(eax + -10) = ecx;
    MEM32(eax + -6) = 0xFFFFFFFFu;
    MEM16(eax) = LO16(ecx);
    MEM32(eax + 0x20A) = ecx;
    MEM32(eax + 0x20E) = ecx;
    MEM8(eax + -2) = LO8(ecx);
    _fb = (uint32_t)(0x21C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x21C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00629DC0; /* jne: not equal / not zero */

loc_00629DE4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00629DF0
 * Original: 0x00629DF0 - 0x00629E01 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00629DF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00629DF0: ;
    fp_push(MEMF(0x63CC98)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x696764) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00629E10
 * Original: 0x00629E10 - 0x00629E21 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00629E10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00629E10: ;
    fp_push(MEMF(0x63D1FC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x6967B0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00629E30
 * Original: 0x00629E30 - 0x00629E3A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629E30: ;
    ecx = 0x6967C0;
    g_seh_ebp = ebp; sub_004701A0(); return; /* tail jmp 0x004701A0 */

}

/**
 * sub_00629E40
 * Original: 0x00629E40 - 0x00629E60 (32 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629E40: ;
    fp_push(MEMF(0x63DA54)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x696850) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00629E60(); return; /* fallthrough 0x00629E60 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00629E60
 * Original: 0x00629E60 - 0x00629E80 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629E60(void)
{

loc_00629E60: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x65);
    ecx = 0x69685C;
    PUSH32(esp, 0x00629E74u); RECOMP_ABI_CALL(0x00612850u, sub_00612850); /* call 0x00612850 */

loc_00629E74: ;
    PUSH32(esp, 0x62CB60);
    PUSH32(esp, 0x00629E7Eu); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_00629E7E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00629E80
 * Original: 0x00629E80 - 0x00629EA0 (32 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00629E80: ;
    ecx = 0x6968B8;
    PUSH32(esp, 0x00629E8Au); RECOMP_ABI_CALL(0x0047BEA0u, sub_0047BEA0); /* call 0x0047BEA0 */

loc_00629E8A: ;
    PUSH32(esp, 0x62CB70);
    PUSH32(esp, 0x00629E94u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_00629E94: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00629EA0(); return; /* fallthrough 0x00629EA0 */

}

/**
 * sub_00629EA0
 * Original: 0x00629EA0 - 0x00629EB1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00629EA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00629EA0: ;
    fp_push(MEMF(0x63E7C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x697B8C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00629EC0
 * Original: 0x00629EC0 - 0x00629ED1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00629EC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00629EC0: ;
    fp_push(MEMF(0x63ED74)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x697C18) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00629EE0
 * Original: 0x00629EE0 - 0x00629F00 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629EE0(void)
{

loc_00629EE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x65);
    ecx = 0x697E24;
    PUSH32(esp, 0x00629EF4u); RECOMP_ABI_CALL(0x00612850u, sub_00612850); /* call 0x00612850 */

loc_00629EF4: ;
    PUSH32(esp, 0x62CB80);
    PUSH32(esp, 0x00629EFEu); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_00629EFE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00629F00
 * Original: 0x00629F00 - 0x00629F20 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00629F00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x697E40;
    edi = 6;
    /* nop */

loc_00629F10: ;
    ecx = esi;
    PUSH32(esp, 0x00629F17u); RECOMP_ABI_CALL(0x005FB2E0u, sub_005FB2E0); /* call 0x005FB2E0 */

loc_00629F17: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00629F10; /* jne: not equal / not zero */

loc_00629F1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00629F20
 * Original: 0x00629F20 - 0x00629F40 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00629F20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x697FD8;
    edi = 6;
    /* nop */

loc_00629F30: ;
    ecx = esi;
    PUSH32(esp, 0x00629F37u); RECOMP_ABI_CALL(0x005FB2E0u, sub_005FB2E0); /* call 0x005FB2E0 */

loc_00629F37: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00629F30; /* jne: not equal / not zero */

loc_00629F3D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00629F40
 * Original: 0x00629F40 - 0x00629F60 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00629F40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x698170;
    edi = 6;
    /* nop */

loc_00629F50: ;
    ecx = esi;
    PUSH32(esp, 0x00629F57u); RECOMP_ABI_CALL(0x005FB2E0u, sub_005FB2E0); /* call 0x005FB2E0 */

loc_00629F57: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00629F50; /* jne: not equal / not zero */

loc_00629F5D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00629F60
 * Original: 0x00629F60 - 0x00629F8D (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00629F60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x697C80;
    edi = 5;
    /* nop */

loc_00629F70: ;
    ecx = esi;
    PUSH32(esp, 0x00629F77u); RECOMP_ABI_CALL(0x0050B990u, sub_0050B990); /* call 0x0050B990 */

loc_00629F77: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x54;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00629F70; /* jne: not equal / not zero */

loc_00629F7D: ;
    PUSH32(esp, 0x62CB90);
    PUSH32(esp, 0x00629F87u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_00629F87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00629F90
 * Original: 0x00629F90 - 0x00629FA1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00629F90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00629F90: ;
    fp_push(MEMF(0x640664)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x698490) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00629FB0
 * Original: 0x00629FB0 - 0x00629FC1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00629FB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00629FB0: ;
    fp_push(MEMF(0x642854)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x698620) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00629FD0
 * Original: 0x00629FD0 - 0x00629FEC (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00629FD0: ;
    eax = 0x698690;
    ecx = 0x10;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00629FE0: ;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00629FE0; /* jne: not equal / not zero */

loc_00629FEB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00629FF0
 * Original: 0x00629FF0 - 0x0062A01A (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00629FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00629FF0: ;
    PUSH32(esp, esi);
    ecx = 0x698718;
    esi = 0x21;
    goto loc_0062A000;

    /* nop */

loc_0062A000: ;
    PUSH32(esp, 0x0062A005u); RECOMP_ABI_CALL(0x004AB580u, sub_004AB580); /* call 0x004AB580 */

loc_0062A005: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0062A000; /* jne: not equal / not zero */

loc_0062A00B: ;
    PUSH32(esp, 0x62CBC0);
    PUSH32(esp, 0x0062A015u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062A015: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0062A020
 * Original: 0x0062A020 - 0x0062A04A (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0062A020: ;
    PUSH32(esp, esi);
    ecx = 0x698BC0;
    esi = 0x21;
    goto loc_0062A030;

    /* nop */

loc_0062A030: ;
    PUSH32(esp, 0x0062A035u); RECOMP_ABI_CALL(0x004AB580u, sub_004AB580); /* call 0x004AB580 */

loc_0062A035: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0062A030; /* jne: not equal / not zero */

loc_0062A03B: ;
    PUSH32(esp, 0x62CBB0);
    PUSH32(esp, 0x0062A045u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062A045: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0062A050
 * Original: 0x0062A050 - 0x0062A061 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A050(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A050: ;
    fp_push(MEMF(0x643EEC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x69910C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A070
 * Original: 0x0062A070 - 0x0062A081 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A070(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A070: ;
    fp_push(MEMF(0x644290)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x6993A0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A090
 * Original: 0x0062A090 - 0x0062A09A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062A090: ;
    ecx = 0x6993A4;
    g_seh_ebp = ebp; sub_00611C60(); return; /* tail jmp 0x00611C60 */

}

/**
 * sub_0062A0A0
 * Original: 0x0062A0A0 - 0x0062A0B0 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A0A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062A0A0: ;
    SET_LO8(eax, MEM8(0x85843E));
    MEM8(0x69939E) = LO8(eax);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0062A0B0(); return; /* fallthrough 0x0062A0B0 */

}

/**
 * sub_0062A0B0
 * Original: 0x0062A0B0 - 0x0062A0BB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A0B0(void)
{

loc_0062A0B0: ;
    SET_LO8(eax, MEM8(0x858404));
    MEM8(0x69939D) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0062A0C0
 * Original: 0x0062A0C0 - 0x0062A0CB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A0C0(void)
{

loc_0062A0C0: ;
    eax = MEM32(0x8583F8);
    MEM32(0x6993A8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0062A0D0
 * Original: 0x0062A0D0 - 0x0062A0E1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A0D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A0D0: ;
    fp_push(MEMF(0x6467D4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x69948C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A0F0
 * Original: 0x0062A0F0 - 0x0062A101 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A0F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A0F0: ;
    fp_push(MEMF(0x646D6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x699690) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A110
 * Original: 0x0062A110 - 0x0062A121 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A110(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A110: ;
    fp_push(MEMF(0x646DC4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x69B5F8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A130
 * Original: 0x0062A130 - 0x0062A13B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A130(void)
{

loc_0062A130: ;
    eax = MEM32(0x646DC8);
    MEM32(0x699860) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0062A140
 * Original: 0x0062A140 - 0x0062A159 (25 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A140(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A140: ;
    fp_push(MEMF(0x662C6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x662C54)); /* fdiv dword ptr [0x662c54] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63AF04)); /* fmul dword ptr [0x63af04] */
    MEMF(0x69B698) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A160
 * Original: 0x0062A160 - 0x0062A176 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A160(void)
{

loc_0062A160: ;
    ecx = 0x69B6A0;
    PUSH32(esp, 0x0062A16Au); RECOMP_ABI_CALL(0x00579410u, sub_00579410); /* call 0x00579410 */

loc_0062A16A: ;
    PUSH32(esp, 0x62CBE0);
    PUSH32(esp, 0x0062A174u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062A174: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062A180
 * Original: 0x0062A180 - 0x0062A196 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A180(void)
{

loc_0062A180: ;
    ecx = 0x699890;
    PUSH32(esp, 0x0062A18Au); RECOMP_ABI_CALL(0x00579410u, sub_00579410); /* call 0x00579410 */

loc_0062A18A: ;
    PUSH32(esp, 0x62CBD0);
    PUSH32(esp, 0x0062A194u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062A194: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062A1A0
 * Original: 0x0062A1A0 - 0x0062A1AB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A1A0(void)
{

loc_0062A1A0: ;
    eax = MEM32(0x662C60);
    MEM32(0x69988C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0062A1B0
 * Original: 0x0062A1B0 - 0x0062A1BB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A1B0(void)
{

loc_0062A1B0: ;
    eax = MEM32(0x662C5C);
    MEM32(0x699864) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0062A1C0
 * Original: 0x0062A1C0 - 0x0062A1CB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A1C0(void)
{

loc_0062A1C0: ;
    eax = MEM32(0x662C64);
    MEM32(0x69B658) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0062A1D0
 * Original: 0x0062A1D0 - 0x0062A1DB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A1D0(void)
{

loc_0062A1D0: ;
    eax = MEM32(0x662C68);
    MEM32(0x699868) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0062A1E0
 * Original: 0x0062A1E0 - 0x0062A1EB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A1E0(void)
{

loc_0062A1E0: ;
    eax = MEM32(0x662C6C);
    MEM32(0x69B69C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0062A1F0
 * Original: 0x0062A1F0 - 0x0062A1FB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A1F0(void)
{

loc_0062A1F0: ;
    eax = MEM32(0x662C4C);
    MEM32(0x69B660) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0062A200
 * Original: 0x0062A200 - 0x0062A20B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A200(void)
{

loc_0062A200: ;
    eax = MEM32(0x662C50);
    MEM32(0x699888) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0062A210
 * Original: 0x0062A210 - 0x0062A21B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A210(void)
{

loc_0062A210: ;
    eax = MEM32(0x662C54);
    MEM32(0x69B664) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0062A220
 * Original: 0x0062A220 - 0x0062A233 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A220(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A220: ;
    fp_push(MEMF(0x662C50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    MEMF(0x69B65C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A240
 * Original: 0x0062A240 - 0x0062A24B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A240(void)
{

loc_0062A240: ;
    eax = MEM32(0x662C54);
    MEM32(0x69985C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0062A250
 * Original: 0x0062A250 - 0x0062A25B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A250(void)
{

loc_0062A250: ;
    eax = MEM32(0x69B698);
    MEM32(0x69B748) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0062A260
 * Original: 0x0062A260 - 0x0062A271 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A260(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A260: ;
    fp_push(MEMF(0x646F2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x69B78C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A280
 * Original: 0x0062A280 - 0x0062A291 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A280(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A280: ;
    fp_push(MEMF(0x6471A4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x69C7A8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A2A0
 * Original: 0x0062A2A0 - 0x0062A2B1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A2A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A2A0: ;
    fp_push(MEMF(0x6475E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x69C7AC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A2C0
 * Original: 0x0062A2C0 - 0x0062A2D1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A2C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A2C0: ;
    fp_push(MEMF(0x6476B8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x69C7B0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A2E0
 * Original: 0x0062A2E0 - 0x0062A2F1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A2E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A2E0: ;
    fp_push(MEMF(0x64770C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x69C7B4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A300
 * Original: 0x0062A300 - 0x0062A311 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A300(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A300: ;
    fp_push(MEMF(0x647770)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x69C7BC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A320
 * Original: 0x0062A320 - 0x0062A331 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A320(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A320: ;
    fp_push(MEMF(0x6477EC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x69C7C0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A340
 * Original: 0x0062A340 - 0x0062A351 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A340(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A340: ;
    fp_push(MEMF(0x6478F4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x69C7C4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A360
 * Original: 0x0062A360 - 0x0062A371 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A360(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A360: ;
    fp_push(MEMF(0x6478F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x69C7C8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A380
 * Original: 0x0062A380 - 0x0062A391 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A380(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A380: ;
    fp_push(MEMF(0x6478FC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x69C7CC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A3A0
 * Original: 0x0062A3A0 - 0x0062A3B1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A3A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A3A0: ;
    fp_push(MEMF(0x6479DC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x69C7D8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A3C0
 * Original: 0x0062A3C0 - 0x0062A3D1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A3C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A3C0: ;
    fp_push(MEMF(0x647E40)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x69C7E0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A3E0
 * Original: 0x0062A3E0 - 0x0062A3EA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062A3E0: ;
    ecx = 0x6C2578;
    g_seh_ebp = ebp; sub_00515240(); return; /* tail jmp 0x00515240 */

}

/**
 * sub_0062A3F0
 * Original: 0x0062A3F0 - 0x0062A410 (32 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062A3F0: ;
    fp_push(MEMF(0x649354)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x6C2600) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0062A410(); return; /* fallthrough 0x0062A410 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A410
 * Original: 0x0062A410 - 0x0062A41A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062A410: ;
    ecx = 0x6C32C8;
    g_seh_ebp = ebp; sub_0053AF00(); return; /* tail jmp 0x0053AF00 */

}

/**
 * sub_0062A420
 * Original: 0x0062A420 - 0x0062A430 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062A420: ;
    ecx = 0x6C2E88;
    g_seh_ebp = ebp; sub_0053AF00(); return; /* tail jmp 0x0053AF00 */

    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_0062A430(); return; /* fallthrough 0x0062A430 */

}

/**
 * sub_0062A430
 * Original: 0x0062A430 - 0x0062A440 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062A430: ;
    ecx = 0x6C3250;
    g_seh_ebp = ebp; sub_0053B990(); return; /* tail jmp 0x0053B990 */

    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_0062A440(); return; /* fallthrough 0x0062A440 */

}

/**
 * sub_0062A440
 * Original: 0x0062A440 - 0x0062A450 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062A440: ;
    ecx = 0x6C2C70;
    g_seh_ebp = ebp; sub_0053E8D0(); return; /* tail jmp 0x0053E8D0 */

    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_0062A450(); return; /* fallthrough 0x0062A450 */

}

/**
 * sub_0062A450
 * Original: 0x0062A450 - 0x0062A460 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062A450: ;
    ecx = 0x6C32C4;
    g_seh_ebp = ebp; sub_005406A0(); return; /* tail jmp 0x005406A0 */

    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_0062A460(); return; /* fallthrough 0x0062A460 */

}

/**
 * sub_0062A460
 * Original: 0x0062A460 - 0x0062A480 (32 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062A460: ;
    ecx = 0x6C3908;
    PUSH32(esp, 0x0062A46Au); RECOMP_ABI_CALL(0x00546DA0u, sub_00546DA0); /* call 0x00546DA0 */

loc_0062A46A: ;
    PUSH32(esp, 0x62CBF0);
    PUSH32(esp, 0x0062A474u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062A474: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0062A480(); return; /* fallthrough 0x0062A480 */

}

/**
 * sub_0062A480
 * Original: 0x0062A480 - 0x0062A48B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A480(void)
{

loc_0062A480: ;
    eax = MEM32(0x64E9E0);
    MEM32(0x6C39A4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0062A490
 * Original: 0x0062A490 - 0x0062A49B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A490(void)
{

loc_0062A490: ;
    eax = MEM32(0x64E9E4);
    MEM32(0x6C39A0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0062A4A0
 * Original: 0x0062A4A0 - 0x0062A4C0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A4A0(void)
{

loc_0062A4A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x65);
    ecx = 0x6C50F0;
    PUSH32(esp, 0x0062A4B4u); RECOMP_ABI_CALL(0x00612850u, sub_00612850); /* call 0x00612850 */

loc_0062A4B4: ;
    PUSH32(esp, 0x62CC00);
    PUSH32(esp, 0x0062A4BEu); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062A4BE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062A4C0
 * Original: 0x0062A4C0 - 0x0062A4E0 (32 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062A4C0: ;
    fp_push(MEMF(0x6507DC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D40C)); /* fmul dword ptr [0x63d40c] */
    MEMF(0x6C520C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0062A4E0(); return; /* fallthrough 0x0062A4E0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A4E0
 * Original: 0x0062A4E0 - 0x0062A4F5 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A4E0(void)
{

loc_0062A4E0: ;
    eax = MEM32(0x860688);
    MEM32(0x673E48) = eax;
    MEM32(0x860688) = 0x673E3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0062A500
 * Original: 0x0062A500 - 0x0062A511 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A500(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A500: ;
    fp_push(MEMF(0x6510F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(0x6C521C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A520
 * Original: 0x0062A520 - 0x0062A533 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A520(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062A520: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x673E98)); /* fdiv dword ptr [0x673e98] */
    MEMF(0x6C5220) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062A540
 * Original: 0x0062A540 - 0x0062A560 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A540(void)
{

loc_0062A540: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x65);
    ecx = 0x6C5224;
    PUSH32(esp, 0x0062A554u); RECOMP_ABI_CALL(0x00612850u, sub_00612850); /* call 0x00612850 */

loc_0062A554: ;
    PUSH32(esp, 0x62CC10);
    PUSH32(esp, 0x0062A55Eu); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062A55E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062A560
 * Original: 0x0062A560 - 0x0062A580 (32 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062A560: ;
    eax = MEM32(0x860688);
    MEM32(0x673EEC) = eax;
    MEM32(0x860688) = 0x673EE0;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0062A580(); return; /* fallthrough 0x0062A580 */

}

/**
 * sub_0062A580
 * Original: 0x0062A580 - 0x0062A643 (195 bytes, 40 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062A580(void)
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

loc_0062A580: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(0x6C88E0) = (float)fp_top(); /* fst */
    MEMF(0x6C88E4) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(0x6C88E8) = (float)fp_top(); /* fst */
    MEMF(0x6C88EC) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    MEMF(0x6C88F0) = (float)fp_top(); /* fst */
    ecx = MEM32(esp + 4);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    edx = ecx;
    MEMF(0x6C88F4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8910) = ecx;
    fp_push(MEMF(0x632600)); /* fld float */
    MEM32(0x6C8914) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp) = (float)fp_top(); /* fst */
    eax = MEM32(esp);
    MEMF(0x6C88F8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    ecx = eax;
    MEMF(0x6C88FC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C890C) = eax;
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEM32(0x6C8918) = eax;
    MEMF(0x6C8900) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C891C) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(0x6C8904) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x6C8908) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_0062A650
 * Original: 0x0062A650 - 0x0062A7D9 (393 bytes, 83 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A650(void)
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

loc_0062A650: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63030C)); /* fmul dword ptr [0x63030c] */
    MEMF(0x6C8200) = (float)fp_top(); /* fst */
    MEMF(0x6C8204) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63030C)); /* fmul dword ptr [0x63030c] */
    MEMF(0x6C8208) = (float)fp_top(); /* fst */
    MEMF(0x6C820C) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63030C)); /* fmul dword ptr [0x63030c] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    MEMF(0x6C8210) = (float)fp_top(); /* fst */
    edx = MEM32(esp + 8);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(0x6C8270) = edx;
    MEMF(0x6C8214) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x632600)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63030C)); /* fmul dword ptr [0x63030c] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    MEMF(0x6C8218) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C821C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x632600)); /* fadd dword ptr [0x632600] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63030C)); /* fmul dword ptr [0x63030c] */
    MEMF(esp) = (float)fp_top(); /* fst */
    MEMF(0x6C8220) = (float)fp_top(); /* fst */
    eax = MEM32(esp);
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEM32(0x6C8264) = eax;
    MEMF(0x6C8224) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8274) = eax;
    fp_push(MEMF(0x62E2B0)); /* fld float */
    MEM32(0x6C8280) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63030C)); /* fmul dword ptr [0x63030c] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    MEMF(0x6C8228) = (float)fp_top(); /* fst */
    ecx = MEM32(esp + 4);
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    edx = MEM32(esp + 4);
    MEMF(0x6C822C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C826C) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    ecx = MEM32(esp + 0xC);
    MEMF(0x6C8230) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8278) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEM32(0x6C827C) = edx;
    MEMF(0x6C8234) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8238) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C823C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C8240) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C8244) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8248) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C824C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(0x6C8250) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(0x6C8254) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(0x6C8258) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x6C825C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(0x6C8260) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x6C8268) = (float)fp_top(); fp_pop(); /* fstp */
    eax = edx;
    MEM32(0x6C8284) = ecx;
    MEM32(0x6C8288) = edx;
    MEM32(0x6C828C) = eax;
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
 * sub_0062A7E0
 * Original: 0x0062A7E0 - 0x0062AA7A (666 bytes, 142 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062A7E0(void)
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

loc_0062A7E0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D678)); /* fmul dword ptr [0x62d678] */
    MEMF(0x6C85A0) = (float)fp_top(); /* fst */
    MEMF(0x6C85A4) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D678)); /* fmul dword ptr [0x62d678] */
    MEMF(0x6C85A8) = (float)fp_top(); /* fst */
    MEMF(0x6C85AC) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D678)); /* fmul dword ptr [0x62d678] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    MEMF(0x6C85B0) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C85B4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x632600)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D678)); /* fmul dword ptr [0x62d678] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(0x6C85B8) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C85BC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x632600)); /* fadd dword ptr [0x632600] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D678)); /* fmul dword ptr [0x62d678] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    MEMF(0x6C85C0) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C85C4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x62E2B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D678)); /* fmul dword ptr [0x62d678] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    MEMF(0x6C85C8) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C85CC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62E2B0)); /* fadd dword ptr [0x62e2b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D678)); /* fmul dword ptr [0x62d678] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    MEMF(0x6C85D0) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    MEMF(0x6C85D4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6302F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D678)); /* fmul dword ptr [0x62d678] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    eax = MEM32(esp);
    MEMF(0x6C85DC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C85D8) = eax;
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    MEMF(0x6C85E0) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C85E4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    MEMF(0x6C85E8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C85EC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C85F0) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C85F4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C85F8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C85FC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8600) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8604) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C8608) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C860C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    eax = MEM32(esp + 0xC);
    MEMF(0x6C8610) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8618) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    ecx = eax;
    MEMF(0x6C8614) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8644) = ecx;
    ecx = MEM32(esp + 4);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C861C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8650) = ecx;
    ecx = MEM32(esp + 8);
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    MEMF(0x6C8620) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8640) = eax;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    eax = edx;
    MEMF(0x6C8624) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C863C) = edx;
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEM32(0x6C8648) = edx;
    edx = MEM32(esp + 0xC);
    MEMF(0x6C8628) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C865C) = ecx;
    ecx = MEM32(esp + 0x10);
    MEMF(0x6C862C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C864C) = eax;
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    eax = MEM32(esp);
    MEMF(0x6C8630) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8654) = edx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = MEM32(esp + 4);
    MEMF(0x6C8634) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8670) = ecx;
    ecx = MEM32(esp);
    MEMF(0x6C8638) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8658) = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(0x6C866C) = eax;
    MEMF(0x6C8660) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    MEM32(0x6C8664) = edx;
    MEMF(0x6C8668) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8674) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(0x6C867C) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(0x6C8678) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x6C8680) = edx;
    edx = MEM32(esp);
    MEM32(0x6C8688) = ecx;
    ecx = eax;
    MEM32(0x6C8684) = eax;
    MEM32(0x6C8690) = eax;
    eax = edx;
    MEM32(0x6C868C) = edx;
    MEM32(0x6C8694) = ecx;
    MEM32(0x6C8698) = edx;
    MEM32(0x6C869C) = eax;
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
 * sub_0062AA80
 * Original: 0x0062AA80 - 0x0062AE60 (992 bytes, 212 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062AA80(void)
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

loc_0062AA80: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x639994)); /* fmul dword ptr [0x639994] */
    MEMF(0x6C8920) = (float)fp_top(); /* fst */
    MEMF(0x6C8924) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x639994)); /* fmul dword ptr [0x639994] */
    MEMF(0x6C8928) = (float)fp_top(); /* fst */
    MEMF(0x6C892C) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x639994)); /* fmul dword ptr [0x639994] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    MEMF(0x6C8930) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8934) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x632600)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x639994)); /* fmul dword ptr [0x639994] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    MEMF(0x6C8938) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C893C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x632600)); /* fadd dword ptr [0x632600] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x639994)); /* fmul dword ptr [0x639994] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(0x6C8940) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8944) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x62E2B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x639994)); /* fmul dword ptr [0x639994] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    MEMF(0x6C8948) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C894C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62E2B0)); /* fadd dword ptr [0x62e2b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x639994)); /* fmul dword ptr [0x639994] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    MEMF(0x6C8950) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    MEMF(0x6C8954) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6302F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x639994)); /* fmul dword ptr [0x639994] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    eax = MEM32(esp);
    MEMF(0x6C895C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8958) = eax;
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x6302F8)); /* fadd dword ptr [0x6302f8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x639994)); /* fmul dword ptr [0x639994] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 4);
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    MEMF(0x6C8964) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8960) = ecx;
    fp_push(MEMF(0x630D68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x639994)); /* fmul dword ptr [0x639994] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    MEMF(0x6C896C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8968) = edx;
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    MEMF(0x6C8970) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8974) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    MEM32(0x6C89A8) = eax;
    MEMF(0x6C8978) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C89F8) = eax;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    eax = MEM32(esp + 0x10);
    MEMF(0x6C897C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C89B0) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEM32(0x6C8A00) = ecx;
    MEMF(0x6C8980) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEM32(0x6C89B8) = edx;
    MEMF(0x6C8984) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8A08) = edx;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    edx = MEM32(esp);
    MEMF(0x6C8988) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8A0C) = eax;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    eax = ecx;
    MEMF(0x6C898C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8A14) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    ecx = edx;
    MEMF(0x6C8990) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8A1C) = edx;
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEM32(0x6C8A24) = eax;
    MEMF(0x6C8994) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8A2C) = ecx;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C8998) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C899C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x6C89A0) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C89A4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C89AC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C89B4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C89BC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    MEMF(0x6C89C0) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C89C4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    MEMF(0x6C89C8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C89CC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C89D0) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C89D4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C89D8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C89DC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C89E0) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C89E4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C89E8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C89EC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x6C89F0) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C89F4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x6C89FC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x6C8A04) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C8A10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8A18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(0x6C8A20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x6C8A28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = MEM32(esp + 0x14);
    MEMF(0x6C8A60) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8A38) = ecx;
    ecx = eax;
    MEMF(0x6C8A68) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8A30) = edx;
    edx = MEM32(esp);
    MEM32(0x6C8A44) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(0x6C8A34) = eax;
    MEM32(0x6C8A40) = eax;
    eax = edx;
    MEM32(0x6C8A3C) = edx;
    MEM32(0x6C8A48) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(0x6C8A50) = ecx;
    ecx = MEM32(esp);
    MEM32(0x6C8A4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x6C8A54) = edx;
    edx = MEM32(esp + 4);
    MEM32(0x6C8A5C) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(0x6C8A58) = eax;
    MEM32(0x6C8A6C) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(0x6C8A64) = edx;
    MEM32(0x6C8A74) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(0x6C8A70) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(0x6C8A78) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x6C8A80) = edx;
    edx = MEM32(esp + 8);
    MEM32(0x6C8A7C) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(0x6C8A84) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x6C8A8C) = edx;
    edx = MEM32(esp);
    MEM32(0x6C8A88) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(0x6C8A90) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x6C8A98) = edx;
    edx = ecx;
    MEM32(0x6C8A94) = ecx;
    MEM32(0x6C8AA0) = ecx;
    ecx = eax;
    MEM32(0x6C8A9C) = eax;
    MEM32(0x6C8AA4) = edx;
    MEM32(0x6C8AA8) = eax;
    MEM32(0x6C8AAC) = ecx;
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
 * sub_0062AE60
 * Original: 0x0062AE60 - 0x0062B3FF (1439 bytes, 309 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062AE60(void)
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

loc_0062AE60: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6486E0)); /* fmul dword ptr [0x6486e0] */
    MEMF(0x6C86A0) = (float)fp_top(); /* fst */
    MEMF(0x6C86A4) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6486E0)); /* fmul dword ptr [0x6486e0] */
    MEMF(0x6C86A8) = (float)fp_top(); /* fst */
    MEMF(0x6C86AC) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6486E0)); /* fmul dword ptr [0x6486e0] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    MEMF(0x6C86B0) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C86B4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x632600)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6486E0)); /* fmul dword ptr [0x6486e0] */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    MEMF(0x6C86B8) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C86BC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x632600)); /* fadd dword ptr [0x632600] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6486E0)); /* fmul dword ptr [0x6486e0] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    MEMF(0x6C86C0) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C86C4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x62E2B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6486E0)); /* fmul dword ptr [0x6486e0] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    MEMF(0x6C86C8) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C86CC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62E2B0)); /* fadd dword ptr [0x62e2b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6486E0)); /* fmul dword ptr [0x6486e0] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(0x6C86D0) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    MEMF(0x6C86D4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6302F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6486E0)); /* fmul dword ptr [0x6486e0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    eax = MEM32(esp);
    MEMF(0x6C86DC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C86D8) = eax;
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x6302F8)); /* fadd dword ptr [0x6302f8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6486E0)); /* fmul dword ptr [0x6486e0] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 4);
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    MEMF(0x6C86E4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C86E0) = ecx;
    fp_push(MEMF(0x630D68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6486E0)); /* fmul dword ptr [0x6486e0] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    MEMF(0x6C86EC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C86E8) = edx;
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x630D68)); /* fadd dword ptr [0x630d68] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6486E0)); /* fmul dword ptr [0x6486e0] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp);
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    eax = MEM32(esp + 0xC);
    MEMF(0x6C86F4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C86F0) = eax;
    fp_push(MEMF(0x632574)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    MEM32(0x6C8738) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(0x6C8740) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6486E0)); /* fmul dword ptr [0x6486e0] */
    MEM32(0x6C8750) = edx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    ecx = MEM32(esp + 0x10);
    MEMF(0x6C86FC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    MEM32(0x6C86F8) = ecx;
    MEMF(0x6C8700) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEM32(0x6C8748) = ecx;
    MEMF(0x6C8704) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8758) = eax;
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    MEMF(0x6C8708) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C870C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8710) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8714) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C8718) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C871C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8720) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8724) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C8728) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C872C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x6C8730) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8734) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C873C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8744) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C874C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8754) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C875C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    MEMF(0x6C8760) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8764) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    MEMF(0x6C8768) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C876C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8770) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8774) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C8778) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C877C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8780) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8784) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C8788) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C878C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8798) = ecx;
    ecx = MEM32(esp + 0xC);
    MEMF(0x6C8790) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C87A0) = edx;
    edx = MEM32(esp + 0x10);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C8794) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C87A8) = eax;
    eax = MEM32(esp + 0x14);
    MEMF(0x6C879C) = (float)fp_top(); /* fst */
    MEM32(0x6C87B0) = ecx;
    ecx = MEM32(esp);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C87A4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C87B8) = edx;
    edx = eax;
    MEMF(0x6C87AC) = (float)fp_top(); /* fst */
    MEM32(0x6C87C4) = eax;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    eax = ecx;
    MEMF(0x6C87B4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C87CC) = ecx;
    ecx = edx;
    MEMF(0x6C87BC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C87D4) = edx;
    edx = MEM32(esp + 0x18);
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C87C0) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C87E8) = edx;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    edx = ecx;
    MEMF(0x6C87C8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C87E4) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(0x6C87F0) = ecx;
    MEMF(0x6C87D0) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(0x6C87DC) = eax;
    MEMF(0x6C87D8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C87EC) = eax;
    MEM32(0x6C87F4) = edx;
    edx = MEM32(esp + 4);
    MEMF(0x6C87E0) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C87F8) = eax;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    eax = MEM32(esp + 0x14);
    MEMF(0x6C8820) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C87FC) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    ecx = MEM32(esp + 8);
    MEMF(0x6C8828) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8800) = edx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = MEM32(esp);
    MEMF(0x6C8830) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8804) = eax;
    eax = MEM32(esp + 0xC);
    MEMF(0x6C8838) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8808) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(0x6C880C) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(0x6C8810) = eax;
    eax = MEM32(esp);
    MEM32(0x6C8814) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(0x6C8818) = edx;
    edx = MEM32(esp + 8);
    MEM32(0x6C881C) = eax;
    eax = ecx;
    MEM32(0x6C8824) = ecx;
    MEM32(0x6C882C) = edx;
    MEM32(0x6C8834) = eax;
    ecx = edx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = MEM32(esp + 0x1C);
    MEMF(0x6C8880) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8840) = edx;
    edx = MEM32(esp + 8);
    MEMF(0x6C8888) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C883C) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(0x6C884C) = edx;
    edx = MEM32(esp);
    MEM32(0x6C8848) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(0x6C8844) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(0x6C8858) = edx;
    edx = ecx;
    MEM32(0x6C8850) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x6C8864) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(0x6C8854) = ecx;
    MEM32(0x6C8860) = ecx;
    ecx = eax;
    MEM32(0x6C8870) = edx;
    edx = MEM32(esp + 8);
    MEM32(0x6C886C) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(0x6C885C) = eax;
    MEM32(0x6C8868) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x6C887C) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(0x6C8878) = ecx;
    MEM32(0x6C888C) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(0x6C8874) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x6C8890) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(0x6C8898) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(0x6C8884) = eax;
    MEM32(0x6C8894) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(0x6C889C) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(0x6C88A4) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(0x6C88A0) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(0x6C88A8) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(0x6C88B0) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(0x6C88AC) = eax;
    eax = MEM32(esp);
    MEM32(0x6C88B4) = edx;
    edx = MEM32(esp + 4);
    MEM32(0x6C88BC) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(0x6C88B8) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x6C88C0) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(0x6C88C8) = ecx;
    ecx = eax;
    MEM32(0x6C88C4) = eax;
    MEM32(0x6C88D0) = eax;
    eax = edx;
    MEM32(0x6C88CC) = edx;
    MEM32(0x6C88D4) = ecx;
    MEM32(0x6C88D8) = edx;
    MEM32(0x6C88DC) = eax;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062B400
 * Original: 0x0062B400 - 0x0062BBA3 (1955 bytes, 421 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062B400(void)
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

loc_0062B400: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x651B28)); /* fmul dword ptr [0x651b28] */
    MEMF(0x6C8290) = (float)fp_top(); /* fst */
    MEMF(0x6C8294) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x651B28)); /* fmul dword ptr [0x651b28] */
    MEMF(0x6C8298) = (float)fp_top(); /* fst */
    MEMF(0x6C829C) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x651B28)); /* fmul dword ptr [0x651b28] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    MEMF(0x6C82A0) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C82A4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x632600)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x651B28)); /* fmul dword ptr [0x651b28] */
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    MEMF(0x6C82A8) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C82AC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x632600)); /* fadd dword ptr [0x632600] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x651B28)); /* fmul dword ptr [0x651b28] */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    MEMF(0x6C82B0) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C82B4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x62E2B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x651B28)); /* fmul dword ptr [0x651b28] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    MEMF(0x6C82B8) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C82BC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62E2B0)); /* fadd dword ptr [0x62e2b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x651B28)); /* fmul dword ptr [0x651b28] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    MEMF(0x6C82C0) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    MEMF(0x6C82C4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6302F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x651B28)); /* fmul dword ptr [0x651b28] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    eax = MEM32(esp + 8);
    MEMF(0x6C82CC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C82C8) = eax;
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x6302F8)); /* fadd dword ptr [0x6302f8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x651B28)); /* fmul dword ptr [0x651b28] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    MEMF(0x6C82D4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C82D0) = ecx;
    fp_push(MEMF(0x630D68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x651B28)); /* fmul dword ptr [0x651b28] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    MEMF(0x6C82DC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C82D8) = edx;
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x630D68)); /* fadd dword ptr [0x630d68] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x651B28)); /* fmul dword ptr [0x651b28] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    eax = MEM32(esp);
    MEMF(0x6C82E4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C82E0) = eax;
    fp_push(MEMF(0x632574)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x651B28)); /* fmul dword ptr [0x651b28] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    ecx = MEM32(esp + 4);
    MEMF(0x6C82EC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C82E8) = ecx;
    fp_push(MEMF(0x651B24)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x632574)); /* fadd dword ptr [0x632574] */
    MEM32(0x6C8338) = ecx;
    ecx = MEM32(esp);
    MEM32(0x6C8350) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x651B28)); /* fmul dword ptr [0x651b28] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    edx = MEM32(esp + 0x14);
    MEMF(0x6C82F4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C82F0) = edx;
    fp_push(MEMF(0x63D428)); /* fld float */
    edx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    MEM32(0x6C8340) = edx;
    edx = MEM32(esp + 4);
    MEM32(0x6C8358) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x651B28)); /* fmul dword ptr [0x651b28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    eax = MEM32(esp + 0x18);
    MEMF(0x6C82FC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C82F8) = eax;
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    eax = MEM32(esp + 0x10);
    MEMF(0x6C8300) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8348) = eax;
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    eax = MEM32(esp + 0x14);
    MEMF(0x6C8304) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8360) = eax;
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    MEMF(0x6C8308) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C830C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8310) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8314) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C8318) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C831C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8320) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8324) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C8328) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C832C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x6C8330) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8334) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C833C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8344) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C834C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8354) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C835C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    ecx = MEM32(esp + 0x18);
    MEMF(0x6C8364) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    eax = MEM32(esp + 0xC);
    MEMF(0x6C836C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8368) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    ecx = MEM32(esp + 0x10);
    MEMF(0x6C8370) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C83A8) = edx;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    edx = MEM32(esp);
    MEMF(0x6C8374) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C83B0) = eax;
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    eax = MEM32(esp + 4);
    MEMF(0x6C8378) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C83B8) = ecx;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    ecx = MEM32(esp + 0x14);
    MEMF(0x6C837C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C83C0) = edx;
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    edx = MEM32(esp + 0x18);
    MEMF(0x6C8380) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C83C8) = eax;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    eax = MEM32(esp + 8);
    MEMF(0x6C8384) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C83D0) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEM32(0x6C83D8) = edx;
    MEMF(0x6C8388) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    edx = eax;
    MEMF(0x6C838C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C83EC) = eax;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(0x6C83FC) = ecx;
    MEMF(0x6C8390) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C840C) = edx;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8394) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C8398) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C839C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x6C83A0) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C83A4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C83AC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C83B4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C83BC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C83C4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C83CC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C83D4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C83DC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    MEMF(0x6C83E0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x6C83E4) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    MEMF(0x6C83E8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C83F0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x6C83F4) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C83F8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8400) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x6C8404) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x6C8408) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x1C);
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    ecx = eax;
    MEMF(0x6C8450) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8410) = eax;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    eax = edx;
    MEMF(0x6C8458) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8414) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    ecx = MEM32(esp + 0xC);
    MEMF(0x6C8460) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8418) = edx;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    edx = MEM32(esp + 0x1C);
    MEMF(0x6C8468) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C841C) = eax;
    eax = MEM32(esp + 0x10);
    MEMF(0x6C8470) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8420) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(0x6C8424) = edx;
    edx = MEM32(esp);
    MEM32(0x6C8428) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(0x6C842C) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(0x6C8430) = edx;
    edx = MEM32(esp + 8);
    MEM32(0x6C8434) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(0x6C8438) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(0x6C843C) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(0x6C8440) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x6C8444) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(0x6C8448) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(0x6C844C) = eax;
    eax = ecx;
    MEM32(0x6C8454) = ecx;
    ecx = edx;
    MEM32(0x6C845C) = edx;
    edx = eax;
    MEM32(0x6C8464) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(0x6C846C) = ecx;
    MEM32(0x6C847C) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(0x6C8474) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(0x6C8478) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x6C8488) = ecx;
    ecx = eax;
    MEM32(0x6C8480) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(0x6C8484) = eax;
    MEM32(0x6C8490) = eax;
    MEM32(0x6C8494) = ecx;
    ecx = MEM32(esp);
    eax = edx;
    MEM32(0x6C848C) = edx;
    MEM32(0x6C8498) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(0x6C849C) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x6C84A0) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(0x6C84A4) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(0x6C84A8) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x6C84AC) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(0x6C84B0) = edx;
    MEM32(0x6C84B4) = eax;
    MEM32(0x6C84B8) = ecx;
    edx = MEM32(esp + 0x10);
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    eax = MEM32(esp);
    MEMF(0x6C84C0) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 4);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(0x6C84BC) = edx;
    MEMF(0x6C84C8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(0x6C84C4) = eax;
    MEMF(0x6C84D0) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ecx;
    MEM32(0x6C84CC) = ecx;
    MEMF(0x6C84D8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x24);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(0x6C84D4) = edx;
    MEMF(0x6C8530) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C84E4) = edx;
    edx = MEM32(esp + 0x1C);
    MEMF(0x6C8538) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C84E0) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(0x6C84DC) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(0x6C84F0) = edx;
    edx = MEM32(esp + 4);
    MEM32(0x6C84EC) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(0x6C84E8) = eax;
    eax = MEM32(esp);
    MEM32(0x6C84FC) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(0x6C84F8) = ecx;
    ecx = MEM32(esp);
    MEM32(0x6C84F4) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x6C8508) = edx;
    edx = ecx;
    MEM32(0x6C8500) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x6C8514) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(0x6C8504) = ecx;
    MEM32(0x6C8510) = ecx;
    ecx = eax;
    MEM32(0x6C850C) = eax;
    MEM32(0x6C8518) = eax;
    eax = MEM32(esp);
    MEM32(0x6C8520) = edx;
    edx = MEM32(esp + 4);
    MEM32(0x6C851C) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(0x6C8524) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(0x6C852C) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(0x6C8528) = ecx;
    MEM32(0x6C8534) = eax;
    MEM32(0x6C853C) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(0x6C8540) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(0x6C8544) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(0x6C8548) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(0x6C854C) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(0x6C8550) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(0x6C8554) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(0x6C8558) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(0x6C855C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x6C8560) = ecx;
    MEM32(0x6C8564) = edx;
    MEM32(0x6C8568) = eax;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x14);
    MEM32(0x6C856C) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(0x6C8570) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(0x6C8574) = eax;
    eax = MEM32(esp);
    MEM32(0x6C8578) = ecx;
    ecx = eax;
    MEM32(0x6C857C) = edx;
    edx = MEM32(esp + 4);
    MEM32(0x6C8580) = eax;
    MEM32(0x6C8584) = ecx;
    ecx = MEM32(esp + 0x14);
    eax = edx;
    MEM32(0x6C8588) = edx;
    edx = MEM32(esp);
    MEM32(0x6C858C) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(0x6C8590) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(0x6C8594) = edx;
    MEM32(0x6C8598) = eax;
    MEM32(0x6C859C) = ecx;
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
 * sub_0062BBB0
 * Original: 0x0062BBB0 - 0x0062C571 (2497 bytes, 535 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062BBB0(void)
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

loc_0062BBB0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    MEMF(0x6C8AB0) = (float)fp_top(); /* fst */
    MEMF(0x6C8AB4) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    MEMF(0x6C8AB8) = (float)fp_top(); /* fst */
    MEMF(0x6C8ABC) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    MEMF(0x6C8AC0) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8AC4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x632600)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    MEMF(0x6C8AC8) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8ACC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x632600)); /* fadd dword ptr [0x632600] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    MEMF(0x6C8AD0) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8AD4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x62E2B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    MEMF(0x6C8AD8) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8ADC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62E2B0)); /* fadd dword ptr [0x62e2b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    MEMF(0x6C8AE0) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    MEMF(0x6C8AE4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6302F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    eax = MEM32(esp + 8);
    MEMF(0x6C8AEC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8AE8) = eax;
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x6302F8)); /* fadd dword ptr [0x6302f8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    MEMF(0x6C8AF4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8AF0) = ecx;
    fp_push(MEMF(0x630D68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    MEMF(0x6C8AFC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8AF8) = edx;
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x630D68)); /* fadd dword ptr [0x630d68] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    eax = MEM32(esp);
    MEMF(0x6C8B04) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8B00) = eax;
    fp_push(MEMF(0x632574)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    ecx = MEM32(esp + 4);
    MEMF(0x6C8B0C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8B08) = ecx;
    fp_push(MEMF(0x651B24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x632574)); /* fadd dword ptr [0x632574] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    edx = MEM32(esp + 0x1C);
    MEMF(0x6C8B14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8B10) = edx;
    fp_push(MEMF(0x63D428)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    eax = MEM32(esp + 0x20);
    MEMF(0x6C8B1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8B18) = eax;
    fp_push(MEMF(0x651B24)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63D428)); /* fadd dword ptr [0x63d428] */
    MEM32(0x6C8B68) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    ecx = MEM32(esp + 0x14);
    MEMF(0x6C8B24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8B20) = ecx;
    fp_push(MEMF(0x636270)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x651B24)); /* fsub dword ptr [0x651b24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    edx = MEM32(esp + 0x18);
    MEMF(0x6C8B2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8B28) = edx;
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    MEMF(0x6C8B30) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8B34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    MEMF(0x6C8B38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C8B3C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8B40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8B44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C8B48) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C8B4C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8B50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8B54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C8B58) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C8B5C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x6C8B60) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEMF(0x6C8B64) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C8B6C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    ecx = MEM32(esp + 0xC);
    MEMF(0x6C8B74) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    eax = MEM32(esp);
    MEMF(0x6C8B7C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8B70) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    ecx = MEM32(esp + 4);
    MEMF(0x6C8B84) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8B78) = edx;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    edx = MEM32(esp + 0x1C);
    MEMF(0x6C8B8C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8B80) = eax;
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    eax = MEM32(esp + 0x20);
    MEMF(0x6C8B94) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8B88) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    ecx = MEM32(esp + 0x14);
    MEMF(0x6C8B9C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8B90) = edx;
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    edx = MEM32(esp + 0x18);
    MEMF(0x6C8BA4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8B98) = eax;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    eax = MEM32(esp + 8);
    MEMF(0x6C8BAC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8BA0) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    ecx = MEM32(esp + 0xC);
    MEMF(0x6C8BB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8BA8) = edx;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    edx = MEM32(esp + 0x10);
    MEMF(0x6C8BB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8BE8) = eax;
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    eax = MEM32(esp);
    MEMF(0x6C8BB8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8BF0) = ecx;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    ecx = MEM32(esp + 4);
    MEMF(0x6C8BBC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8BF8) = edx;
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    edx = MEM32(esp + 0x1C);
    MEMF(0x6C8BC0) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8C00) = eax;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(0x6C8C08) = ecx;
    MEMF(0x6C8BC4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8C10) = edx;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(0x6C8BC8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C8BCC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8BD0) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8BD4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C8BD8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C8BDC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x6C8BE0) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8BE4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C8BEC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8BF4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C8BFC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8C04) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(0x6C8C0C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8C14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    ecx = MEM32(esp + 0x14);
    MEMF(0x6C8C1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8C18) = eax;
    eax = MEM32(esp + 8);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(0x6C8C24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8C28) = edx;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    edx = eax;
    MEMF(0x6C8C2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8C5C) = edx;
    edx = MEM32(esp + 0xC);
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    MEMF(0x6C8C30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8C3C) = eax;
    MEM32(0x6C8C68) = eax;
    MEMF(0x6C8C34) = (float)fp_top(); /* fst */
    MEM32(0x6C8C20) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    ecx = eax;
    MEMF(0x6C8C38) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEM32(0x6C8C70) = edx;
    MEMF(0x6C8C40) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp);
    MEM32(0x6C8C78) = eax;
    MEMF(0x6C8C44) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 4);
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEM32(0x6C8C80) = edx;
    edx = MEM32(esp + 0x1C);
    MEMF(0x6C8C48) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(0x6C8C88) = eax;
    eax = MEM32(esp + 0x20);
    MEMF(0x6C8C50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8C90) = edx;
    edx = MEM32(esp + 0x14);
    MEMF(0x6C8C54) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(0x6C8C98) = eax;
    eax = MEM32(esp + 0x18);
    MEMF(0x6C8C58) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8CA0) = edx;
    edx = MEM32(esp + 0xC);
    MEMF(0x6C8C60) = (float)fp_top(); /* fst */
    MEMF(0x6C8C64) = (float)fp_top(); /* fst */
    MEM32(0x6C8CA8) = eax;
    eax = MEM32(esp + 0x10);
    MEMF(0x6C8C74) = (float)fp_top(); /* fst */
    MEMF(0x6C8C84) = (float)fp_top(); /* fst */
    MEM32(0x6C8C4C) = ecx;
    MEMF(0x6C8C94) = (float)fp_top(); /* fst */
    MEM32(0x6C8C6C) = ecx;
    MEMF(0x6C8CA4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8C7C) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    MEM32(0x6C8C8C) = ecx;
    MEMF(0x6C8CB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8C9C) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEM32(0x6C8CAC) = ecx;
    MEMF(0x6C8CB8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edx;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEM32(0x6C8CB4) = edx;
    MEMF(0x6C8CC0) = (float)fp_top(); fp_pop(); /* fstp */
    edx = eax;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(0x6C8CBC) = eax;
    MEMF(0x6C8CC8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8CC4) = ecx;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(0x6C8CCC) = edx;
    MEMF(0x6C8CD0) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ecx;
    MEMF(0x6C8CD8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edx;
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    edx = MEM32(esp + 0x24);
    MEMF(0x6C8D30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8CDC) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    ecx = MEM32(esp + 8);
    MEMF(0x6C8D38) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8CE0) = edx;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    edx = MEM32(esp + 0x10);
    MEMF(0x6C8D40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8CE8) = ecx;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    ecx = eax;
    MEMF(0x6C8D48) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8CD4) = eax;
    MEM32(0x6C8CE4) = eax;
    MEMF(0x6C8D50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8CF0) = eax;
    eax = edx;
    MEM32(0x6C8CEC) = edx;
    MEM32(0x6C8CF4) = ecx;
    ecx = MEM32(esp);
    MEM32(0x6C8CF8) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(0x6C8CFC) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x6C8D00) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(0x6C8D04) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(0x6C8D08) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x6C8D0C) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(0x6C8D10) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(0x6C8D14) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(0x6C8D18) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(0x6C8D1C) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(0x6C8D20) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(0x6C8D24) = ecx;
    ecx = MEM32(esp);
    MEM32(0x6C8D28) = edx;
    edx = MEM32(esp + 4);
    MEM32(0x6C8D2C) = eax;
    eax = ecx;
    MEM32(0x6C8D34) = ecx;
    ecx = edx;
    MEM32(0x6C8D3C) = edx;
    edx = eax;
    MEM32(0x6C8D44) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(0x6C8D54) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(0x6C8D58) = eax;
    eax = MEM32(esp);
    MEM32(0x6C8D4C) = ecx;
    MEM32(0x6C8D5C) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(0x6C8D60) = edx;
    edx = MEM32(esp + 4);
    MEM32(0x6C8D64) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x6C8D68) = ecx;
    ecx = MEM32(esp);
    MEM32(0x6C8D6C) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(0x6C8D70) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x6C8D74) = ecx;
    MEM32(0x6C8D78) = edx;
    MEM32(0x6C8D7C) = eax;
    MEM32(0x6C8D80) = ecx;
    edx = ecx;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    ecx = eax;
    MEMF(0x6C8DB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8D84) = edx;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    edx = MEM32(esp + 0x1C);
    MEMF(0x6C8DB8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8D88) = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = MEM32(esp);
    MEMF(0x6C8DC0) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8D8C) = ecx;
    ecx = MEM32(esp + 0x20);
    MEMF(0x6C8DC8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8D90) = edx;
    edx = MEM32(esp + 4);
    MEM32(0x6C8D94) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(0x6C8D98) = ecx;
    ecx = MEM32(esp);
    MEM32(0x6C8D9C) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(0x6C8DA0) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x6C8DA4) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(0x6C8DA8) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(0x6C8DAC) = eax;
    eax = ecx;
    MEM32(0x6C8DB4) = ecx;
    ecx = edx;
    MEM32(0x6C8DBC) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(0x6C8DCC) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(0x6C8DD0) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(0x6C8DC4) = eax;
    MEM32(0x6C8DD4) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(0x6C8DD8) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(0x6C8DDC) = edx;
    edx = MEM32(esp + 8);
    MEM32(0x6C8DE0) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(0x6C8DE4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(0x6C8DE8) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(0x6C8DEC) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(0x6C8DF0) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(0x6C8DF4) = edx;
    edx = MEM32(esp);
    MEM32(0x6C8DF8) = eax;
    eax = edx;
    MEM32(0x6C8DFC) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(0x6C8E00) = edx;
    MEM32(0x6C8E04) = eax;
    eax = MEM32(esp + 0x1C);
    edx = ecx;
    MEM32(0x6C8E08) = ecx;
    ecx = MEM32(esp);
    MEM32(0x6C8E0C) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(0x6C8E10) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x6C8E14) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(0x6C8E18) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(0x6C8E1C) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(0x6C8E20) = ecx;
    MEM32(0x6C8E24) = edx;
    MEM32(0x6C8E28) = eax;
    ecx = MEM32(esp + 0x20);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = MEM32(esp + 0x14);
    MEMF(0x6C8E30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8E2C) = ecx;
    ecx = MEM32(esp + 0x30);
    MEMF(0x6C8E38) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6C8E3C) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(0x6C8E34) = edx;
    MEM32(0x6C8E44) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(0x6C8E40) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(0x6C8E48) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(0x6C8E50) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(0x6C8E4C) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(0x6C8E54) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(0x6C8E5C) = edx;
    edx = MEM32(esp + 8);
    MEM32(0x6C8E58) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(0x6C8E60) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(0x6C8E68) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(0x6C8E64) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(0x6C8E6C) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(0x6C8E74) = edx;
    edx = MEM32(esp);
    MEM32(0x6C8E70) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(0x6C8E78) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(0x6C8E80) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(0x6C8E7C) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(0x6C8E84) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(0x6C8E8C) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(0x6C8E88) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(0x6C8E90) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(0x6C8E98) = edx;
    edx = ecx;
    MEM32(0x6C8E94) = ecx;
    MEM32(0x6C8EA0) = ecx;
    ecx = eax;
    MEM32(0x6C8E9C) = eax;
    MEM32(0x6C8EA4) = edx;
    MEM32(0x6C8EA8) = eax;
    MEM32(0x6C8EAC) = ecx;
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
 * sub_0062C580
 * Original: 0x0062C580 - 0x0062C58F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062C580(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062C580: ;
    fp_push(MEMD(0x652A08)); /* fld double */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(0x6C9034) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062C590
 * Original: 0x0062C590 - 0x0062C5A3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062C590(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062C590: ;
    fp_push(MEMF(0x674374)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63EA68)); /* fmul dword ptr [0x63ea68] */
    MEMF(0x6C9030) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062C5B0
 * Original: 0x0062C5B0 - 0x0062C5CB (27 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0062C5B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0062C5B0: ;
    fp_push(MEMF(0x6C9034)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x6C9030)); /* fdiv dword ptr [0x6c9030] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x632574)); /* fmul dword ptr [0x632574] */
    MEMF(0x6C902C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062C5D0
 * Original: 0x0062C5D0 - 0x0062C5E6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C5D0(void)
{

loc_0062C5D0: ;
    ecx = 0x6C933C;
    PUSH32(esp, 0x0062C5DAu); RECOMP_ABI_CALL(0x0059D370u, sub_0059D370); /* call 0x0059D370 */

loc_0062C5DA: ;
    PUSH32(esp, 0x62CC20);
    PUSH32(esp, 0x0062C5E4u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C5E4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C5F0
 * Original: 0x0062C5F0 - 0x0062C605 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C5F0(void)
{

loc_0062C5F0: ;
    eax = MEM32(0x860688);
    MEM32(0x67410C) = eax;
    MEM32(0x860688) = 0x674100;
    esp += 4; return; /* ret */

}

/**
 * sub_0062C610
 * Original: 0x0062C610 - 0x0062C626 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C610(void)
{

loc_0062C610: ;
    ecx = 0x6C93A8;
    PUSH32(esp, 0x0062C61Au); RECOMP_ABI_CALL(0x0059D370u, sub_0059D370); /* call 0x0059D370 */

loc_0062C61A: ;
    PUSH32(esp, 0x62CC30);
    PUSH32(esp, 0x0062C624u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C624: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C630
 * Original: 0x0062C630 - 0x0062C645 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C630(void)
{

loc_0062C630: ;
    eax = MEM32(0x860688);
    MEM32(0x6743F0) = eax;
    MEM32(0x860688) = 0x6743E4;
    esp += 4; return; /* ret */

}

/**
 * sub_0062C650
 * Original: 0x0062C650 - 0x0062C670 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C650(void)
{

loc_0062C650: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x65);
    ecx = 0x6CE228;
    PUSH32(esp, 0x0062C664u); RECOMP_ABI_CALL(0x00612850u, sub_00612850); /* call 0x00612850 */

loc_0062C664: ;
    PUSH32(esp, 0x62CC40);
    PUSH32(esp, 0x0062C66Eu); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C66E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C670
 * Original: 0x0062C670 - 0x0062C690 (32 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062C670: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x654DD4)); /* fdiv dword ptr [0x654dd4] */
    MEMF(0x6CE510) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0062C690(); return; /* fallthrough 0x0062C690 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0062C690
 * Original: 0x0062C690 - 0x0062C6AD (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0062C690: ;
    PUSH32(esp, esi);
    ecx = 0x6CE320;
    esi = 4;
    goto loc_0062C6A0;

    /* nop */

loc_0062C6A0: ;
    PUSH32(esp, 0x0062C6A5u); RECOMP_ABI_CALL(0x005D64F0u, sub_005D64F0); /* call 0x005D64F0 */

loc_0062C6A5: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0062C6A0; /* jne: not equal / not zero */

loc_0062C6AB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C6B0
 * Original: 0x0062C6B0 - 0x0062C6C6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C6B0(void)
{

loc_0062C6B0: ;
    ecx = 0x6CE52C;
    PUSH32(esp, 0x0062C6BAu); RECOMP_ABI_CALL(0x005D6A30u, sub_005D6A30); /* call 0x005D6A30 */

loc_0062C6BA: ;
    PUSH32(esp, 0x62CC50);
    PUSH32(esp, 0x0062C6C4u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C6C4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C6D0
 * Original: 0x0062C6D0 - 0x0062C6E6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C6D0(void)
{

loc_0062C6D0: ;
    ecx = 0x6CE520;
    PUSH32(esp, 0x0062C6DAu); RECOMP_ABI_CALL(0x005D6A30u, sub_005D6A30); /* call 0x005D6A30 */

loc_0062C6DA: ;
    PUSH32(esp, 0x62CC60);
    PUSH32(esp, 0x0062C6E4u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C6E4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C6F0
 * Original: 0x0062C6F0 - 0x0062C706 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C6F0(void)
{

loc_0062C6F0: ;
    ecx = 0x6CE550;
    PUSH32(esp, 0x0062C6FAu); RECOMP_ABI_CALL(0x005D6A30u, sub_005D6A30); /* call 0x005D6A30 */

loc_0062C6FA: ;
    PUSH32(esp, 0x62CC70);
    PUSH32(esp, 0x0062C704u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C704: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C710
 * Original: 0x0062C710 - 0x0062C726 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C710(void)
{

loc_0062C710: ;
    ecx = 0x6CE544;
    PUSH32(esp, 0x0062C71Au); RECOMP_ABI_CALL(0x005D6A30u, sub_005D6A30); /* call 0x005D6A30 */

loc_0062C71A: ;
    PUSH32(esp, 0x62CC80);
    PUSH32(esp, 0x0062C724u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C724: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C730
 * Original: 0x0062C730 - 0x0062C746 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C730(void)
{

loc_0062C730: ;
    ecx = 0x6CE55C;
    PUSH32(esp, 0x0062C73Au); RECOMP_ABI_CALL(0x005D6A30u, sub_005D6A30); /* call 0x005D6A30 */

loc_0062C73A: ;
    PUSH32(esp, 0x62CC90);
    PUSH32(esp, 0x0062C744u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C744: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C750
 * Original: 0x0062C750 - 0x0062C766 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C750(void)
{

loc_0062C750: ;
    ecx = 0x6CE538;
    PUSH32(esp, 0x0062C75Au); RECOMP_ABI_CALL(0x005D6A30u, sub_005D6A30); /* call 0x005D6A30 */

loc_0062C75A: ;
    PUSH32(esp, 0x62CCA0);
    PUSH32(esp, 0x0062C764u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C764: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C770
 * Original: 0x0062C770 - 0x0062C786 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C770(void)
{

loc_0062C770: ;
    ecx = 0x6CE568;
    PUSH32(esp, 0x0062C77Au); RECOMP_ABI_CALL(0x005D6A30u, sub_005D6A30); /* call 0x005D6A30 */

loc_0062C77A: ;
    PUSH32(esp, 0x62CCB0);
    PUSH32(esp, 0x0062C784u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C784: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C790
 * Original: 0x0062C790 - 0x0062C79C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C790(void)
{

loc_0062C790: ;
    PUSH32(esp, 0x62CCC0);
    PUSH32(esp, 0x0062C79Au); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C79A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C7A0
 * Original: 0x0062C7A0 - 0x0062C7CF (47 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0062C7A0: ;
    PUSH32(esp, esi);
    edx = 0x6D45F0;
    esi = 4;
    goto loc_0062C7B0;

    /* nop */

loc_0062C7B0: ;
    ecx = edx;
    PUSH32(esp, 0x0062C7B7u); RECOMP_ABI_CALL(0x005DA7E0u, sub_005DA7E0); /* call 0x005DA7E0 */

loc_0062C7B7: ;
    _fb = (uint32_t)(0x60874) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60874;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0062C7B0; /* jne: not equal / not zero */

loc_0062C7C0: ;
    PUSH32(esp, 0x62CCD0);
    PUSH32(esp, 0x0062C7CAu); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C7CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C7D0
 * Original: 0x0062C7D0 - 0x0062C7DC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C7D0(void)
{

loc_0062C7D0: ;
    PUSH32(esp, 0x62CCE0);
    PUSH32(esp, 0x0062C7DAu); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C7DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C7E0
 * Original: 0x0062C7E0 - 0x0062C800 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C7E0(void)
{

loc_0062C7E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x65);
    ecx = 0x857850;
    PUSH32(esp, 0x0062C7F4u); RECOMP_ABI_CALL(0x00612850u, sub_00612850); /* call 0x00612850 */

loc_0062C7F4: ;
    PUSH32(esp, 0x62CD00);
    PUSH32(esp, 0x0062C7FEu); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C7FE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C800
 * Original: 0x0062C800 - 0x0062C820 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C800(void)
{

loc_0062C800: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x65);
    ecx = 0x857868;
    PUSH32(esp, 0x0062C814u); RECOMP_ABI_CALL(0x00612850u, sub_00612850); /* call 0x00612850 */

loc_0062C814: ;
    PUSH32(esp, 0x62CCF0);
    PUSH32(esp, 0x0062C81Eu); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C81E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C820
 * Original: 0x0062C820 - 0x0062C840 (32 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062C820: ;
    eax = MEM32(0x860688);
    MEM32(0x67458C) = eax;
    MEM32(0x860688) = 0x674580;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0062C840(); return; /* fallthrough 0x0062C840 */

}

/**
 * sub_0062C840
 * Original: 0x0062C840 - 0x0062C84A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062C840: ;
    ecx = 0x858284;
    g_seh_ebp = ebp; sub_005DDA50(); return; /* tail jmp 0x005DDA50 */

}

/**
 * sub_0062C850
 * Original: 0x0062C850 - 0x0062C870 (32 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062C850: ;
    eax = MEM32(0x860688);
    MEM32(0x67459C) = eax;
    MEM32(0x860688) = 0x674590;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0062C870(); return; /* fallthrough 0x0062C870 */

}

/**
 * sub_0062C870
 * Original: 0x0062C870 - 0x0062C890 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C870(void)
{

loc_0062C870: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x65);
    ecx = 0x858288;
    PUSH32(esp, 0x0062C884u); RECOMP_ABI_CALL(0x00612850u, sub_00612850); /* call 0x00612850 */

loc_0062C884: ;
    PUSH32(esp, 0x62CD10);
    PUSH32(esp, 0x0062C88Eu); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C88E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C890
 * Original: 0x0062C890 - 0x0062C8B0 (32 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062C890: ;
    eax = MEM32(0x860688);
    MEM32(0x6745B8) = eax;
    MEM32(0x860688) = 0x6745AC;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0062C8B0(); return; /* fallthrough 0x0062C8B0 */

}

/**
 * sub_0062C8B0
 * Original: 0x0062C8B0 - 0x0062C8D0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C8B0(void)
{

loc_0062C8B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x65);
    ecx = 0x8582AC;
    PUSH32(esp, 0x0062C8C4u); RECOMP_ABI_CALL(0x00612850u, sub_00612850); /* call 0x00612850 */

loc_0062C8C4: ;
    PUSH32(esp, 0x62CD20);
    PUSH32(esp, 0x0062C8CEu); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C8CE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C8D0
 * Original: 0x0062C8D0 - 0x0062C8F0 (32 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062C8D0: ;
    ecx = 0x8582C8;
    PUSH32(esp, 0x0062C8DAu); RECOMP_ABI_CALL(0x005E14C0u, sub_005E14C0); /* call 0x005E14C0 */

loc_0062C8DA: ;
    PUSH32(esp, 0x62CD30);
    PUSH32(esp, 0x0062C8E4u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C8E4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0062C8F0(); return; /* fallthrough 0x0062C8F0 */

}

/**
 * sub_0062C8F0
 * Original: 0x0062C8F0 - 0x0062C8FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C8F0(void)
{

loc_0062C8F0: ;
    PUSH32(esp, 0x62CD40);
    PUSH32(esp, 0x0062C8FAu); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C8FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C900
 * Original: 0x0062C900 - 0x0062C90A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062C900: ;
    ecx = 0x858358;
    g_seh_ebp = ebp; sub_00611C60(); return; /* tail jmp 0x00611C60 */

}

/**
 * sub_0062C910
 * Original: 0x0062C910 - 0x0062C920 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062C910: ;
    ecx = 0x85835C;
    g_seh_ebp = ebp; sub_00611C60(); return; /* tail jmp 0x00611C60 */

    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_0062C920(); return; /* fallthrough 0x0062C920 */

}

/**
 * sub_0062C920
 * Original: 0x0062C920 - 0x0062C930 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062C920: ;
    ecx = 0x858354;
    g_seh_ebp = ebp; sub_00611C60(); return; /* tail jmp 0x00611C60 */

    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_0062C930(); return; /* fallthrough 0x0062C930 */

}

/**
 * sub_0062C930
 * Original: 0x0062C930 - 0x0062C940 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062C930: ;
    ecx = 0x858500;
    g_seh_ebp = ebp; sub_005FB2E0(); return; /* tail jmp 0x005FB2E0 */

    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_0062C940(); return; /* fallthrough 0x0062C940 */

}

/**
 * sub_0062C940
 * Original: 0x0062C940 - 0x0062C950 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062C940: ;
    ecx = 0x858608;
    g_seh_ebp = ebp; sub_005EDA70(); return; /* tail jmp 0x005EDA70 */

    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_0062C950(); return; /* fallthrough 0x0062C950 */

}

/**
 * sub_0062C950
 * Original: 0x0062C950 - 0x0062C970 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C950(void)
{

loc_0062C950: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x65);
    ecx = 0x8586B8;
    PUSH32(esp, 0x0062C964u); RECOMP_ABI_CALL(0x00612850u, sub_00612850); /* call 0x00612850 */

loc_0062C964: ;
    PUSH32(esp, 0x62CD60);
    PUSH32(esp, 0x0062C96Eu); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C96E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C970
 * Original: 0x0062C970 - 0x0062C990 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C970(void)
{

loc_0062C970: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x65);
    ecx = 0x85ADDC;
    PUSH32(esp, 0x0062C984u); RECOMP_ABI_CALL(0x00612850u, sub_00612850); /* call 0x00612850 */

loc_0062C984: ;
    PUSH32(esp, 0x62CD70);
    PUSH32(esp, 0x0062C98Eu); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C98E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C990
 * Original: 0x0062C990 - 0x0062C9B0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C990(void)
{

loc_0062C990: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x65);
    ecx = 0x85AE60;
    PUSH32(esp, 0x0062C9A4u); RECOMP_ABI_CALL(0x00612850u, sub_00612850); /* call 0x00612850 */

loc_0062C9A4: ;
    PUSH32(esp, 0x62CD80);
    PUSH32(esp, 0x0062C9AEu); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062C9AE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062C9B0
 * Original: 0x0062C9B0 - 0x0062C9D0 (32 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062C9B0: ;
    eax = MEM32(0x860688);
    MEM32(0x6754A0) = eax;
    MEM32(0x860688) = 0x675494;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0062C9D0(); return; /* fallthrough 0x0062C9D0 */

}

/**
 * sub_0062C9D0
 * Original: 0x0062C9D0 - 0x0062C9E7 (23 bytes, 6 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C9D0(void)
{

loc_0062C9D0: ;
    PUSH32(esp, 0x6581A4);
    PUSH32(esp, 0x657BD0);
    PUSH32(esp, 0);
    ecx = 0x85AE90;
    PUSH32(esp, 0x0062C9E6u); RECOMP_ABI_CALL(0x00612F80u, sub_00612F80); /* call 0x00612F80 */

loc_0062C9E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0062C9F0
 * Original: 0x0062C9F0 - 0x0062CA05 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062C9F0(void)
{

loc_0062C9F0: ;
    eax = MEM32(0x860688);
    MEM32(0x675514) = eax;
    MEM32(0x860688) = 0x675508;
    esp += 4; return; /* ret */

}

/**
 * sub_0062CA10
 * Original: 0x0062CA10 - 0x0062CA25 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CA10(void)
{

loc_0062CA10: ;
    eax = MEM32(0x860688);
    MEM32(0x6781BC) = eax;
    MEM32(0x860688) = 0x6781B0;
    esp += 4; return; /* ret */

}

/**
 * sub_0062CA30
 * Original: 0x0062CA30 - 0x0062CA46 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CA30(void)
{

loc_0062CA30: ;
    ecx = 0x85D400;
    PUSH32(esp, 0x0062CA3Au); RECOMP_ABI_CALL(0x00602740u, sub_00602740); /* call 0x00602740 */

loc_0062CA3A: ;
    PUSH32(esp, 0x62CD90);
    PUSH32(esp, 0x0062CA44u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062CA44: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062CA50
 * Original: 0x0062CA50 - 0x0062CA7C (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0062CA50: ;
    PUSH32(esp, esi);
    edx = 0x85FAA0;
    esi = 4;
    goto loc_0062CA60;

    /* nop */

loc_0062CA60: ;
    ecx = edx;
    PUSH32(esp, 0x0062CA67u); RECOMP_ABI_CALL(0x00603B10u, sub_00603B10); /* call 0x00603B10 */

loc_0062CA67: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0062CA60; /* jne: not equal / not zero */

loc_0062CA6D: ;
    PUSH32(esp, 0x62CDA0);
    PUSH32(esp, 0x0062CA77u); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062CA77: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0062CA80
 * Original: 0x0062CA80 - 0x0062CAA0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CA80(void)
{

loc_0062CA80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x65);
    ecx = 0x8600F8;
    PUSH32(esp, 0x0062CA94u); RECOMP_ABI_CALL(0x00612850u, sub_00612850); /* call 0x00612850 */

loc_0062CA94: ;
    PUSH32(esp, 0x62CDB0);
    PUSH32(esp, 0x0062CA9Eu); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062CA9E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062CAA0
 * Original: 0x0062CAA0 - 0x0062CAB0 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CAA0: ;
    PUSH32(esp, 0x62CDC0);
    PUSH32(esp, 0x0062CAAAu); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062CAAA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0062CAB0(); return; /* fallthrough 0x0062CAB0 */

}

/**
 * sub_0062CAB0
 * Original: 0x0062CAB0 - 0x0062CABA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CAB0: ;
    ecx = 0x8602FC;
    g_seh_ebp = ebp; sub_00611C60(); return; /* tail jmp 0x00611C60 */

}

/**
 * sub_0062CAC0
 * Original: 0x0062CAC0 - 0x0062CAD0 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CAC0: ;
    ecx = 0x860608;
    g_seh_ebp = ebp; sub_00614370(); return; /* tail jmp 0x00614370 */

    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_0062CAD0(); return; /* fallthrough 0x0062CAD0 */

}

/**
 * sub_0062CAD0
 * Original: 0x0062CAD0 - 0x0062CAF0 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0062CAD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x860308;
    edi = 0x20;
    /* nop */

loc_0062CAE0: ;
    ecx = esi;
    PUSH32(esp, 0x0062CAE7u); RECOMP_ABI_CALL(0x00614370u, sub_00614370); /* call 0x00614370 */

loc_0062CAE7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0062CAE0; /* jne: not equal / not zero */

loc_0062CAED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0062CAF0
 * Original: 0x0062CAF0 - 0x0062CB10 (32 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CAF0: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x860308);
    ecx = 0x860300;
    PUSH32(esp, 0x0062CB01u); RECOMP_ABI_CALL(0x006144B0u, sub_006144B0); /* call 0x006144B0 */

loc_0062CB01: ;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0062CB10(); return; /* fallthrough 0x0062CB10 */

}

/**
 * sub_0062CB10
 * Original: 0x0062CB10 - 0x0062CB30 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0062CB10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x860508;
    edi = 0x10;
    /* nop */

loc_0062CB20: ;
    ecx = esi;
    PUSH32(esp, 0x0062CB27u); RECOMP_ABI_CALL(0x00614370u, sub_00614370); /* call 0x00614370 */

loc_0062CB27: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0062CB20; /* jne: not equal / not zero */

loc_0062CB2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0062CB30
 * Original: 0x0062CB30 - 0x0062CB50 (32 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CB30: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x860508);
    ecx = 0x860618;
    PUSH32(esp, 0x0062CB41u); RECOMP_ABI_CALL(0x006144B0u, sub_006144B0); /* call 0x006144B0 */

loc_0062CB41: ;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0062CB50(); return; /* fallthrough 0x0062CB50 */

}

/**
 * sub_0062CB50
 * Original: 0x0062CB50 - 0x0062CB5C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CB50(void)
{

loc_0062CB50: ;
    PUSH32(esp, 0x62CDD0);
    PUSH32(esp, 0x0062CB5Au); RECOMP_ABI_CALL(0x0061A76Du, sub_0061A76D); /* call 0x0061A76D */

loc_0062CB5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0062CB60
 * Original: 0x0062CB60 - 0x0062CB6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CB60: ;
    ecx = 0x69685C;
    g_seh_ebp = ebp; sub_006126B0(); return; /* tail jmp 0x006126B0 */

}

/**
 * sub_0062CB70
 * Original: 0x0062CB70 - 0x0062CB7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CB70: ;
    ecx = 0x6968B8;
    g_seh_ebp = ebp; sub_0047BC30(); return; /* tail jmp 0x0047BC30 */

}

/**
 * sub_0062CB80
 * Original: 0x0062CB80 - 0x0062CB8A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CB80: ;
    ecx = 0x697E24;
    g_seh_ebp = ebp; sub_006126B0(); return; /* tail jmp 0x006126B0 */

}

/**
 * sub_0062CB90
 * Original: 0x0062CB90 - 0x0062CBB0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0062CB90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x697E24;
    edi = 5;
    /* nop */

loc_0062CBA0: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x54;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0062CBAAu); RECOMP_ABI_CALL(0x0050C340u, sub_0050C340); /* call 0x0050C340 */

loc_0062CBAA: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0062CBA0; /* jne: not equal / not zero */

loc_0062CBAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0062CBB0
 * Original: 0x0062CBB0 - 0x0062CBC0 (16 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CBB0: ;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0062CBC0(); return; /* fallthrough 0x0062CBC0 */

}

/**
 * sub_0062CBC0
 * Original: 0x0062CBC0 - 0x0062CBC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CBC0(void)
{

loc_0062CBC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0062CBD0
 * Original: 0x0062CBD0 - 0x0062CBDA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CBD0: ;
    ecx = 0x699890;
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_0062CBE0
 * Original: 0x0062CBE0 - 0x0062CBEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CBE0: ;
    ecx = 0x69B6A0;
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_0062CBF0
 * Original: 0x0062CBF0 - 0x0062CBFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CBF0: ;
    ecx = 0x6C3908;
    g_seh_ebp = ebp; sub_00546E10(); return; /* tail jmp 0x00546E10 */

}

/**
 * sub_0062CC00
 * Original: 0x0062CC00 - 0x0062CC0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CC00: ;
    ecx = 0x6C50F0;
    g_seh_ebp = ebp; sub_006126B0(); return; /* tail jmp 0x006126B0 */

}

/**
 * sub_0062CC10
 * Original: 0x0062CC10 - 0x0062CC1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CC10: ;
    ecx = 0x6C5224;
    g_seh_ebp = ebp; sub_006126B0(); return; /* tail jmp 0x006126B0 */

}

/**
 * sub_0062CC20
 * Original: 0x0062CC20 - 0x0062CC2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CC20: ;
    ecx = 0x6C933C;
    g_seh_ebp = ebp; sub_0059F4B0(); return; /* tail jmp 0x0059F4B0 */

}

/**
 * sub_0062CC30
 * Original: 0x0062CC30 - 0x0062CC3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CC30: ;
    ecx = 0x6C93A8;
    g_seh_ebp = ebp; sub_0059F4B0(); return; /* tail jmp 0x0059F4B0 */

}

/**
 * sub_0062CC40
 * Original: 0x0062CC40 - 0x0062CC4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CC40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CC40: ;
    ecx = 0x6CE228;
    g_seh_ebp = ebp; sub_006126B0(); return; /* tail jmp 0x006126B0 */

}

/**
 * sub_0062CC50
 * Original: 0x0062CC50 - 0x0062CC5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CC50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CC50: ;
    ecx = 0x6CE52C;
    g_seh_ebp = ebp; sub_005D6AF0(); return; /* tail jmp 0x005D6AF0 */

}

/**
 * sub_0062CC60
 * Original: 0x0062CC60 - 0x0062CC6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CC60: ;
    ecx = 0x6CE520;
    g_seh_ebp = ebp; sub_005D6AF0(); return; /* tail jmp 0x005D6AF0 */

}

/**
 * sub_0062CC70
 * Original: 0x0062CC70 - 0x0062CC7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CC70: ;
    ecx = 0x6CE550;
    g_seh_ebp = ebp; sub_005D6AF0(); return; /* tail jmp 0x005D6AF0 */

}

/**
 * sub_0062CC80
 * Original: 0x0062CC80 - 0x0062CC8A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CC80: ;
    ecx = 0x6CE544;
    g_seh_ebp = ebp; sub_005D6AF0(); return; /* tail jmp 0x005D6AF0 */

}

/**
 * sub_0062CC90
 * Original: 0x0062CC90 - 0x0062CC9A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CC90: ;
    ecx = 0x6CE55C;
    g_seh_ebp = ebp; sub_005D6AF0(); return; /* tail jmp 0x005D6AF0 */

}

/**
 * sub_0062CCA0
 * Original: 0x0062CCA0 - 0x0062CCAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CCA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CCA0: ;
    ecx = 0x6CE538;
    g_seh_ebp = ebp; sub_005D6AF0(); return; /* tail jmp 0x005D6AF0 */

}

/**
 * sub_0062CCB0
 * Original: 0x0062CCB0 - 0x0062CCBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CCB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CCB0: ;
    ecx = 0x6CE568;
    g_seh_ebp = ebp; sub_005D6AF0(); return; /* tail jmp 0x005D6AF0 */

}

/**
 * sub_0062CCC0
 * Original: 0x0062CCC0 - 0x0062CCC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CCC0(void)
{

loc_0062CCC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0062CCD0
 * Original: 0x0062CCD0 - 0x0062CCD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CCD0(void)
{

loc_0062CCD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0062CCE0
 * Original: 0x0062CCE0 - 0x0062CCE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CCE0(void)
{

loc_0062CCE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0062CCF0
 * Original: 0x0062CCF0 - 0x0062CCFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CCF0: ;
    ecx = 0x857868;
    g_seh_ebp = ebp; sub_006126B0(); return; /* tail jmp 0x006126B0 */

}

/**
 * sub_0062CD00
 * Original: 0x0062CD00 - 0x0062CD0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CD00: ;
    ecx = 0x857850;
    g_seh_ebp = ebp; sub_006126B0(); return; /* tail jmp 0x006126B0 */

}

/**
 * sub_0062CD10
 * Original: 0x0062CD10 - 0x0062CD1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CD10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CD10: ;
    ecx = 0x858288;
    g_seh_ebp = ebp; sub_006126B0(); return; /* tail jmp 0x006126B0 */

}

/**
 * sub_0062CD20
 * Original: 0x0062CD20 - 0x0062CD2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CD20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CD20: ;
    ecx = 0x8582AC;
    g_seh_ebp = ebp; sub_006126B0(); return; /* tail jmp 0x006126B0 */

}

/**
 * sub_0062CD30
 * Original: 0x0062CD30 - 0x0062CD31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CD30(void)
{

loc_0062CD30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0062CD40
 * Original: 0x0062CD40 - 0x0062CD59 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CD40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0062CD40: ;
    eax = MEM32(0x8582F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0062CD4Bu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0062CD4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8582F0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0062CD60
 * Original: 0x0062CD60 - 0x0062CD6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CD60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CD60: ;
    ecx = 0x8586B8;
    g_seh_ebp = ebp; sub_006126B0(); return; /* tail jmp 0x006126B0 */

}

/**
 * sub_0062CD70
 * Original: 0x0062CD70 - 0x0062CD7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CD70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CD70: ;
    ecx = 0x85ADDC;
    g_seh_ebp = ebp; sub_006126B0(); return; /* tail jmp 0x006126B0 */

}

/**
 * sub_0062CD80
 * Original: 0x0062CD80 - 0x0062CD8A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CD80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CD80: ;
    ecx = 0x85AE60;
    g_seh_ebp = ebp; sub_006126B0(); return; /* tail jmp 0x006126B0 */

}

/**
 * sub_0062CD90
 * Original: 0x0062CD90 - 0x0062CD9A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CD90: ;
    ecx = 0x85D400;
    g_seh_ebp = ebp; sub_00602610(); return; /* tail jmp 0x00602610 */

}

/**
 * sub_0062CDA0
 * Original: 0x0062CDA0 - 0x0062CDA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CDA0(void)
{

loc_0062CDA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0062CDB0
 * Original: 0x0062CDB0 - 0x0062CDBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CDB0: ;
    ecx = 0x8600F8;
    g_seh_ebp = ebp; sub_006126B0(); return; /* tail jmp 0x006126B0 */

}

/**
 * sub_0062CDC0
 * Original: 0x0062CDC0 - 0x0062CDC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CDC0(void)
{

loc_0062CDC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0062CDD0
 * Original: 0x0062CDD0 - 0x0062CDD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0062CDD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0062CDD0: ;
    g_seh_ebp = ebp; sub_00617AA0(); return; /* tail jmp 0x00617AA0 */

}
