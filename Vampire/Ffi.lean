/-!
# FFI boundary to the embedded Vampire

Everything crossing this boundary is structured: integers now, and Vampire's own term
and clause representations later. Problems, formulas and proofs are never serialised
to text and reparsed — that is precisely what the `--input_syntax`/`--proof leancheck`
route does, and what this exists to replace.

The C++ side is `ffi/vampire_ffi.cpp`, linked against a static archive of Vampire
(`vampire_lib`). Vampire's shared mutable state is audited in
`docs/vampire-global-state.md`; the short version is that `Lib::env` and friends are
process-global and never reset, so this currently supports one prover run per process.
-/

namespace Vampire.Ffi

/-- Status of an FFI call. Mirrors the enum in `ffi/vampire_ffi.cpp`. -/
inductive Status where
  /-- The call succeeded. -/
  | ok
  /-- Vampire's global environment was not constructed. -/
  | noEnv
  /-- A C++ exception escaped into the shim. -/
  | exception
  /-- The C++ side returned a code this side does not know. -/
  | unknown (code : UInt32)
  deriving Repr, DecidableEq, Inhabited

/-- Decode a raw status code from the shim. -/
def Status.ofCode : UInt32 → Status
  | 0 => .ok
  | 1 => .noEnv
  | 2 => .exception
  | c => .unknown c

instance : ToString Status where
  toString
    | .ok => "ok"
    | .noEnv => "vampire environment not constructed"
    | .exception => "C++ exception crossed the FFI boundary"
    | .unknown c => s!"unknown status {c}"

@[extern "lean_vampire_init"]
private opaque initRaw : BaseIO UInt32

@[extern "lean_vampire_archive_id"]
private opaque archiveIdRaw : BaseIO String

/-- Which build of Vampire the shim was compiled and linked against, as a hash of the
archive. The answer to "is the tactic running the fix I just built?", which is not
otherwise visible: see `archiveIdFlag` in `lakefile.lean` for why it exists at all. -/
def archiveId : BaseIO String := archiveIdRaw

@[extern "lean_vampire_signature_functions"]
private opaque signatureFunctionsRaw : BaseIO UInt32

@[extern "lean_vampire_signature_type_cons"]
private opaque signatureTypeConsRaw : BaseIO UInt32

@[extern "lean_vampire_reset"]
private opaque resetRaw : BaseIO UInt32

@[extern "lean_vampire_selftest_dirty"]
private opaque selftestDirtyRaw : BaseIO UInt32

@[extern "lean_vampire_start_clock"]
private opaque startClockRaw : BaseIO UInt32

@[extern "lean_vampire_thread_count"]
private opaque threadCountRaw : BaseIO UInt32

@[extern "lean_vampire_max_concurrent"]
private opaque maxConcurrentRaw : BaseIO UInt32

/--
Start Vampire's clock for a run.

Note this is not `Timer::reinitialise`: that spawns a thread which `_Exit`s the process
when the time limit is hit. An embedded run bounds itself with a soft time limit, which
throws from the search loop instead.
-/
def startClock : BaseIO Status := do
  return Status.ofCode (← startClockRaw)

/-- How many distinct OS threads have entered the FFI. -/
def threadCount : BaseIO UInt32 := threadCountRaw

/-- High-water mark of concurrent FFI entries. `> 1` means Vampire was entered in
parallel, which its global state cannot survive. -/
def maxConcurrent : BaseIO UInt32 := maxConcurrentRaw

/-- Confirm the embedded prover is linked and its environment is live. -/
def init : BaseIO Status := do
  return Status.ofCode (← initRaw)

/-- Number of function symbols in Vampire's current signature. -/
def signatureFunctions : BaseIO UInt32 := signatureFunctionsRaw

/-- Number of type constructors (sorts) in Vampire's current signature. -/
def signatureTypeCons : BaseIO UInt32 := signatureTypeConsRaw

/--
Reset Vampire's process-global state so another problem can be solved.

Runs must be sequential: the state is global, so this makes the library reusable,
not re-entrant.
-/
def reset : BaseIO Status := do
  return Status.ofCode (← resetRaw)

/-- Self-test: add a fresh function symbol, returning the new symbol count. -/
def selftestDirty : BaseIO UInt32 := selftestDirtyRaw

/--
Why a run stopped. Mirrors `Shell::Statistics::TerminationReason`, enumerator by
enumerator, and is read back with `lean_vampire_termination`.
-/
inductive Termination where
  | refutation
  | satisfiable
  /-- The search space was exhausted, but under a strategy that discards clauses — so
  what it exhausted was not the whole space. -/
  | refutationNotFound
  | inappropriate
  | unknown
  | timeLimit
  | instructionLimit
  | memoryLimit
  | activationLimit
  /-- A code this side does not know. -/
  | other (code : UInt32)
  deriving Repr, DecidableEq, Inhabited

/-- Decode a raw termination reason from the shim. -/
def Termination.ofCode : UInt32 → Termination
  | 0 => .refutation      | 1 => .satisfiable     | 2 => .refutationNotFound
  | 3 => .inappropriate   | 4 => .unknown         | 5 => .timeLimit
  | 6 => .instructionLimit | 7 => .memoryLimit    | 8 => .activationLimit
  | c => .other c

instance : ToString Termination where
  toString
    | .refutation => "refutation" | .satisfiable => "satisfiable"
    | .refutationNotFound => "refutation not found" | .inappropriate => "inappropriate"
    | .unknown => "unknown" | .timeLimit => "time limit"
    | .instructionLimit => "instruction limit" | .memoryLimit => "memory limit"
    | .activationLimit => "activation limit" | .other c => s!"code {c}"

/--
Whether a bigger budget could turn this outcome into a refutation.

A run stopped by a limit obviously could. So could one that reports the space exhausted
*under a strategy that discards clauses*: the default saturation algorithm is the
limited-resource strategy, which uses the time limit to estimate which clauses it can
still reach and throws away the rest, so a tighter limit is a different — and
incomplete — search. Saturating without discarding anything is the one outcome that
says the problem itself has no refutation, and no budget changes that.
-/
def Termination.mightYieldToMore : Termination → Bool
  | .satisfiable | .inappropriate | .refutation => false
  | _ => true

/-- What a whole run did. -/
inductive RunResult where
  /-- A refutation was found and exported. -/
  | refuted
  /-- The search finished without one. -/
  | notRefuted
  /-- Something went wrong; the message says what. -/
  | failed (what : String)
  /-- The strategy is not one this build of Vampire can run — a hard constraint between
  its options, or one that needs a feature this build was compiled without. A reason to
  try the next strategy rather than to give up on the goal. -/
  | badStrategy (what : String)
  /-- A refutation was found and could not be read back out: it holds a step the
  exporter has nothing to say about. A fact about *this* refutation, so like a replay
  failure it is a reason to look for another one. -/
  | notExported (what : String)
  deriving Repr, DecidableEq, Inhabited

@[extern "lean_vampire_run"]
private opaque runRaw : (@& Array String) → (@& Array UInt32) → UInt32 → (@& String) →
  BaseIO UInt32

@[extern "lean_vampire_message"]
private opaque messageRaw : BaseIO String

@[extern "lean_vampire_termination"]
private opaque terminationRaw : BaseIO UInt32

@[extern "lean_vampire_build_ms"]
private opaque buildMsRaw : BaseIO UInt32

@[extern "lean_vampire_clausify_ms"]
private opaque clausifyMsRaw : BaseIO UInt32

@[extern "lean_vampire_search_ms"]
private opaque searchMsRaw : BaseIO UInt32

@[extern "lean_vampire_export_ms"]
private opaque exportMsRaw : BaseIO UInt32

@[extern "lean_vampire_problem_size"]
private opaque problemSizeRaw : BaseIO UInt32

@[extern "lean_vampire_problem_unit"]
private opaque problemUnitRaw : UInt32 → BaseIO String

@[extern "lean_vampire_proof_outline"]
private opaque proofOutlineRaw : BaseIO String

@[extern "lean_vampire_proof_code"]
private opaque proofCodeRaw : BaseIO (Array UInt32)

@[extern "lean_vampire_proof_names"]
private opaque proofNamesRaw : BaseIO (Array String)

/--
Build the problem, solve it, and export the refutation — the whole run, in one call.

Not three calls, because the entry lock makes a call atomic but not a sequence of them:
Lean elaborates declarations in parallel, and another thread's build would otherwise be
able to land between this thread's build and its solve. What the run produces is read
back afterwards from per-thread buffers, which hold plain numbers and strings copied out
of Vampire's structures.

`deciseconds` bounds the search with a soft time limit, which throws out of the loop
rather than killing the process.

`strategy` is one encoded line of a Vampire schedule — `Options::readFromEncodedOptions`
reads it — or the empty string for Vampire's default strategy. A call is a whole run
under one strategy, because the environment is rebuilt on the way in; a portfolio is
therefore a sequence of calls and the schedule that orders them lives on this side, in
`Vampire/Tactic.lean`. What the strategy may *not* change is the proof output the replay
is written against; those options are set after it.
-/
def run (names : Array String) (code : Array UInt32) (deciseconds : UInt32 := 100)
    (strategy : String := "") : BaseIO RunResult := do
  match ← runRaw names code deciseconds strategy with
  | 0 => return .refuted
  | 1 => return .notRefuted
  | 3 => return .failed s!"the problem could not be built: {← messageRaw}"
  | 4 => return .notExported (← messageRaw)
  | 5 => return .badStrategy (← messageRaw)
  | _ => return .failed (← messageRaw)

@[extern "lean_vampire_schedule"]
private opaque scheduleRaw : (@& Array String) → (@& Array UInt32) → BaseIO UInt32

@[extern "lean_vampire_schedule_codes"]
private opaque scheduleCodesRaw : BaseIO (Array String)

@[extern "lean_vampire_schedule_times"]
private opaque scheduleTimesRaw : BaseIO (Array UInt32)

/-- One strategy of a portfolio schedule. -/
structure Slice where
  /-- The strategy, encoded as Vampire's own schedules write it. -/
  strategy : String
  /-- What the schedule intends it to have, in deciseconds; `0` for a strategy with no
  limit of its own, which means whatever is left of the budget. -/
  deciseconds : UInt32
  deriving Repr, Inhabited

/--
Vampire's own portfolio schedule for this problem.

The schedule is a function of the problem and not just of a name — `--schedule casc`
branches on the problem's `Property`, so a unit-equality problem gets a different set of
strategies from a general first-order one — so this takes the compiled problem, builds
it, and reads the schedule off it.

Only the `quick` half: the `champions` are long runs meant to occupy a worker of their
own, and there is one worker here. This is `--mode portfolio --schedule casc --cores 1`,
with the loop over slices on the Lean side so that it can escalate on a *replay* failure
as well as on a search failure.
-/
def schedule (names : Array String) (code : Array UInt32) :
    BaseIO (Except String (Array Slice)) := do
  match ← scheduleRaw names code with
  | 0 =>
    let codes ← scheduleCodesRaw
    let times ← scheduleTimesRaw
    return .ok (Array.zipWith (fun s ds => { strategy := s, deciseconds := ds }) codes times)
  | _ => return .error (← messageRaw)

@[extern "lean_vampire_prover_output"]
private opaque proverOutputRaw : BaseIO String

/-- Anything the prover wrote to its own `stdout`/`stderr`.

It is captured rather than let through: embedded in the elaborator it would surface in
the editor as "Lean server printed an error", for text that is usually a note about
strategy rather than a problem. `set_option trace.vampire.prover true` shows it. -/
def proverOutput : BaseIO String := proverOutputRaw

/-- Why the last run found no refutation — Vampire's own explanation. -/
def message : BaseIO String := messageRaw

/-- Why the last run stopped. -/
def termination : BaseIO Termination := do
  return Termination.ofCode (← terminationRaw)

/-- Where a run's time went, in milliseconds. -/
structure Phases where
  /-- Turning the instruction stream into Vampire's own units. -/
  build : UInt32
  /-- `Shell::Preprocess`: normal forms, definition introduction, clausification. -/
  clausify : UInt32
  /-- The saturation loop. -/
  search : UInt32
  /-- Reading the refutation back out. Scales with the size of the proof rather than
  with the difficulty of finding it, so it is the phase that grows when a problem gets
  easier to solve and harder to replay. -/
  export_ : UInt32
  deriving Repr, Inhabited

instance : ToString Phases where
  toString p := s!"built in {p.build}ms, clausified in {p.clausify}ms, \
    searched in {p.search}ms, exported in {p.export_}ms"

/--
Where the last run's time went.

Worth separating because only the last of the three is bounded. The soft time limit is
checked in `SaturationAlgorithm::runImpl` and nowhere else, so `vampire.timeout` bounds
the *search* — a problem whose clausification runs away is not stopped by it and, from
the outside, looks exactly like a slow search.
-/
def phases : BaseIO Phases := do
  return { build := ← buildMsRaw, clausify := ← clausifyMsRaw,
           search := ← searchMsRaw, export_ := ← exportMsRaw }

/-- How many units the last run's problem had. -/
def problemSize : BaseIO UInt32 := problemSizeRaw

/-- Vampire's own rendering of unit `i` of the last run's problem.

Text, but going the other way: this is what Vampire says it received, which is evidence
about the transfer rather than the medium of it. -/
def problemUnit (i : UInt32) : BaseIO String := problemUnitRaw i

/-- A one-line-per-step outline of the last refutation, for diagnostics. -/
def proofOutline : BaseIO String := proofOutlineRaw

/-- The exported refutation, as the stream and the names it indexes. -/
def exportedProof : BaseIO (Array UInt32 × Array String) := do
  return (← proofCodeRaw, ← proofNamesRaw)

end Vampire.Ffi
