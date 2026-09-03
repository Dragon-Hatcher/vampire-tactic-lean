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

## Results as of the last full run (438 problems: 57 original + 138 newly generated)

Original 57: **56/57.** New 138: **128/138.** Every failure, and what's understood about
each:

- **`P_SWC153_1`, `Q_ALG037p1`, `Q_BIO006p1` — input-step bridge.** An `input` step
  proves Vampire's own recorded formula for an axiom/negated-conjecture follows from the
  Lean hypothesis translated from the same source. The two are logically identical but
  not syntactically identical: Vampire's own formula printer reverses junction argument
  order from how it's held internally, and equations can come back reoriented — both
  nested arbitrarily deep inside quantifiers/negations. Two direct fixes (reverse
  junctions on the builder side; flip equality orientation on export) each fix one of
  these cases and break `ALG014` in the original 57. There is no single global
  convention that's right for every problem; the real fix is a structural bridge (like
  `rectify`'s `symm_match`, but tolerant of commutativity/associativity) rather than a
  fixed printing convention. Deferred — see `bridgeInput` in `Vampire/Reconstruct.lean`.

- **`Q_COM003p1`, `Q_PRO011p1` — skolemisation, parent has an extra existential.**
  Investigated at length (see the session that added this file). Concretely confirmed:
  our tactic's Vampire invocation and the standalone reference binary find *different*
  derivations for the same theorem — not from a fixed conjunct-order or `axiom`-vs-
  `conjecture`-role difference (both tested directly and ruled out) but from something
  in the search itself. In our derivation, some skolemisation steps' parent formula
  contains an existential that belongs to *different* content than the symbol the step
  actually introduces — traced concretely for COM003: the leftover existential is
  token-for-token the same as a predicate-definition abbreviation's own body, already
  skolemized independently under a different symbol at an earlier step. `skolemise` in
  `Vampire/Reconstruct.lean` assigns `s.skolems` to hoisted existentials by strict
  left-to-right position, which is wrong whenever such an unrelated existential sits in
  front of the one the step actually wants — a real bug, confirmed by fixing it: an
  arity-matching version (peel every existential, assign by each symbol's declared
  arity, discard non-matches) made `PRO011` pass cleanly with no fallback needed. It did
  *not* fully fix `COM003`: once the leftover existential is correctly set aside, the
  witness built from it is a specific instance where the target needs the general
  existential claim, which needs an `Exists.intro` reintroduced — `symm_match` can't do
  that, and `grind` didn't find the (multi-level, several nested `∧`/`∨`/`∃`)
  reconstruction within its default search. **This arity-matching fix was reverted**
  (along with the `grind` fallback it was tested with) at the user's request, to get
  back to a stable, understood baseline rather than leave an untested partial fix in
  place — the diagnosis above is what to build from if this is picked back up. Why the
  two invocations' *searches* actually diverge remains open; several hypotheses (random
  seed, conjunct order, `axiom`/`conjecture` role, time limit) were tested directly and
  ruled out.

- **`Q_MED007p1` — clausification, binder order.** After `vampire_finish_clausify`
  splits and AC-normalises, the matching split clause is alpha-equivalent to the goal
  but its bound variables are in a different *position* (`∀ v0 v2 v3` vs the clause's
  own `∀ v0 v3 v2`), which plain `assumption` can't see past. A `first | assumption |
  grind` fallback in `Vampire/Support.lean` fixed it (`grind` needs no quantifier search
  once the clause is fully split and ground-normalised) but was reverted with the rest
  of this session's speculative fixes; safe to reapply on its own if wanted, since its
  reasoning doesn't depend on the unresolved COM003 question.

- **`Q_NUN081p1` — generic step, `grind` can't E-match through nested `∃`.** Same root
  cause as the `Xor'`/`ennf` fix already in the tree: `grind`'s E-matching can't trigger
  on a hypothesis whose leading `∀` has no atom to match, buried under nested
  existentials. Specializing the hypothesis at the goal's own leading binders before
  calling `grind` fixed it (also reverted with the rest). The one wrinkle: use only the
  statement's *leading* `∀`-bound prefix, not every free variable (`s.vars` includes
  ones bound further in, under their own `∃`) — the same distinction `.rectify`'s
  permutation fallback already draws.

- **`Q_ITP021p1`, `Q_PRD001p1`, `Q_SYN036p1`, `Q_SYN472p1` — harness timeout, ~160–180s.**
  Not investigated. Could be Vampire genuinely taking that long on the replay side
  (`grind`/`cnfify` on a large formula), or a real hang. Worth a first look with
  `set_option trace.vampire.timing true` to see whether it's the prover call or the
  replay that's slow.
