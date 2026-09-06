# Why the logic library is in-tree

`Vampire/Logic.lean` holds the equivalences and tactics Vampire's Lean output is written
in: one tactic per preprocessing inference rule (`ennf_transformation`, `nnf_transformation`,
`prenexify`, `exists_prenex`, `flattening`, `remove_tauto`, `cnfify`, `symm_match`) over
about forty propositional and quantifier lemmas.

These used to come from [VampLean](https://github.com/vprover/vamplean), the library
Vampire's own generated files import. That dependency was wrong for this package in three
independent ways, and only the third is about anyone's code being at fault:

* **It could only be a path dependency.** Which meant this package could not be installed
  from git at all — the thing a user most needs.
* **It declares about a dozen of those lemmas at the root**, under names Mathlib also uses
  (`Xor'`, `not_and_or`, `imp_iff_not_or`, `forall_true_iff`, …). Two modules declaring one
  name collide at the *import*, so no file could have both it and Mathlib. Since nearly
  every real Lean development imports Mathlib, that alone made the tactic unusable in
  practice.
* **The repository carries no licence file**, so its text could not be vendored here
  either — which ruled out the obvious workaround and left writing it as the way out.

So it is written rather than copied: standard logic facts, proved here, grouped into the
simp sets each inference rule needs.

## The one thing to be careful about

**The equivalences have to match Vampire, not merely be true.** Each step's script leaves
a formula in the shape the *next* step was generated against, so a lemma set that reaches
a logically equivalent but differently oriented or differently associated form breaks the
chain rather than the step — and it breaks it somewhere else, one inference later, looking
like an unrelated failure. `imp_iff_or_not` putting the conclusion first is an example of
an orientation that looks arbitrary and is not.

That is why this is validated against the whole replay rather than proved correct in the
abstract: the test suite replays real refutations end to end, and `bench-100/` puts a
hundred TPTP problems through the tactic. Both are the specification here, in a way that
the individual lemma statements are not.
