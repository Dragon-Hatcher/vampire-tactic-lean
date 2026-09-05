# Why the tactic does not solve what Vampire solves

Evidence for one conclusion: the tactic runs **one** strategy — Vampire's default — and
Vampire's strength on hard problems is its **portfolio**. This is what a handover needs;
`STATUS.md` has the replay work, and none of that is at issue here.

## The corpus, accounted for

`../bodingbauer-etall/bench/tptp/Problems` holds 422 problems.

| | n | what it is |
| --- | ---: | --- |
| a test exists and passes | **198** | 57 from the paper's set, 141 generated |
| a test exists and fails | 1 | `GRA006+1`, a higher-order goal: out of scope, and reported rather than admitted |
| **not theorems** | **100** | 33 Vampire reports `Satisfiable`; 67 more are declared `Satisfiable`, `CounterSatisfiable`, `Unknown` or `Open` and merely *time out*, because there is no refutation to find |
| not TPTP | 1 | `SYN000-2` is an SMT-LIB file |
| Vampire's own incompleteness | 1 | "refutation not found, non-redundant clauses discarded" |
| **provable, and not refuted** | **121** | the gap |

Two things to take from the table.

**A quarter of the corpus is not provable, and nothing in the pipeline knows it.** Each
problem states its own `% Status`, and neither `gen.sh` nor anything downstream reads it,
so 67 satisfiable problems were given 20 seconds to be refuted and counted as timeouts.
`tptp2lean.py` *does* read it — that is what `--provable-only` is — so the neutral set it
builds (315 problems) is the honest denominator and the extracted set is not.

**`gen.sh` loses a problem silently.** `set -euo pipefail` aborts the script when Vampire
exits non-zero, so the `grep … || rm -f "$out"` cleanup never runs on a timeout. 190 files
in `gen/` therefore hold nothing but Vampire's comment output, and `extract.py` skips them
as "no fullProof" — right outcome, no diagnostic, and the reason the pipeline appears to
drop 190 problems for no stated reason.

## It is strategy, not time

Over the 121, or a 20-problem prefix of them where noted, all at Vampire's own 20s limit
and with `--proof leancheck` on throughout:

| | refuted |
| --- | ---: |
| the default strategy, 20s → 60s | **3 of 190** |
| `--saturation_algorithm otter` | 0 of 20 |
| `--saturation_algorithm discount --age_weight_ratio 1:5` | 0 of 20 |
| `--avatar off` | 0 of 20 |
| **`--mode portfolio --schedule casc`, same 20s** | **71 of 121** |

Tripling the budget buys three problems. No single alternative strategy buys any. The
portfolio buys 59% of the gap, which would take the benchmark from 199 tests to about 270.

Why is visible in the portfolio's own output: it gives each strategy about **0.1s**.
Diversity beats depth here, and depth is the only thing the tactic's schedule varies —
`vampire.timeout` escalates 2s, 8s, budget, all on one strategy.

Do not measure this with an alphabetical sample. A 20-problem prefix said 15/20; the full
121 says 71/121.

## What an in-process portfolio needs

**The mechanism is already there.** `ffi/vampire_build.cpp` configures every run through
`env.options->set(name, value)` — the same call that sets `proof`, `proof_extra` and
`skolemization`. Nothing has to fork: a portfolio is a *sequence* of strategies, and
`Tactic.searchWith` already loops over a schedule and already retries when a refutation is
found but **cannot be replayed**, which is the subtle half of this design and is built.
What is missing is only a way to pass an option string from Lean through `Ffi.run`.

**The strategies that actually won**, deduplicated over the 71 proofs, seeds first:

    dis+1010_3_tgt=full:drc=off:fde=unused:plsq=on:sp=arity:acc=on:nwc=20:flr=on:sac=on:
      avsqc=2:s2pl=on:st=3:avsq=on:s2at=5:sd=10:gtg=exists_sym:ss=axioms        19 problems
    dis+10_6_to=lpo:tgt=full:fde=none:sp=arity:nwc=1.2:gtgl=4:bs=unit_only:ins=7:
      bd=all:av=off:gtg=exists_sym                                              11
    lrs+1011_32_tgt=full:alpa=true:st=5:sd=1:ss=included:er=filter                6
    dis+10_1024_slsqr=13,1:to=kbo:tgt=ground:sims=off:s2agt=8:slsqc=1:slsq=on:
      cts=off:s2at=1.5:sd=20:doe=on:ins=1:bd=preordered:av=off:ss=included:rawr=on 4
    lrs+1011_1_sd=10:ss=axioms:sgt=16                                             3
    lrs+1011_1_plsq=on:plsqr=32,1:sp=occurrence:sos=all:erd=off:st=5:sup=off:ss=included 3

`skt=syntactic` is on all of them because the harness sets it, and `random_seed` is
dropped — leaving it in makes a run irreproducible. Two thirds of the gap is covered by
the first four. The full schedule is in the fork's `Shell/Schedules.cpp`.

**The cost to weigh.** A schedule that tries thirty strategies at 0.1s adds latency to
every goal, including the ones that already succeed at once. Put it *behind* the current
schedule, so a goal the default refutes never pays for it — which is also what keeps
`bench-tptp/` honest, since all 199 of its problems are ones the default already gets.

## The rules those proofs use

A census over all 71 portfolio proofs, against `handlerFor` in `ffi/vampire_proof.cpp`.
Every rule that carries the proofs is already handled — `resolution` 822 uses,
`forward subsumption resolution` 375, `superposition` 359, `forward demodulation` 327,
the AVATAR family 383 between them. Four rules have no case in `handlerFor` and fall
through to `H_GENERIC`, which is a generic lemma closed by the bridge or `grind` rather
than an outright "not ported":

| rule | uses | note |
| --- | ---: | --- |
| `UNIT_RESULTING_RESOLUTION` | 30 | a resolution; `Vampire/Clause.lean` is the natural home |
| `INEQUALITY_SPLITTING` | 5 | introduces a name for a disequality |
| `INEQUALITY_SPLITTING_NAME_INTRODUCTION` | 5 | its definition step |
| `POLARITY_FLIPPING` | — | 14 uses in a 15-proof sample, none in the 71 |

So this is not a wall: worst case the four go the way `resolution` and
`forward subsumption resolution` went, into `Vampire/Clause.lean`'s propagation. Whether
they need to at all is an empirical question, and the answer is whatever `grind` and the
bridge already do with them.

## Reproducing any of this

    SP=/tmp/vampire-portfolio && mkdir -p $SP

    # the neutral set: every provable problem, read from TPTP, no prover involved
    ./tptp2lean.py ../../bodingbauer-etall/bench/tptp $SP/tests --prefix T_ --provable-only

    # one problem under one strategy, with leancheck output kept
    TPTP=../../bodingbauer-etall/bench/tptp ../../vampire/build/vampire \
      --proof leancheck --proof_extra lean --output_mode lean --skolemization syntactic \
      --time_limit 20 --mode portfolio --schedule casc <problem>.p

Quote option strings carefully. The first run of the table above measured nothing,
because under `zsh` an unquoted variable does not word-split: Vampire received each
option string as a single argument and rejected all four with `User error`. It showed up
only because the *default* also scored zero on a problem it solves in a second.
