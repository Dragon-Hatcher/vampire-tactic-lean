# `vampire` tactic for Lean

A Lean tactic that discharges goals using the Vampire theorem prover.

```lean
    /-- Every group of exponent 2 is abelian. -/
    theorem mul_comm_of_sq_eq_one (G : Type) [Group G] (h : ∀ x : G, x * x = 1) :
        ∀ a b : G, a * b = b * a := by
      vampire +mono [h, mul_assoc, one_mul]
```

## Theories

The tactic supports uninterpreted functions and the Vampire theories of integer, rational, and real arithmetic.

Vampire has some support for, but this tactic does not support: bit-vectors, arrays, datatypes, `ite`, `let`, and higher-order reasoning.

## Install

Add it to your `lakefile.lean`:

```lean
require vampire from git
  "https://github.com/Dragon-Hatcher/vampire-tactic-lean.git" @ "main"
```

Lake should check out the custom Vampire fork the tactic embeds and runs its CMake build itself.

You need `cmake`, `git` and a C++20 compiler. Vampire takes some minutes to build the
first time and is then cached like any other Lake target.

Set the number of jobs for the build like so. The default is 2 which is on the lower side.
```
VAMPIRE_TACTIC_JOBS=8 lake build
```

For development you can point `VAMPIRE_TACTIC_SRC` at a checkout of the fork. This will use `<checkout>/build/libvampire_lib.a`.

## Usage

The main provided tactic is `vampire`. It translates the current goal and any provided hypotheses into the Vampire format, searches for a proof, and attempts to replay the proof in Lean. 

Only hypotheses named in square brackets (`vampire [h, q]`) are sent to Vampire. 
Use `*` to send all hypotheses in the local context `vampire [*, other_theorem]`.

Vampire's logic is monomorphic, so a goal that quantifies over a type or carries a typeclass has no direct reading. `vampire +mono` runs [lean-auto](https://github.com/leanprover-community/lean-auto)'s monomorphisation first. This is the same as the
[lean-smt](https://github.com/ufmg-smite/lean-smt) tactic.

```lean
    variable [Group G]

    theorem inverse : ∀ (a : G), a * a⁻¹ = 1 := by
      vampire +mono [mul_assoc, one_mul, inv_mul_cancel]
```

`G` becomes an uninterpreted sort and `*`, `⁻¹` and `1` uninterpreted symbols.

`ℤ`, `ℚ` and `ℝ` are translated to Vampire's `$int`, `$rat` and `$real`; `+`, `-`,
`*`, `/`, unary minus, `<`, `≤`, `>`, `≥` are also translated automatically; `^` 
at a literal natural exponent is unfolded into multiplications.

```lean
    theorem tri (x y z : ℝ) (h : x < y) (h₂ : y < z) : x < z := by
      vampire [h, h₂]
```

Vampire relies heavily on portfolios. This means it tries the same problem under
many different combinations of options. If Vampire used this on your problem you
will receive a note telling you the successful set of options so the tactic can 
skip directly there in future runs. This tends to happen especially with 
arithmetic where the default strategies tend not to work as well.

```lean
    -- slower
    theorem real_lin (x y : ℝ) (h : x + y = 6) (h₂ : x - y = 2) : x = 4 := by
      vampire [h, h₂]

    -- faster
    theorem real_lin' (x y : ℝ) (h : x + y = 6) (h₂ : x - y = 2) : x = 4 := by
      vampire (strategy := "lrs+10_1:1_alasca=on:sp=occurrence:ss=axioms:st=3.0:to=lakbo:si=on:rtra=on_0") [h, h₂]
```

## If a goal fails

You can use the `vampire?` tactic to see the problem as Vampire received it and the raw refutation it found. 

| diagnostic | what it means |
| --- | --- |
| `the search ran out of budget` | raise `vampire.timeout`; the search was still going |
| `the search exhausted what it had not discarded` | the strategy pruned to fit the budget and ran out of room — raise `vampire.timeout` and it prunes less |
| `no refutation found: ... does not follow` | the search finished the space. No budget will help; the goal does not follow from what it was given |
| `step N (rule) could not be replayed` | reconstruction of the proof failed. `Vampire/Reconstruct.lean`'s header lists what is ported |
| `refuted by a portfolio strategy` | it worked, and the message offers you `vampire (strategy := "...")` to skip straight there next time |
| `error loading library, libc++.so.1` | a linking problem — see `cxxStdlib` in `lakefile.lean` |

`set_option trace.vampire.timing true` reports translation, the prover's phases and the
replay separately, which is how to tell a slow translation from a slow search.

`set_option vampire.timeout n` gives the prover `n` seconds to search (default 10)

## Further reading

These are mostly LLM generated docs to itself as it was working so be warned.

* `docs/design.md` — how the pipeline is put together and why, and what it is a port of
* `docs/portfolio.md` — why the portfolio is worth its share of the budget, measured
* `docs/comparison.md` — `vampire`, `duper` and `smt` on the same problems
* `docs/vampire-global-state.md` — the shared mutable state an embedded prover has to reset
* `bench-tptp/` — the TPTP harness. Development only; not needed to use the tactic
