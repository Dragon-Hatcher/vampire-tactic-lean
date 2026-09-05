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

/-- The C++ standard library to link against: libc++ under Apple's toolchain, libstdc++
under GCC everywhere else. Vampire is C++ and the shim calls into it, so one of the two
has to be named explicitly — `leanc` links C. -/
def cxxStdlib : String :=
  if System.Platform.isOSX then "-lc++" else "-lstdc++"

package vampire where
  -- Link the embedded prover. `vampire_lib` is a static archive of the same objects
  -- the `vampire` executable is built from; see the fork's CMakeLists.
  moreLinkArgs := #[
    "-L" ++ vampireBuildDir.toString, "-lvampire_lib",
    cxxStdlib
  ]

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
