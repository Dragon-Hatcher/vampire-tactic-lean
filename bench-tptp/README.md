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

`extract.py` (`extractN.py`'s general form) takes every `.lean` file in its input
directory, pulls the preamble `variable` blocks and the type between `theorem fullProof
:` and `:= by`, and writes `<prefix><safe-name>.lean` with that statement proved by
`vampire [*]` instead. TPTP names with a sign (`SYN075+1` vs `SYN075-1`) are disambiguated
by spelling `+`/`-` as `p`/`m` before sanitizing — collapsing both to `_` silently merges
the pair into one file and only tests one of them.

## Results as of the last full run (194 problems: 57 original + 137 newly generated)

Original 57: **57/57.** New 137: **137/137.** The newly-generated count moves between
runs — Vampire is nondeterministic under a wall-clock limit, so which problems it
refutes within `gen.sh`'s budget, and therefore which get a test at all, is not fixed.

Nothing on this page is still failing. What follows is the record of what was, and of
what each one turned out to be, because the wrong diagnosis was recorded more than once
and the corrections are the useful part.

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
a logic failure, both simply cost more than `one.sh`'s 150s of CPU. Both now pass, at 88s
and 14s, and none of what closed them was in the tactic scripts. `docs/STATUS.md`'s
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

A run under `xargs -P 4` is not the same measurement as a run alone: `Q_BIO006p1` takes
80s on its own and missed the cap at 176s under `-P 4` on the same build. Check a
timeout by hand before recording it as one.
