# Extended TPTP benchmark

A second benchmark alongside `../../bodingbauer-etall/bench/work` (the paper's original
57 problems, described in `docs/STATUS.md`). Same idea, wider net: pull more TPTP
problems, run the reference generator once per problem to get a `fullProof` statement
Vampire is known to be able to refute, strip the proof, and check that `vampire [*]`
finds *its own* proof and replays it. A pass here means the port handles that problem's
shape; it says nothing about whether the tactic finds the *same* proof the reference did
— it usually doesn't (see "Known issues" below).

## Problem source

TPTP problems live in `../../bodingbauer-etall/bench/tptp/Problems`, fetched with
`../../bodingbauer-etall/bench/fetch_tptp.py`. At last count there were 422 locally, of
which 145 were not already covered by the original 57's sources.

## Scripts

Each takes a scratch directory as `$1` (all state — generated proofs, extracted tests,
logs, results — lives under it; nothing here writes into the repo). A typical run:

    SP=/tmp/vampire-bench   # or wherever
    mkdir -p $SP/{gen,bench,log,res}

    # 1. Generate a leancheck proof for every TPTP problem not already covered.
    find ../../bodingbauer-etall/bench/tptp/Problems -name '*.p' \
      | sed 's#.*/##; s/\.p$//' | sort > $SP/all.txt
    ls ../../bodingbauer-etall/bench/work/*.lean \
      | xargs -n1 basename | sed 's/\.lean$//' | sort > $SP/have.txt
    comm -23 $SP/all.txt $SP/have.txt > $SP/todo.txt
    xargs -P 6 -I{} ./gen.sh $SP {} < $SP/todo.txt

    # 2. Extract each generated proof's `fullProof` statement into a standalone test.
    python3 extract.py $SP/gen $SP/bench Q_

    # 3. Run every extracted test through the tactic.
    ls $SP/bench/*.lean | xargs -n1 basename | sed 's/\.lean$//' \
      | xargs -P 5 -I{} ./one.sh $SP {}
    cat $SP/res/*.tsv | awk -F'\t' '{c[$1]++} END {for (k in c) print c[k], k}'
    cat $SP/res/*.tsv | grep FAIL

`gen.sh` gives Vampire 60 real seconds and a 20s internal time limit per problem — most
problems that time out are just hard for Vampire itself, not a tactic issue, so a timeout
there silently skips the problem (no test is generated) rather than counting as a
tactic failure. `one.sh` gives the *tactic* 150 real seconds; a test that hits that cap
shows as a FAIL with no reason (harness timeout, not a thrown error) — check by hand
before concluding it's a bug, since some of these are just slow, not broken (see below).

### Watching a sweep

`sweep.py` runs the same tests with the same verdict rule and serves a live page while
it does, which is worth having once a sweep is hours long and `xargs` has told you
nothing since it started:

    ./sweep.py $SP/res $SP/bench --jobs 4 --port 8080
    # then open http://<that host>:8080/

It shows each problem's state, wall time, **CPU time** and **peak RSS**, plus the totals.
The last two are the ones that decide whether a run is worth believing. CPU time is what
`ulimit -t` bounds, and it is the only figure comparable between a run alone and a run
under load — `Q_BIO006p1` takes 80s by itself and missed the cap at 176s of wall under
`-P 4`. Peak RSS matters because a large replay reaches several GB and two of those at
once will put a 16GB machine into swap, after which every timing is measuring paging.
Start at `--jobs 4` and watch the "sweep rss" tile rather than assuming a core count is
the limit.

Results append to `<scratch>/results.jsonl` as they land, and a rerun skips what is
already recorded there unless `--redo` is passed, so an interrupted sweep resumes.

### Measuring rather than checking

`onefile.py` is the other instrument: it concatenates the extracted tests into one file,
a `section` each, and elaborates them in one process.

    ./onefile.py $SP/bench $SP/all.lean --run           # + Lean's profiler
    ./onefile.py $SP/bench $SP/all.lean --run --trace   # + the tactic's own phases

Use it for timings and the sweep above for pass/fail: one file pays start-up once, which
is the point, but it also means a problem that hangs stops everything after it and an
error in one `section` can leave later ones unelaborated. Its own docstring says what
each number does and does not include.

`extract.py` (`extractN.py`'s general form) takes every `.lean` file in its input
directory, pulls the preamble `variable` blocks and the type between `theorem fullProof
:` and `:= by`, and writes `<prefix><safe-name>.lean` with that statement proved by
`vampire [*]` instead. TPTP names with a sign (`SYN075+1` vs `SYN075-1`) are disambiguated
by spelling `+`/`-` as `p`/`m` before sanitizing — collapsing both to `_` silently merges
the pair into one file and only tests one of them.

## Results as of the last full run (196 problems: 57 original + 139 newly generated)

**196/196**, in 10.7 minutes of CPU on an 8-core M-series MacBook Air, run one at a
time. The newly-generated count moves between runs — Vampire is nondeterministic under a
wall-clock limit, so which problems it refutes within `gen.sh`'s budget, and therefore
which get a test at all, is not fixed.

The distribution, measured serially:

    median   2.2s CPU   1.3GB
    p90      5.8s CPU   1.5GB
    max     19.6s CPU   2.2GB

and the eight problems over ten seconds, which are the only figures worth quoting:

    P_ALG165p1   19.6s   2.2GB      Q_SYN036p1   12.1s   1.9GB
    Q_MGT035p2   18.6s   1.6GB      Q_SYN472p1   12.1s   1.9GB
    P_ALG190p1   16.2s   2.2GB      Q_MGT035m2   11.2s   1.5GB
    P_ALG160p1   15.9s   2.1GB
    Q_BIO006p1   12.5s   2.0GB

### After the AVATAR and bridge work

`docs/STATUS.md`'s "A fast path that silently never fires" cut the `ALG` family, which
was every problem on the list above. The set was regenerated and rerun to check for
regressions: **195/195** (the paper's 57 plus 138 newly generated — `gen.sh` gets a
different number of problems through each time, since Vampire is nondeterministic under
a wall-clock limit). The paper's 57 were timed before and after, back to back, the better
of two runs each: 285.6s of CPU to 219.5s, and 146.0s to 79.8s with the 2.45s of `lake
lean` start-up every problem pays taken out. The three that led the list above:

    P_ALG165p1   27.5s -> 11.8s
    P_ALG190p1   23.3s -> 11.6s
    P_ALG160p1   22.5s -> 10.5s

Those are on a machine that was not idle, so they are a ratio and not a replacement for
the distribution above, which was measured alone. The wider set was rerun for pass/fail
only, in parallel, and not timed.

This used to have a much longer tail. `Q_PRD001p1` was 79s at 5.5GB and `Q_BIO006p1` 77s
at 4.3GB, which is why `sweep.py` grew a `--triage` mode that runs everything in parallel
under a short cap and then reruns the tail one at a time; both are now 7s and 12s, and no
problem holds more than 2.2GB, so the whole set fits in one pass and the memory ceiling no
longer decides `--jobs`. `../docs/STATUS.md`'s "Assigning a metavariable is not free, and
a rewrite is not a reshuffle" has the measurements.

### After the prover schedule and the propagation work

`docs/STATUS.md`'s last three sections — the search budget, derived inferences by unit
propagation, and the signature index over a clausified parent's leaves. The whole set
was rerun before and after on the same machine, one problem at a time: **195/195** both
ways, 536.1s of CPU to **464.6s**.

`lake lean` start-up and the statement's own elaboration are a floor every problem pays
whatever the tactic does, and here it is most of the total. Measured by replacing
`vampire [*]` with `sorry` in all 195 files: **344.6s**, of which 331.5s is start-up at
1.70s a file. So the tactic's own work is 191.5s before and **120.0s after (-37%)**, and
that is the figure to read; the totals move by the same 71.5s but look like -13%.

    median   1.96s -> 1.95s CPU     (start-up either way)
    p90      4.45s -> 3.29s CPU
    max     15.80s -> 12.88s CPU
    peak RSS 2.09GB -> 2.03GB

    Q_MGT035p2   15.8s -> 4.7s      Q_LCL166m1    7.2s -> 3.8s
    Q_MGT035m2   11.0s -> 3.6s      Q_ALG165p1    7.7s -> 6.4s
    Q_SYN472p1   10.0s -> 4.1s      Q_GRP111m1    7.9s -> 3.3s
    Q_PRO014p3   11.0s -> 8.0s      Q_LCL010m1    6.7s -> 3.5s

One problem got slower and it is understood: `Q_BOO028m1`, 5.1s to 5.8s, is the 2.1s its
probe spends before timing out. `Q_SYN036p1` reads as 11.1s to 12.9s in the table and is
not a regression — measured alone it is 10.4s, and it is the one problem in the set whose
cost is the size of the proof term rather than anything the tactic does to it: 1.7s in
`mkLetFVars` and most of the rest in the kernel.

### The same 195 in one file

`onefile.py` puts every extracted test in one `.lean` file, one `section` each, and
elaborates it in one process with `Elab.async false`. That is the measurement to quote
for the tactic, because the per-file run spends more time getting ready than working:
start-up is 1.70s a file against a median problem of about a quarter of a second, so a
ratio taken from the per-file total is diluted about fourfold.

Before and after the same two rounds of work, same file, same machine:

| | before | after |
| --- | ---: | ---: |
| whole file, CPU | 221.7s | **109.4s (-51%)** |
| translating the goal | 0.5s | 0.5s |
| the prover | 56.7s | 25.5s |
| the replay | 130.7s | 48.3s |
| of which step scripts | 67.2s | 31.8s |
| of which `mkLetFVars` | 3.8s | 4.9s |
| the kernel, on the replayed term | 18.9s | 11.8s |
| elaborating the statements | 9.4s | 9.6s |
| pass | 195/195 | 195/195 |

Two things this instrument shows that the per-file run could not.

**The kernel.** `type checking` is 11.8s, and it happens after the tactic returns, so no
trace inside the tactic can see it — it was the largest single unaccounted block. It
fell by 38% without being aimed at, because the replay now builds smaller proof terms:
propagation is an application per literal where `grind only [cases Or]` was a case split.

**Half of Lean's profiler is missing here, and which half is the point.** Its categories
do not nest — the `simp` and `grind` a step script runs get categories of their own — and
`profiler.threshold` drops anything under a millisecond. A replay is thousands of tactic
invocations at about half a millisecond each, so they vanish individually and their sum
is the difference between the 39.8s the profiler attributes to
`tactic execution of Vampire.vampire` and the 74.3s the tactic's own traces account for.
That is the same floor `docs/STATUS.md` keeps arriving at, seen from the outside.

The figures the tactic measures itself come from `--trace`, which turns on
`trace.vampire.timing`; it costs about 6% of the file (114.2s against 108.5s) for the
40500 messages. Peak RSS is *not* comparable between the two instruments — one process
accumulates every problem's environment and holds 4.7GB against 2.0GB for the worst
single file — so quote memory from the per-file run.

Whichever way it is run, **a timing taken beside other work is a measurement of the
machine.** The same problems run flat out at `--jobs 3` on a machine that also had a
game on it once reported 192/194, with two problems over a 150s cap that were 79s and 77s
measured alone. CPU time looks like it ought to be immune to that, since it is not wall
time, but Lean elaborates on several threads and time they spend spinning for a core is
charged to the process. `sweep.py` prints a warning if the load average is already high
when it starts, and keeps load on the page for the same reason. Even in this run's own
numbers the effect is plain: at `--jobs 3` several two-second problems came out at
eighteen.

### After the clausification and AVATAR term work

`../docs/STATUS.md`'s "Clausifying is not rewriting, and a split name is its component":
a parent's CNF built by `Vampire/Cnf.lean` instead of by VampLean's `cnfify`, AVATAR's
split substitutions and implication chains done as terms by `Vampire/Avatar.lean`, a
disjunction under a hoisted binder taught to the bridge, and `restrictedContext`'s
classification computed once instead of per step.

**This set is 199 problems** (the paper's 57 plus 142 newly generated; `gen.sh` gets a
different number through each time, since Vampire is nondeterministic under a wall-clock
limit). **198/199 both before and after.** The one failure is `Q_GRA006p1`, whose goal is
higher-order — "a proposition cannot be the sort of an argument" — which is out of scope
by design and reported rather than admitted; it is on the list because this run of
`gen.sh` happened to generate a test for it.

Before and after **interleaved**, B A B A B A, three runs each, in one file:

| | before | after |
| --- | ---: | ---: |
| whole file, CPU | 128.4 / 181.0 / 142.5s | 123.5 / **129.9** / 132.0s |
| of which the prover | 29.7 / 50.8 / 30.4s | 41.0 / 43.8 / 42.9s |
| the file less the prover | 98.7 / 130.2 / 112.1s | 82.5 / **86.1** / 89.1s |
| the replay | 52.8 / 78.0 / 62.4s | 43.3 / **45.8** / 48.4s |
| of which step scripts | 33.9 / 51.5 / 40.4s | 29.9 / 32.1 / 34.4s |
| the kernel, on the replayed term | 14.2s | 12.5s |
| pass | 198/199 | 198/199 |

**Read the middle column of each, not the total.** The prover is untouched C++ and its
time is noise — 29.7s to 50.8s across six runs of two builds — so it is broken out and
subtracted. On the medians the replay is **62.4s to 45.8s** and the file less the prover
**112.1s to 86.1s**; on the best of three, 52.8s to 43.3s and 98.7s to 82.5s. The kernel
fell 12% without being aimed at, because the replay now builds smaller terms.

The three before runs spread over 25s and the three after runs over 5s, which is a result
in itself: `simp` and `grind` allocate, allocation is what makes a run sensitive to the
state of the machine, and replacing a rewrite with a construction buys predictability as
well as speed.

**And the controlled figure.** `paired.py` compares two logs only on the problems where
both replayed the same number of steps — the cheapest witness that the same refutation
came back — because a different proof is a different replay and a per-rule bucket can
double for that reason alone. Over the 151 problems that replayed the same proof in all
six runs, taking each side's best of three:

    replay:  24.38s -> 19.08s  (-21.8%)

    (clausify parent)          5.64s -> 1.47s   -4.17s
    cnf transformation         2.77s -> 2.19s   -0.58s
    (cnf shared)               2.26s -> 1.85s   -0.41s
    flattening                 0.36s -> 0.15s   -0.21s
    avatar split clause        0.90s -> 0.71s   -0.18s
    (input steps)              0.33s -> 0.17s   -0.17s
    avatar contradiction       0.25s -> 0.12s   -0.13s
    everything else                             within noise

That 24.38s is **46% of the replay**, not all of it: the problems that fail to pair are
disproportionately the expensive ones, because a hard search is both slow and
nondeterministic. So the paired percentage and the whole-set medians are answering
different questions and both are quoted. `paired.py` prints the coverage for this reason.

### Against other tactics

`retarget.py` rewrites these same statements to be proved by `duper` or `smt` instead,
and `sweep.py --package` elaborates them in that tool's lake package. Results and the
caveats they need are in `../docs/comparison.md`.

`Q_MED007p1` used to be on this list, as "clausification, binder order": after
`vampire_finish_clausify` split and AC-normalised, the matching clause was
alpha-equivalent to the goal but bound its variables in a different *position*
(`∀ v0 v2 v3` against the clause's own `∀ v0 v3 v2`), which `assumption` cannot see
past. That was diagnosed here as wanting a `grind` fallback. It was not: the reference
generator handles it, with `LeanChecker::outputReorderIfNeeded`, and the port simply
did not have that function. It does now — the prenex variable ordering is exported for
clausification steps and the goal's binder prefix is permuted into it — and the problem
passes with no fallback. Grep the generated `MED007+1.lean` for `have reorder` to see
the reference doing the same thing.

`P_SWC153p1`, `Q_ALG037p1` and `Q_BIO006p1` used to be on this list as the
"input-step bridge", and `Q_NUN081p1` and `Q_BIO006p1` as generic steps `grind` could
not close. All four are fixed by `Vampire/Bridge.lean`, and the diagnosis recorded here
before was right about the cause and wrong about the remedy.

The cause: an `input` step has to prove Vampire's recorded formula for a unit from the
Lean hypothesis it was translated from, and `Exporter::writeFormula` reverses every
`AND`/`OR` argument list to mirror `LeanPrinter::printFormula`. Vampire holds a junction
as a binary tree, so that mirrors the *whole* tree — `a ∧ (b ∧ c)` comes back as
`(c ∧ b) ∧ a`. The reversal cannot be dropped globally, because derived steps need it:
VampLean's `nnf_transformation` and friends were written to produce exactly the order
the generated file states. That is why both convention flips tried before each fixed one
problem and broke another.

The remedy is not a better search. Measured, on the three failures: `ac_nf0` exhausted
`simp`'s step budget, and `grind` exhausted its case-split budget (`(splits := 9)`) and
its E-matching budget (`(instances := 1000)`). None of them failed because the goal was
false — all three had identical symbol multisets and identical connective counts on both
sides, differing only in order. `Vampire/Bridge.lean` walks the two types together and
builds the proof from the correspondence, with no search on the common path. It also
subsumes the `grind` failures on generic single-premise steps, because
`pure predicate removal` is a weakening — drop some conjuncts, keep the rest — which is
the same walk.

`Q_COM003p1` and `Q_PRO011p1` used to be here as "skolemisation, parent has an extra
existential", with a long diagnosis about `skolemise` assigning symbols to hoisted
existentials by position. The position logic was never the problem. The parent really did
have an extra existential, but because of this:

    | .definitionFoldingPred =>
        intros h0 h1
        exact h0

`stepLemma` builds the lemma's type with the *folded* conclusion, and `exact h0` is
accepted because the two are definitionally equal — but the term it produces is
`fun h0 h1 => h0`, and `inferType` on that gives back the *premise's* type, not the
conclusion's. So every consumer reading the parent with `inferType` — which is what
`skolemise` does — saw the formula with the predicate definition unfolded, existential
and all. The generated file has no such problem: `LeanChecker::definitionFoldingPred`
writes `change <concl> at stepN`, which re-types the hypothesis explicitly.

`proveBy` now ascribes its result to the type it was asked for, which fixes it for any
step whose script ends in `exact h` rather than only for definition folding.

Worth recording that the earlier diagnosis was wrong in an instructive way. The symptom —
witnesses lining up against the wrong existentials — is what you get either from a
mis-ordered assignment or from a parent that has one existential too many, and the note
above picked the first. The arity-matching fix it describes made PRO011 pass by
compensating for the extra existential rather than removing it, which is why it did not
fix COM003.

`Q_PRD001p1` and `Q_SYN472p1` used to be the last two, as "harness timeout": neither was
a logic failure, both simply cost more than `one.sh`'s 150s of CPU. Both pass now, at 79s
and 13s, and none of what closed them was in the tactic scripts. `docs/STATUS.md`'s
"Where a replay's time goes" has the measurements; in short:

- Checking the assembled term with `Meta.check` was 167s of `PRD001+1`'s 240s replay,
  against 72s for all 1415 of its step scripts. The applications are the only part
  `mkAppN` can get wrong and they are now checked as they are made.
- A clausification whose parent produces several clauses has to be done once and shared,
  the way the generated file shares its destructuring. `SYN472+1`'s conjecture clausifies
  196 ways and its refutation uses 145 of them, at two minutes a clause.
- `prenexify` hoists every `∀` past the conjunctions as well as the disjunctions, which
  on a conjunction a hundred wide rewrites the whole formula once per binder — and
  `cnfify` then puts them straight back. Hoisting out of the disjunctions alone is what
  the clauses need, and is what is tried first.
