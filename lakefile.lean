import Lake

open Lake DSL System

package vampire

require "leanprover-community" / "mathlib" @ git "v4.33.0"
require "leanprover-community" / "auto" @ git "v4.33.0"

/-- The vampire the worker is built from. -/
def vampireRepo : String :=
  "https://github.com/Dragon-Hatcher/vampire-tactic-vampire.git"

/-- The revision of `vampireRepo` the worker is built from. -/
def vampireRev : String := "8ebd1593435b101228b5174608734bcef150d7d0"

/--
The submodules vampire's build needs.

`z3` is not among them: vampire uses z3 only if it finds one already built, and
it is the bulk of the repository.
-/
def vampireSubmodules : Array String := #["cadical", "viras"]

/-- `git`, with its output kept unless it fails. -/
private def git (cwd : FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "git", args, cwd := cwd.toString }
  if out.exitCode != 0 then
    error s!"git {" ".intercalate args.toList} failed in {cwd}:\n\
      {out.stdout}{out.stderr}"

/--
The vampire checkout to build against.

`$VAMPIRE_DIR` wins, for building against a checkout of one's own. Failing
that, a sibling `vampire-fork/`, which is the layout this repository is
developed in. Failing both, `vampireRev` is fetched into the build directory:
vampire is not a Lake package, so nothing else would bring it, and a user who
added this library has no reason to have fetched it themselves.

Shallow, and only the submodules the build needs, which together is about
twenty megabytes rather than the repository's full weight.
-/
def vampireSourceDir (pkg : Package) : IO FilePath := do
  if let some dir ← IO.getEnv "VAMPIRE_DIR" then
    unless ← (FilePath.mk dir / "CMakeLists.txt").pathExists do
      error s!"VAMPIRE_DIR is set to {dir}, which holds no CMakeLists.txt"
    return dir
  let sibling := pkg.dir.parent.getD pkg.dir / "vampire-fork"
  if ← (sibling / "CMakeLists.txt").pathExists then
    return sibling
  let dir := pkg.buildDir / "vampire"
  let stamp := dir / ".lake-revision"
  -- Nested in two `if`s rather than one `&&`: both actions of an `&&` are run
  -- before it is, so reading the stamp would be attempted before it exists.
  if ← stamp.pathExists then
    if (← IO.FS.readFile stamp) == vampireRev then
      return dir
  IO.println s!"fetching vampire {vampireRev.take 9} from {vampireRepo}"
  IO.FS.createDirAll dir
  unless ← (dir / ".git").pathExists do
    git dir #["init", "--quiet", "."]
    git dir #["remote", "add", "origin", vampireRepo]
  git dir #["fetch", "--quiet", "--depth", "1", "origin", vampireRev]
  git dir #["checkout", "--quiet", "--force", "FETCH_HEAD"]
  git dir (#["submodule", "update", "--init", "--quiet", "--depth", "1"]
    ++ vampireSubmodules)
  IO.FS.writeFile stamp vampireRev
  return dir

def vampireBuildType : String :=
  if get_config? vampireDebug |>.isSome then "Debug" else "Release"

/--
Available memory in GiB, as far as the platform will say.

Linux reports what is available. macOS reports only what is installed, so half
of that stands in for it: the point of asking is to keep the build from being
killed, and guessing low costs some time while guessing high costs the build.
-/
def availableMemoryGiB : BaseIO (Option Nat) := do
  let linux : IO (Option Nat) := do
    let contents ← IO.FS.readFile "/proc/meminfo"
    for line in contents.splitOn "\n" do
      if line.startsWith "MemAvailable:" then
        let digits := line.toList.filter Char.isDigit
        return (String.ofList digits).toNat?.map (· / 1048576)
    return none
  let darwin : IO (Option Nat) := do
    let out ← IO.Process.output { cmd := "sysctl", args := #["-n", "hw.memsize"] }
    if out.exitCode != 0 then return none
    return (out.stdout.trimAscii.toString.toNat?).map (· / 1073741824 / 2)
  let ask := if System.Platform.isOSX then darwin else linux
  match ← ask.toBaseIO with
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
  let vampireDir ← vampireSourceDir pkg
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
