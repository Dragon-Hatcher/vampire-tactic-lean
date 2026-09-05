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

A goal the default strategy does not refute is then put to **Vampire's own portfolio** —
the schedule `--mode portfolio --schedule casc` would have chosen for this problem,
strategy by strategy, under a second budget of `vampire.timeout`. That is where most of
the difference between this tactic and the `vampire` binary was; see "Diversity is the
other half" below and `docs/portfolio.md`. `set_option vampire.portfolio false` turns it
off, and `vampire.portfolioSlice` caps what one strategy may have (20 deciseconds by
default). Nothing the default refutes ever reaches it, so the cost is paid only by a
goal that was going to fail.

When the portfolio is what refuted a goal, the tactic says which strategy did it and
offers it back:

    vampire: refuted by a portfolio strategy, after the default failed.
    To go straight to it next time:
      vampire (strategy := "lrs+1011_1:32_tgt=full:st=5.0:sd=1:ss=included:er=filter:alpa=true_0") [*]

`strategy` runs that one first, ahead of the default and the schedule, which is the
difference between paying for the search again on every elaboration and not: on
`RNG120+4`, 14.4s becomes 2.1s. It is a hint and not an instruction — the ordinary
schedule still follows behind it, so a pin that has gone stale costs a run and cannot
lose a proof.

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

- **Diversity is the other half, so run Vampire's own schedule.** Depth is all the
  escalation varies, and depth is not what the tactic was missing. Over the problems in
  the corpus that are provable and that the default strategy does not refute inside 20
  seconds, tripling the budget buys three of them and no single alternative strategy
  buys any, while `--mode portfolio --schedule casc` — the same 20 seconds, spread over
  many strategies — buys more than half. `docs/portfolio.md` has that table; it is the
  evidence this was built on.

  So the tactic asks Vampire which strategies it would have tried on *this* problem and
  tries them, in order, until the second budget runs out. Not a list transcribed into
  Lean: `Schedules::getCasc2025Schedule` branches on the problem's `Property`, so a
  unit-equality problem gets a different schedule from a general first-order one, and
  the schedule that ships with the fork is the one that runs. What Lean owns is the
  loop, which is the part that has to escalate on a *replay* failure as well as a search
  failure.

  Two things do not carry over from the binary, both because this is one process and
  not a fork per strategy. A slice's share of the schedule is in mega-instructions,
  which needs `perf` and so exists only under Linux; it is converted to time at the same
  nominal rate the portfolio itself uses when it has no `perf`. And a slice that wants
  thirty seconds cannot have them sequentially, so `vampire.portfolioSlice` caps it —
  the portfolio's advantage is in its first few dozen strategies at about a tenth of a
  second each, and spending the budget on one long slice buys the depth that has already
  been tried.

  Running many strategies over one problem in one process is also a much harder test of
  the reset than running one, and it found two static caches that had survived it — see
  `docs/vampire-global-state.md` section 6a. Both are the same shape: a signature number
  or a sort term, kept in a `static`, read after the signature it belongs to was deleted
  and its memory handed back out.

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

- **A clausification is not a rewrite either.** `LeanChecker::clausify` puts a parent
  into CNF and destructures it, and this port followed it through VampLean's `cnfify` —
  which over `bench-tptp/` was the largest single thing left in a replay, 10.4s across
  843 parents. A `sample` of one such call is `Lean.Meta.Simp.simpLoop` all the way down:
  the cost is not deciding what to rewrite but the congruence proof simp builds from the
  root of a several-hundred-atom formula to each of its several hundred sites. CNF is
  three rules and no search, so the clauses are determined by the shape of the formula
  and so are their proofs. `Vampire/Cnf.lean` walks it once and hands back each clause
  with a *function* from the formula to it — a function, because distributing over a
  disjunction is a case analysis and each case needs the whole of its own side. 6.2s to
  1.5s, and the conjunction is never built: `andLeaves` used to walk back down it for an
  `And.left`/`And.right` chain per leaf, which was work to undo work.

- **A split name *is* its component.** The reference writes `try rw [hk]` per AVATAR
  split definition because in a generated file `sA9` is a section variable and
  `h9 : sA9 ↔ C` is the only thing relating the two. Here the replay binds the split with
  `withLetDecl`, so the two are the same term after `zeta`: the substitution is
  type-preserving by itself and wants no motive, no congruence proof and no equation.
  `Vampire/Avatar.lean` does all of them in one `Expr.replace`, guarded by one `isDefEq`
  on the pair rather than on the formula it sits in. Those `rw`s were 1.68s over 2894
  calls on the three `ALG` problems.

  The same file reads a clause's `sA₁ → … → sAₙ → C` prefix as the disjunction
  `imp_iff_not_or` would rewrite it into, by one application per arrow — and does nothing
  where there are no arrows, which is the common case and was 0.83s of simp finding it
  out. With the chain read as a clause, `avatar contradiction clause` is a one-premise
  resolution and goes to `Vampire/Clause.lean`: 0.66s to 0.26s.

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
    Vampire/Cnf.lean                a parent's CNF, built rather than rewritten
    Vampire/Avatar.lean             AVATAR's own steps, as terms
    Vampire/Support.lean            tactics the replay needs and the generated file does not
    Vampire/Reconstruct.lean        the port of Vampire's Lean code generator
    Vampire/Tactic.lean             `vampire` and `vampire?`
    ffi/vampire_ffi.cpp             environment, reset, threading
    ffi/vampire_build.cpp           builds a translated problem, runs it
    ffi/vampire_proof.cpp           exports the refutation as structured data
    bench-tptp/                     the wider TPTP benchmark and its scripts
    bench-tptp/onefile.py           all of it in one file, to time without the start-up
    bench-tptp/paired.py            two runs compared on the problems that replayed alike
    docs/vampire-global-state.md    audit of Vampire's shared mutable state
    docs/portfolio.md               the portfolio: the measurement, and what it needed
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
| `bench-tptp/`, that set plus 142 more | 199 | **198** |
| every provable problem in the corpus, read from TPTP (`tptp2lean.py --provable-only`) | 315 | **206** |

The third row is the honest denominator and the one to watch: it is the corpus, not the
part of it Vampire's own search selected. `vampire --mode portfolio --schedule casc`
refutes 243 of the same 315 in the same 20 seconds, so the tactic is 37 short of the
prover it embeds — 26 of those are searches that found nothing, 6 are goals whose
*statement* Lean cannot elaborate in the time (megabytes long; `sorry` in place of the
tactic does not finish either), and 5 are refutations it found and could not replay. None
is a crash. It was 186 before the portfolio, on one strategy.

`docs/portfolio.md` has the whole comparison, including the 38 problems the old fork's
binary "refuted" through an unsound definition — an upstream bug, fixed upstream in May
2026 and inherited here by a branch cut a week too early — which the replay refused, and
which the rebase onto upstream master has since removed from both columns.

The one failure is a goal that is higher-order, which is out of scope and is reported
rather than admitted; which problems `bench-tptp/` contains moves between runs, because
`gen.sh` generates a test only for what Vampire refutes within its own budget.

`bench-tptp/README.md` has the timing distribution, everything that used to fail and
what each one turned out to be, and the scripts to reproduce the run.

Run one problem to a file, the whole set is 464.6s of CPU — but 344.6s of that is
`lake lean` start-up and the statements' own elaboration, a floor measured by replacing
`vampire [*]` with `sorry`, so most of it is not about the tactic. `bench-tptp/onefile.py`
puts them all in one file and one process instead, which is the number to read for the
tactic; the per-file run is the one to read for memory and for pass/fail, since a hang
there takes one problem down rather than the file.

**Quote the replay, and break the prover out of the total.** The prover is Vampire, and
its limit is wall-clock: over six runs of two builds its own time ranged 29.7s to 50.8s,
±24s on a ~130s total, which swamps anything the replay does. Before and after the last
round of work, run interleaved, three runs each, medians of three:

| | before | after |
| --- | ---: | ---: |
| the replay | 62.4s | **45.8s** |
| the whole file less the prover | 112.1s | **86.1s** |
| the kernel, on the replayed term | 14.2s | 12.5s |
| pass | 198/199 | 198/199 |

`bench-tptp/paired.py` is the controlled version: it compares two runs only on the
problems where both replayed the same number of steps, because a nondeterministic search
returns a different refutation and a different refutation is a different replay. On the
151 problems that replayed alike across all six runs, 24.4s to 19.1s — which is 46% of
the replay and not all of it, since the problems that fail to pair are the expensive ones.

Whichever way it is run, run the numbers you quote alone: a parallel run inflates CPU as
well as wall time, because Lean elaborates on several threads and time they spend
spinning for a core is charged to the process. And run a before and an after
*interleaved* — a long sequence of full-load runs drifts, and `Q_PRD001p1` has replayed
the same proof twice as slowly at the end of one as at the start.
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
