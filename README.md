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

`set_option vampire.timeout n` gives the prover `n` seconds to search (default 10), and
it is the *whole* search: three stages divide it between them and none of them gets a
budget of its own on top.

| stage | share | what it is |
| --- | --- | --- |
| probe | `vampire.probeShare`, 20% | Vampire's default strategy, briefly |
| portfolio | `vampire.portfolioShare`, 30% | the schedule `--mode portfolio --schedule casc` would have chosen for this problem, strategy by strategy |
| fallback | what is left, 50% | the default strategy again, with the rest |

The probe is first because a tight limit is a *different* search and often a better one:
Vampire's default saturation algorithm reads the limit as a search parameter and prunes
harder when it is small. The portfolio is in the middle because that is where most of the
difference between this tactic and the `vampire` binary was — see `docs/portfolio.md`,
and "Diversity is the other half" in `docs/design.md`. And the fallback is last because a problem that
wants one strategy searching for seconds, rather than many for tenths, needs somewhere to
get it.

Either share can be `0`, which hands its time to the fallback rather than shortening the
total; `probeShare 0` is one attempt at the whole budget, and `portfolioShare 0` turns
the portfolio off. `vampire.portfolioSlice` caps what a single strategy may have (20
deciseconds by default).

That ordering and that split are measured, on 100 random TPTP problems under a 10s wall
clock. The portfolio last, on a budget of its own equal to `vampire.timeout`, proves 58;
in the middle on a share of its own, 59. Both halves of that matter — moving it without
giving it a share proves 59 but gives a problem up, and a 40% share gives the same problem
up again, so the useful window is narrow. `bench-100/` has the harness, and
`vampire.portfolioShare`'s docstring has the problem names.

**Read all of those numbers as ±several problems.** A second, independent hundred drawn
the same way (`bench-holdout/`, a different seed, two problems of overlap) scores 69
rather than 59 on the same defaults and the same limit. The tuning is not overfitted —
that is the point of drawing a second sample — but a ten-problem spread between two
samples of a hundred is larger than most of the differences these figures are used to
argue about, this README's included.

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

## Install

Add it to your `lakefile.lean`:

```lean
require vampire from git
  "https://github.com/Dragon-Hatcher/vampire-tactic-lean.git" @ "main"
```

then `lake build`. Nothing else has to be prepared: Lake checks out the Vampire fork the
tactic embeds and runs its CMake build itself.

You need `cmake`, `git` and a C++20 compiler. Vampire takes some minutes to build the
first time and is then cached like any other Lake target.

**Two build jobs by default.** Vampire is around 350 translation units of template-heavy
C++ and the compiler peaks over a gigabyte on several of them, so a job per core will ask
more of a 16GB machine than it has — and it swaps rather than failing cleanly. Raise it
if you have the memory:

```
VAMPIRE_TACTIC_JOBS=8 lake build
```

Working on the fork itself: point `VAMPIRE_TACTIC_SRC` at a checkout and nothing is
fetched. An archive already built at `<checkout>/build/libvampire_lib.a` is used as it
stands, so you are not paying for that build twice.

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
a tactic cannot do. Arithmetic evaluation, whose script needs `norm_num1` — which is
Mathlib's, and this package does not depend on Mathlib; the translation produces no
arithmetic either. `rectify`'s recorded renamings, which are not exported: `symm_match` and a
permutation fallback cover the alpha-equivalent and reordered cases between them. And
the `bv_decide` encoding of the SAT refutation, which the generator falls back to when
the solver's derivation is unavailable.

A step needing something unported is reported by name and unit number rather than
guessed at. `Vampire/Reconstruct.lean`'s header is the authoritative list.
## When a goal does not go through

`vampire?` first. It takes the same hints, prints the problem as Vampire received it and
the refutation it found, and leaves the goal alone — which separates "the prover found
nothing" from "the prover found something this port could not replay", two problems with
different answers.

| what you see | what it means |
| --- | --- |
| `the search ran out of budget` | raise `vampire.timeout`; the search was still going |
| `the search exhausted what it had not discarded` | the strategy pruned to fit the budget and ran out of room — raise `vampire.timeout` and it prunes less |
| `no refutation found: ... does not follow` | the search finished the space. No budget will help; the goal does not follow from what it was given |
| `step N (rule) could not be replayed` | Vampire proved it and the replay could not use that proof. `Vampire/Reconstruct.lean`'s header lists what is ported |
| `refuted by a portfolio strategy` | it worked, and the message offers you `vampire (strategy := "...")` to skip straight there next time |
| `error loading library, libc++.so.1` | a linking problem, not a prover one — see `cxxStdlib` in `lakefile.lean` |

`set_option trace.vampire.timing true` reports translation, the prover's phases and the
replay separately, which is how to tell a slow translation from a slow search.

## Further reading

* `docs/design.md` — how the pipeline is put together and why, and what it is a port of
* `docs/portfolio.md` — why the portfolio is worth its share of the budget, measured
* `docs/comparison.md` — `vampire`, `duper` and `smt` on the same problems
* `docs/vampire-global-state.md` — the shared mutable state an embedded prover has to reset
* `bench-tptp/` — the TPTP harness. Development only; not needed to use the tactic
