# `vampire` tactic for Lean 4

A Lean tactic that discharges goals with the Vampire theorem prover and replays
the result as a kernel-checked Lean proof.

**Status: the prover runs and its proof is replayed; the goal is not yet translated.**

The tactic sends a problem to the embedded Vampire, gets the refutation back as
structured data, and rebuilds it as a Lean proof term:

    theorem resolution_two_step (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by
      vampire

    info: vampire: closed by a 5-step refutation replayed from the prover
    info: 'resolution_two_step' does not depend on any axioms

No `sorry`, and no axioms at all — propositional resolution replays as `Or.elim` and
`absurd`, both constructive.

**The problem sent to Vampire is hard-coded** to `(p ∨ q), ¬p, ¬q ⊢ ⊥`, so only goals of
that shape work. Translating an arbitrary Lean goal is the next piece of work; this
establishes the run-and-replay half of the pipeline first, so the translation has
something to hand to.

## Design

- **No lean-smt dependency.** The prototype in
  `../bodingbauer-etall/demo/Demo/Hammer.lean` showed the loop works by borrowing
  lean-smt's SMT-LIB printer, but that route means Lean → text → parser → Vampire,
  and a matching inverse mapping to get the proof back onto the original goal.
- **Talk to Vampire over an FFI instead.** Build Vampire's term representation
  directly from `Expr`, so the symbol correspondence is held in memory rather than
  recovered from mangled identifiers, and there is no printing or reparsing.
- **Replay through VampLean.** Proof checking uses the upstream reconstruction
  lemmas (`vamp_lean`), so this library owns translation and replay, not the
  inference-level lemmas.

## Layout

    Vampire.lean             library root
    Vampire/Ffi.lean         typed bindings to the embedded prover
    Vampire/Proof.lean       the refutation, read back as structured data
    Vampire/Reconstruct.lean refutation -> Lean proof term
    Vampire/Tactic.lean      the `vampire` frontend
    ffi/vampire_ffi.cpp      environment, reset, threading
    ffi/vampire_problem.cpp  builds a problem, runs saturation, exposes the proof
    Test/Basic.lean      smoke tests; `#print axioms` shows `sorryAx` until the
                         translation and replay layers land
    docs/vampire-global-state.md
                         audit of Vampire's shared mutable state

## Building against Vampire

The shim links `libvampire_lib.a`, a static archive added to the fork's `CMakeLists`:

    add_library(vampire_lib STATIC $<TARGET_OBJECTS:common>)

Build it before `lake build`:

    cmake --build ../bodingbauer-etall/vampire-leancheck/build --target vampire_lib

`Vampire` is compiled with `precompileModules := true` so the FFI symbols are available
to the interpreter, which is where tactics run.

## Build

    lake build

Requires Lean 4.33.0 (pinned in `lean-toolchain`).
