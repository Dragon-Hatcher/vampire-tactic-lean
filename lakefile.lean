import Lake
open Lake DSL System

/-!
# Building the `vampire` tactic

The tactic embeds Vampire, so `lake build` has a C++ project to get hold of and compile
before there is anything for Lean to link. It does that itself: `vampireSource` checks
out the fork at a pinned revision under `.lake/`, and `vampireArchive` runs its CMake
build. Nothing has to be prepared by hand and nothing is expected to sit beside this
package, so `require vampire from git ...` is all a downstream project needs.

Every path here is absolute, derived from `pkg.dir` or `pkg.buildDir`. That is not
tidiness: Lake runs the compiler from the *root* package's directory, so a relative
`-I` or `-L` in a package that is someone's dependency resolves against their directory
rather than this one. Relative paths are why this package used to work only when it was
itself the root.

Requires `cmake`, `git` and a C++20 compiler. The Vampire build is a few minutes once,
then cached like any other Lake target.
-/

/-- The Vampire fork the shim is written against, pinned. -/
def vampireUrl : String :=
  "https://github.com/Dragon-Hatcher/vampire-tactic-vampire.git"

/-- The revision of that fork. The shim calls into Vampire's internals, which are not a
stable interface, so this is a hard pin rather than a branch.

**Bump this together with anything that needs a fork change.** `b86421484` was left here
after the arithmetic support landed on the Lean side, and `3d194af87` is the commit that
drops the process-global caches which outlive a signature -- `NumTraits`'s functor and
constant caches and `Perfect`'s sharing memo, all of which `docs/vampire-global-state.md`
records as reached only once arithmetic gets as far as the prover. A downstream project
would have had the arithmetic tactic against a Vampire without them. -/
def vampireRev : String := "3d194af87"

/-- Include paths for compiling the shim against a Vampire checkout. -/
def vampireIncludes (src : FilePath) : Array String := #[
  "-I" ++ src.toString,
  "-I" ++ (src / "viras" / "src").toString,
  "-I" ++ (src / "mini-gmp-6.3.0").toString,
  "-I" ++ (src / "cadical" / "src").toString
]

/-- The flags Vampire's own objects are compiled with; the shim must agree. -/
def vampireCompileArgs (src : FilePath) : Array String := #[
  "-std=c++20", "-fno-threadsafe-statics", "-fno-rtti",
  "-DVDEBUG=0", "-DCHECK_LEAKS=0", "-DNBUILD=1", "-DNCLOSEFROM=1",
  "-DVTIME_PROFILING=0", "-DVZ3=0", "-DNDEBUG"
] ++ vampireIncludes src

/-- Run a command, failing the build with its output if it fails. -/
def run (cmd : String) (args : Array String) (cwd : Option FilePath := none) :
    JobM Unit := do
  let out ← IO.Process.output { cmd, args, cwd := cwd.map (·.toString) }
  if out.exitCode != 0 then
    error s!"{cmd} {" ".intercalate args.toList} failed with {out.exitCode}:\n\
      {out.stdout}\n{out.stderr}"

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
  -- Only the C++ runtime, which `cxxStdlib` gives as absolute paths. Vampire itself
  -- arrives as an `extern_lib` rather than through `-L`/`-l`, because an `extern_lib`
  -- is built in a monadic target that knows where this package is, and a relative
  -- `-L` in `moreLinkArgs` would be read from whoever's project is the root.
  moreLinkArgs := cxxStdlib

require auto from git
  "https://github.com/leanprover-community/lean-auto.git" @ "v4.33.0"

/-
Mathlib, for the arithmetic fragment only.

`ℝ` and `ℚ` are Mathlib's, and so are the tactics the arithmetic replay closes a theory
axiom with (`ring`, `linarith`, `omega`, ...). Nothing in the first-order fragment needs
any of it, and `Vampire/Arith.lean` still resolves those tactics in the environment the
replay runs in rather than importing them here -- so a downstream project that only ever
proves first-order goals pays for the *dependency* but not for the import.

Pinned to the same `v4.33.0` the rest of the graph uses: `lean-smt` and `lean-auto` both
pin it, and Lake resolves a shared dependency to whichever revision is required first, so
disagreeing here would silently move Mathlib for anything that requires this package
alongside them -- which `atp-playground/` does.
-/
require mathlib from git
  "https://github.com/leanprover-community/mathlib4.git" @ "v4.33.0"


@[default_target] lean_lib Vampire where
  globs := #[.one `Vampire, .submodules `Vampire]
  -- The tactic runs in the elaborator, so the FFI symbols must be available to the
  -- interpreter: that requires precompiling this library into a shared object.
  precompileModules := true

@[default_target] lean_lib Test where
  globs := #[.one `Test, .submodules `Test]

/--
A checkout of the Vampire fork, at `vampireRev`.

Under `.lake/` so that it is build output and `lake clean` reaches it. Set
`VAMPIRE_TACTIC_SRC` to an existing checkout to work against one you are editing, which
is what the fork's own development wants; nothing then fetches or checks out anything.
-/
target vampireSource pkg : FilePath := do
  if let some dir ← IO.getEnv "VAMPIRE_TACTIC_SRC" then
    let dir : FilePath := dir
    unless ← (dir / "CMakeLists.txt").pathExists do
      error s!"VAMPIRE_TACTIC_SRC={dir} has no CMakeLists.txt"
    return pure dir
  let src := pkg.buildDir / "vampire"
  unless ← (src / ".git").pathExists do
    IO.FS.createDirAll pkg.buildDir
    logInfo s!"fetching Vampire into {src}"
    run "git" #["clone", "--no-checkout", vampireUrl, src.toString]
  -- Idempotent, and the tree has to be tested as well as the commit: a `--no-checkout`
  -- clone is *already* at the pinned revision with no files in it, so checking the
  -- revision alone skips the checkout and leaves cmake nothing to configure.
  let head ← IO.Process.output
    { cmd := "git", args := #["rev-parse", "HEAD"], cwd := src.toString }
  let atPin := head.exitCode == 0 && head.stdout.startsWith vampireRev
  unless atPin && (← (src / "CMakeLists.txt").pathExists) do
    run "git" #["fetch", "--all", "--tags"] src
    run "git" #["checkout", "--force", vampireRev] src
  return pure src

/--
`libvampire_lib.a`: the same objects the `vampire` executable is built from, as an
archive, via the target the fork adds for embedding.

`-DCMAKE_POSITION_INDEPENDENT_CODE=ON` is required and not a preference. The archive
ends up inside a shared object, because `precompileModules` needs one, and on ELF
platforms that shared object cannot contain non-PIC objects. The Apple toolchain
compiles PIC by default and so never asks.
-/
target vampireArchive pkg : FilePath := do
  let srcJob ← fetch <| pkg.target ``vampireSource
  let src ← srcJob.await
  -- An archive already built inside the checkout is taken as it stands. That is the
  -- normal case when `VAMPIRE_TACTIC_SRC` points at a tree being worked on by hand, and
  -- it keeps editing the fork from meaning a second copy of a 350-file C++ build.
  let insitu := src / "build" / "libvampire_lib.a"
  if ← insitu.pathExists then
    logInfo s!"using the archive already built at {insitu}"
    return (← inputBinFile insitu)
  let build := pkg.buildDir / "vampire-build"
  let archive := build / "libvampire_lib.a"
  unless ← archive.pathExists do
    logInfo "configuring Vampire (cmake)"
    run "cmake" #["-S", src.toString, "-B", build.toString,
                  "-DCMAKE_BUILD_TYPE=Release",
                  "-DCMAKE_POSITION_INDEPENDENT_CODE=ON"]
    -- Two jobs, and the number is about memory rather than time. Vampire is ~350
    -- translation units of template-heavy C++ and g++ peaks over a gigabyte on several
    -- of them, so a job per core wants more memory than a 16GB machine has and it does
    -- not degrade gracefully -- it swaps, thrashes, and stops responding. `--parallel`
    -- with no number, which is what this said first, is a job per core.
    -- `VAMPIRE_TACTIC_JOBS` raises it for anyone with the memory to spare.
    let jobs := (← IO.getEnv "VAMPIRE_TACTIC_JOBS").getD "2"
    logInfo s!"building Vampire with {jobs} job(s); some minutes, once. Raise \
      VAMPIRE_TACTIC_JOBS if you have the memory for it."
    run "cmake" #["--build", build.toString, "--target", "vampire_lib", "-j", jobs]
  unless ← archive.pathExists do
    error s!"Vampire's build produced no {archive}"
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

/-- The shim's three translation units, compiled against the checkout. -/
def shimObject (pkg : NPackage _package.name) (stem : String) :
    FetchM (Job FilePath) := do
  let oFile := pkg.buildDir / "ffi" / (stem ++ ".o")
  let srcJob ← inputTextFile <| pkg.dir / "ffi" / (stem ++ ".cpp")
  let src ← (← fetch <| pkg.target ``vampireSource).await
  let archive ← (← fetch <| pkg.target ``vampireArchive).await
  let flags := vampireCompileArgs src ++ #["-I", (← getLeanIncludeDir).toString, "-fPIC"]
  buildO oFile srcJob flags #[← archiveIdFlag archive] "c++"

target vampire_ffi.o pkg : FilePath := shimObject pkg "vampire_ffi"
target vampire_proof.o pkg : FilePath := shimObject pkg "vampire_proof"
target vampire_build.o pkg : FilePath := shimObject pkg "vampire_build"

/--
The shim and Vampire, as one archive.

Two `extern_lib`s do not work: Lake links the one it builds through `buildStaticLib` and
an `inputBinFile` pointing at a prebuilt archive never reaches the link line, so the
shared object comes out with `Lib::env` and the rest of Vampire undefined. That failure
is invisible until Lean loads the library, and it hid for a while behind a stale `.so` --
Lake does not track `moreLinkArgs`, so a shared object linked before this file was
rewritten kept being reused and kept working for the old reason.

So the members are merged with `ar`, whose MRI script is the one interface that appends
one archive's members to another rather than nesting it. One artifact, whose objects are
all really objects, and nothing depending on link order.
-/
extern_lib libvampireffi pkg := do
  let ffiO ← (← fetch <| pkg.target ``vampire_ffi.o).await
  let buildO ← (← fetch <| pkg.target ``vampire_build.o).await
  let proofO ← (← fetch <| pkg.target ``vampire_proof.o).await
  let archive ← (← fetch <| pkg.target ``vampireArchive).await
  let out := pkg.staticLibDir / nameToStaticLib "vampireffi"
  IO.FS.createDirAll pkg.staticLibDir
  let mri := pkg.buildDir / "ffi" / "combine.mri"
  IO.FS.writeFile mri <| String.intercalate "\n"
    [s!"CREATE {out}", s!"ADDLIB {archive}",
     s!"ADDMOD {ffiO} {buildO} {proofO}", "SAVE", "END", ""]
  -- `ar -M` reads its script on stdin, so this goes through a shell.
  run "sh" #["-c", s!"ar -M < {mri}"]
  return pure out
