# Where this stands

Working notes for picking the work back up. See `README.md` for what the library is and
`vampire-global-state.md` for the audit that constrains the FFI.

## Layout

    lean-vampire/
      vampire/            our fork of vprover/vampire (upstream = vprover, branch
                          `avatar-resolution-replay`)
      vampire-tactic/     this package: the Lean tactic (branch `main`)
        bench-tptp/       a second, wider TPTP benchmark; see its own README
      bodingbauer-etall/  the paper's artifacts, left as reference
        vamplean/         upstream reconstruction lemmas, required by the tactic
        demo/             the leancheck demo and the lean-smt hammer prototype
        bench/            the Figure 2 benchmark harness

## Build

    cmake --build ../vampire/build --target vampire_lib   # 43MB static archive
    lake build                                            # tactic + tests

Lean 4.33.0 everywhere. `lake build` runs the tests as `#eval`s and fails on regression.

## What works

The whole loop, in process:

    theorem chained (α : Type) (f : α → α) (P : α → Prop) (a : α)
        (h₁ : ∀ x, P x → P (f x)) (h₂ : P a) : P (f (f a)) := by
      vampire [*]
    -- 'chained' depends on axioms: [propext, Classical.choice, Quot.sound]

**Goal translation** is a port of lean-smt's pipeline — the `@[vampire_translate]`
registry, the translation monad with its dependency tracking, the graph that orders
declarations, the preprocessing steps — retargeted from SMT-LIB text at an embedded
Vampire's own `Signature`/`Term`/`Literal`/`Formula`. Provenance in `NOTICE`.

**Proof translation** is a port of Vampire's own Lean code generator
(`Shell/LeanChecker`): one lemma per inference with the same statement, proved by the
same tactic script, chained the same way — as `Expr`s and tactic `Syntax` rather than
source text. This fork's changes are included, AVATAR's resolution replay among them.
AVATAR runs, and its splitting, components, split clauses and SAT refutation all replay.

`vampire?` stops before the replay and shows the problem as Vampire renders it plus an
outline of the refutation.

## What does not

- **Polymorphism.** Vampire's logic is monomorphic; lean-smt's monomorphisation pass is
  not ported. A polymorphic hypothesis swept up from the context is skipped; one named
  as a hint is reported. **This is the largest remaining gap on the way in.**
- **Theory axioms** — the generated file emits a Lean `axiom`, which a tactic cannot.
- **Arithmetic evaluation**, whose script needs `norm_num1`; VampLean dropped Mathlib.
- `setSoftTimeLimit` bounds the saturation loop, not preprocessing or clausification.
- **The input-step bridge**, when Vampire's own recorded formula for an axiom differs
  from the Lean hypothesis by more than orientation/associativity — see
  `bench-tptp/README.md`, "input-step bridge".
- **A skolemisation whose parent bundles an existential unrelated to the symbol it
  introduces** (typically a not-yet-folded predicate-definition body sharing the
  formula) — see `bench-tptp/README.md`, "skolemisation, parent has an extra
  existential". Understood in some depth but not fixed; the fix that was tried and
  reverted is documented there.

Predicate and function definition introductions, and `rectify` with a non-identity
renaming (including the quantifier-permutation case, not just plain alpha-renaming), are
now ported — see `Vampire/Reconstruct.lean`'s `.predicateDefinition`/`.functionDefinition`
and `.rectify` cases.

## Benchmark

`fullProof` statements extracted from `../bodingbauer-etall/bench/work/*.lean` — the
preamble's `variable` block plus everything between `theorem fullProof :` and `:= by` —
with the proof replaced by `vampire`, checked with `#print axioms` so a `sorryAx` counts
as a failure. This is not a replay of the recorded proof: the tactic re-translates the
statement and runs a fresh search, so Vampire finds a different proof each time. That is
what makes it a test of the port rather than of the file.

Four bugs came out of it that the unit tests could not have found, all of them the same
shape — something the generated *file* gets from being a file:

1. Predicate definitions are `let`-bound, not substituted. Substituting lets `cnfify`
   see through a definition Vampire introduced precisely so the CNF would not blow up.
2. Definitions are *opaque* inside a step lemma — a section variable in the generated
   file — and only `fullProof` binds the value. Two rules are exempt because they are
   definitional: the introduction itself and definition folding.
3. Each step is proved in a restricted context. `grind` reads the local context, and
   ours accumulates the goal's hypotheses and every definition so far. Measured: 8ms per
   superposition in a small context, 100ms in the goal's.
4. Multi-clause clausification cannot be sized by Vampire's clause count, because
   VampLean's `cnfify` need not split the same way.

A fifth was the subtlest, and it had been hiding behind a workaround. `Formula::toString`
walks a junction's arguments *backwards* — "we will reverse the order // but that should
not matter" — and `LeanPrinter` does the same deliberately, with a `FormulaList::reverse`.
So the generated file states every disjunction in the reverse of the order Vampire holds
it in, and VampLean's `nnf_transformation` and friends were written to produce exactly
what that file states. Exporting `args()` order gave formulas that were correct but
mirror images of the ones those tactics build, so `exact h` missed every time. Earlier in
this work that showed up as ENNF producing `q ∨ ¬p` against Vampire's `q | ~p`, which was
misread as the two disagreeing about disjunct order and patched with a `grind` fallback.
They agree exactly. **When a formula comes back subtly wrong, suspect the printer.**

A sixth was a silent one: a tactic can *log* an error and admit its goal without
throwing, so a replay announced success while the proof depended on `sorryAx`, visible
only in `#print axioms`. `proveBy` and `transformHyp` now inspect the term they built —
`Expr.hasSorry` is the one check that cannot be evaded.

For calibration, `bench/work/ALG130+1.lean` — the *recorded* proof — checks in 8.4s under
the same toolchain. Replaying a freshly-found proof of the same problem takes 15s, on a
proof about 20% larger.

Error attribution matters here more than usual: a failing tactic is free to *log* its
error and admit the goal, which throws nothing, so a replay reported success while the
declaration carried `sorryAx`. Running scripts under `withoutRecover` makes a failure
throw and name its step — and doing so immediately moved the blame for three problems
from skolemisation, where it had been wrongly placed, to `nnf transformation`, which is
where the ordering bug was.

**Currently 56/57** on this benchmark (the one that doesn't pass, `SWC153`, is the
input-step bridge case above).

### `bench-tptp/`

A second, wider benchmark: more TPTP problems, same method (extract a `fullProof`
statement, replace its proof with `vampire [*]`, check for `sorryAx`), pass rate
**128/138**. Every failure and what's understood about it — including the two `grind`
fallbacks (clausification binder order, generic-step E-matching) that were found,
verified, and then reverted along with an unresolved skolemisation fix, to keep this
tree at a state that's fully understood rather than partially patched — is in
`bench-tptp/README.md`. Scripts to regenerate and rerun it are there too.

## Things that will bite

Recorded because each cost real time to find.

1. **Lean elaborates tactics in parallel.** `Elab.async` is off by default but overridden
   on in the language server and cmdline. Measured: 7 threads, 3 concurrent. Every
   `extern "C"` function must open with `vampire_ffi::EntryGuard` from
   `ffi/vampire_lock.hpp`. A guard that only some entry points take is worse than none.
2. **Run-then-read is not atomic.** The lock makes each call atomic, not the sequence.
   The step buffers are `thread_local` for that reason.
3. **Lake does not track the Vampire archive.** It is declared as an input to
   `extern_lib`; without that a rebuilt Vampire leaves a stale dylib whose calls into new
   symbols fault with no stack.
4. **`env.proofExtra.get<>` segfaults on a missing entry** — no RTTI, no check. Guard
   with `find()`.
5. **Function-local statics that cache Vampire objects** dangle after a reset. Fixed for
   the built-in sorts; six more are listed in the audit, unhandled.
6. **The whole run is one FFI call, deliberately.** Build, solve and export together.
   Splitting them left a window in which another elaboration thread's build landed
   between this thread's build and its solve, which showed up as one goal in a file
   failing while the same goal passed alone.
7. **The inference replayer leaked its saturation algorithm.** A `SaturationAlgorithm`
   registers itself and its indexes globally and unregisters only in its destructor, so
   the second problem solved in a process saturated without finding a proof it had
   found the first time. Invisible in a one-shot binary; fatal embedded. Fixed in the
   fork; the same shape is worth suspecting whenever run *n+1* behaves differently from
   run *n*.
8. **A `Unit*` does not survive preprocessing.** The problem's unit list is replaced by
   clausification, so anything the FFI wants to report about the input must be captured
   when it is built, not read back afterwards.
9. **Vampire generation is nondeterministic** under a wall-clock limit, so any
   before/after comparison must transform one fixed generated file, or sample enough to
   average out. This produced a phantom "2.6× regression" earlier in the work.

## Fork changes, in order

    2abf74e  AVATAR refutations as resolution steps, not bv_decide
    7032c0f  avoid `contradiction` over the whole context in clausification
    24f10e6  bind split propositions per theorem; autoImplicit false
    9126105  `vampire_lib` static target for embedding
    e3f62c2  `Lib::resetGlobalState` — more than one problem per process
    124034e  no exit(10); `Timer::startClock` so the timeout cannot _Exit the host
    9a593d8  re-arm the exit lock between runs
    e101aa7  do not leak the inference replayer's saturation algorithm

The first three are proof-generation work from before the FFI and are independent of
it: all 14 ALG problems that Vampire solves now check, 874s → 233s, four former
timeouts fixed. `bench/` reproduces that.

## Open questions

- Per-thread Vampire contexts would remove the global lock. Deferred deliberately.
- Whether to vendor `vamplean` rather than depend on a path into `bodingbauer-etall/`.
- The allocator is never reset, so a long-lived Lean process grows across runs.
