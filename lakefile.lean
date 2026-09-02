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

package vampire where
  -- Link the embedded prover. `vampire_lib` is a static archive of the same objects
  -- the `vampire` executable is built from; see the fork's CMakeLists.
  moreLinkArgs := #[
    "-L" ++ vampireBuildDir.toString, "-lvampire_lib",
    "-lc++"
  ]

require vamp_lean from ".." / "bodingbauer-etall" / "vamplean"

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

target vampire_problem.o pkg : FilePath := do
  let oFile := pkg.buildDir / "ffi" / "vampire_problem.o"
  let srcJob ← inputTextFile <| pkg.dir / "ffi" / "vampire_problem.cpp"
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
  let probO ← fetch <| pkg.target ``vampire_problem.o
  let _ ← fetch <| pkg.target ``vampire_archive
  buildStaticLib (pkg.staticLibDir / name) #[ffiO, probO]
