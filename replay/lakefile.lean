import Lake

open Lake DSL

/-!
The part of the tactic that is its own code: decoding what the prover wrote,
rebuilding terms, and replaying the inference rules.

It is a package of its own so that it can be precompiled, which is worth a
third to two thirds of the replay. Precompiling a module requires every module
it imports to be precompiled too, and `precompileModules` applies to a whole
package; none of this imports Mathlib, while `Vampire.Arith` reaches for
`linarith` and `ring` and Mathlib is not precompiled. Hence the line: the
decision procedures are handed *in* to replay rather than called from it, and
that is what lets the two sit in different packages.
-/

package vampireReplay

@[default_target]
lean_lib VampireReplay where
  roots := #[
    `VampireReplay.InferenceRule, `VampireReplay.Wire,
    `VampireReplay.Translate, `VampireReplay.Reconstruct]
  globs := #[
    .one `VampireReplay.InferenceRule, .one `VampireReplay.Wire,
    .one `VampireReplay.Translate,
    .andSubmodules `VampireReplay.Reconstruct]
  precompileModules := true
