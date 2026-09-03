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

`extract.py` (`extractN.py`'s general form) takes every `.lean` file in its input
directory, pulls the preamble `variable` blocks and the type between `theorem fullProof
:` and `:= by`, and writes `<prefix><safe-name>.lean` with that statement proved by
`vampire [*]` instead. TPTP names with a sign (`SYN075+1` vs `SYN075-1`) are disambiguated
by spelling `+`/`-` as `p`/`m` before sanitizing — collapsing both to `_` silently merges
the pair into one file and only tests one of them.

## Results as of the last full run (196 problems: 57 original + 139 newly generated)

Original 57: **57/57.** New 139: **136/139.** The newly-generated count moves between
runs — Vampire is nondeterministic under a wall-clock limit, so which problems it
refutes within `gen.sh`'s budget, and therefore which get a test at all, is not fixed.

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

Every remaining failure, and what's understood about each:

- **`Q_PRD001p1`, `Q_SYN036p1`, `Q_SYN472p1` — harness timeout, ~160–180s.** The only
  three left, and none of them is a logic failure: `one.sh` caps the tactic at 150s and
  these run past it. Not investigated. Could be Vampire genuinely taking that long on
  the replay side (`grind`/`cnfify` on a large formula), or a real hang. Worth a first
  look with `set_option trace.vampire.timing true` to see whether it is the prover call
  or the replay that is slow. (`Q_ITP021p1` was on this list and now finishes.)
