# `vampire` tactic for Lean 4

A Lean tactic that discharges goals with the Vampire theorem prover and replays the
result as a kernel-checked Lean proof.

    goal ─▶ preprocess ─▶ translate ─▶ compile ─▶ Vampire ─▶ refutation ─▶ Lean proof
              done          done        done       done         done        partial

**Status: goals are translated and Vampire refutes them; replaying an arbitrary
refutation as a Lean proof is not implemented yet.** `vampire` runs the whole pipeline
and admits a refuted goal with a warning, so the proof depends on `sorryAx` and says so.

    example (α : Type) (f : α → α) (P : α → Prop) (a : α)
        (h₁ : ∀ x, P x → P (f x)) (h₂ : P a) : P (f (f a)) := by
      vampire?

    vampire: the problem, as Vampire received it:
      1. 'P'(a) [input(axiom)]
      2. ! [X0 : 'α'] : ('P'(X0) => 'P'(f(X0))) [input(axiom)]
      3. ~'P'(f(f(a))) [input(axiom)]
    refuted

`vampire?` shows what the prover was given and leaves the goal alone. What it prints is
Vampire's own rendering of the units it holds — evidence about the transfer, produced at
the far end of it.

The replay half works, on the shape it handles:

    theorem resolution_two_step (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by
      vampire_replay

    info: vampire: closed by a 5-step refutation replayed from the prover
    info: 'resolution_two_step' does not depend on any axioms

No `sorry` and no axioms at all: propositional resolution replays as `Or.elim` and
`absurd`, both constructive.

## Design

- **No lean-smt dependency, but lean-smt's design.** The goal-translation pipeline is a
  port: the translator registry, the dependency graph that orders declarations, and the
  preprocessing steps are all lean-smt's, with the changes recorded per file and in
  `NOTICE`. What differs is the target.
- **Talk to Vampire over an FFI, not a file.** lean-smt renders its terms as SMT-LIB
  text for a solver process. Here they are compiled into an embedded Vampire's own
  `Signature`, `Term`, `Literal` and `Formula`, so the symbol correspondence is held in
  memory rather than recovered from mangled identifiers, and there is no printing or
  reparsing. The one thing that crosses as text is a symbol's name, once, at its
  declaration — Vampire's signature is keyed by name and needs one to name a symbol in
  a proof.
- **The whole problem crosses in one call.** The FFI entry lock makes a call atomic but
  not a sequence of them, and Vampire's signature is process-global, so a build spread
  over many calls could be interleaved by another elaboration thread.
- **Replay through VampLean.** Proof checking uses the upstream reconstruction lemmas
  (`vamp_lean`), so this library owns translation and replay, not the inference-level
  lemmas.

## What translates

Monomorphic first-order logic with equality: uninterpreted sorts, functions and
predicates; the propositional connectives; `∀` and `∃`; `Bool` identified with `Prop`.
A definition becomes a declaration plus its defining equation, since Vampire has none.

Hypotheses are swept up from the local context automatically, and one with no
first-order reading is skipped rather than being fatal — that is what makes sweeping
reasonable. A hint named explicitly in `vampire [h]` is never skipped; failing to
translate it is an error.

Not translated: polymorphism (Vampire's logic is monomorphic — lean-smt's
monomorphisation pass is not ported), arithmetic and other theories, `ite`, `let`,
datatypes, higher-order arguments.

## Layout

    Vampire.lean                    library root
    Vampire/Attribute.lean          the `@[vampire_translate]` registry
    Vampire/Preprocess/             hints into the context, intros, negate the goal
    Vampire/Translate.lean          the translation monad and traversal
    Vampire/Translate/Term.lean     the intermediate representation
    Vampire/Translate/Prop.lean     connectives, quantifiers, equality
    Vampire/Translate/Bool.lean     `Bool` as `Prop`
    Vampire/Translate/Query.lean    dependency graph -> declarations, in order
    Vampire/Translate/Build.lean    compile into Vampire, across the FFI
    Vampire/Ffi.lean                typed bindings to the embedded prover
    Vampire/Proof.lean              the refutation, read back as structured data
    Vampire/Reconstruct.lean        refutation -> Lean proof term
    Vampire/Tactic.lean             `vampire`, `vampire?`, `vampire_replay`
    ffi/vampire_ffi.cpp             environment, reset, threading
    ffi/vampire_build.cpp           builds a translated problem, runs it
    ffi/vampire_problem.cpp         the hard-coded problem behind `vampire_replay`
    docs/vampire-global-state.md    audit of Vampire's shared mutable state
    docs/STATUS.md                  working notes

## Building against Vampire

The shim links `libvampire_lib.a`, a static archive added to the fork's `CMakeLists`:

    add_library(vampire_lib STATIC $<TARGET_OBJECTS:common>)

Build it before `lake build`:

    cmake --build ../vampire/build --target vampire_lib

`Vampire` is compiled with `precompileModules := true` so the FFI symbols are available
to the interpreter, which is where tactics run.

## Build

    lake build

Requires Lean 4.33.0 (pinned in `lean-toolchain`). `lake build` runs the tests.
