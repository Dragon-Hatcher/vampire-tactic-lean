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

`System::terminateImmediately` (`Lib/System.hpp:36`) is `std::_Exit` — no unwinding, no
destructors, no diagnostics. In a library it is instant death for the host. Every
remaining path to it is now behind something an embedded Vampire does not invoke:

| Site | Reachable? |
|---|---|
| `Lib/System.cpp:93,119` | only from the signal handlers, which `setSignalHandlers()` installs and we never call |
| `Lib/Timer.cpp:112` | only from `timer_thread`, which only exists if `Timer::reinitialise()` is called — see section 8 |
| `Shell/CommandLine.cpp:75,86` | `--help`/`--version` only |
| `Shell/LeanChecker/LeanChecker.cpp:702` | **was** `exit(10)` on missing demodulation replay info; now throws `InvalidOperationException` |

`USER_ERROR` throws rather than exits, so ordinary input errors are recoverable — but no
exception may unwind across the FFI boundary into Lean. The shim catches everything and
returns a status code.

## 8. The timeout mechanism kills the process

This is the one that would have been hardest to diagnose in the field, because it only
fires on hard problems.

`Timer::reinitialise()` (`Lib/Timer.cpp`) ends with:

```cpp
std::thread(timer_thread).detach();
```

`timer_thread` is `[[noreturn]]`, loops forever, and when the time or instruction limit
is reached calls `limitReached`, which prints an SZS status and finishes with
`System::terminateImmediately(1)`. Embedded, that means **a Vampire timeout terminates
Lean** — with no exception, no stack, and no way to catch it. The thread is also
detached and never stops, so it outlives the run and a second `reinitialise()` spawns
another.

There is a second, cooperative path, and it is the one to use.
`SaturationAlgorithm::runImpl` polls in the search loop:

```cpp
if(_softTimeLimit && Timer::elapsedDeciseconds() - startTime > _softTimeLimit)
  throw TimeLimitExceededException();
```

which `ProvingHelper` and `MainLoop` already catch. It is set programmatically with
`SaturationAlgorithm::setSoftTimeLimit(deciseconds)`.

So an embedded run must:

1. call `Timer::startClock()`, added here, which sets `START_TIME` **without** spawning
   the thread — the clock is still needed because elapsed readings are relative to it;
2. never call `Timer::reinitialise()`;
3. bound itself with `setSoftTimeLimit`.

Note the soft check compares a *difference* from the loop's own start, so it stays
correct regardless of when the clock was started.

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

`TermPartialOrdering.cpp` had two of the same shape and they did bite — this is the one
that made the second large problem in a process segfault:

```cpp
static TermPartialOrdering empty(ord);                       // getEmpty
static DHMap<tuple<...>, const TermPartialOrdering*> cache;  // set
```

A `TermPartialOrdering` keeps a `const Ordering&` and `TermList`s from the term-sharing
table, so relations cached under the first problem's ordering were handed to the second,
which died on the first `_ord.compare` — a vtable call through a destroyed `Ordering`.
Reached from forward demodulation by way of `TermOrderingDiagram`, which is why only
problems large enough to demodulate ever saw it, and why one such problem alone looked
fine: nothing read the wreckage until the next run. Both are file-scope now and
`TermPartialOrdering::resetCache()` drops them.

`PartialOrdering.cpp` has caches of the same shape but is indexed by `size_t` and holds
no reference to the signature or the ordering, so it is stale rather than dangling.

Others of this shape that are *not* yet handled, because nothing has needed them:
`Clause.cpp:218` (`static Clause* selected`), `TermIterators.cpp:154`,
`LookaheadLiteralSelector.cpp:266`, `Term.cpp:1689` (`static RobSubstitution
checkSortSubst`), and `Perfect<T>::_ids` (`Lib/Perfect.hpp:44`), a global interning map.
These hold scratch state rather than signature-dependent objects, but the
`TermPartialOrdering` case is what the rest of this list looks like just before it bites.

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
