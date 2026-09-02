# Vampire's global state

Vampire is written as a one-shot executable: it starts, solves one problem, and the OS
reclaims everything. Embedding it in Lean breaks both halves of that assumption — the
process outlives a run, and there may be many runs. This is the audit of shared mutable
state that constrains how the FFI can be used.

Paths are relative to the Vampire checkout.

## 1. Process-level setup that a library must not perform

All three live in `vampire.cpp` main, not in the core, so an entry point that simply
does not call them is safe. This is why the shim can link the archive directly.

| What | Where | Why it matters |
|---|---|---|
| `System::setSignalHandlers()` | `vampire.cpp:648`, `Lib/System.cpp:126` | Installs handlers for `SIGSEGV`, `SIGINT`, `SIGABRT`, `SIGTERM`, `SIGFPE`, `SIGBUS`, … Would hijack Lean's own signal handling. |
| `Lib::setMemoryLimit(...)` | `vampire.cpp:677`, `Lib/Allocator.cpp:43` | `setrlimit(RLIMIT_DATA, …)` is process-wide: it would clamp Lean's heap, not Vampire's. |
| `Timer::reinitialise()` | `vampire.cpp:687` | Sets `START_TIME` and opens a `perf_event` fd (`PERF_FD`). Wall-clock and instruction limits are relative to it. |

## 2. The master global

`Lib::env` (`Lib/Environment.hpp:89`, `extern Environment env`) owns:

- `options` — `Shell::Options*`
- `signature` — `Kernel::Signature*`
- `sharing` — `Indexing::TermSharing*` (the term hash-cons table)
- `statistics` — `Shell::Statistics*`
- `proofExtra` — `ProofExtra`, the per-inference metadata map
- `_problem` — `Kernel::Problem*`
- `colorUsed`, `reconstruction`, `maxSineLevel`, `predicateSineLevels`, `_higherOrder`

Its constructor allocates options, statistics, signature and sharing, and registers the
built-in sorts **in a fixed order that the rest of the code depends on** (`$i` is type
constructor 0, `$o` is 1, …). Because it is a global, this happens during static
initialisation — the environment is already live before any Lean code runs, which is
what `lean_vampire_init` confirms.

Nothing resets it. A second problem in the same process would inherit the first one's
signature and term sharing table.

## 3. Other mutable globals

| Symbol | Where | Notes |
|---|---|---|
| `Lib::GLOBAL_SMALL_OBJECT_ALLOCATOR` | `Lib/Allocator.cpp:25` | Global pool. Memory is not returned between runs. |
| `Kernel::theory`, `Theory::theory_obj` | `Kernel/Theory.hpp:699`, `Kernel/Theory.cpp:422` | Interpreted-symbol registry. |
| `Ordering::s_globalOrdering` | `Kernel/Ordering.cpp:52` | Term ordering, installed per run. |
| `Unit::_lastNumber`, `_firstNonPreprocessingNumber`, `_lastParsingNumber` | `Kernel/Unit.cpp:37-39` | Unit numbering counters; monotonic, never reset. Proof step names derive from these. |
| `Clause::_auxCurrTimestamp`, `_auxInUse` | `Kernel/Clause.cpp:51,53` | Scratch marking on clauses; asserts if two users overlap. |
| `Random::_seed` | `Lib/Random.cpp:22` | Determinism across runs depends on this. |
| `Formula::DEFAULT_LABEL` | `Kernel/Formula.cpp:26` | |
| `MLMatcher matcher` | `Kernel/MLMatcher.cpp:736` | File-scope matcher instance, reused. |
| `outputBoolOperators` | `Shell/LeanChecker/LeanPrinter.hpp:22` | leancheck printer flag. |
| `replayer` | `Shell/SMTCheck.hpp:23` | |
| `PERF_FD`, `LAST_INSTRUCTION_COUNT_READ`, `START_TIME`, `EXIT_LOCK` | `Lib/Timer.cpp:41,42,61,115` | |
| `TERMINAL_SIGNAL_HANDLED` | `Lib/System.cpp:70` | |
| `kGtPtr`, `kEqPtr`, `kLtPtr` | `Kernel/TermOrderingDiagram.cpp:28-30` | |
| `static thread_local std::mt19937 gen(123)` | `SATSubsumption/subsat/constraint.hpp:226` | The only `thread_local` in the tree. |

## 4. Singletons

`InferenceRecorder::instance()` (`Shell/InferenceRecorder.hpp:53`),
`InferenceStore::instance()` (`Kernel/InferenceStore.hpp:43`),
`Theory::instance()` (`Kernel/Theory.hpp:514`),
`TimeTrace::instance()` (`Debug/TimeProfiling.hpp:160`),
`RuntimeStatistics::instance()` (`Debug/RuntimeStatistics.hpp:154`).

`InferenceStore` in particular accumulates the proof of every run.

## 5. Calls that terminate the process

`exit()` in a library kills Lean. Live sites:

- `Shell/CommandLine.cpp:75,86` — only on `--help`/`--version`, not reachable from the FFI.
- `Shell/LeanChecker/LeanChecker.cpp:702` — `exit(10)` on `PROBLEM IN DEMODULATION`.
  Reachable, and must become an exception before the proof-generation path is driven
  over the FFI.

`USER_ERROR` throws rather than exits, so ordinary input errors are recoverable — but
the exception must not be allowed to unwind across the FFI boundary into Lean. The shim
catches everything and returns a status code.

## Consequences for the FFI

1. **One prover run per process, for now.** Nothing resets `env`, the signature, term
   sharing, `InferenceStore`, or the unit counters. Supporting repeated calls needs
   either a reset entry point or moving this state into a context object.
2. **The shim must not call the `vampire.cpp` setup.** Signal handlers and `setrlimit`
   are the dangerous ones.
3. **No exception may cross the boundary**, and `exit()` on the proof path has to go.
4. **Determinism is process-global** (`Random::_seed`, unit counters), so a second run
   would not reproduce the first even given the same input.
