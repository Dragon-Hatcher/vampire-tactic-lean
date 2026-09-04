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
That is a budget and not a single attempt: the search is run under a tight limit first
and under the whole budget only if it has to be, because Vampire's default saturation
algorithm reads the limit as a *search parameter*. `set_option vampire.escalate false`
makes it one attempt at the whole budget.

**What the timeout bounds, and what it does not.** It bounds the saturation loop, which
is where the check is. It does not bound anything else a run does, and a slow goal can
be any of them, so `trace.vampire.timing` reports each separately — `built in 0ms,
clausified in 12ms, searched in 5ms, exported in 100ms`, beside its own `translated in`
line for the Lean side:

| phase | bounded by |
| --- | --- |
| translating the goal, in Lean | `maxHeartbeats`, and reported by Lean, not by this |
| building the problem inside Vampire | nothing; proportional to the problem |
| clausification and the other preprocessing | **nothing** |
| the saturation loop | `vampire.timeout` |
| exporting the refutation | nothing; proportional to the *proof*, not the problem |

A search that runs out says so and says to raise the budget; one that finishes the space
says that no budget will help and the goal does not follow from what it was given; and
where the budget went to clausification instead the message says that too, since the
timeout would not have stopped it. Only clausification is a real gap: it cannot be
interrupted, so a goal whose clausification runs away still runs away — it is now
visible after the fact rather than bounded.

When a goal is slow rather than wrong, `set_option trace.vampire.timing true` reports
translation, the prover's four phases and the replay, and one line per replayed step;
`trace.vampire.timing.tactic` adds one per line of each step's script. Both print when
the declaration finishes, so a run that never finishes prints nothing — `vampire?`,
which stops before the replay, is the quick way to tell the prover apart from the
replay. `set_option vampire.checkReplay true` re-checks the assembled proof term with
`Meta.check` before the kernel sees it; the applications it is made of are checked as
they are made, so this is a debugging aid rather than a safeguard.

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
- **A time limit is a search parameter, so probe with a small one.** Vampire's default
  saturation algorithm is the limited-resource strategy: it uses the time limit to
  estimate which clauses it can still reach in the time left and discards the rest. A
  generous limit therefore prunes less and searches *longer* — `MGT035+2` is 14.9s
  given 30s and 1.6s given 2s, and `HEN009-5` 3.3s against 0.5s. `vampire.timeout` is
  the budget; the search runs at 2s, then 8s, then the budget, and stops at the first
  limit that produces a proof the replay can use. The last attempt is always the whole
  budget, so nothing that used to be provable stops being.

  Escalating on the *replay* and not only on the search is the part that had to be
  learned: a tighter budget is a different search and finds a different proof, and a
  different proof can use a rule this port does not replay. Probing turned `GRP427-1`
  from a pass into "step 20895 (superposition) could not be replayed" until the failure
  fell through to the wide search.

  This needed a bug fixed in the fork first. `docs/vampire-global-state.md` says an
  embedded run bounds itself with `SaturationAlgorithm::setSoftTimeLimit`, because the
  executable's own enforcement is a thread that `_Exit`s the process — and nothing was
  calling it, so the limit reached only the strategy's estimate and never the loop.
  `vampire.timeout` was not a timeout at all: `BOO028-1` asked for two seconds and
  searched for thirty.

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
- **A reshuffle is not a rewrite.** Several of the generated scripts reconcile two
  spellings of one formula by rewriting: `flattening` reassociates with `simp only
  [and_assoc, or_assoc]`, a one-clause clausification prenexes and AC-normalises until
  `assumption` can see the two are the same. Rewriting pays for a congruence proof from
  the root of the formula to each site, and on a clause with several hundred atoms in it
  that is where a replay's time goes. The bridge gets first refusal on those steps and
  `Vampire/Prenex.lean` does the quantifier hoisting as a term; the reference's script
  stays behind each of them, so nothing that used to be provable stops being. Measured
  on the two slowest problems in `bench-tptp/`, this is 79s to 7s and 77s to 11s.

  A *multi*-clause clausification is the same lesson reached late. Its clause is looked
  for among the leaves of the shared CNF, and where the leaf was not the clause verbatim
  the search was a linear `isDefEq` over every leaf followed by `vampire_finish_clausify`
  rewriting both sides until `assumption` agreed. `SYN472+1` clausifies 196 ways and 29
  of the clauses it uses are not verbatim, so that scan ran 29 times over 196 formulas
  of seven hundred atoms: 4.8s of a 5.9s replay. The leaves are now indexed by
  `Bridge.sig`, which hashes a formula modulo exactly what the two renderings differ by,
  and the candidates that match are bridged. 5.9s to 1.3s.
- **A resolution is not a case split.** AVATAR's refutation is the SAT solver's own
  resolution chain, and the generated file proves each of its steps with `grind only
  [cases Or]` — rediscovering, by case analysis, a derivation the solver already
  recorded. Falsify a step's conclusion and its premises are a conflict that unit
  propagation reaches, because conflict analysis is what produced them; `Vampire/Sat.lean`
  builds that proof directly. On `ALG165+1`, whose derivation is 1506 steps over 116k
  literals, that is 15.3s of a 24s replay against 0.7s.

- **Neither is a derived inference.** The same is true one level up, of resolution and
  superposition themselves. `genericInferenceWithSubstitution` instantiates the premises
  at the recorded substitution and hands the rest to `grind only [cases Or]`, and that
  switch was the largest thing in a replay: over the benchmark, 11.3s of `forward
  subsumption resolution`, 9.0s of `resolution`, 7.3s of `forward demodulation` and 5.4s
  of `superposition`. Once the premises are instantiated the inference is the conflict
  it was found as. `Vampire/Clause.lean` is `Sat.lean`'s construction over first-order
  literals, with the three things such a literal has that a split variable does not: an
  equation has two spellings, `¬(t = t)` refutes itself, and two literals can be the
  same modulo an equation the inference itself supplies — which is what superposition
  and demodulation are for, and is done by walking the two literals together and
  abstracting the positions where they differ, not by rewriting. Those four rules
  together: 33.3s to 6.7s.

- **A formula is built by application, not by `mkAppM`.** `And`, `Or`, `Not` and `Iff`
  take no implicit argument, so `mkAppM` had nothing to unify for them — but it still
  inferred the type of every argument and checked it against `Prop`, once per node of a
  formula, and a clause's statement is built once for the clause and once for each step
  that names it as a premise. Stating every step of every refutation in the benchmark
  went from 2.8s to 0.44s.

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
    Vampire/Prenex.lean             hoisting a goal's quantifiers out of its disjunctions
    Vampire/Sat.lean                AVATAR's SAT refutation, by unit propagation
    Vampire/Clause.lean             a derived inference, by unit propagation
    Vampire/Support.lean            tactics the replay needs and the generated file does not
    Vampire/Reconstruct.lean        the port of Vampire's Lean code generator
    Vampire/Tactic.lean             `vampire` and `vampire?`
    ffi/vampire_ffi.cpp             environment, reset, threading
    ffi/vampire_build.cpp           builds a translated problem, runs it
    ffi/vampire_proof.cpp           exports the refutation as structured data
    bench-tptp/                     the wider TPTP benchmark and its scripts
    bench-tptp/onefile.py           all of it in one file, to time without the start-up
    docs/vampire-global-state.md    audit of Vampire's shared mutable state
    docs/comparison.md              the same problems under `duper` and `smt`
    docs/STATUS.md                  working notes

## Benchmarks

Both take a `fullProof` statement out of a reference-generated proof, replace the proof
with `vampire [*]`, and check with `#print axioms` so a `sorryAx` counts as a failure.
Neither replays the recorded proof: the statement is re-translated and a fresh search is
run, which is what makes them a test of this port rather than of the generated file.

| | problems | pass |
| --- | ---: | ---: |
| the paper's set (`../bodingbauer-etall/bench/work`) | 57 | **57** |
| `bench-tptp/`, that set plus 139 more | 196 | **196** |

`bench-tptp/README.md` has the timing distribution, everything that used to fail and
what each one turned out to be, and the scripts to reproduce the run.

Run one problem to a file, the whole set is 464.6s of CPU — but 344.6s of that is
`lake lean` start-up and the statements' own elaboration, a floor measured by replacing
`vampire [*]` with `sorry`, so most of it is not about the tactic. `bench-tptp/onefile.py`
puts all 195 in one file and one process instead: **109.4s of CPU**, against 221.7s
before this round of work. That is the number to read for the tactic; the per-file run is
the one to read for memory (no problem holds more than 2.0GB) and for pass/fail, since a
hang there takes one problem down rather than the file. Per file the median problem is
1.95s of CPU and is start-up, the 90th percentile 3.3s and the slowest 12.9s. Whichever way it is run, run the numbers you quote alone:
a parallel run inflates CPU as well as wall time, because Lean elaborates on several
threads and time they spend spinning for a core is charged to the process.
`bench-tptp/sweep.py` runs the set and serves a live page while it does.

`docs/comparison.md` puts the same 194 statements through `duper` and `smt`, by
retargeting the tactic line and nothing else.

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
