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

## 6. Caches held in function-local statics

Easy to miss, and the reason a naive `Environment::reset()` segfaults. `Kernel/Term.cpp`
cached the FOOL constants and all five built-in sorts this way:

```cpp
TermList AtomicSort::defaultSort(){
  static AtomicSort* _default = createConstant(env.signature->getDefaultSort());
  return TermList(_default);
}
```

Initialised once per process. After the environment is rebuilt these point into a freed
signature and term-sharing table, and because the static is already initialised the
stale pointer is returned for the rest of the process's life. They are file-scope
pointers now, filled lazily, and `Term::resetBuiltinCache()` drops them.

Others of this shape that are *not* yet handled, because nothing has needed them:
`Clause.cpp:218` (`static Clause* selected`), `TermIterators.cpp:154`,
`LookaheadLiteralSelector.cpp:266`, `Term.cpp:1689` (`static RobSubstitution
checkSortSubst`), `TermPartialOrdering.cpp:127`, and `Perfect<T>::_ids`
(`Lib/Perfect.hpp:44`), a global interning map. These hold scratch state rather than
signature-dependent objects, but any of them could bite the same way.

## 7. Threading: Lean elaborates in parallel

`Elab.async` (`Lean/CoreM.lean:35`) defaults to `false`, but its own description says it
"is overridden to `true` in the Lean language server and cmdline" — so it is on in the
editor and in `lake build`. Declarations within one file elaborate concurrently.

Measured, on a file of 16 goals each calling the tactic:

| | distinct threads | max concurrent |
|---|---:|---:|
| default | 7 | **3** |
| `set_option Elab.async false` | 1 | 1 |

So the tactic really is entered from several OS threads, several at once. Vampire cannot
survive that: every item in sections 2–6 is process-global, and it is compiled with
`-fno-threadsafe-statics`, so even the lazy initialisation of the built-in sort cache
races.

The FFI therefore takes a `std::recursive_mutex` on every entry point. `Test/Concurrency.lean`
asserts the result — many threads reach the tactic, one is inside Vampire at a time:

    distinct threads entering the FFI : 6
    max concurrent entries            : 1

The cost is that a long proof search blocks any other elaboration thread that reaches
the tactic. Recovering that parallelism means moving Vampire's state into a per-run
context, which is a much larger change than the reset.

## Consequences for the FFI

1. **Reusable, not re-entrant.** `Lib::resetGlobalState()` (`Lib/Reset.cpp`) restores
   the state above, so a process can solve many problems — sequentially. The state is
   still global, so concurrent runs are not possible.
2. **The shim must not call the `vampire.cpp` setup.** Signal handlers and `setrlimit`
   are the dangerous ones.
3. **No exception may cross the boundary**, and `exit()` on the proof path has to go.
4. **Entry is serialised.** Lean elaborates in parallel (section 7), so the shim holds a
   global lock for the duration of every call.
5. **Determinism is restored by the reset** (`Random::_seed` and the unit counters are
   both reset), but the allocator's pools are not, so a long-lived process grows.
