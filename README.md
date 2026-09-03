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
- **A whole run is one call.** Build, solve and export happen together. The FFI entry
  lock makes a call atomic but not a sequence of them, and Vampire's environment is
  process-global, so with Lean elaborating declarations in parallel another thread's
  build can land between this thread's build and its solve. What the run produces is
  read back afterwards from per-thread buffers.
- **Replay is a port of Vampire's own Lean code generator.**
  `Shell/LeanChecker/LeanChecker.cpp` writes a Lean file: one `theorem inf_sN` per
  inference, proved by a tactic script, chained by a `fullProof` that applies them in
  turn. `Vampire/Reconstruct.lean` produces the same proof in the elaborator, as `Expr`s
  and tactic `Syntax` rather than as source text, including this fork's own changes to
  those scripts. The tactics themselves come from VampLean, so this library owns
  translation and replay, not the inference-level lemmas.

## What translates

Monomorphic first-order logic with equality: uninterpreted sorts, functions and
predicates; the propositional connectives; `∀` and `∃`; `Bool` identified with `Prop`.
A definition becomes a declaration plus its defining equation, since Vampire has none.

Hypotheses are swept up from the local context automatically, and one with no
first-order reading is skipped rather than being fatal — that is what makes sweeping
reasonable. A hint named explicitly in `vampire [h]` is never skipped; failing to
translate it is an error.

**Not translated: polymorphism.** Vampire's logic is monomorphic, and lean-smt's
monomorphisation pass is not ported, so a polymorphic hypothesis is skipped when it is
swept up from the context and reported when it is named as a hint. Also not translated:
arithmetic and other theories, `ite`, `let`, datatypes, higher-order arguments.

## What replays

The rules the ported handlers cover: resolution, superposition, demodulation,
factoring, equality resolution and factoring, subsumption resolution, the literal
tidying rules, definition unfolding, the normal forms (ENNF, NNF, flattening, tautology
removal), rectification, single-clause clausification, and unused predicate definition
removal.

**Not replayed: AVATAR.** Splitting, the SAT refutation and the resolution replay of it
this fork added are not ported, so the tactic runs Vampire with `avatar off` rather than
producing steps it cannot replay. That costs search power on large problems and is the
biggest piece still missing. Skolemisation, the definition introductions, multi-clause
clausification, and `rectify` with a non-identity renaming are also unported.
`Vampire/Reconstruct.lean` lists them, and a step that needs one is reported by name.

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
    Vampire/Reconstruct.lean        the port of Vampire's Lean code generator
    Vampire/Tactic.lean             `vampire` and `vampire?`
    ffi/vampire_ffi.cpp             environment, reset, threading
    ffi/vampire_build.cpp           builds a translated problem, runs it
    ffi/vampire_proof.cpp           exports the refutation as structured data
    docs/vampire-global-state.md    audit of Vampire's shared mutable state
    docs/STATUS.md                  working notes

## Benchmark

`docs/STATUS.md` describes a sweep over the `fullProof` statements of the paper's
generated proofs, with `vampire` in place of the proof. It is not a replay of those
proofs — the statement is re-translated and a fresh search is run — which is what makes
it a test of this port rather than of the generated files.

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
