import Vampire.Wire

namespace Vampire

/-- How to run vampire. Options are passed to the worker as `name=value`. -/
structure Config where
  /-- Seconds vampire may spend on the problem. -/
  timeout : Nat := 30
  /-- Vampire's `mode`. `portfolio` works through a schedule of strategies. -/
  mode : String := "portfolio"
  /-- The strategy schedule `portfolio` mode follows. -/
  schedule : String := "casc"
  /-- Further vampire options, as they would be given on its command line. -/
  options : Array (String × String) := #[]
  /-- Path to `vampire-worker`; searched for when absent. -/
  worker? : Option System.FilePath := none
deriving Inhabited

namespace Config

def toArgs (cfg : Config) : Array String :=
  #[s!"time_limit={cfg.timeout}", s!"mode={cfg.mode}", s!"schedule={cfg.schedule}"]
    ++ cfg.options.map fun (n, v) => s!"{n}={v}"

end Config

private def workerName : String := "vampire-worker"

private def relativeWorkerPath : System.FilePath :=
  ".lake" / "build" / "cmake" / workerName

/--
Locates `vampire-worker`: `$VAMPIRE_WORKER`, else the nearest enclosing Lake
build directory at or above `start`.
-/
def findWorker (start : System.FilePath) : IO System.FilePath := do
  if let some path ← IO.getEnv "VAMPIRE_WORKER" then
    return path
  let start ← IO.FS.realPath start
  let rec search (dir : System.FilePath) (fuel : Nat) : IO (Option System.FilePath) := do
    match fuel with
    | 0 => return none
    | fuel + 1 =>
      let candidate := dir / relativeWorkerPath
      if ← candidate.pathExists then
        return some candidate
      match dir.parent with
      | some parent => search parent fuel
      | none => return none
  match ← search start 64 with
  | some path => return path
  | none =>
    throw <| IO.userError s!"could not find {workerName} at or above {start}; \
      run `lake build`, or set VAMPIRE_WORKER"

/--
Runs vampire on a TPTP problem and decodes its proof.

`searchFrom` is where the search for `vampire-worker` starts; pass the directory
of the file being elaborated.
-/
def prove (problem : String) (cfg : Config := {})
    (searchFrom : System.FilePath := ".") : IO (Except Error Proof) := do
  let worker ← match cfg.worker? with
    | some path => pure path
    | none => findWorker searchFrom
  IO.FS.withTempDir fun dir => do
    let problemFile := dir / "problem.p"
    let outFile := dir / "proof.bin"
    IO.FS.writeFile problemFile problem
    let out ← IO.Process.output {
      cmd := worker.toString
      args := #[problemFile.toString, outFile.toString] ++ cfg.toArgs
    }
    if out.exitCode != 0 then
      return .error (.error s!"{workerName} exited with code {out.exitCode}\n\
        {out.stderr.trimAscii}")
    unless ← outFile.pathExists do
      return .error (.error s!"{workerName} wrote no proof\n{out.stderr.trimAscii}")
    return Proof.ofByteArray (← IO.FS.readBinFile outFile)

end Vampire
