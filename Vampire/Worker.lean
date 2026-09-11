import Vampire.Wire

namespace Vampire

/-- How to run vampire. Options are passed to the worker as `name=value`. -/
structure Config where
  /-- Seconds vampire may spend on the problem, counted in beats. -/
  timeout : Nat := 30
  /--
  Beats a millisecond is taken to be worth, or 0 to leave vampire the clock.

  Vampire counts the steps it takes rather than reading the clock, so what it
  proves depends on the problem alone and not on how fast this machine is or on
  what else it is doing.
  -/
  heartbeats : Nat := 500
  /--
  Seconds of real time after which to give up whatever the beats say, or 0 to
  wait however long they take.

  Beats stand in for time only as well as they are counted, so this is what a
  strategy that spends itself somewhere nobody counted runs into. Reaching it
  is the one outcome that is not reproducible, and it says so.
  -/
  wallLimit : Nat := 60
  /-- Vampire's `mode`. `portfolio` works through a schedule of strategies. -/
  mode : String := "portfolio"
  /-- The strategy schedule `portfolio` mode follows. -/
  schedule : String := "casc"
  /-- Options forced on every strategy of the schedule, whatever it says. -/
  forced : Array (String × String) := #[]
  /-- Further vampire options, as they would be given on its command line. -/
  options : Array (String × String) := #[]
  /-- Path to `vampire-worker`; searched for when absent. -/
  worker? : Option System.FilePath := none
deriving Inhabited

namespace Config

def toArgs (cfg : Config) : Array String :=
  #[s!"time_limit={cfg.timeout}", s!"mode={cfg.mode}", s!"schedule={cfg.schedule}",
    s!"heartbeats={cfg.heartbeats}", s!"wall_limit={cfg.wallLimit}"]
    ++ (if cfg.forced.isEmpty then #[] else
      #[s!"forced_options={String.intercalate ":" (cfg.forced.map
        (fun (n, v) => s!"{n}={v}") |>.toList)}"])
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
    (searchFrom : System.FilePath := ".") :
    IO (Except Error (Proof × String)) := do
  let worker ← match cfg.worker? with
    | some path => pure path
    | none => findWorker searchFrom
  IO.FS.withTempDir fun dir => do
    let problemFile := dir / "problem.p"
    let outFile := dir / "proof.bin"
    IO.FS.writeFile problemFile problem
    -- Run in the directory rather than naming it: vampire writes the path it
    -- was given into the proof, and a temporary directory has a different name
    -- every time.
    let out ← IO.Process.output {
      cmd := (← IO.FS.realPath worker).toString
      cwd := dir
      args := #["problem.p", "proof.bin"] ++ cfg.toArgs
    }
    -- Vampire reports on stdout, so both streams matter when explaining itself.
    let diagnostics :=
      (String.intercalate "\n" ([out.stdout, out.stderr].filter (!·.isEmpty)))
        |>.trimAscii |>.toString
    -- Reaching a limit makes vampire exit non-zero from the beat that reached
    -- it, which is an ordinary outcome, so the file decides the result rather
    -- than the code.
    unless ← outFile.pathExists do
      return .error (.error s!"{workerName} produced no result \
        (exit code {out.exitCode})\n{diagnostics}")
    match Proof.ofByteArray (← IO.FS.readBinFile outFile) with
    | .error e => return .error e
    | .ok proof => return .ok (proof, diagnostics)

end Vampire
