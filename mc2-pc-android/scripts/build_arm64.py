"""
Parallel ARM64 builder for Midnight Club II (PC -> Android static recompilation).
Compiles all 47 generated C chunks in recomp/gen/ + src/pc_runtime.c into
obj_arm64/*.o and links libmc2pc.a / libmc2pc.so.
"""
import argparse
import glob
import os
import platform
import subprocess
import sys
import time
from concurrent.futures import ThreadPoolExecutor, as_completed

ROOT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GEN_DIR = os.path.join(ROOT_DIR, "recomp", "gen")
SRC_DIR = os.path.join(ROOT_DIR, "src")
OBJ_DIR = os.path.join(ROOT_DIR, "recomp", "obj_arm64")
os.makedirs(OBJ_DIR, exist_ok=True)


def _find_ndk_root():
    for var in ("ANDROID_NDK_HOME", "ANDROID_NDK_ROOT", "NDK_HOME"):
        val = os.environ.get(var, "").strip()
        if val and os.path.isdir(val):
            return val
    default_ndk = r"C:\Android\ndk\28.2.13676358"
    if os.path.isdir(default_ndk):
        return default_ndk
    raise FileNotFoundError(
        "No se encontro Android NDK 28.2.13676358. Define ANDROID_NDK_HOME o instalalo en C:\\Android\\ndk\\28.2.13676358"
    )


def _host_tag():
    sys_name = platform.system().lower()
    if sys_name.startswith("win"):
        return "windows-x86_64"
    if sys_name == "darwin":
        return "darwin-x86_64"
    return "linux-x86_64"


NDK_ROOT = _find_ndk_root()
NDK_BIN = os.path.join(NDK_ROOT, "toolchains", "llvm", "prebuilt", _host_tag(), "bin")
EXE_EXT = ".exe" if platform.system().lower().startswith("win") else ""
CLANG = os.path.join(NDK_BIN, "clang" + EXE_EXT)
AR = os.path.join(NDK_BIN, "llvm-ar" + EXE_EXT)
SYSROOT = os.path.join(NDK_ROOT, "toolchains", "llvm", "prebuilt", _host_tag(), "sysroot")

CFLAGS = [
    "--target=aarch64-none-linux-android26",
    f"--sysroot={SYSROOT}",
    "-O2",
    "-fno-strict-aliasing",
    "-fPIC",
    "-w",
    f"-I{GEN_DIR}",
    f"-I{SRC_DIR}",
    f"-I{os.path.join(ROOT_DIR, 'third_party', 'ffmpeg_arm64', 'include')}",
]


def compile_one(c_file, extra_flags=None, force=False):
    base = os.path.splitext(os.path.basename(c_file))[0]
    o_file = os.path.join(OBJ_DIR, base + ".o")
    if not force and os.path.exists(o_file) and os.path.getmtime(o_file) >= os.path.getmtime(c_file):
        return (base, 0, "", True)
    cmd = [CLANG, "-c", c_file, "-o", o_file] + CFLAGS + (extra_flags or [])
    res = subprocess.run(cmd, capture_output=True, text=True)
    return (base, res.returncode, res.stderr, False)


def main():
    parser = argparse.ArgumentParser(description="Build libmc2pc.a for Android ARM64")
    parser.add_argument("--release", action="store_true", help="Compila pc_runtime.c sin trazas PORTDBG (-DMC2_RELEASE=1)")
    args = parser.parse_args()

    mode_name = "release" if args.release else "debug"
    mode_file = os.path.join(OBJ_DIR, ".runtime_mode")
    prev_mode = open(mode_file, "r", encoding="utf-8").read().strip() if os.path.exists(mode_file) else ""
    force_runtime = (prev_mode != mode_name)

    t0 = time.time()
    c_files = sorted(glob.glob(os.path.join(GEN_DIR, "*.c")))
    runtime_c = os.path.join(SRC_DIR, "pc_runtime.c")
    c_files.append(runtime_c)

    print(f"Compiling {len(c_files)} translation units ({mode_name}) for Android ARM64 (aarch64-linux-android26)...")
    failed = 0
    done = 0
    with ThreadPoolExecutor(max_workers=8) as ex:
        futs = {}
        for f in c_files:
            is_rt = (f == runtime_c)
            flags = ["-DMC2_RELEASE=1"] if (is_rt and args.release) else []
            futs[ex.submit(compile_one, f, flags, is_rt and force_runtime)] = f
        for fut in as_completed(futs):
            base, rc, err, cached = fut.result()
            done += 1
            if rc != 0:
                failed += 1
                print(f"  [FAIL] {base}: {err}")
            elif done % 10 == 0 or done == len(c_files):
                print(f"  [{done}/{len(c_files)}] {base}.o OK ({time.time() - t0:.1f}s)")

    if failed > 0:
        print(f"FAILED: {failed} file(s) failed to compile.")
        sys.exit(1)

    with open(mode_file, "w", encoding="utf-8") as mf:
        mf.write(mode_name)

    # Archive into libmc2pc.a
    a_path = os.path.join(OBJ_DIR, "libmc2pc.a")
    if os.path.exists(a_path):
        os.remove(a_path)
    o_files = sorted(glob.glob(os.path.join(OBJ_DIR, "*.o")))
    subprocess.run([AR, "rcs", a_path] + o_files, check=True)
    a_size_mb = os.path.getsize(a_path) / (1024 * 1024)
    print(f"Created static archive: {a_path} ({a_size_mb:.2f} MB) in {time.time() - t0:.1f}s")


if __name__ == "__main__":
    main()

