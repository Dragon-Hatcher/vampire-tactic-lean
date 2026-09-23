import Lean.Util.Path
import VampireReplay.Spawn
import VampireReplay.Wire

namespace Vampire

/-- How to run vampire. Options are passed to the worker as `name=value`. -/
structure Config where
  /--
  Time limit for the search in seconds, for each of the `cores` strategies
  running at once. It is measured in beats (see `heartbeats`), not on the clock:
  the schedule is given `timeout × cores` seconds' worth, which the strategies
  running at once share, so the search takes about `timeout` seconds of real
  time.
  -/
  timeout : Nat := 30
  /--
  How many beats count as one millisecond of `timeout`, or 0 to use the clock.

  Beats are steps vampire counts as it searches, so limits do not depend on the
  speed or load of the machine.
  -/
  heartbeats : Nat := 500
  /--
  Real-time limit in seconds, or 0 for none. It catches work that beats do not
  count. This is the one limit that is not reproducible; a run that reaches it
  says so.
  -/
  wallLimit : Nat := 60
  /-- Vampire's `mode`. `portfolio` works through a schedule of strategies. -/
  mode : String := "portfolio"
  /-- The strategy schedule `portfolio` mode follows. -/
  schedule : String := "casc"
  /--
  How many strategies of the schedule run at once. Among the strategies the
  search reaches, the earliest in the schedule that succeeds wins, with the
  budget it would get running alone, so how many run at once does not change
  which proof a strategy finds; more of them reach further within `timeout`.
  -/
  cores : Nat := 4
  /--
  One strategy to run instead of the schedule, in the form the tactic suggests.
  Naming the strategy that found a proof gives the same proof without running
  the strategies before it.
  -/
  strategy : String := ""
  /--
  Options set on every strategy of the schedule, overriding what it says.

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

  Global subsumption and backward subsumption demodulation are off because the
  vampire this is built from keeps nothing of how they used their premises:
  one stands on a propositional proof it discards, and the other, unlike its
  forward twin, records no substitution. A step of either could only be
  admitted.
  -/
  forced : Array (String × String) :=
    #[("si", "off"), ("updr", "off"), ("gs", "off"), ("bsd", "off")]
  /-- Extra vampire options, as `(name, value)` pairs of its command line. -/
  options : Array (String × String) := #[]
  /-- Path to `vampire-worker`; searched for when absent. -/
  worker? : Option System.FilePath := none
deriving Inhabited

namespace Config

def toArgs (cfg : Config) : Array String :=
  #[s!"time_limit={cfg.timeout * max 1 cfg.cores}", s!"mode={cfg.mode}",
    s!"schedule={cfg.schedule}",
    s!"heartbeats={cfg.heartbeats}", s!"wall_limit={cfg.wallLimit}", s!"cores={cfg.cores}"]
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
module was loaded from. That file is `…/.lake/build/lib/lean/Vampire/Worker.olean`,
so its fourth parent (`Vampire`, `lean`, `lib`, then `build`) is `…/.lake/build`.
This follows from the module name `Vampire.Worker` and Lake's `lib/lean` layout.

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
  -- Upwards until the root, which has no parent. `start` is a real path, so
  -- each parent is strictly shorter and the loop ends.
  let search : IO (Option System.FilePath) := do
    let mut dir := start
    repeat
      let candidate := dir / relativeWorkerPath
      if ← candidate.pathExists then
        return some candidate
      match dir.parent with
      | some parent => dir := parent
      | none => return none
    return none
  match ← search with
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
    -- The worker changes into the problem's directory itself before reading
    -- it, because vampire writes the path it was given into the proof and a
    -- temporary directory has a different name every time.
    let outPath := dir / "stdout"
    let errPath := dir / "stderr"
    let exitCode ← VampireReplay.spawn (← IO.FS.realPath worker).toString
      (#[problemFile.toString, outFile.toString] ++ cfg.toArgs)
      outPath.toString errPath.toString
    -- Vampire reports on stdout, so both streams matter when explaining itself.
    let said (path : System.FilePath) : IO String := do
      if ← path.pathExists then IO.FS.readFile path else return ""
    let diagnostics :=
      (String.intercalate "\n"
        ([← said outPath, ← said errPath].filter (!·.isEmpty)))
        |>.trimAscii |>.toString
    -- Reaching a limit makes vampire exit non-zero from the beat that reached
    -- it, which is an ordinary outcome, so the file decides the result rather
    -- than the code.
    unless ← outFile.pathExists do
      return .error ⟨s!"{workerName} produced no result \
        (exit code {exitCode})\n{diagnostics}"⟩
    match Proof.ofByteArray (← IO.FS.readBinFile outFile) with
    | .error e => return .error e
    | .ok proof => return .ok (proof, diagnostics)

end Vampire
