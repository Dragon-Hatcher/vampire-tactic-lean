import Lake

open Lake DSL System

package vampire

require "leanprover-community" / "mathlib" @ git "v4.33.0"
require "leanprover-community" / "auto" @ git "v4.33.0"

-- Replay, in a package of its own so that it can be precompiled; see
-- `replay/lakefile.lean`.
require vampireReplay from "replay"

/-- The vampire the tactic builds and runs. -/
def vampireRepo : String :=
  "https://github.com/Dragon-Hatcher/vampire-tactic-vampire.git"

/-- The revision of `vampireRepo` the tactic builds. -/
def vampireRev : String := "178b11a681718a23cbe450d47242f8575d62cdbd"

/--
The submodules vampire's build needs.

`z3` is not among them: vampire uses z3 only if it finds one already built, and
it is the bulk of the repository.
-/
def vampireSubmodules : Array String := #["cadical"]

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
What the vampire checkout is at, for a checkout being worked in.

A pinned revision is fetched once and never changes, but `VAMPIRE_DIR` and a
sibling checkout are somebody's working tree: the build has to notice when it
has been edited, and lake will not re-run a target whose inputs it does not
know. So the revision and `git diff HEAD` -- the content of every change to a
tracked file on top of it -- are taken as the input. Untracked files are not.
-/
private def vampireState (dir : FilePath) : BaseIO String := do
  let ask (args : Array String) : IO String := do
    let out ← IO.Process.output { cmd := "git", args, cwd := dir.toString }
    if out.exitCode != 0 then error "not a checkout" else return out.stdout
  match ← (do return (← ask #["rev-parse", "HEAD"]) ++ (←
      ask #["diff", "--no-ext-diff", "HEAD"])).toBaseIO with
  | .ok state => return state
  | .error _ => return ""

/--
Builds vampire. `cmake` handles incrementality, so this runs whenever the
checkout it builds from has moved, and reports a trace over the resulting
binary.

Two link settings are given here rather than being vampire's defaults, both
about how the tactic runs it -- one short process per call:

- Nothing links against vampire or loads it, so it exports nothing. A C++
  executable otherwise exports its thousands of weak definitions, and dyld
  looks each one up in the export trie on every launch: more than half of
  vampire's start-up, about 4ms of 7ms on an M-series Mac. On Linux an
  executable exports nothing unless asked to.
- Link-time optimization: vampire's hot paths call small functions defined in
  other files (ordering, substitution, the beat counter), which only the
  linker can inline. About 4% off a search, the same search, and nothing off
  what it finds.
-/
target «vampire-binary» pkg : FilePath := Job.async do
  let vampireDir ← vampireSourceDir pkg
  -- Declared before the build so that editing the checkout re-runs it.
  addTrace (.ofHash (Hash.ofString (← vampireState vampireDir)))
  let cmakeDir := pkg.buildDir / "vampire-build"
  let exe := cmakeDir / "vampire"
  let linkFlags := if System.Platform.isOSX then "-Wl,-no_exported_symbols" else ""
  proc (quiet := true) {
    cmd := "cmake"
    args := #[
      "-S", vampireDir.toString,
      "-B", cmakeDir.toString,
      s!"-DCMAKE_BUILD_TYPE={vampireBuildType}",
      s!"-DCMAKE_INTERPROCEDURAL_OPTIMIZATION={if vampireBuildType == "Release" then "ON" else "OFF"}",
      s!"-DCMAKE_EXE_LINKER_FLAGS={linkFlags}"
    ]
  }
  proc {
    cmd := "cmake"
    args := #["--build", cmakeDir.toString, "--target", "vampire",
              "--parallel", ← cmakeParallelLevel]
  }
  addTrace <| .ofHash (← computeFileHash exe)
  return exe

@[default_target]
lean_lib Vampire where
  needs := #[«vampire-binary»]

@[test_driver]
lean_lib test where
  globs := #[.submodules `test]

/--
Elaborates the corpus under `problems/` and reports what failed: all of it by
default, or what the arguments name -- a directory of it, problem names, or
`--split` and a file of `scripts/splits/`. `lake test` runs the `smoke` split.
-/
script problems (args) do
  let child ← IO.Process.spawn {
    cmd := "python3", args := #["scripts/run-problems.py"] ++ args.toArray }
  return (← child.wait).toUInt8.toUInt32
