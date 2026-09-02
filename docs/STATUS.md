# Where this stands

Working notes for picking the work back up. See `README.md` for what the library is and
`vampire-global-state.md` for the audit that constrains the FFI.

## Layout

    lean-vampire/
      vampire/            our fork of vprover/vampire (upstream = vprover, branch
                          `avatar-resolution-replay`)
      vampire-tactic/     this package: the Lean tactic (branch `main`)
      bodingbauer-etall/  the paper's artifacts, left as reference
        vamplean/         upstream reconstruction lemmas, required by the tactic
        demo/             the leancheck demo and the lean-smt hammer prototype
        bench/            the Figure 2 benchmark harness

## Build

    cmake --build ../vampire/build --target vampire_lib   # 43MB static archive
    lake build                                            # tactic + tests

Lean 4.33.0 everywhere. `lake build` runs the tests as `#eval`s and fails on regression.

## What works

**Goal translation.** `vampire?` preprocesses a goal, translates it, builds it inside
Vampire and runs the prover:

    example (α : Type) (f : α → α) (P : α → Prop) (a : α)
        (h₁ : ∀ x, P x → P (f x)) (h₂ : P a) : P (f (f a)) := by
      vampire?
    -- 1. 'P'(a) [input(axiom)]
    -- 2. ! [X0 : 'α'] : ('P'(X0) => 'P'(f(X0))) [input(axiom)]
    -- 3. ~'P'(f(f(a))) [input(axiom)]
    -- refuted

Monomorphic FOL with equality; definitions become declarations plus defining equations.
The pipeline is a port of lean-smt's — registry, dependency graph, preprocessing steps —
with `Translate/Build.lean` replacing its SMT-LIB printer by compilation into Vampire's
own structures. Attribution per file and in `NOTICE`.

**Replay,** on one shape:

    theorem resolution_two_step (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by
      vampire_replay
    -- 'resolution_two_step' does not depend on any axioms

The problem there is built with `Signature`/`Literal`/`Clause`, saturation runs
in-process, and the refutation crosses the FFI as unit numbers / rule ids / premise
lists / `(atom, polarity)` pairs for `Vampire/Reconstruct.lean` to rebuild as `Or.elim`
+ `absurd`.

## What does not

- **The two halves are not joined.** `vampire` translates and runs, then *admits* a
  refuted goal with a warning (`sorryAx`). Joining them needs the refutation to come
  back as first-order terms rather than `(atom, polarity)` pairs, and reconstruction to
  handle more than binary propositional resolution.
- **Polymorphism.** Vampire's logic is monomorphic; lean-smt's monomorphisation pass is
  not ported, so a polymorphic hypothesis is skipped (or, if named as a hint, reported).
- No arithmetic or other theories, no `ite`, no `let`, no datatypes.
- `setSoftTimeLimit` bounds the saturation loop, not preprocessing or clausification.

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
6. **A `Unit*` does not survive preprocessing.** The problem's unit list is replaced by
   clausification, so anything the FFI wants to report about the input must be captured
   when it is built, not read back afterwards.
7. **Vampire generation is nondeterministic** under a wall-clock limit, so any
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

The first three are proof-generation work from before the FFI and are independent of
it: all 14 ALG problems that Vampire solves now check, 874s → 233s, four former
timeouts fixed. `bench/` reproduces that.

## Open questions

- Per-thread Vampire contexts would remove the global lock. Deferred deliberately.
- Whether to vendor `vamplean` rather than depend on a path into `bodingbauer-etall/`.
- The allocator is never reset, so a long-lived Lean process grows across runs.
