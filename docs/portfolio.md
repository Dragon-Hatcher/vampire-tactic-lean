# The portfolio

The tactic used to run **one** strategy — Vampire's default — and Vampire's strength on
hard problems is its **portfolio**. It now runs the portfolio too: a goal the default
does not refute is put to the schedule `--mode portfolio --schedule casc` would have
chosen for it, strategy by strategy, under a second budget of `vampire.timeout`.

This is the record of the measurement that motivated it, of what the change is, and of
what it cost — which was mostly not the schedule.

## The case for it, as it stood

`../bodingbauer-etall/bench/tptp/Problems` holds 422 problems.

| | n | what it is |
| --- | ---: | --- |
| a test exists and passes | **198** | 57 from the paper's set, 141 generated |
| a test exists and fails | 1 | `GRA006+1`, a higher-order goal: out of scope, and reported rather than admitted |
| **not theorems** | **100** | 33 Vampire reports `Satisfiable`; 67 more are declared `Satisfiable`, `CounterSatisfiable`, `Unknown` or `Open` and merely *time out*, because there is no refutation to find |
| not TPTP | 1 | `SYN000-2` is an SMT-LIB file |
| Vampire's own incompleteness | 1 | "refutation not found, non-redundant clauses discarded" |
| **provable, and not refuted** | **121** | the gap |

Two things came out of that table and are still worth having written down.

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

### It is strategy, not time

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
portfolio buys 59% of the gap.

Why is visible in the portfolio's own output: it gives each strategy about **0.1s**.
Diversity beats depth here, and depth was the only thing the tactic's schedule varied —
`vampire.timeout` escalates 2s, 8s, budget, all on one strategy.

Do not measure this with an alphabetical sample. A 20-problem prefix said 15/20; the full
121 says 71/121.

## What was built

**The schedule comes from Vampire, not from here.** `lean_vampire_schedule` builds the
problem, reads its `Property`, and calls `Schedules::getCasc2025Schedule` — the same
function `--schedule casc` calls, so a unit-equality problem gets the UEQ schedule and an
arithmetic one the ALASCA schedule, and the schedule the fork ships is the schedule that
runs. Only the `quick` half: the `champions` are long runs meant to occupy a worker of
their own, and `PortfolioMode` itself drops them below two cores.

**Lean owns the loop.** `Vampire/Tactic.lean`'s `runAttempts` already retried when a
refutation was found but could not be *replayed*, which is the half of this that a
schedule inside Vampire could not do, and it now walks strategies as well as limits. One
`Ffi.run` is one whole run under one strategy: the environment is torn down and rebuilt on
the way in, so a portfolio is a sequence of calls and not a mode.

**A strategy is passed as its encoded line**, which `Options::readFromEncodedOptions`
reads — the format the schedules are written in. Two adjustments in `configure`
(`ffi/vampire_build.cpp`):

* `i=` and `sil=` are dropped. They budget a slice in mega-instructions, which needs
  `perf` and so exists only under Linux — elsewhere the options are not even registered
  and the strategy is rejected outright. Removing them makes a strategy mean the same
  thing on both platforms; the caller's clock is what bounds the run either way. The
  slice time the schedule intended is recovered from `i=` first, at the same nominal 200
  MIPS `PortfolioMode::getSliceTime` uses when it finds itself without `perf`.
* The strategy is checked for consistency *before* the proof options are forced on top of
  it, not after. `checkGlobalOptionConstraints` is a check on the whole option set, and
  the whole set here is one no invocation of the binary would produce: `proof leancheck`
  requires `output_mode lean`, because in a binary the two go together and this reads the
  refutation out of `env.statistics` instead. Checking afterwards rejects every strategy
  in the schedule for a constraint about printing, which is exactly what it did first
  time round.

A strategy this build cannot run — `sas=z3` without Z3, an option combination a hard
constraint forbids — comes back as its own status and is skipped. It is a fact about the
build, not about the goal.

**The cap.** A schedule assigns each strategy a share and the binary spends those shares
in parallel, so a slice that wants 36s and one that wants 0.1s can both be had.
Sequentially they cannot: one such slice is the whole budget. `vampire.portfolioSlice`
caps a slice at 2 seconds by default, which keeps the sequence in the part of the schedule
the portfolio's advantage comes from. Depth has already been tried, by the escalation
in front of it.

**Behind the default, not in front of it.** A goal the default refutes never pays for any
of this, which is also what keeps `bench-tptp/` honest: all 199 of its problems are ones
the default already gets.

## What it cost: seven bugs, none of them in the schedule

Running many strategies over one problem in one process is a much harder test of
`Lib::resetGlobalState` than running one, and of the exporter than a single proof. In
order of how long each took to find:

1. **`EqualityProxyMono`'s three static maps** (`docs/vampire-global-state.md` §6a). Keyed
   by sort terms and holding predicate numbers, both belonging to a signature that has
   been deleted; the allocator hands that memory back for the next problem's sorts, so a
   lookup matches a dead key and returns a predicate number that now names something
   else. Found by bisecting a schedule to a pair — `ep=RS:nm=10` on one strategy, `ep=R`
   three strategies later — because the crash moved with how much allocation had happened
   before it and looked like nothing in particular.
2. **`InferenceReplayer::runBackwardsSimp` never removed what it added.** The other two
   entry points do. A backward simplification therefore left its premise in the active
   clause container, the term indexes kept the entries that went in with it, and the next
   inference to name that clause added it a second time — the container refuses a
   duplicate, the indexes do not, because `add` fires its event either way. One removal
   then takes out half of a double insertion, and the subtree left behind points at a
   clause nobody holds. This is the one that needed a tool: `VAMPIRE_SCRIBBLE_FREE` in
   `Lib/Allocator.hpp`, which fills a freed block with `0xDD` so that a stale reference
   faults where it is read. With it the crash became deterministic on a single problem;
   without it, it needed a run beforehand and looked like state leaking between runs.
3. **The exporter's unchecked `env.proofExtra.get`.** `ProofExtra::get` guards with an
   `ASS` that `-DVDEBUG=0` strips, so a unit whose extra was never recorded dereferences
   a null `unique_ptr`. Which extras exist depends on which engines a strategy switched
   on: `FORWARD_SUBSUMPTION_RESOLUTION` records its resolved literal when it comes from
   the code-tree engine and records nothing when it comes from subsumption demodulation.
   `extraFor` in `ffi/vampire_proof.cpp` now reports it as a step that cannot be exported
   — which the tactic treats like a step that cannot be replayed, and tries the next
   strategy.
4. **`OperatorType::operatorTypes()`**, the hazard §6 of the audit had already described
   and left alone. Cleared now. Note `Lib::Set::deleteAll` frees the values and leaves the
   cells occupied, so the reset is `deleteAll` then `reset`; getting that wrong turns the
   segfault into an abort one run earlier.
5. **`InferenceStore::instance()->ordering` survived `reset()`**, holding a `KBO` whose
   precedences are indexed by functor numbers from a deleted signature.

Neither 4 nor 5 turned out to be the cause of anything observed here. They are the same
shape as 1 and 2 and were found while looking for them; they are fixed because a static
holding a signature number or a `TermList` is a bug waiting for a second problem, and how
long it waits is up to the allocator.

Two of the seven did not survive the rebase onto upstream master, which is the best thing
that can happen to a patch: the twee fix arrives on its own, and upstream has deleted
`EqualityProxyMono` entirely, taking the worst of the static caches with it.

6. **`FiniteModelBuilder::init` dereferences a null pointer** when run inside the shim.
   Nine lines of the CASC schedule are `fmb…`, and they are no use here twice over: a
   model builder answers "satisfiable" or nothing, so it can never hand back a refutation
   to replay. They are dropped from the schedule and refused by `configure`, which is the
   right answer whether or not the crash is ever fixed.
7. **`InferenceRecorder::backwardDemodulation` applied a query-side substitution to both
   premises.** `SubstitutionTree::InstMatcher::derefQueryBinding` says "only bound values
   can be passed to this function" and enforces it with an `ALWAYS`, which a release
   build turns into `__builtin_unreachable`; the rewritten clause's variables are not
   bound in the equation's query substitution. It survives as long as the two clauses
   number their variables alike, which they usually do. The forward case already had a
   workaround with a comment saying "otherwise the substitution we get faults"; the
   backward case now restricts itself to the premise the applicator covers, which is
   also the only premise the replay instantiates.

**And one in the build**, which cost more than any of them: Lake tracks the shim's `.cpp`
files and neither Vampire's headers nor `libvampire_lib.a`, so a rebuilt fork left the
previously linked `libvampireffi` in place — the same symbols, the previous code. Every
fix above appeared not to work until this was noticed. `lakefile.lean` now compiles the
archive's hash in as `-DVAMPIRE_ARCHIVE_ID`, which `Ffi.archiveId` returns, so the object
files have something to differ by and the question "is this the Vampire I just built?" has
an answer.

## The unsound definition, and what the replay is for

37 of the problems the portfolio refuted could not be replayed, and 33 of those failed on
the same rule — `function definition`, with `rfl` reporting that the two sides of a
defining equation were not definitionally equal. They were not. The equation Vampire had
recorded was

    ![X4:'ι', X5:'ι']: t_k1__funct__1(X5,X4) = sF38

with `sF38` a *constant*: a universally quantified assertion that a binary function does
not depend on its arguments. Introduced as an axiom, from the goal, by the twee goal
transformation — `tgt=full`, which a good part of the CASC schedule turns on.

This is not our bug and not a new one: **upstream fixed it on 2026-05-07**, in
`c098eb89a`, "Remove secondary term variables stack to prevent unsoundness". It had been
there since `829c63378` on 2022-05-27, the commit that made the transformation work for
non-ground terms in the first place. The leancheck branch was cut from `94c7c5b87` a week
before the fix and inherited it. A `vampire` binary reporting 4.9, tested on the same
problem, is not affected; upstream master is not affected.

That changes what the comparison below is a comparison *with*: the 279 is what the *old
fork's* binary refuted, not what Vampire refutes.

The branch has since been rebased onto upstream master, where the fix arrives on its own;
the backport commit is gone. What is left of this section is the story of how it was
found and why it is worth keeping the checker.

`Shell/TweeGoalTransformation.cpp`'s `scanVars` collects the term's variables:

```cpp
static TermStack termVars;      // a second, file-local stack
termVars.reset();
...
  } else {
    _termVars.push(v);          // the member
    _termVarSorts.push(s);
  }
...
for(unsigned i = 0; i < termVars.size(); i++){   // the file-local one, always empty
  _allVars.push(termVars[i]);
}
```

`_allVars` therefore ends up holding the *type* variables alone, of which a monomorphic
problem has none, and the definition is introduced with arity 0 — while its
`OperatorType` is built from `_termVarSorts` and has the real arity. The function's
declared arity and its type disagree, and the equation says something false. The
assertion on the next line, `ASS_EQ(_typeArity+_termVarSorts.size(), _allVars.size())`,
says exactly this; `-DVDEBUG=0` compiles it out, and CASC builds are release builds.

### It proves a false theorem

Not an inference from the code — a run. `checks/twee/nonground-definition.p` in the fork:

```
fof(a1, axiom, p(f(a,a))).
fof(a2, axiom, ~p(f(b,b))).
fof(a3, axiom, q(c)).
fof(g,  conjecture, ?[X] : q(f(X,X))).
```

The axioms have a two-element model and the conjecture does not follow from them; Vampire
says so itself, reporting `CounterSatisfiable` with the transformation off. `q` occurs
positively as well as negatively on purpose — without `a3` the goal clause is deleted as
a pure predicate before the transformation sees it, and the problem passes for the wrong
reason.

With `-tgt full`, on the unpatched build:

    [PP] twee: 11. f(X0,X0) = sF0 [function definition]
    % SZS status ContradictoryAxioms for false2
    1.  p(f(a,a))          [input(axiom)]
    2.  ~p(f(b,b))         [input(axiom)]
    11. f(X0,X0) = sF0     [function definition]
    13. p(sF0)             [superposition 7,11]
    14. ~p(sF0)            [superposition 8,11]
    15. $false             [forward subsumption resolution 13,14]

`sF0` is a constant, so the definition says `f(X,X)` is the same term for every `X`, and
two axioms that merely distinguish `f(a,a)` from `f(b,b)` become a contradiction. Vampire
does not just refute the conjecture; it reports the *axioms* inconsistent.

With the two-line change, the same build introduces `f(X0,X0) = sF0(X0)` and answers
`CounterSatisfiable`. The check is in `checks/sanity`.

Measured over the neutral set, at 20 seconds, with `--mode portfolio --schedule casc`:

| the binary refutes | of 315 |
| --- | ---: |
| before the fix | 279 |
| after the fix | **243** |

**Thirty-eight of the fork binary's own solutions were reached through a false axiom.**
The tactic did not accept any of them: each arrived at the replay and the replay refused
it, because the defining equation it was asked to prove by `rfl` is not true. That is the
whole argument for reconstructing a proof rather than trusting a prover, and it is worth
having a case of it in the record — the more so because the prover being trusted here was
a version with a known, already-fixed unsoundness in it, which is exactly the situation a
checker exists for and exactly the situation nobody knows they are in.

It is also an argument for staying close to upstream. Nothing here found the bug; what
found it was 33 replay failures on one rule, all reported by name.

The exporter had a bug of its own in the same place, which the fix uncovered:
`writeFunctionDefinition` took `termArg(0)` as the body, and the two passes that
introduce this rule orient the equation oppositely — `TweeGoalTransformation` writes
`t = sF(vars)` and `DefinitionIntroduction` (`fdi`) writes `sF(vars) = t`, and
`Literal::createEquality` may turn either round again when it shares the literal. It now
finds the side whose functor is the introduced symbol and reads the parameters off *that*
application, in its own argument order, which is the order the lambda must abstract them
in.

## Parity with the binary

The question worth asking of a portfolio is not how much it adds but how close it gets to
the thing it is imitating. Over the 315 provable problems, at 20 seconds each, on
`leancheck-2026-09` (upstream master of 2026-09-03 with the Lean work rebased onto it):

| | refutes | notes |
| --- | ---: | --- |
| `vampire --mode portfolio --schedule casc` | **243** | all cores |
| the same, `--cores 1` | 242 | one core, which is what the tactic is |
| the tactic, `vampire.timeout 20` | **206** | one core, and a kernel-checked proof behind it |
| the tactic before this work | 186 | one strategy |

Every problem the tactic gets, the binary gets: the 206 are a subset of the 243. Of the
206, 195 are the default strategy at 20 seconds and **11 are a portfolio strategy** —
nine distinct ones, so there is no small set to hard-code. A goal that fails gets through
60 strategies at the median and 132 at the most.

The 37 the binary gets and the tactic does not:

| | n |
| --- | ---: |
| no refutation found in the budget | 26 |
| the tactic ran out of CPU before the prover ran out of budget | 6 |
| a refutation was found and could not be replayed or exported | 5 |
| a crash | **0** |

**Parallelism buys one problem.** `ALG337-1`, and nothing else. That is the strongest
evidence for the design here: a sequential in-process portfolio gives up almost nothing.
Diversity is, as the original table said, the whole effect — the schedule's first few
dozen strategies at a tenth of a second each, which one core has time for.

The six that run out of CPU are not search failures and not the tactic's: they are
problems whose *statement* is megabytes long, and `sorry` in place of the tactic does not
elaborate in the time either. `T_CAT033p4`'s is 18MB.

The five refutations that could not be used are five separate gaps, one problem each:

    cnf transformation left a goal unproved              T_AGT013p2
    consistent polarity flipping, `grind` failed         T_BOO109p1
    an avatar definition with no recorded split          T_GRA119m1
    a function definition that is not a unit clause      T_KLE043p2, T_LCL228m3
    a clausification step that could not be stated       T_PRO001p4

`consistent polarity flipping` is one of the four rules the census at the top of this
file predicted would need attention; the other three turned out not to.

## Where the tactic's time goes

Measured over the 186 goals the default strategy refutes at a 10-second budget, with
`trace.vampire.timing` on and the phases summed. These are pre-rebase figures — the
prover underneath has since moved by 333 commits, so read the shape rather than the
digits:

| | |
| --- | ---: |
| the whole process, 186 goals | 665s |
| **of which, inside the tactic** | **133s** |
| — the search | 75.0s |
| — the replay | 45.3s |
| — translating the goal | 10.6s |
| — building, clausifying, exporting, reading back | 1.8s |

**Four fifths of the wall clock is not the tactic.** It is Lean starting up and
elaborating the statement, which for this corpus is most of the bill and all of it on the
six problems that lose parity to the CPU cap: `T_CAT033p4`'s statement is 18MB, and
replacing `vampire [*]` with `sorry` still does not finish in five minutes. Those six are
a fact about a generated benchmark, not about the tactic, and no amount of making the
tactic faster touches them.

**The escalation pays for itself, and the margin is not small.** The 2s probe is thrown
away on the 9 goals it does not solve, which costs 18.1s of search. Turning it off with
`vampire.probeShare 0` (which was `vampire.escalate false` when this was run) and
giving every goal the whole budget at once:

| | tactic time | search | passes |
| --- | ---: | ---: | ---: |
| escalating (2s, then the budget) | **133s** | **75.0s** | **186** |
| the whole budget, one attempt | 155s | 99.0s | 185 |

A tighter limit prunes harder, so 177 of the 186 are refuted by the probe alone, and the
24 seconds the probe saves on the rest is more than the 18 it wastes. It also keeps a
goal: `T_AGT021p1` fails outright at a flat 10s.

**`mkLetFVars` was doing two passes the replay does not want.** Closing the proof's
`let`s — one per definition, split and skolem — defaults to dropping bindings the body
does not mention and to turning a non-dependent `let` into an applied `fun`. The first
costs a scan of the whole refutation per binding, and the second is the opposite of what
the replay is built on, which is that a split name *is* its component after zeta. Both
off: 5.2s to 1.6s over the benchmark, and 1.74s to 0.53s on `SYN036+1`, whose 52
bindings made it a third of that one goal's replay.

## Reproducing the measurement

    SP=/tmp/vampire-portfolio && mkdir -p $SP

    # the neutral set: every provable problem, read from TPTP, no prover involved
    cd bench-tptp
    ./tptp2lean.py ../../bodingbauer-etall/bench/tptp $SP/tests --prefix T_ --provable-only

    # the baseline: the same tactic with the portfolio off
    mkdir -p $SP/base/bench $SP/gap/bench
    for f in $SP/tests/*.lean; do
      sed 's/^set_option vampire.timeout 30$/set_option vampire.timeout 10\
    set_option vampire.portfolioShare 0/' $f > $SP/base/bench/$(basename $f)
    done
    ./sweep.py $SP/base $SP/base/bench --jobs 4 --exit-when-done

    # the gap it leaves, with the portfolio on
    # (copy the failures out of $SP/base/results.jsonl into $SP/gap/bench, timeout 20)
    ./sweep.py $SP/gap $SP/gap/bench --jobs 4 --cpu-limit 250 --exit-when-done

    # what the binary makes of the same problems, and where the difference is
    ls $SP/tests | sed 's/^T_//; s/\.lean$//' > $SP/stems.txt   # then map back to TPTP names
    ./parity.sh $SP                       # all cores; --cores 1 for the honest comparison
    ./parity.py $SP/binary.tsv $SP/base/results.jsonl $SP/gap/results.jsonl

Quote option strings carefully. The first run of the table above measured nothing,
because under `zsh` an unquoted variable does not word-split: Vampire received each
option string as a single argument and rejected all four with `User error`. It showed up
only because the *default* also scored zero on a problem it solves in a second.

And do not edit the repository while a sweep is running. `lake lean` rebuilds what it
needs, so a source change halfway through means the second half of the results were
produced by different code — or, if the edit does not compile yet, that they are all
failures. Both happened here.
