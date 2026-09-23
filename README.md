# `vampire` tactic for Lean

A Lean tactic that discharges goals using the Vampire theorem prover.

```lean
/-- Every group of exponent 2 is abelian. -/
theorem mul_comm_of_sq_eq_one (G : Type) [Group G] (h : ∀ x : G, x * x = 1) :
    ∀ a b : G, a * b = b * a := by
  vampire +mono [h, mul_assoc, one_mul]
```

Vampire finds the refutation; the tactic then **replays that refutation as a
Lean proof term**, inference by inference. By default nothing is admitted: if
a rule cannot be replayed, the tactic fails and names it. `+admit` closes the
goal anyway, with those steps as `sorry` and a warning. The one place a
decision procedure stands in is arithmetic, where vampire's own rules record
nothing of why a step holds, so `linarith` or `omega` proves that step from the
literals it acted on.

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
directory and runs that CMake build itself. You do not have to clone anything.
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

The goal is sent, together with the hypotheses introduced from its binders.
Hypotheses already in the local context are sent only if named in square
brackets (`vampire [h, q]`). Use `*` for everything in the local context:
`vampire [*, other_theorem]`.

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
`-`, `*`, `/`, unary minus, `<`, `≤`, `>`, `≥`, `⌊x⌋` and `⌈x⌉` are translated
too; `^` at a literal natural exponent is unfolded into multiplications. `ℕ` is
not: a cast from it is refused, unless it is of a numeral.

```lean
import Mathlib
import Vampire

theorem tri (x y z : ℝ) (h : x < y) (h₂ : y < z) : x < z := by
  vampire [h, h₂]
```

`import Vampire` brings in only the part of Mathlib the tactic itself needs, so
a goal about `ℝ` needs Mathlib imported too. Without it `ℝ` is in scope but its
order instances are not, and the goal fails to elaborate before the tactic
runs. Mathlib is already a dependency of this package.

Vampire works through a portfolio: the same problem under a few hundred
combinations of options, called strategies. When naming the strategy that found
the proof would save more than 100ms of search, the tactic suggests the call
with `(strategy := ...)` added, which skips the strategies before it. Below
that it suggests nothing, since a named strategy goes stale when the goal
changes. This matters most for arithmetic, where the proof is often found late
in the schedule. `+stats` shows where the search went either way.

```lean
-- slower
theorem real_lin (x y : ℝ) (h : x + y = 6) (h₂ : x - y = 2) : x = 4 := by
  vampire [h, h₂]

-- faster
theorem real_lin' (x y : ℝ) (h : x + y = 6) (h₂ : x - y = 2) : x = 4 := by
  vampire (strategy := "lrs+10_1:1_alasca=on:sp=occurrence:ss=axioms:st=3.0:to=lakbo_0") [h, h₂]
```

The search is reproducible. Vampire's limits are measured in beats, steps it
counts as it searches, rather than on the clock, so the same goal gives the same
proof on a slow machine and a fast one. How many strategies run at once does not
change the proof a strategy finds, only how far the search gets within
`timeout`. `wallLimit` is the one exception, and a run that reaches it says so.

## Options

Written as `vampire (timeout := 60) [h]`. The full set is `Vampire.TacticConfig`.

| option | default | what it does |
| --- | --- | --- |
| `timeout` | 30 | seconds the prover may search, measured in beats, for each of `cores` |
| `heartbeats` | 500 | beats per millisecond of `timeout`; 0 uses the clock |
| `wallLimit` | 60 | real-time limit in seconds, whatever the beats say; 0 for none |
| `cores` | 4 | strategies of the schedule run at once |
| `schedule` | `casc` | the strategy schedule to work through |
| `strategy` | — | run only this strategy, as the tactic suggests it |
| `options` | — | extra vampire options, as `#[("name", "value")]` |
| `mono` | false | monomorphise with `lean-auto` first (`+mono`) |
| `showQuery` | false | print the TPTP problem instead of running the prover |
| `stats` | false | report what each phase cost and how many steps the proof had (`+stats`) |
| `checkSteps` | false | check each replayed step as it is built, naming the rule that fails |
| `admit` | false | close the goal even where the proof uses a rule with no replay yet, admitting those steps as `sorry` (`+admit`) |

`+stats` says where the time went:

```
vampire took 2126ms, not counting what Lean then does with the proof term:
  preprocessing 227ms
  translation   0ms
  search        1807ms
    worker overhead         18ms
    parsing the problem     0ms
    failed strategies       1598ms
    successful strategy     191ms
  replay        92ms
the proof vampire found had 292 steps
```

Most of the search is usually spent on the failed strategies. Naming the
successful one skips them, and the tactic reports the saving when it suggests
the strategy. Here, naming it took the search from 1807ms to 248ms. "Worker
overhead" is everything outside the schedule: starting the worker, writing and
reading files, and exiting.

Sharing the term's subterms and checking it in the kernel happen after the
tactic returns, so they are not in that total; `set_option profiler true`
reports them.

## If a goal fails

`vampire +showQuery` prints the problem exactly as Vampire receives it, without
running the search. `set_option trace.vampire true` reports the problem, the
proof Vampire found and what Vampire printed. `set_option trace.vampire.timing
true` reports what the search, the replay and each replayed step cost. `+stats`
gives the summary per phase, which tells a slow translation from a slow search
from a slow replay.

| message | what it means |
| --- | --- |
| `vampire did not refute the goal: …` | the search came back empty. Pass more hypotheses, raise `timeout`, or try `+mono`. If a `strategy` is named, only that one was tried; remove it to run the whole schedule |
| `vampire refuted the goal but the proof could not be replayed: …` | a bug in this library, not in your goal. The prover found a proof and the reconstruction could not follow it; please report it with the goal |
| `vampire's proof uses …, which this tactic does not replay yet` | Vampire used an inference rule that has no reconstruction yet. `+admit` closes the goal anyway, with a `sorry` for those steps and a warning saying so |
| `could not find vampire-worker` | the C++ side was not built. Run `lake build`, or set `VAMPIRE_WORKER` |
| `Could not find native implementation of … spawn` | `lean` was started without the libraries Lake loads. Build and run through Lake (an editor, `lake build` and `lake test` all do), or pass the `--load-dynlib` flags `scripts/trace-problem.sh` reads out of Lake's own setup |
| `vampire failed: …` | the worker could not be run at all |

## Licence

The Lean code here, and `worker/worker.cpp`, are MIT; see `LICENSE`. Vampire
itself is BSD 3-Clause and is fetched at build time rather than vendored, so
what this repository distributes is only the MIT part. `NOTICE` records what the
built worker is made of and what each piece is under.

## Repository

- `Vampire/` — the tactic: the goal it is given, the decision procedures it
  hands to replay, and the syntax.
- `replay/` — a package of its own holding the replay, and `spawn.c`, which
  starts the worker without copying the address space: `Translate.lean` goes to
  TPTP, `Wire.lean` decodes what the prover wrote, and `Reconstruct/` replays
  it, one module per family of inference rules. Separate so that it can be
  precompiled and so run as native code rather than in the interpreter, which
  is worth about three times the replay; that is possible only because none of
  it imports Mathlib, the decision procedures being handed in rather than
  called.
- `worker/` — the C++ program that runs one proof attempt and writes the
  derivation out in a flat encoding.
- `problems/` — 400 problems the replay is tested against: 300 from TPTP and 100
  from SMT-LIB, each with the original beside its Lean statement. Development
  only; not needed to use the tactic.
- `scripts/run-problems.py` — elaborates the corpus and reports what failed;
  `lake run problems` runs it, over the whole corpus or what its arguments
  name. `scripts/trace-problem.sh` does one problem with tracing on.
- `test/` — `lake test`: the tactic's own examples, which must close their goals
  without a warning, the worker on ten TPTP problems, and the `smoke` split of
  the corpus, the quickest problem of each family. CI runs it on every push and
  the whole corpus weekly.
