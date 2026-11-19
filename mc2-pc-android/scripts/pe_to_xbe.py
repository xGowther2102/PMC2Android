#!/usr/bin/env python3
"""
Convert Midnight Club II (PC) mc2.exe (PE32) into a synthetic XBE image +
analysis JSON + relocation seeds so the xboxrecomp pipeline (disasm, func_id,
abi_analysis, recomp) can lift the entire PC executable to C without losing
PE imports or relocation table pointers.
"""

import json
import os
import struct
import pefile
from pathlib import Path

PC_EXE = Path(os.environ.get("MC2_EXE", r"C:\Program Files\Midnight Club II\mc2.exe"))
OUT_DIR = Path(__file__).resolve().parent.parent / "game_files"

# Real Original Entry Point (OEP) inside .text (bypassing the .grxdd Razor1911/Steamless stub)
PC_OEP = 0x0061958A

ENTRY_RETAIL_XOR = 0xA8FC57AB
THUNK_RETAIL_XOR = 0x5B6D40B6

SECTION_WRITABLE   = 0x00000001
SECTION_PRELOAD    = 0x00000002
SECTION_EXECUTABLE = 0x00000004


def build_pe_to_xbe():
    OUT_DIR.mkdir(parents=True, exist_ok=True)
    pe = pefile.PE(str(PC_EXE))
    ib = pe.OPTIONAL_HEADER.ImageBase  # 0x00400000

    # 1. Collect all PE imports (DLL, name/ordinal, IAT VA)
    imports = []
    ordinal_counter = 1000  # synthetic ordinals >= 1000 for PC Win32/DLL imports
    for entry in pe.DIRECTORY_ENTRY_IMPORT:
        dll = entry.dll.decode("latin1").lower()
        for imp in entry.imports:
            func_name = imp.name.decode("latin1") if imp.name else f"ord_{imp.ordinal}"
            full_name = f"{dll.replace('.dll', '')}__{func_name}"
            imports.append({
                "ordinal": ordinal_counter,
                "dll": dll,
                "func": func_name,
                "name": full_name,
                "thunk_addr": imp.address,
            })
            ordinal_counter += 1

    imports.sort(key=lambda x: x["thunk_addr"])
    print(f"Collected {len(imports)} PE imports across {len(pe.DIRECTORY_ENTRY_IMPORT)} DLLs.")

    # 2. Extract relocation seeds pointing into .text
    text_sec = next(s for s in pe.sections if s.Name.startswith(b".text"))
    text_va_lo = ib + text_sec.VirtualAddress
    text_va_hi = text_va_lo + text_sec.Misc_VirtualSize

    # Also find all IAT addresses so we don't accidentally seed an IAT pointer
    iat_addrs = {imp["thunk_addr"] for imp in imports}

    reloc_code_targets = set()
    rdata_code_targets = set()
    for entry in pe.DIRECTORY_ENTRY_BASERELOC:
        for r in entry.entries:
            if r.type == 3:  # IMAGE_REL_BASED_HIGHLOW
                src_va = ib + r.rva
                val = pe.get_dword_at_rva(r.rva)
                if text_va_lo <= val < text_va_hi:
                    reloc_code_targets.add(val)
                    if 0x0062D000 <= src_va < 0x00662000:
                        rdata_code_targets.add(val)

    print(f"Reloc targets in .text: {len(reloc_code_targets)} total, {len(rdata_code_targets)} from .rdata (vtables/callbacks).")

    # 3. Build synthetic XBE file wrapping the PE sections(.text, .rdata, .data, .tls, .idata, .rsrc)
    # We exclude .grxdd and .ashrmg (the crack loader stub) or keep them as non-executable data
    # so the disassembler only disassembles clean .text!
    keep_sections = []
    for s in pe.sections:
        name = s.Name.decode("latin1").rstrip("\x00")
        if name in (".reloc",):
            continue
        is_exec = (name == ".text")
        is_write = bool(s.Characteristics & 0x80000000) or (name in (".data", ".rdata", ".idata"))
        flags = SECTION_PRELOAD
        if is_exec:
            flags |= SECTION_EXECUTABLE
        if is_write:
            flags |= SECTION_WRITABLE
        raw_data = s.get_data()[:s.SizeOfRawData]
        keep_sections.append({
            "name": name,
            "flags": flags,
            "va": ib + s.VirtualAddress,
            "vsize": s.Misc_VirtualSize,
            "raw_data": raw_data,
            "rsize": len(raw_data),
            "writable": is_write,
            "executable": is_exec,
        })

    # Layout XBE header at base_address = 0x00400000, size 0x1000
    base_addr = ib
    num_secs = len(keep_sections)
    header_buf = bytearray(0x1000)

    # Cert at 0x0180 (size 0x1EC)
    cert_off = 0x0180
    # Section headers at 0x0380 (num_secs * 56)
    sec_hdr_off = 0x0380
    # Section names at 0x0600
    sec_names_off = 0x0600

    # Calculate raw offsets for sections starting at 0x1000
    cur_raw = 0x1000
    for sec in keep_sections:
        sec["raw_addr"] = cur_raw
        cur_raw += (sec["rsize"] + 0xFFF) & ~0xFFF

    max_va = max(s["va"] + s["vsize"] for s in keep_sections)
    image_size = max_va - base_addr
    first_thunk_va = imports[0]["thunk_addr"] if imports else (base_addr + 0x22D000)

    # Populate XBE Header
    header_buf[0:4] = b"XBEH"
    struct.pack_into("<I", header_buf, 0x0104, base_addr)                  # base_address
    struct.pack_into("<I", header_buf, 0x0108, 0x1000)                     # headers_size
    struct.pack_into("<I", header_buf, 0x010C, image_size)                 # image_size
    struct.pack_into("<I", header_buf, 0x0110, 0x0178)                     # image_header_size
    struct.pack_into("<I", header_buf, 0x0114, pe.FILE_HEADER.TimeDateStamp)
    struct.pack_into("<I", header_buf, 0x0118, base_addr + cert_off)       # certificate_addr
    struct.pack_into("<I", header_buf, 0x011C, num_secs)                   # num_sections
    struct.pack_into("<I", header_buf, 0x0120, base_addr + sec_hdr_off)    # section_headers_addr
    struct.pack_into("<I", header_buf, 0x0124, 0)                          # init_flags
    struct.pack_into("<I", header_buf, 0x0128, PC_OEP ^ ENTRY_RETAIL_XOR)  # entry_point_raw
    struct.pack_into("<I", header_buf, 0x012C, 0)                          # tls_addr
    struct.pack_into("<I", header_buf, 0x0130, pe.OPTIONAL_HEADER.SizeOfStackCommit)
    struct.pack_into("<I", header_buf, 0x0134, pe.OPTIONAL_HEADER.SizeOfHeapReserve)
    struct.pack_into("<I", header_buf, 0x0138, pe.OPTIONAL_HEADER.SizeOfHeapCommit)
    struct.pack_into("<I", header_buf, 0x013C, base_addr)
    struct.pack_into("<I", header_buf, 0x0140, pe.OPTIONAL_HEADER.SizeOfImage)
    struct.pack_into("<I", header_buf, 0x0144, pe.OPTIONAL_HEADER.CheckSum)
    struct.pack_into("<I", header_buf, 0x0148, pe.FILE_HEADER.TimeDateStamp)
    struct.pack_into("<I", header_buf, 0x0158, first_thunk_va ^ THUNK_RETAIL_XOR)

    # Populate Certificate
    struct.pack_into("<I", header_buf, cert_off + 0, 0x1EC)
    struct.pack_into("<I", header_buf, cert_off + 4, pe.FILE_HEADER.TimeDateStamp)
    struct.pack_into("<I", header_buf, cert_off + 8, 0x54540008)  # Title ID
    title_utf16 = "Midnight Club II (PC)".encode("utf-16-le")
    header_buf[cert_off + 12 : cert_off + 12 + len(title_utf16)] = title_utf16

    # Populate Section Headers & Names
    name_cursor = sec_names_off
    for i, sec in enumerate(keep_sections):
        name_bytes = sec["name"].encode("ascii") + b"\x00"
        header_buf[name_cursor : name_cursor + len(name_bytes)] = name_bytes
        name_va = base_addr + name_cursor
        name_cursor += len(name_bytes)

        sh_off = sec_hdr_off + i * 56
        struct.pack_into("<IIIIII", header_buf, sh_off,
                         sec["flags"],
                         sec["va"],
                         sec["vsize"],
                         sec["raw_addr"],
                         sec["rsize"],
                         name_va)

    # Assemble full binary
    xbe_path = OUT_DIR / "mc2_pc.xbe"
    with open(xbe_path, "wb") as f:
        f.write(header_buf)
        for sec in keep_sections:
            f.seek(sec["raw_addr"])
            f.write(sec["raw_data"])
        # Pad to last section end
        last = keep_sections[-1]
        total_len = (last["raw_addr"] + last["rsize"] + 0xFFF) & ~0xFFF
        if f.tell() < total_len:
            f.seek(total_len - 1)
            f.write(b"\x00")

    print(f"Wrote synthetic XBE: {xbe_path} ({os.path.getsize(xbe_path):,} bytes)")

    # Write <stem>_analysis.json with all 202 PE imports mapped as kernel_imports
    def fmt_flags(fl):
        parts = []
        if fl & SECTION_WRITABLE: parts.append("W")
        if fl & SECTION_PRELOAD: parts.append("PRE")
        if fl & SECTION_EXECUTABLE: parts.append("X")
        return ", ".join(parts) if parts else "NONE"

    analysis = {
        "title": "Midnight Club II (PC)",
        "title_id": "0x54540008",
        "type": "retail",
        "build_date": "2003-06-19 00:00:00 UTC",
        "xdk_version": 0,
        "build_path": str(PC_EXE),
        "base_address": f"0x{base_addr:08X}",
        "image_size": image_size,
        "entry_point": f"0x{PC_OEP:08X}",
        "kernel_thunk_addr": f"0x{first_thunk_va:08X}",
        "sections": [
            {
                "name": s["name"],
                "virtual_addr": f"0x{s['va']:08X}",
                "virtual_size": s["vsize"],
                "raw_addr": f"0x{s['raw_addr']:08X}",
                "raw_size": s["rsize"],
                "flags": fmt_flags(s["flags"]),
                "writable": s["writable"],
                "executable": s["executable"],
            }
            for s in keep_sections
        ],
        "libraries": [],
        "kernel_imports": [
            {
                "ordinal": imp["ordinal"],
                "name": imp["name"],
                "dll": imp["dll"],
                "func": imp["func"],
                "thunk_addr": f"0x{imp['thunk_addr']:08X}",
            }
            for imp in imports
        ],
        "tls": None,
    }

    analysis_path = OUT_DIR / "mc2_pc_analysis.json"
    with open(analysis_path, "w", encoding="utf-8") as f:
        json.dump(analysis, f, indent=2)
    print(f"Wrote analysis JSON: {analysis_path}")

    # Save imports table separately for our C Win32/D3D9/Miles/Bink bridge generator
    imports_path = OUT_DIR / "pe_imports.json"
    with open(imports_path, "w", encoding="utf-8") as f:
        json.dump(imports, f, indent=2)

    # Save rdata relocation targets as initial vtable/callback seeds
    seeds_path = OUT_DIR.parent / "seeds_reloc.json"
    seeds_payload = [{"start": f"0x{addr:08X}"} for addr in sorted(rdata_code_targets)]
    with open(seeds_path, "w", encoding="utf-8") as f:
        json.dump(seeds_payload, f, indent=2)
    print(f"Wrote {len(seeds_payload)} .rdata relocation seeds to {seeds_path}")


if __name__ == "__main__":
    build_pe_to_xbe()

