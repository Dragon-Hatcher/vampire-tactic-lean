import Lean.Util.Path
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
  /--
  One strategy to run instead of the schedule, as the tactic reports it.

  The schedule is a few hundred strategies and only the one that succeeds is
  any use, so naming it here is the same run without the ones before it.
  -/
  strategy : String := ""
  /--
  Options forced on every strategy of the schedule, whatever it says.

  Shuffling is off. It permutes a formula's junctions, its quantifiers'
  variables and the sides of its equalities before the search, to give a
  strategy a different run of luck; the proof then speaks of a formula that is
  the goal's under a permutation nothing records, which is no use to replay.

  Unused predicate definition removal is off, because the same pass replaces a
  pure predicate -- one occurring with a single polarity -- by the truth value
  that satisfies its occurrences. That preserves satisfiability, which is all a
  refutation needs, but it is not an entailment: `¬(A ∧ ¬P)` becomes `¬A`,
  which does not follow from it. What makes the step sound is reinterpreting
  `P`, and a proof of the goal as it stands cannot do that, so a proof using
  the step cannot be replayed at all rather than merely not yet.
  -/
  forced : Array (String × String) := #[("si", "off"), ("updr", "off")]
  /-- Further vampire options, as they would be given on its command line. -/
  options : Array (String × String) := #[]
  /-- Path to `vampire-worker`; searched for when absent. -/
  worker? : Option System.FilePath := none
deriving Inhabited

namespace Config

def toArgs (cfg : Config) : Array String :=
  #[s!"time_limit={cfg.timeout}", s!"mode={cfg.mode}", s!"schedule={cfg.schedule}",
    s!"heartbeats={cfg.heartbeats}", s!"wall_limit={cfg.wallLimit}"]
    ++ (if cfg.strategy.isEmpty then #[] else #[s!"strategy={cfg.strategy}"])
    ++ (if cfg.forced.isEmpty then #[] else
      #[s!"forced_options={String.intercalate ":" (cfg.forced.map
        (fun (n, v) => s!"{n}={v}") |>.toList)}"])
    ++ cfg.options.map fun (n, v) => s!"{n}={v}"

end Config

private def workerName : String := "vampire-worker"

private def relativeWorkerPath : System.FilePath :=
  ".lake" / "build" / "cmake" / workerName

/--
Where this package's own build put things, found through the `.olean` this very
module was loaded from: `…/.lake/build/lib/lean/Vampire/Worker.olean` sits four
directories below `…/.lake/build`.

This is what locates the worker for someone who added the library as a
dependency. Their own file is nowhere near it -- searching upwards from the file
being elaborated finds *their* build directory, not this package's.
-/
private def packageBuildDir : IO (Option System.FilePath) := do
  let .ok olean ← (Lean.findOLean `Vampire.Worker).toBaseIO
    | return none
  return olean.parent >>= (·.parent) >>= (·.parent) >>= (·.parent)

/--
Locates `vampire-worker`.

`$VAMPIRE_WORKER` wins. Otherwise it is looked for beside the `.olean` this
module was loaded from, which is where `lake build` of this package put it, and
failing that in the nearest enclosing Lake build directory at or above `start`
-- which is what finds it when the library is the thing being worked on rather
than a dependency.
-/
def findWorker (start : System.FilePath) : IO System.FilePath := do
  if let some path ← IO.getEnv "VAMPIRE_WORKER" then
    return path
  if let some build ← packageBuildDir then
    let candidate := build / "cmake" / workerName
    if ← candidate.pathExists then
      return candidate
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
    throw <| IO.userError s!"could not find {workerName}: this package's build \
      directory holds no `cmake/{workerName}`, and there is none at or above \
      {start}. Run `lake build` in the package that provides the tactic, or \
      set VAMPIRE_WORKER to the binary."

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
