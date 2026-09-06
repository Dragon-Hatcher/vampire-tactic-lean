# The VampLean dependency

This is the one thing left between the package and `require vampire from git ...`, and it
is worth writing down because none of the three ways out is free.

## What it is

[VampLean](https://github.com/vprover/vamplean) is the runtime library Vampire's own Lean
code generator emits calls to. The replay is a port of that generator, so it inherits the
dependency: eight tactics (`cnfify`, `ennf_transformation`, `exists_prenex`, `flattening`,
`nnf_transformation`, `prenexify`, `remove_tauto`, `symm_match`), three lemmas named
directly in generated scripts (`imp_iff_not_or`, `not_and_or`, `not_imp_not`) and four
named qualified (`VampLean.Xor'`, `VampLean.or_forall_prenex`,
`VampLean.or_forall_prenex_left`, `VampLean.symmUnify`).

That is the whole surface: 15 names, of which the eight tactics are `simp only` wrappers
over about forty elementary propositional and quantifier equivalences.

## Why it is a path dependency and not a git one

Upstream declares about a dozen of those forty at the *root* namespace, under names
Mathlib also uses — `Xor'`, `xor_def`, `not_and_or`, `imp_iff_not_or`, `by_contradiction`,
`forall_true_iff` and more, with the same statements. Two modules declaring one name
collide at the *import*, so a file cannot have both upstream VampLean and Mathlib:

    import VampLean failed, environment already contains 'xor_def' from Mathlib.Logic.Basic

Since nearly every real Lean development imports Mathlib, a tactic that cannot be used
beside it is not much use. The checkout this package points at is therefore a namespaced
one, which is a local modification and not something a downstream `require` can fetch.

## The three ways out

1. **Point at upstream and give up Mathlib.** Installable today, one line. Costs the
   ability to use the tactic in any file that imports Mathlib, which is most of them.
2. **Point at a namespaced fork.** Installable and coexisting, and the change is small —
   wrap the library in `namespace VampLean` and qualify the three or four names the
   generated scripts use bare. Needs a fork to exist somewhere fetchable, or the change
   upstreamed; `vprover/vamplean` is not ours to push to.
3. **Bring the forty lemmas in-tree under `Vampire.*`.** Installable, coexisting, and
   self-contained, with no external dependency to keep in step. They are standard logic
   facts and the work is bounded, but it is a reimplementation of an interface whose
   required behaviour is "whatever makes Vampire's emitted scripts elaborate", so it has
   to be validated against the whole replay rather than proved correct in the abstract.
   Note also that the upstream repository carries no licence file, so its text cannot
   simply be copied in — this has to be written rather than vendored.

**Recommendation: 2 as the release path, 3 as the destination.** A fork unblocks
installation immediately at almost no risk; the in-tree version is what makes the package
genuinely stand alone, and it can land later without changing anything a user writes.

Nothing here affects a user who already has the layout working — it is about what a
stranger can `require`.
