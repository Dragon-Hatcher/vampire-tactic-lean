# `vampire` tactic for Lean

A Lean tactic that discharges goals using the Vampire theorem prover.

```lean
/-- Every group of exponent 2 is abelian. -/
theorem mul_comm_of_sq_eq_one (G : Type) [Group G] (h : ∀ x : G, x * x = 1) :
    ∀ a b : G, a * b = b * a := by
  vampire +mono [h, mul_assoc, one_mul]
```

Vampire finds the refutation; the tactic then **replays that refutation as a
Lean proof term**, inference by inference. Nothing is admitted and no search
tactic stands in: if a rule cannot be replayed the tactic says so rather than
closing the goal quietly.

## Theories

The tactic supports uninterpreted functions and the Vampire theories of integer,
rational and real arithmetic.

Vampire has some support for, but this tactic does not: bit-vectors, arrays,
datatypes, `ite`, `let`, and higher-order reasoning.

## Install

Add it to your `lakefile.lean`:

```lean
require vampire from git
  "https://github.com/Dragon-Hatcher/vampire-tactic-lean.git" @ "main"
```

Lake fetches the pinned revision of the [Vampire
fork](https://github.com/Dragon-Hatcher/vampire-tactic-vampire) into its build
directory and runs that CMake build itself — you do not have to clone anything.
The fetch is shallow and takes only the submodules the build needs, about twenty
megabytes.

You need `cmake`, `git` and a C++20 compiler. Vampire is a few hundred
translation units, so the first build takes some minutes; afterwards it is
cached like any other Lake target. Linux and macOS are supported; Windows is
not.

Each translation unit wants upwards of 2 GiB, so the job count is derived from
the memory the machine reports rather than from its core count. Override it:

```
CMAKE_BUILD_PARALLEL_LEVEL=8 lake build
```

For development, `VAMPIRE_DIR` points at a Vampire checkout of your own instead
of the pinned one, and `VAMPIRE_WORKER` points straight at an already-built
`vampire-worker` binary.

## Usage

The tactic is `vampire`. It translates the current goal and the hypotheses you
name into Vampire's format, searches for a refutation, and replays it.

Only hypotheses named in square brackets (`vampire [h, q]`) are sent. Use `*`
for everything in the local context: `vampire [*, other_theorem]`.

Vampire's logic is monomorphic, so a goal quantifying over a type or carrying a
typeclass has no direct reading. `vampire +mono` runs
[lean-auto](https://github.com/leanprover-community/lean-auto)'s
monomorphisation first, as the
[lean-smt](https://github.com/ufmg-smite/lean-smt) tactic does.

```lean
variable [Group G]

theorem inverse : ∀ (a : G), a * a⁻¹ = 1 := by
  vampire +mono [mul_assoc, one_mul, inv_mul_cancel]
```

`G` becomes an uninterpreted sort and `*`, `⁻¹` and `1` uninterpreted symbols.

`ℤ`, `ℚ` and `ℝ` are translated to Vampire's `$int`, `$rat` and `$real`; `+`,
`-`, `*`, `/`, unary minus, `<`, `≤`, `>`, `≥` are translated too; `^` at a
literal natural exponent is unfolded into multiplications.

```lean
theorem tri (x y z : ℝ) (h : x < y) (h₂ : y < z) : x < z := by
  vampire [h, h₂]
```

Vampire works through a portfolio: the same problem under a few hundred
combinations of options. Only the one that succeeds is any use, so when a proof
is found the tactic tells you which strategy found it, and you can write that
into the call to skip the rest next time. This matters most for arithmetic,
where the default strategies tend not to work as well.

```lean
-- slower
theorem real_lin (x y : ℝ) (h : x + y = 6) (h₂ : x - y = 2) : x = 4 := by
  vampire [h, h₂]

-- faster
theorem real_lin' (x y : ℝ) (h : x + y = 6) (h₂ : x - y = 2) : x = 4 := by
  vampire (strategy := "lrs+10_1:1_alasca=on:sp=occurrence:ss=axioms:st=3.0:to=lakbo_0") [h, h₂]
```

The search is reproducible. Vampire counts the steps it takes rather than
reading the clock, so the same goal gives the same proof on a slow machine and a
fast one. `wallLimit` is the one exception — a run that hits it says so.

## Options

Written as `vampire (timeout := 60) [h]`. The full set is `Vampire.TacticConfig`.

| option | default | what it does |
| --- | --- | --- |
| `timeout` | 30 | seconds the prover may search, counted in steps |
| `wallLimit` | 60 | real seconds after which to give up whatever the step count says |
| `strategy` | — | run only this strategy, as the tactic reports it |
| `mono` | false | monomorphise with `lean-auto` first (`+mono`) |
| `showQuery` | false | print the TPTP problem instead of running the prover |

## If a goal fails

`vampire +showQuery` prints the problem exactly as Vampire receives it, and
`set_option trace.vampire true` reports the problem, the proof Vampire found,
what Vampire said for itself, and what each step of the replay cost — which is
how to tell a slow translation from a slow search from a slow replay.

| message | what it means |
| --- | --- |
| `vampire did not refute the goal (…)` | the search came back empty. Pass more hypotheses, raise `timeout`, or try `+mono`. If a `strategy` is named, that is the only one tried — remove it to put the schedule back |
| `vampire refuted the goal but the proof could not be replayed: …` | a bug in this library, not in your goal. The prover found a proof and the reconstruction could not follow it; please report it with the goal |
| `… which this tactic does not implement yet; those steps are admitted` | Vampire used an inference rule that has no reconstruction yet, so the proof holds a `sorry`. Lean reports that too |
| `could not find vampire-worker` | the C++ side was not built. Run `lake build`, or set `VAMPIRE_WORKER` |
| `vampire failed: …` | the worker could not be run at all |

## Repository

- `Vampire/` — the tactic. `Translate.lean` goes to TPTP, `Wire.lean` decodes
  what the prover wrote, and `Reconstruct/` replays it, one module per family of
  inference rules.
- `worker/` — the C++ program that runs one proof attempt and writes the
  derivation out in a flat encoding.
- `problems/` — 400 problems the replay is tested against: 300 from TPTP and 100
  from SMT-LIB, each with the original beside its Lean statement. Development
  only; not needed to use the tactic.
- `scripts/run-problems.py` — elaborates the corpus and reports what failed.
  `scripts/trace-problem.sh` does one problem with tracing on.
