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

    cmake -S ../vampire -B ../vampire/build -DCMAKE_BUILD_TYPE=Release \
          -DCMAKE_POSITION_INDEPENDENT_CODE=ON
    cmake --build ../vampire/build --target vampire_lib   # the static archive
    cmake --build ../vampire/build --target vampire       # bench-tptp/gen.sh wants this
    lake build                                            # tactic + tests

Lean 4.33.0 everywhere. `lake build` runs the tests as `#eval`s and fails on regression.

macOS is the platform this is developed and benchmarked on. A Linux build gets as far
as a working FFI — `Test/Ffi.lean` passes, including the reset cycles — and then aborts
when a proof is actually run, with `terminate called after throwing an instance of
'Kernel::MainLoop::RefutationFoundException'`: Vampire signals success by throwing that
and something is not catching it. Ruled out so far: the archive and the shim are in one
shared object, so it is not an exception crossing a `.so` boundary, and CMake's flags
for Vampire match `vampireCompileArgs` on everything that could move a class layout.
The two things a Linux build does need, both established, are below.

`CMAKE_POSITION_INDEPENDENT_CODE` is required on Linux and free on macOS. The tactic
runs in the elaborator, so `precompileModules := true`, so Lean links the archive into a
*shared object* — and every object in a `.so` has to be position-independent. CMake
builds a static library non-PIC by default, and the link then fails a few hundred times
over with

    ld.lld: error: relocation R_X86_64_PC32 cannot be used against symbol
      'std::cout'; recompile with -fPIC

which names the C++ runtime rather than Vampire and reads like a toolchain problem. It
is not: it is our archive. macOS never sees it, because Mach-O is position-independent
throughout.

The second is the C++ standard library. Lake compiles the shim with the *system* `c++`,
so on Linux the objects are libstdc++'s (`std::__cxx11::` symbols); but Lean's own clang
links its bundled **libc++** by default, and the two have incompatible `std::string`
layouts — which matters, because `vampire_build.cpp` passes `std::string` straight into
Vampire. The link therefore needs `-stdlib=libstdc++` to stop clang reaching for libc++,
`-lstdc++` to link the right one, and a `-L` naming the directory `g++
-print-file-name=libstdc++.so` reports, because Lean's `ld.lld` does not search GCC's
library directory. `lakefile.lean` names only the first two; the third is host-specific
and is why the Linux build is not wired up here yet.

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

- **Polymorphism, without `+mono`.** Vampire's logic is monomorphic. `vampire +mono`
  runs lean-auto's monomorphisation, ported from lean-smt's `Smt/Preprocess/Mono.lean`
  and wired in the same way — it replaces `pushHintsToCtx`, `intros` and `negateGoal`,
  because auto's procedure does all three itself. Without it a polymorphic hypothesis
  swept up from the context is skipped and one named as a hint is reported.
- **Theory axioms** — the generated file emits a Lean `axiom`, which a tactic cannot.
- **Arithmetic evaluation**, whose script needs `norm_num1`; VampLean dropped Mathlib.
- **A timeout that is not the saturation loop's.** `setSoftTimeLimit` is installed now
  (it was documented and not called — see below), but what it bounds is the saturation
  loop and not preprocessing or clausification, and it is checked in *wall* time. A goal
  whose clausification runs away still runs away.

**The input-step bridge** is `Vampire/Bridge.lean`: a structural congruence prover that
proves Vampire's recorded formula for an input unit from the Lean hypothesis it was
translated from, by walking the two types together rather than searching. The difference
it reconciles is one the export makes deliberately — `writeFormula` reverses every
junction to mirror `LeanPrinter`, and since Vampire holds a junction as a binary tree
that mirrors the whole tree — plus equations reoriented by the term ordering. It is
modelled on VampLean's `symmUnify`, which `rectify` uses through `symm_match` and which
gets everything except the junction cases: at an application node it recurses
positionally, so it takes `A ∧ B` against `B ∧ A` down `A` against `B`. The bridge also
backs `grind` on generic single-premise steps, where the rule is usually a weakening.

The quantifier reordering `LeanChecker::outputReorderIfNeeded` inserts into a
clausification, when prenexing the parent changes the order of its universal binders, is
now ported: `ffi/vampire_proof.cpp` exports the `VariablePrenexOrderingTree` ordering it
computes, and `.clausify` permutes the goal's `∀` prefix into it.

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
   superposition in a small context, 100ms in the goal's. The restriction keeps class
   instances even when they are `Prop`s: `Nonempty` is both, and `inhabitant` hands back
   `Classical.choice inst`, so dropping `inst` for being a `Prop` leaves the witness
   naming a variable that is out of scope.
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

**Currently 57/57** on this benchmark. `SWC153`, the last holdout, was the input-step
bridge; `Vampire/Bridge.lean` closed it.

### Where a replay's time goes

The two problems that used to miss `bench-tptp`'s 150s cap were both cost, not
correctness, and neither cost was in the tactic scripts. Recorded because each was
invisible from the outside and obvious once measured — `set_option
trace.vampire.timing` gives the per-step figures and `trace.vampire.timing.tactic` the
per-line ones.

1. **Checking the assembled term was most of the replay.** The steps are chained by
   `mkAppN`, which does not typecheck, so the finished proof used to be handed to
   `Meta.check`. On `PRD001+1` that was 167s of a 240s replay, against 72s for all 1415
   step scripts together — the elaborator's `inferType` walking a shared DAG the kernel
   is about to walk again anyway. What the check bought was attribution, and the
   applications are the only place `mkAppN` can go wrong: `applyChecked` checks each one
   as it is made, in constant time per argument because `proveBy` ascribes every proof
   to its statement, and names the premise rather than the theorem. `set_option
   vampire.checkReplay true` puts the whole-term check back.

2. **A multi-clause clausification has to be shared.** `LeanChecker::clausify`
   destructures the parent once, in the enclosing block, for every clause it produced.
   Replaying it as one step lemma per clause redoes `prenexify` and `cnfify` over the
   parent per clause, which is quadratic in a number that is not small: `SYN472+1`'s
   conjecture clausifies 196 ways, the refutation uses 145 of them, and the pair of
   transformations over that seven-hundred-atom formula measured 117s. The replay now
   does it once per parent and each clause is a projection out of the result — see the
   `.clausify` case in `Vampire/Reconstruct.lean`.

3. **`prenexify` hoists past `∧`, and `cnfify` immediately undoes it.** Its four rules
   pull every `∀` to the front of the *whole* formula. On a conjunction a hundred wide
   that rewrites the whole formula once per binder — 96s of `SYN472+1`'s 117s — and
   `cnfify`'s `cnf_prenex3` then pushes them all back into the individual conjuncts.
   What the clauses need is a `∀` at the top of each *disjunction*, which the two `or`
   rules give on their own. `clausifyParent` tries that first and falls back to
   `prenexify` proper for a parent whose clauses it does not reach: 117s to 2s here,
   with nothing lost where the weaker form is not enough.

4. **`transformHyp` runs its block twice** — once against a throwaway goal to learn what
   the block leaves behind, then again to build a term of it. That is necessary when the
   tactics read the goal, and `exists_prenex` does. A block that only rewrites `at h`
   does not, and for those `transformOnce` leaves the target open and lets `exact h`
   assign it, which halves the cost of the one transformation that matters.

5. **`repeat (first | A | B)` pays a failing traversal per round.** Each simp call runs
   to its own fixpoint, so what the loop does is A\*, B\*, A\*, B\*, … — but `first`
   retries A at the top of every iteration, and the retry that discovers A has nothing
   left to do is a whole further pass over the formula. Making the pair one alternative
   removes it from every round but the last. Worth about 3% here, which is to say: it is
   the shape to fix *after* the ones above, not instead of them.

### Assigning a metavariable is not free, and a rewrite is not a reshuffle

The two problems that were the slow tail after all of the above — `PRD001+1` at 79s and
`BIO006+1` at 77s of CPU — are now 7s and 11s. Neither was doing anything unnecessary at
the level of *which* steps ran; both were paying, in two different ways, for a proof term
that is built by unification or by rewriting when it could be built by construction.

`sample <pid>` is what found the first and the shape of the second. The dominant leaf was
`Lean.Meta.CheckAssignmentQuick.checkImpl.visit` and its visited-set — over half the
samples. That is the check Lean runs when it *assigns a metavariable*: it walks the whole
assigned value looking for anything out of scope. It is charged once per implicit
argument, and here every implicit argument is a formula with several hundred atoms in it.

1. **`mkAppM` over a large formula is quadratic.** `Vampire/Bridge.lean`'s `conjLeaves`
   took a conjunction apart with `mkAppM ``And.left #[h]`, leaving `{a b : Prop}` to
   unification: two metavariable assignments per projection, one projection per leaf,
   each assignment walking a conjunct. It also asked `inferType` at every node for a type
   the node above already knew. Threading the type and filling the implicit arguments in —
   which is what `Reconstruct.lean`'s `andLeaves` already did, and for this reason —
   took `BIO006+1`'s 142 `pure predicate removal` steps from **25.5s to 1.1s**. The same
   applies to every `mkAppM`/`mkAppOptM` on the bridge's common path.

2. **simp pays a congruence proof to every rewrite site.** `flattening` is `simp only
   [and_assoc, or_assoc, Classical.not_not] at h`: reassociation. One `BIO006+1` step
   measured **23.9s** on its own. Reassociation, junction order, and dropping conjuncts
   are exactly what the bridge does by construction, so `.flatten` and the one-clause
   `.clausify` now try `vampire_bridge` first — 23.9s to 12ms there, and `PRD001+1`'s 210
   one-clause clausifications from **24.1s to 0.8s**. The bridge grew two rules for this:
   `¬¬A` against `A`, and hoisting a `∀` out of a disjunction in both directions.

3. **Hoisting quantifiers is one equivalence; prove it once.** What was left of
   `PRD001+1` was a single step: the AVATAR split of the negated conjecture, whose `rw`s
   leave the goal a disjunction of 85 quantified components and whose `prenexify` then
   has to bring 97 binders to the front. **31s, in one step, at 5.5GB.** The cost is not
   the rewriting, it is that after the first binder every later site is under it, so each
   congruence proof runs through the prefix built so far and carries the formula at every
   level.

   Two things did *not* fix it, both worth recording. Restricting the rule set does
   nothing — the `∨` rules alone cost the same, which is what `orPrenex` measures. And
   applying the hoisting lemmas directly, under as many lambdas as are already hoisted,
   only got it to 19s: one application moves one binder past *one* `∨` node, so the whole
   prefix needs `O(k²)` of them, and each abstracts the proof accumulated so far.

   `Vampire/Prenex.lean` proves the equivalence flatly instead. If the conclusion fails
   then every disjunct fails, so each has witnesses at which its body fails; the premise
   at those witnesses is a disjunction every disjunct of which is refuted. One
   `byContradiction`, one witness per binder, one `Or.elim` per disjunct — linear.
   **31s to 1.5s**, and the replay it is part of from 74s to 7s.

`prenexify` and the reference's scripts stay behind all of this as `first` alternatives,
so a shape the cheap path does not reach is slow rather than broken. That matters more
than usual here: the term-level prenexer is weaker than `prenexify` and can order the
prefix differently, and nothing notices which prenexing ran until the rest of the script
tries to use the result.

### A fast path that silently never fires

After the above, the whole benchmark's remaining cost sat in the problems where AVATAR
does most of the work — the `ALG` family, which is every problem over 8s. Four things
were behind it, in the order they were found. `set_option trace.vampire.timing` gives the
per-step figures and `trace.vampire.timing.tactic` the per-line ones, and both were
needed: a step whose script is one `first` reports one line, so more than once the answer
was to flatten the script temporarily and let each line be timed on its own.

The first thing measured was that **the step scripts were not where the time was**. On
`ALG165+1` the trace accounted for 6.2s of a 20.3s replay. The other 14s was a *single
step*: the AVATAR refutation, whose 1506 `grind only [cases Or]` calls are one `proveBy`
each and are not step lemmas, so nothing in the per-step trace covered them.

1. **A resolution is not a case split.** `LeanChecker::avatarRefutationByResolution`
   states one lemma per step of the solver's derivation and proves it with `grind only
   [cases Or]`, and this port followed it. `ALG165+1`'s derivation is 1506 steps naming
   31125 premises between them, 116k literals in all: **15.3s of a 24s replay**, and
   `ALG190+1` 21s of 34s. None of it is hard — falsify a step's conclusion and its
   premises are a conflict that *unit propagation* reaches, because conflict analysis is
   what produced them. `Vampire/Sat.lean` builds that proof as a term: one application
   per literal, one propagation per resolved variable, no metavariables and no case
   splitting. **15.3s to 0.7s.**

   Written the obvious way first, it was *slower* than `grind` — 15.4s, and it took
   `mkLetFVars` over the finished proof from 0.4s to 14s. The construction was building
   each node with `withLocalDeclD` and abstracting it with `mkLambdaFVars`, and
   abstracting a binder walks the term under it, so a chain of `k` of them walks the
   accumulated proof `k` times. Every node is now a *named lemma applied to its
   arguments* — `notOr`, `orCases`, `absurdFun`, eight one-liners at the top of the file
   — and nothing is abstracted at all. This is the same lesson as `mkAppM` in point 1
   above, in another key: **the cheap way to build a proof term is by application, and
   anything that has to look under a binder is not that.**

2. **`mdata` is invisible when you print a formula.** The bridge's tests are all
   structural — `isAppOfArity ``Or 2` and friends — and a goal the elaborator made
   carries an `mdata noImplicitLambda` wrapper around its type. So `vampire_bridge`,
   asked to close an AVATAR split clause, decided the goal was not a disjunction, treated
   the whole clause as one opaque disjunct, and failed. It failed that way on **307 of
   `ALG160+1`'s 446** split clauses, every one of them for this reason and none because
   the two formulas disagreed — and it failed *quietly*, because the reference's script
   is behind it and simply ran. One `consumeMData` in `transport` took the hit rate on
   `ALG165+1`'s split clauses from 208/373 to **373/373**, and with it went the three
   simp traversals and the `grind` that the reference's script spends on each one.

   The way this was found is the point. The error message named two formulas that were
   *identical as printed*, which is what sent the investigation to defeq and to equation
   orientation before `toString` on the raw `Expr` showed the wrapper. **When two
   formulas look the same and are not, print the `Expr` and not the formula** — the
   pretty-printer is a lossy view of the thing the code is actually matching on.

3. **A search with no discriminator is quadratic, and the fallback hides it.** Behind the
   same bridge, `pick` matched a conjunct of the conclusion by *attempting a transport
   against every leaf of the hypothesis*, and `inject` found the disjunct that accepts a
   proof the same way. A wrong candidate is only cheap when it fails at the head symbol,
   and a junction inside a junction multiplies the attempts out: `ALG160+1`'s 528 bridges
   made 35862 `transport` calls of which **20733 ended in "cannot reconcile"**, and 4012
   of the 4276 `pick`s inside them failed. `Bridge.sig` hashes a formula modulo the two
   things the bridge exists to reconcile — the order of a junction's arguments and which
   way round an equation is stated — and the candidates that match are tried first.
   Nothing is *decided* by it, so a weakening or a hoisted binder still bridges by
   search. Per input step: **40ms to 10ms**; per flattening the same.

4. **A `simp only` that changes nothing still costs a traversal.** The AVATAR
   split-clause script runs `prenexify at h0` so that the parent can be applied at the
   variables the goal has just introduced, which needs its own `∀` prefix at the front.
   A clause usually already has it there. At 2.4ms a step over 1143 steps that was the
   largest line left once the bridge was closing the step, and the script now tries the
   sequence without it first: where `h0` does need hoisting, the application does not
   typecheck and the alternative that keeps the line runs. **-17% of the replay** on the
   three problems measured.

Measured on the paper's 57 together, one problem at a time, the better of two runs each,
before and after back to back on the same machine: **285.6s of CPU to 219.5s**, and with
the 2.45s of `lake lean` start-up every problem pays taken out, **146.0s of work to
79.8s (-45%)**. Nothing got slower. The work in the slowest problem went 25.1s to 9.4s
and the 90th percentile 7.5s to 4.5s; the median problem does a quarter of a second of
work either way and is start-up.

The machine had a game on it throughout, so read these as a ratio and not as absolute
figures — which is what `bench-tptp/README.md` says about every number in it, and the
reason the two runs were done back to back and reported as the minimum of two.

What is left, and where the next one would have to come from: `grind only [cases Or]` on
the derived inferences (29% of what the tactic scripts now cost), the `repeat` and
`cnfify` inside `clausifyParent` (21%), and the per-invocation floor of a tactic —
around 0.5ms for a `simp only [x] at h` on a small formula, most of it in building the
simp set again. There is no single step or rule left that is more than about a tenth of a
replay; the remaining cost is a few thousand tactic invocations each near that floor,
which is a question about driving the replay through tactic syntax at all rather than
about any one script.

### The timeout was never a timeout, and the budget is a search parameter

Everything above is about the replay, and by the end of it the replay was no longer the
larger half. Traced across the whole of `bench-tptp/` — 195 problems, one at a time —
the split was **64.1s in the prover against 89.8s in the replay**, and the prover's
share sat in about fifteen problems. `set_option trace.vampire.timing true` reports both;
what it took to read the first number was noticing that `MGT035+2` spent 14.9s of a
15.8s run inside `Ffi.run`.

1. **`vampire.timeout` bounded nothing.** `vampire-global-state.md` says an embedded run
   has to bound itself with `SaturationAlgorithm::setSoftTimeLimit`, because the
   executable's enforcement is a thread that `_Exit`s the process and `Timer::startClock`
   was added precisely to avoid spawning it. Nothing called it. The shim set
   `Options::setTimeLimitInDeciseconds`, which reaches the strategy's estimate and no
   loop, so the search ran until it finished: `BOO028-1` asked for two seconds and
   searched for thirty. A missing timeout looks like a fast prover until a problem is
   hard, which is why it survived the whole benchmark.

2. **A tighter budget is a faster search, not just a shorter one.** The default
   saturation algorithm is `lrs`, the limited-resource strategy: it uses the time limit
   to estimate which clauses it can still reach and discards the rest. So the limit is
   an input to the search and not a cap on it, and a generous one prunes less and runs
   longer. Through the tactic, changing nothing but `vampire.timeout`: `MGT035+2` 14.9s
   at 30s against 1.6s at 2s, `MGT035-2` 6.6s against 1.2s, `LCL166-1` 4.7s against
   1.7s, `HEN009-5` 3.3s against 0.5s. Handing the prover the whole of a generous budget
   is the slow way to use it.

   `searchSchedule` therefore probes at 2s and 8s and only then spends the budget. The
   probes are absolute rather than fractions of it: what makes a probe worth trying is
   that it is small in itself. The last entry is always the whole budget, so nothing
   that used to be provable stops being, and a failed probe costs exactly its own limit
   — which is the reason the limit had to be *enforced* before any of this was safe.

3. **Escalate on the replay, not only on the search.** The first version escalated when
   the search found nothing, and it turned `GRP427-1` from a 5.0s pass into a failure at
   "step 20895 (superposition) could not be replayed". A different budget is a different
   search and finds a different proof, and a different proof can use a rule this port
   does not replay. `searchWith` takes what the refutation has to survive as a callback
   — the whole replay for `vampire`, nothing for `vampire?` — and escalates on either
   failure. `GRP427-1` now probes, discards the proof, and replays the wide search's in
   377ms.

   `trace[vampire.replay]` says when a refutation was thrown away, because otherwise a
   discarded probe is invisible and looks only like a slow prover.

4. **The soft check is wall time**, which is upstream's meaning. So a probe is
   load-dependent: `MGT035+2` refutes inside two seconds measured alone and times out
   beside other work. That is a real limitation and the fallback is the whole of the
   answer to it — a probe that loses the race costs its limit and the wide search runs.
   It also means these figures understate the gain under load rather than overstating it.

**Prover: 64.1s to 27.0s.** What is left is concentrated in the problems whose probe
fails and which then pay for it: `PRO014+3` and `BOO028-1` spend 2.1s each on a probe
that times out.

### A derived inference is unit propagation too

`Sat.lean`'s lesson, one level up, and it was the largest thing left in a replay.
`grind only [cases Or]` on the derived rules cost **33.3s of the 58.9s of step scripts**:
`forward subsumption resolution` 11.3s over 5136 steps, `resolution` 9.0s, `forward
demodulation` 7.3s, `superposition` 5.4s. None of it is hard. Once
`instantiatePremiseVars` has applied the recorded substitution, the premises and the
negated conclusion are the conflict the inference *was*: a resolution's two premises
disagree on the resolved literal, and a subsumption resolution's subsumer refutes the
literal the subsumed clause loses.

`Vampire/Clause.lean` is `Vampire/Sat.lean` over first-order literals — the same lemmas,
the same flat construction, no metavariables and no case splitting — plus the three
things such a literal has that an AVATAR split variable does not.

1. **An equation has two spellings.** `Literal::createEquality` orients by the term
   ordering and the two clauses of one inference need not have chosen the same way, so
   `a = b` in one and `¬(b = a)` in another are the complementary pair. A decision
   records the orientation its proof is in and `Eq.symm`/`Ne.symm` turn it round.

2. **A literal can decide itself.** `¬(t = t)` is what equality resolution and trivial
   inequality removal delete, and `rfl` refutes it with nothing else in hand; `t = t` in
   a conclusion holds outright, and then no premise is needed at all.

3. **Two literals can be the same modulo an equation the inference supplies.** This is
   what superposition and demodulation are: the premise holds `L[s]`, the conclusion
   `L[t]`, and `s = t` is the other premise. `motiveFor` walks the two literals together
   and abstracts exactly the positions where one has `s` and the other `t`, which is the
   motive `Eq.subst` wants. Walking the pair rather than rewriting one into the other is
   what makes it exact: demodulation rewrites the occurrences it selected and not every
   occurrence of `s`, so substituting all of them would give a term that is not the
   other literal and substituting one would be a guess about which.

Three bugs, and each was found by counting how often the fast path fired rather than by
anything failing — `trace[vampire.clause]` prints the goal and premises it declined, and
`grind` behind it meant a decline cost time and nothing else.

- **Falsifying a positive literal makes its atom false.** The conclusion loop recorded
  the literal's own polarity instead of its opposite, so every decision the negated
  conclusion made was backwards. `PRD001+1` declined 226 steps of the plainest possible
  shape — `¬A ∨ B`, `A`, conclusion `B` — and after the one-character fix, none.

- **A decided atom must still be looked up modulo the equations.** `negLit` gave up as
  soon as the assignment had an opinion about the atom, and the case that needs the
  equations is exactly the one where it has the *wrong* opinion. That is what
  `decisionConflict` asks about.

- **The conflict need not be inside a clause.** A demodulation from `¬B` and `s = t` has
  `¬B` as a unit premise, so propagation uses it to decide `B` false rather than to
  refute anything, and the clause is then satisfied by its own decision and can never be
  the conflict. What contradicts is that decision against the conclusion's, and only
  once the other premise's equation is in hand — which was not yet true when `B` was
  decided. `decisionConflict` is the scan propagation ends with rather than a rule of its
  own.

Zero declines on the `ALG` family afterwards. **The four rules: 33.3s to 6.7s.**

`Test/Clause.lean` exercises it directly, for the reason `Test/Prenex.lean` gives about
itself: behind a `first`, a bug is a slow replay and not a failing one. One of its cases
was written as a decline and turned out not to be — propagation closes a *weakening*,
because falsifying a conclusion with disjuncts the premise lacks decides those too.

### `mkAppM` is not free even when there is nothing to unify

`And`, `Or`, `Not` and `Iff` take no implicit argument. `mkAppM` therefore had nothing to
solve for them — and still inferred the type of each argument and ran `isDefEq` against
`Prop`, at every node of a formula, and `formExpr` recurses. A clause's statement is
built once for the clause and once more for every step that names it as a premise, so
this is the innermost loop of stating a refutation and it was invisible: the `type`
column of `trace.vampire.timing` was **1.5s of the 15 problems' 20.9s**, spread over
12000 steps with no single one large. `Eq` and `Exists` do take one, and `mkEq` and the
sort's own level supply it without a metavariable — the same point `Bridge.lean` records
about `mkAppM`, in the statement rather than in the proof.

**Over the whole benchmark, 2.8s to 0.44s**, and `pure predicate removal` — 387 steps,
mostly over `BIO006+1`'s formulas — from 2.3s to 1.5s.

### A signature is what says which leaf to look at

The last of the big items, and it was hiding in a function that looked like a lookup.
`findLeaf` finds a multi-clause clausification's clause among the leaves of the shared
CNF: the statement index gets it when the clause is a leaf verbatim, and behind that was
a linear `isDefEq` over every leaf and then `vampire_finish_clausify`, which rewrites
both sides until `assumption` can see they agree.

`SYN472+1` clausifies 196 ways, the refutation uses 141 of them, and **29 are not
verbatim** — so 29 times over, `isDefEq` ran against 196 formulas of seven hundred atoms
and a triple simp traversal followed. 4.8s of that problem's 5.9s replay, in a step that
the per-step trace attributed to nothing because the shared clausification is not a step
lemma. It took adding a line per bucket of the replay that no step covers — the input
bridge, the shared clausification, the SAT refutation, skolemisation — to see it at all.

The leaves are now indexed by `Bridge.sig`, which hashes a formula modulo exactly what
the two renderings differ by, and the candidates that match are tried by `isDefEq` and
then bridged. The blind scan stays behind the signature, because a signature decides
nothing: two leaves definitionally equal for a reason it cannot see would otherwise stop
being found. **`SYN472+1` 5.9s to 1.3s**, `SWC153+1` 2.1s to 0.7s, `PUZ010-1` 2.1s to
0.8s.

### Where that leaves it

Measured over `bench-tptp/`'s 195 problems, one at a time, before and after on the same
machine. `lake lean` start-up and the statement's own elaboration are a floor every
problem pays whatever the tactic does — 344.6s of it, measured by replacing `vampire [*]`
with `sorry` — so the tactic's own work is quoted with that taken out.

| | before | after |
| --- | ---: | ---: |
| total CPU | 536.1s | 464.6s |
| the tactic's own work | 191.5s | **120.0s (-37%)** |
| prover | 64.1s | 27.0s |
| replay | 89.8s | 53.6s |
| of which step scripts | 58.9s | 29.3s |
| of which `mkLetFVars` | 5.2s | 5.2s |
| stating the steps (the `type` column) | 2.8s | 0.44s |
| 90th percentile | 4.45s | 3.29s |
| slowest problem | 15.8s | 12.9s |
| peak RSS | 2.09GB | 2.03GB |
| pass | 195/195 | 195/195 |

Nothing got slower except `BOO028-1`, by the 2.1s its probe spends before timing out.
`SYN036+1` reads as a regression in the run and is not one: measured alone it is 10.4s
against 11.1s, and the run that says 12.9s was measuring the machine.

What is left, and where the next one would come from. The prover's 27.0s is mostly
failed probes and two or three genuinely hard searches; a portfolio would answer that
and Vampire's portfolio mode forks, which an embedded run cannot. Of the replay's 53.6s,
29.3s is step scripts, and the largest single rule is now `avatar split clause` at 6.7s
over 3705 steps — 1.8ms each, spread over the six or seven tactic invocations its script
makes rather than concentrated in any one of them. A further 5.2s is `mkLetFVars` and
the ~19s left is the buckets outside the step trace, of which `clausifyParent` on
`BIO006+1` is 1.4s in a single `cnfify`.

And about 40s of the tactic's work is not in any of these numbers, because it happens
after the replay returns: the kernel typechecking the term. `SYN036+1` is the problem
where that dominates — 1.7s to abstract 52 definitions over the proof and most of the
rest inside the kernel — and it is the one measurement that says the *size* of the term,
rather than the cost of building it, is the next thing to look at.

Beyond that the answer is the same as it was two rounds ago and has only got more so:
the remaining cost is thousands of tactic invocations at a floor of about half a
millisecond, which is a question about driving the replay through tactic syntax at all.

### `bench-tptp/`

A second, wider benchmark: more TPTP problems, same method (extract a `fullProof`
statement, replace its proof with `vampire [*]`, check for `sorryAx`). With the original
57 that is **196/196**, in 10.7 minutes of CPU run one at a time; the median problem is
2.2s, the 90th percentile 5.8s and the slowest 19.6s, at 2.2GB. What used to fail, and
what each one turned out to be, is in `bench-tptp/README.md`; scripts to regenerate and
rerun it are there too.

`bench-tptp/sweep.py` runs it and serves a live page. It also has a `--triage` mode that
runs everything in parallel under a short cap and then reruns the tail one at a time:

    ./sweep.py $SP/res $SP/tests --jobs 6 --triage 15 --cpu-limit 300

That was worth the complication when the tail was `PRD001+1` at 79s and 5.5GB. It is not
any more — the slowest problem is 19.6s at 2.2GB and the whole set runs serially in 10.7
minutes — so a single pass is the simpler thing to quote.

**A timing taken beside other work measures the machine**, and this is what the numbers
have to be run alone for. CPU time looks like it should be immune, since it is not wall
time, but Lean elaborates on several threads and time they spend spinning for a core is
charged to the process. In the `--jobs 3` run of these same 196 problems several
two-second problems came out at eighteen; on an earlier machine that also had a game on
it, `SYN472+1` was 43s against 13s measured alone, and two problems missed a 150s cap
that take 79s and 77s. `sweep.py` warns if the load average is high before it starts, and
keeps load on the page.

Peak RSS was the other figure to watch, and the reason `--jobs` was not the core count:
`PRD001+1` used to hold 5.5GB on its own, and a few of those at once will put a 16GB
machine into swap, after which every timing is measuring paging. The ceiling is 2.2GB
now — the same work that took the time was building the proof term that took the memory —
so `--jobs` can be chosen for cores again.

### Against duper and lean-smt

`docs/comparison.md` runs the same 194 statements through
[duper](https://github.com/leanprover-community/duper) and
[lean-smt](https://github.com/ufmg-smite/lean-smt), by retargeting the tactic line and
nothing else. Within 15s of CPU at six jobs: `vampire` 182, lean-smt 155, duper 133, and
on the 117 all three solve the median CPU is 3.0s, 7.3s and 5.1s.

Two things in that document matter more than the numbers. The problem set is Vampire's
own — `gen.sh` generates each test by running Vampire until it finds a proof — so it
measures how the three fare on Vampire's problems and not their general strength. And
the first lean-smt run was wrong by 40 problems because its preprocessing wants
`Nonempty ι`, does not find it in the shape these files provide, and then *logs* the
failure and admits the goal: the same hazard recorded below for our own replay, hit by
somebody else's tactic and caught only by `#print axioms`.

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
10. **Two large problems in one process used to segfault** — fixed, but the shape is
   worth remembering. `TermPartialOrdering` cached relations in function-local statics,
   and a cached relation keeps a `const Ordering&`; the second problem got the first
   problem's ordering and died on a vtable call into freed memory. It only showed up on
   problems large enough for forward demodulation, and only on the *second* one, because
   nothing read the stale cache until then. `Lib::resetGlobalState` drops it now. Two
   things made this hard to see: a wrong hypothesis (`+mono`, which was merely correlated
   with the problems being large), and a broken reproducer — see 11.
11. **A hand-rolled `Expr` traversal without a visited set is exponential, not linear.**
   `restrictedContext` collected free variables with a plain structural recursion. An
   `Expr` is a DAG with heavy sharing, so shared subterms were re-walked once per path
   to them — and it was being asked for the free variables of a `let`'s *value*, which
   here is a skolem witness of the form `Classical.choose <the whole parent proof>`. On
   `SYN036+1` that was over two minutes of a two-minute run: 8333 of 8378 stack samples,
   nine hundred frames deep. `Expr.collectFVars` carries a memo table; use it. Found by
   sampling the process (`sample <pid>`), which took a minute and pointed straight at the
   frame — after an attempt to read it off the timing trace, which never printed because
   traces are only flushed when the declaration finishes and this one never did.
12. **`lean` needs `--load-dynlib` for the extern lib as well as `--plugin` for each
   precompiled module.** `lake setup-file`'s JSON has both a `plugins` and a `dynlibs`
   key; miss the second and the FFI symbols are unresolved and the process dies before
   running anything. Two hours went into a backtrace of that crash rather than the real
   one. Validate any hand-built `lean` invocation on a goal you know passes before
   believing what it says about one that fails.
13. **Nothing a run prints reaches you until the file finishes.** Traces and log
   messages are attached to the command's snapshot and reported when the frontend folds
   the tree, so a `lake lean` on a goal that takes twenty minutes says nothing for
   twenty minutes and then says everything — including, if you kill it, nothing at all.
   `IO.eprintln` does not help either: lake buffers the child's stderr. To watch a run
   that may not finish, write to a file and flush it, or stop the tactic earlier —
   `vampire?` does translation and search and no replay, which is how the two-minute
   question "is this the prover or the replay?" got a seven-second answer.
14. **`sample` truncates a deep stack.** The replay nests one frame per `let` it binds
   and one per step it chains, and past a few thousand frames the profile shows the
   *top* of the stack with no path back to the caller — every branch looks like it
   starts inside `simp`. Read what the leaves are doing, and get the attribution from
   `trace.vampire.timing.tactic` instead.

## Fork changes, in order

    2abf74e  AVATAR refutations as resolution steps, not bv_decide
    7032c0f  avoid `contradiction` over the whole context in clausification
    24f10e6  bind split propositions per theorem; autoImplicit false
    9126105  `vampire_lib` static target for embedding
    e3f62c2  `Lib::resetGlobalState` — more than one problem per process
    124034e  no exit(10); `Timer::startClock` so the timeout cannot _Exit the host
    9a593d8  re-arm the exit lock between runs
    e101aa7  do not leak the inference replayer's saturation algorithm
    4473042  reset TermPartialOrdering's caches between problems
    b120371  reset TermOrderingDiagram's single-comparison cache too
    d7c7784  install the embedded soft time limit, so a run can be bounded

The first three are proof-generation work from before the FFI and are independent of
it: all 14 ALG problems that Vampire solves now check, 874s → 233s, four former
timeouts fixed. `bench/` reproduces that.

## Open questions

- Per-thread Vampire contexts would remove the global lock. Deferred deliberately.
- Whether to vendor `vamplean` rather than depend on a path into `bodingbauer-etall/`.
- The allocator is never reset, so a long-lived Lean process grows across runs.
