# `vampire` tactic for Lean 4

A Lean tactic that discharges goals with the Vampire theorem prover and replays the
refutation as a kernel-checked Lean proof.

    goal ─▶ preprocess ─▶ translate ─▶ compile ─▶ Vampire ─▶ refutation ─▶ Lean proof

The whole loop runs in process, and the proof is a real proof: no `sorry`, and nothing
added to the trusted base.

    theorem chained (α : Type) (f : α → α) (P : α → Prop) (a : α)
        (h₁ : ∀ x, P x → P (f x)) (h₂ : P a) : P (f (f a)) := by
      vampire [*]

    #print axioms chained
    -- 'chained' depends on axioms: [propext, Classical.choice, Quot.sound]

`vampire?` takes the same hints, shows what the prover was given and the refutation it
found, and leaves the goal alone:

    example (α : Type) (f : α → α) (P : α → Prop) (a : α)
        (h₁ : ∀ x, P x → P (f x)) (h₂ : P a) : P (f (f a)) := by
      vampire? [*]

    vampire: the problem, as Vampire received it:
      1. 'P'(a) [input(axiom)]
      2. ! [X0 : 'α'] : ('P'(X0) => 'P'(f(X0))) [input(axiom)]
      3. ~'P'(f(f(a))) [input(axiom)]
    refuted
    refutation:
      4  flattening  [3]  4. ~'P'(f(f(a))) [flattening 3]
      5  ennf transformation  [2]  5. ! [X0 : 'α'] : ('P'(f(X0)) | ~'P'(X0)) [...]
      ...
      11  forward subsumption resolution  [10,6]  11. $false [...]

What it prints is Vampire's own rendering of the units it holds — evidence about the
transfer, produced at the far end of it.

`set_option vampire.timeout n` gives the prover `n` seconds to search (default 10).

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
- **Where a formula has to be reconciled, do it structurally.** The generated file is a
  file: it can state a junction in whatever order it likes, because both ends of every
  step are its own. A tactic has the user's hypothesis at one end, in the shape the user
  wrote it, and Vampire's recorded formula at the other, in the shape the exporter
  renders it. `Vampire/Bridge.lean` walks the two together and builds the proof from the
  correspondence rather than handing the difference to a search procedure.

## What translates

Monomorphic first-order logic with equality: uninterpreted sorts, functions and
predicates; the propositional connectives; `∀` and `∃`; `Bool` identified with `Prop`.
A definition becomes a declaration plus its defining equation, since Vampire has none.

Only what you name is sent: `vampire [h, thm]` sends those, `vampire [*]` sends
everything propositional in the local context, and the goal's own binders always go.
This follows `smt`. Under `[*]` a hypothesis with no first-order reading is skipped
rather than being fatal, which is what makes sweeping reasonable; one you name
explicitly is not.

**Polymorphism, with `+mono`.** Vampire's logic is monomorphic, so a goal that
quantifies over a type or carries a typeclass has no direct reading. `vampire +mono`
runs [lean-auto](https://github.com/leanprover-community/lean-auto)'s monomorphisation
first — the same procedure, wired the same way, that `smt +mono` uses:

    variable [Group G]

    theorem inverse : ∀ (a : G), a * a⁻¹ = 1 := by
      vampire +mono [mul_assoc, one_mul, inv_mul_cancel]

`G` becomes an uninterpreted sort and `*`, `⁻¹` and `1` uninterpreted symbols, which is
a problem Vampire can take. Without `+mono` a polymorphic hypothesis is skipped when it
is swept up from the context and reported when it is named as a hint. It is off by
default because it changes what reaches the prover, and on a goal that is already
first-order it is cost without benefit.

Still not translated: arithmetic and other theories, `ite`, `let`, datatypes,
higher-order arguments.

## What replays

The generating and simplifying rules — resolution, superposition, forward and backward
demodulation, factoring, equality resolution and factoring, subsumption resolution, and
the literal tidying rules — with the unifier recovered by re-running the inference
through Vampire's own replayer, exactly as `LeanChecker` does.

Preprocessing: the normal forms (ENNF, NNF, flattening, tautology removal),
rectification, clausification (whether the parent yields one clause or many), definition
unfolding and folding, the predicate and function definition introductions,
skolemisation, and unused and pure predicate definition removal.

AVATAR, in full: the definitions, the components, the split clauses, the contradiction
clauses, and the SAT refutation — replayed as this fork's explicit resolution steps
rather than by re-solving the SAT problem in Lean.

**Not replayed.** Theory axioms: the generated file emits a Lean `axiom` for each, which
a tactic cannot do. Arithmetic evaluation, whose script needs `norm_num1` — Mathlib-
backed, and gone since VampLean dropped Mathlib; the translation produces no arithmetic
either. `rectify`'s recorded renamings, which are not exported: `symm_match` and a
permutation fallback cover the alpha-equivalent and reordered cases between them. And
the `bv_decide` encoding of the SAT refutation, which the generator falls back to when
the solver's derivation is unavailable.

A step needing something unported is reported by name and unit number rather than
guessed at. `Vampire/Reconstruct.lean`'s header is the authoritative list.

## Layout

    Vampire.lean                    library root
    Vampire/Attribute.lean          the `@[vampire_translate]` registry
    Vampire/Recognizers.lean        matching Lean terms against what translates
    Vampire/Data/Graph.lean         the dependency graph
    Vampire/Preprocess/             hints into the context, intros, negate the goal
    Vampire/Preprocess/Mono.lean    monomorphisation, by way of lean-auto
    Vampire/Translate.lean          the translation monad and traversal
    Vampire/Translate/Term.lean     the intermediate representation
    Vampire/Translate/Prop.lean     connectives, quantifiers, equality
    Vampire/Translate/Bool.lean     `Bool` as `Prop`
    Vampire/Translate/Query.lean    dependency graph -> declarations, in order
    Vampire/Translate/Build.lean    compile into Vampire, across the FFI
    Vampire/Ffi.lean                typed bindings to the embedded prover
    Vampire/Proof.lean              the refutation, read back as structured data
    Vampire/Bridge.lean             reconciling two renderings of the same formula
    Vampire/Support.lean            tactics the replay needs and the generated file does not
    Vampire/Reconstruct.lean        the port of Vampire's Lean code generator
    Vampire/Tactic.lean             `vampire` and `vampire?`
    ffi/vampire_ffi.cpp             environment, reset, threading
    ffi/vampire_build.cpp           builds a translated problem, runs it
    ffi/vampire_proof.cpp           exports the refutation as structured data
    bench-tptp/                     the wider TPTP benchmark and its scripts
    docs/vampire-global-state.md    audit of Vampire's shared mutable state
    docs/STATUS.md                  working notes

## Benchmarks

Both take a `fullProof` statement out of a reference-generated proof, replace the proof
with `vampire [*]`, and check with `#print axioms` so a `sorryAx` counts as a failure.
Neither replays the recorded proof: the statement is re-translated and a fresh search is
run, which is what makes them a test of this port rather than of the generated file.

| | problems | pass |
| --- | ---: | ---: |
| the paper's set (`../bodingbauer-etall/bench/work`) | 57 | **57** |
| `bench-tptp/`, that set plus 139 more | 196 | **191** |

The five that do not pass are two skolemisations whose parent bundles an unrelated
existential and three that exceed the harness's 150s cap; `bench-tptp/README.md` has
each one and what is understood about it, and the scripts to reproduce the run.

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
