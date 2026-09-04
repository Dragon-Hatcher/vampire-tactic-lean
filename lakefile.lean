import Lake
open Lake DSL System

/-- Checkout of the Vampire fork we build against. -/
def vampireDir : FilePath :=
  "../vampire"

def vampireBuildDir : FilePath := vampireDir / "build"

/-- The flags Vampire's own objects are compiled with; the shim must agree. -/
def vampireCompileArgs : Array String := #[
  "-std=c++17", "-fno-threadsafe-statics", "-fno-rtti",
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

target vampire_ffi.o pkg : FilePath := do
  let oFile := pkg.buildDir / "ffi" / "vampire_ffi.o"
  let srcJob ← inputTextFile <| pkg.dir / "ffi" / "vampire_ffi.cpp"
  let flags := vampireCompileArgs ++ #["-I", (← getLeanIncludeDir).toString, "-fPIC"]
  buildO oFile srcJob flags #[] "c++"

target vampire_proof.o pkg : FilePath := do
  let oFile := pkg.buildDir / "ffi" / "vampire_proof.o"
  let srcJob ← inputTextFile <| pkg.dir / "ffi" / "vampire_proof.cpp"
  let flags := vampireCompileArgs ++ #["-I", (← getLeanIncludeDir).toString, "-fPIC"]
  buildO oFile srcJob flags #[] "c++"

target vampire_build.o pkg : FilePath := do
  let oFile := pkg.buildDir / "ffi" / "vampire_build.o"
  let srcJob ← inputTextFile <| pkg.dir / "ffi" / "vampire_build.cpp"
  let flags := vampireCompileArgs ++ #["-I", (← getLeanIncludeDir).toString, "-fPIC"]
  buildO oFile srcJob flags #[] "c++"

/--
The prebuilt Vampire archive. Declaring it as an input means Lake relinks when the
archive changes; without it a rebuilt Vampire leaves a stale dylib whose calls into
the new symbols fault at run time.
-/
target vampire_archive : FilePath := do
  let archive := vampireBuildDir / "libvampire_lib.a"
  unless (← archive.pathExists) do
    error s!"missing {archive}\n\
      build it first: cmake --build {vampireBuildDir} --target vampire_lib"
  inputBinFile archive

extern_lib libvampireffi pkg := do
  let name := nameToStaticLib "vampireffi"
  let ffiO ← fetch <| pkg.target ``vampire_ffi.o
  let buildO ← fetch <| pkg.target ``vampire_build.o
  let proofO ← fetch <| pkg.target ``vampire_proof.o
  let _ ← fetch <| pkg.target ``vampire_archive
  buildStaticLib (pkg.staticLibDir / name) #[ffiO, buildO, proofO]
