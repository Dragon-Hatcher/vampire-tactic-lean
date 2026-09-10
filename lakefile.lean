import Lake

open Lake DSL System

package vampire

require "leanprover-community" / "mathlib" @ git "v4.33.1"

/-- The vampire checkout to build against: `$VAMPIRE_DIR`, else `../vampire-fork`. -/
def vampireSourceDir (pkgDir : FilePath) : IO FilePath := do
  match ← IO.getEnv "VAMPIRE_DIR" with
  | some dir => return dir
  | none =>
    let dir := pkgDir.parent.getD pkgDir / "vampire-fork"
    unless ← (dir / "CMakeLists.txt").pathExists do
      error s!"no vampire sources at {dir}; clone the fork there \
        (`git clone --recurse-submodules <fork> vampire-fork`), \
        or set VAMPIRE_DIR to a vampire checkout"
    return dir

def vampireBuildType : String :=
  if get_config? vampireDebug |>.isSome then "Debug" else "Release"

/-- Available memory in GiB, on platforms that expose `/proc/meminfo`. -/
def availableMemoryGiB : BaseIO (Option Nat) := do
  let read : IO (Option Nat) := do
    let contents ← IO.FS.readFile "/proc/meminfo"
    for line in contents.splitOn "\n" do
      if line.startsWith "MemAvailable:" then
        let digits := line.toList.filter Char.isDigit
        return (String.ofList digits).toNat?.map (· / 1048576)
    return none
  match ← read.toBaseIO with
  | .ok gib => return gib
  | .error _ => return none

/--
Compiling vampire needs upwards of 2 GiB per translation unit, so the default
job count is capped by available memory rather than by core count.
`CMAKE_BUILD_PARALLEL_LEVEL` overrides it.
-/
def cmakeParallelLevel : BaseIO String := do
  if let some level ← IO.getEnv "CMAKE_BUILD_PARALLEL_LEVEL" then
    return level
  let cores := (System.Platform.Internal.getHardwareConcurrency ()).toNat
  let cores := if cores == 0 then 1 else cores
  match ← availableMemoryGiB with
  | some gib => return toString (max 1 (min cores (gib / 2)))
  | none => return toString (min cores 4)

/--
Builds the `vampire-worker` executable. `cmake` handles incrementality, so this
runs on every build and reports a trace over the resulting binary.
-/
target «vampire-worker» pkg : FilePath := Job.async do
  let vampireDir ← vampireSourceDir pkg.dir
  let cmakeDir := pkg.buildDir / "cmake"
  let exe := cmakeDir / "vampire-worker"
  proc (quiet := true) {
    cmd := "cmake"
    args := #[
      "-S", (pkg.dir / "worker").toString,
      "-B", cmakeDir.toString,
      s!"-DVAMPIRE_SOURCE_DIR={vampireDir}",
      s!"-DCMAKE_BUILD_TYPE={vampireBuildType}"
    ]
  }
  proc {
    cmd := "cmake"
    args := #["--build", cmakeDir.toString, "--target", "vampire-worker",
              "--parallel", ← cmakeParallelLevel]
  }
  addTrace <| .ofHash (← computeFileHash exe)
  return exe

@[default_target]
lean_lib Vampire where
  needs := #[«vampire-worker»]

@[test_driver]
lean_lib test where
  globs := #[.submodules `test]
