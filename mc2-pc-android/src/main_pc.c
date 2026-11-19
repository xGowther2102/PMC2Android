/**
 * Midnight Club II (PC Static Recompilation) - Host Test Runner
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "pc_runtime.h"
#include "../recomp/gen/recomp_types.h"

#if defined(_WIN32)
#include <windows.h>

static LONG CALLBACK pc_veh_handler(PEXCEPTION_POINTERS ep) {
    if (ep->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION) {
        uintptr_t fault_addr = ep->ExceptionRecord->ExceptionInformation[1];
        uint32_t guest_va = (uint32_t)(fault_addr - (uintptr_t)g_xbox_mem_offset);
        fprintf(stderr, "\n[CRASH] Access Violation at RIP=0x%llX (%s host=0x%llX, guest_va=0x%08X)\n",
                (unsigned long long)ep->ContextRecord->Rip,
                ep->ExceptionRecord->ExceptionInformation[0] ? "WRITE" : "READ",
                (unsigned long long)fault_addr, guest_va);
        fprintf(stderr, "  Regs: eax=0x%08X ecx=0x%08X edx=0x%08X esp=0x%08X ebp=0x%08X\n",
                g_eax, g_ecx, g_edx, g_esp, g_ebp);
        fprintf(stderr, "  Regs: ebx=0x%08X esi=0x%08X edi=0x%08X\n",
                g_ebx, g_esi, g_edi);
        if (g_xbox_mem_offset && g_esp >= 0x00100000u && g_esp < 0x1F000000u) {
            const uint32_t *sp = (const uint32_t *)((uintptr_t)g_xbox_mem_offset + g_esp);
            fprintf(stderr, "  Guest stack return addresses:\n");
            for (int i = 0, shown = 0; i < 128 && shown < 16; i++) {
                uint32_t v = sp[i];
                if (v >= 0x00401000u && v < 0x0062D000u) {
                    fprintf(stderr, "    [esp+%3d] 0x%08X\n", i * 4, v);
                    shown++;
                }
            }
            fprintf(stderr, "  Raw stack top:\n");
            for (int i = 0; i < 8; i++) {
                fprintf(stderr, "    [esp+%2d] 0x%08X\n", i * 4, sp[i]);
            }
        }
        fprintf(stderr, "  Recent ICALL targets:");
        for (int i = 0; i < 16; i++) {
            uint32_t t = g_icall_trace[(g_icall_trace_idx + i) & 15];
            if (t) fprintf(stderr, " 0x%08X", t);
        }
        fprintf(stderr, "\n");
        fflush(stderr);
    }
    return EXCEPTION_CONTINUE_SEARCH;
}
#endif

int main(int argc, char **argv) {
    const char *exe_path = "C:\\Program Files\\Midnight Club II\\mc2.exe";
    const char *game_dir = "C:\\Program Files\\Midnight Club II";
    const char *cmdline  = "mc2.exe -skipintro";

    if (argc > 1) exe_path = argv[1];
    if (argc > 2) game_dir = argv[2];
    if (argc > 3) cmdline  = argv[3];

    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);

#if defined(_WIN32)
    AddVectoredExceptionHandler(1, pc_veh_handler);
#endif

    return mc2_pc_boot_and_run(exe_path, game_dir, cmdline);
}

