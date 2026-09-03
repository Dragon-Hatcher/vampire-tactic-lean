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
  /-- The instruction stream handed to the problem builder was malformed. -/
  | malformed
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
    | .malformed => "the problem builder was given a malformed instruction stream"
    | .unknown c => s!"unknown status {c}"

@[extern "lean_vampire_init"]
private opaque initRaw : BaseIO UInt32

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

/-- The problem builder failed to walk the instruction stream: a bug in
`Vampire/Translate/Build.lean` rather than something a goal can provoke. -/
def Status.ofBuildCode : UInt32 → Status
  | 0 => .ok
  | 2 => .exception
  | 3 => .malformed
  | c => .unknown c

@[extern "lean_vampire_build"]
private opaque buildRaw : (@& Array String) → (@& Array UInt32) → BaseIO UInt32

@[extern "lean_vampire_build_error"]
private opaque buildErrorRaw : BaseIO String

@[extern "lean_vampire_problem_size"]
private opaque problemSizeRaw : BaseIO UInt32

@[extern "lean_vampire_problem_unit"]
private opaque problemUnitRaw : UInt32 → BaseIO String

@[extern "lean_vampire_solve"]
private opaque solveRaw : UInt32 → BaseIO UInt32

/--
Build a problem in Vampire from a compiled instruction stream.

The whole problem crosses in one call. The entry lock makes a call atomic but not a
sequence of them, and the signature being built into is process-global, so a build
spread over many calls could be interleaved by another elaboration thread.

This resets Vampire's global state first, so it discards any problem already there.
-/
def build (names : Array String) (code : Array UInt32) : BaseIO Status := do
  return Status.ofBuildCode (← buildRaw names code)

/-- The message from the last failed `build`. -/
def buildError : BaseIO String := buildErrorRaw

/-- How many units the built problem has. -/
def problemSize : BaseIO UInt32 := problemSizeRaw

/-- Vampire's own rendering of unit `i` of the built problem.

Text, but going the other way: this is what Vampire says it received, which is evidence
about the transfer rather than the medium of it. -/
def problemUnit (i : UInt32) : BaseIO String := problemUnitRaw i

/-- Preprocess and saturate the built problem. `deciseconds` bounds the search with a
soft time limit, which throws out of the loop rather than killing the process. -/
def solve (deciseconds : UInt32 := 100) : BaseIO (Option Bool) := do
  match ← solveRaw deciseconds with
  | 0 => return some Bool.false
  | 1 => return some Bool.true
  | _ => return none

@[extern "lean_vampire_solve_reason"]
private opaque solveReasonRaw : BaseIO String

/-- Why the last solve found no refutation — Vampire's own explanation. -/
def solveReason : BaseIO String := solveReasonRaw

@[extern "lean_vampire_proof_outline"]
private opaque proofOutlineRaw : BaseIO String

/-- A one-line-per-step outline of the last refutation, for diagnostics. -/
def proofOutline : BaseIO String := proofOutlineRaw

end Vampire.Ffi
