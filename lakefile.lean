import Lake
open Lake DSL System

/-- Checkout of the Vampire fork we build against. -/
def vampireDir : FilePath :=
  "../vampire"

def vampireBuildDir : FilePath := vampireDir / "build"

/-- The flags Vampire's own objects are compiled with; the shim must agree. -/
def vampireCompileArgs : Array String := #[
  "-std=c++20", "-fno-threadsafe-statics", "-fno-rtti",
  "-DVDEBUG=0", "-DCHECK_LEAKS=0", "-DNBUILD=1", "-DNCLOSEFROM=1",
  "-DVTIME_PROFILING=0", "-DVZ3=0", "-DNDEBUG",
  "-I" ++ vampireDir.toString,
  "-I" ++ (vampireDir / "viras" / "src").toString,
  "-I" ++ (vampireDir / "mini-gmp-6.3.0").toString,
  "-I" ++ (vampireDir / "cadical" / "src").toString
]

/--
The C++ standard library to link against: libc++ under Apple's toolchain, libstdc++
under GCC everywhere else. Vampire is C++ and the shim calls into it, so one of the two
has to be named explicitly — `leanc` links C.

Under GCC that means the *static* archives, by absolute path, and none of the three parts
of that is a stylistic choice.

**Why not `-lstdc++`.** `leanc` is Lean's bundled clang, whose default is
`-stdlib=libc++`, and the clang driver rewrites `-lstdc++` into `-lc++` accordingly: the
flag that asks for libstdc++ is silently turned into a request for the other library.
Nothing complains, because the target here is a shared object and a shared object is
allowed undefined symbols — so the link succeeds, leaves every libstdc++ symbol the shim
and Vampire need unresolved, and records a `DT_NEEDED` on a `libc++.so.1` that a GCC
system does not have. The failure surfaces when Lean loads the precompiled library, one
step later and looking like something else:

    error: Vampire/Tactic.lean:1:0: error loading library, libc++.so.1: \
      cannot open shared object file: No such file or directory

`-stdlib=libstdc++` stops the rewrite but does not help: `leanc` passes `--sysroot` into
the Lean toolchain, so the system library directories are not searched and `-lstdc++`
then fails outright. An absolute path is an input file rather than a library name, so it
is neither rewritten nor searched for. Passing paths also avoids adding a system `-L`
ahead of Lean's own, which would let a system `libgmp.a` or `libssl.a` be picked up in
place of the toolchain's.

**Why static, and not `libstdc++.so.6`.** Because `libleanshared.so` exports
`_Unwind_RaiseException` and the rest of LLVM's unwinder, the one libc++ pairs with,
and it is already in the global scope when Lean loads this library. A dynamic
`libstdc++.so.6` comes in *behind* it as a dependency of this library, so libstdc++'s own
call to `_Unwind_RaiseException` — the one `__cxa_throw` makes — binds to LLVM's unwinder
rather than to the libgcc one it was built against. The two are then mixed inside a single
unwind, `__gxx_personality_v0` from libstdc++ running under LLVM's phase 2, and the
handler is never installed. What that looks like is not a linking problem:

    terminate called after throwing an instance of 'Kernel::MainLoop::RefutationFoundException'

That is Vampire announcing a refutation it found — `RefutationFoundException` is how it
carries one out of the saturation loop — going uncaught past the `catch` in
`MainLoop::run` that is sitting right there in the stack. Every goal fails this way, at
the moment of success.

Linking `libstdc++.a` with `libgcc_eh.a` puts both halves inside this library, where they
find each other: libgcc's `_Unwind_*` are hidden-visibility symbols, so they end up
`LOCAL` here, cannot be interposed by what Lean exports, and do not leak outward to
interpose anything else in turn. `libgcc.a` follows them for the compiler support
routines the other two need.

The paths come from the compiler that builds the shim (`-print-file-name`, resolved at
configuration time), so they are that compiler's own runtime rather than a guess at where
the distribution puts it, and they match the objects: the shim and `libvampire_lib.a` are
both built by that same `c++`.
-/
def cxxStdlib : Array String :=
  if System.Platform.isOSX then #["-lc++"] else
  run_io do
    let locate (lib : String) : IO (Option String) := do
      let out ← IO.Process.output { cmd := "c++", args := #["-print-file-name=" ++ lib] }
      let path := out.stdout.trim
      -- `-print-file-name` echoes the bare name back when it cannot place the file.
      if out.exitCode == 0 && path != lib && (← System.FilePath.pathExists path) then
        return some path
      else
        return none
    -- Order is the link order: libstdc++ needs the unwinder, which needs libgcc.
    match ← locate "libstdc++.a", ← locate "libgcc_eh.a", ← locate "libgcc.a" with
    | some cxx, some eh, some gcc => return #[cxx, eh, gcc]
    -- Fall back to the plain flag rather than failing the configuration: a toolchain
    -- this does not understand still gets the diagnosable link rather than none at all.
    | _, _, _ => return #["-lstdc++"]

package vampire where
  -- Link the embedded prover. `vampire_lib` is a static archive of the same objects
  -- the `vampire` executable is built from; see the fork's CMakeLists.
  moreLinkArgs := #[
    "-L" ++ vampireBuildDir.toString, "-lvampire_lib"
  ] ++ cxxStdlib

require vamp_lean from ".." / "bodingbauer-etall" / "vamplean"

-- Monomorphisation. `Vampire/Preprocess/Mono.lean` is a port of lean-smt's
-- `Smt/Preprocess/Mono.lean`, which drives auto's `runMono`; the pinned tag is the one
-- lean-smt itself pins for this toolchain.
require auto from git
  "https://github.com/leanprover-community/lean-auto.git" @ "v4.33.0"

@[default_target] lean_lib Vampire where
  globs := #[.one `Vampire, .submodules `Vampire]
  -- The tactic runs in the elaborator, so the FFI symbols must be available to the
  -- interpreter: that requires precompiling this library into a shared object.
  precompileModules := true

@[default_target] lean_lib Test where
  globs := #[.one `Test, .submodules `Test]

/-- The prebuilt Vampire archive, as an input. -/
target vampire_archive : FilePath := do
  let archive := vampireBuildDir / "libvampire_lib.a"
  unless (← archive.pathExists) do
    error s!"missing {archive}\n\
      build it first: cmake --build {vampireBuildDir} --target vampire_lib"
  inputBinFile archive

/--
What the shim was compiled and linked against, as a hash of the archive.

It is passed in as `-DVAMPIRE_ARCHIVE_ID`, which `lean_vampire_archive_id` returns, and
that is not only a diagnostic: it is what makes the build correct. Lake tracks the
`.cpp` files and nothing else — not Vampire's headers, which the shim compiles against,
and not the archive, which the library the tactic loads is *linked* against — so a
rebuilt fork left the previous `libvampireffi` in place: the same symbols, the previous
code, and a fix to Vampire that the tactic went on running without. Nothing downstream
can notice, because a recompile of unchanged sources produces an identical object file
and an identical archive. Making the archive's identity part of what is compiled is what
gives the object file something to differ by, and it is also the answer to the question
you ask when a fix appears not to work.
-/
def archiveIdFlag (archive : FilePath) : JobM String := do
  let trace : BuildTrace ← computeTrace archive
  return s!"-DVAMPIRE_ARCHIVE_ID=\"{trace.hash}\""

target vampire_ffi.o pkg : FilePath := do
  let oFile := pkg.buildDir / "ffi" / "vampire_ffi.o"
  let srcJob ← inputTextFile <| pkg.dir / "ffi" / "vampire_ffi.cpp"
  let archive ← (← fetch <| pkg.target ``vampire_archive).await
  let flags := vampireCompileArgs ++ #["-I", (← getLeanIncludeDir).toString, "-fPIC"]
  buildO oFile srcJob flags #[← archiveIdFlag archive] "c++"

target vampire_proof.o pkg : FilePath := do
  let oFile := pkg.buildDir / "ffi" / "vampire_proof.o"
  let srcJob ← inputTextFile <| pkg.dir / "ffi" / "vampire_proof.cpp"
  let archive ← (← fetch <| pkg.target ``vampire_archive).await
  let flags := vampireCompileArgs ++ #["-I", (← getLeanIncludeDir).toString, "-fPIC"]
  buildO oFile srcJob flags #[← archiveIdFlag archive] "c++"

target vampire_build.o pkg : FilePath := do
  let oFile := pkg.buildDir / "ffi" / "vampire_build.o"
  let srcJob ← inputTextFile <| pkg.dir / "ffi" / "vampire_build.cpp"
  let archive ← (← fetch <| pkg.target ``vampire_archive).await
  let flags := vampireCompileArgs ++ #["-I", (← getLeanIncludeDir).toString, "-fPIC"]
  buildO oFile srcJob flags #[← archiveIdFlag archive] "c++"

extern_lib libvampireffi pkg := do
  let name := nameToStaticLib "vampireffi"
  let ffiO ← fetch <| pkg.target ``vampire_ffi.o
  let buildO ← fetch <| pkg.target ``vampire_build.o
  let proofO ← fetch <| pkg.target ``vampire_proof.o
  buildStaticLib (pkg.staticLibDir / name) #[ffiO, buildO, proofO]
