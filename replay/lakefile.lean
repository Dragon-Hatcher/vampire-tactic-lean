import Lake

open Lake DSL System

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

/--
Compiles the shim that starts the worker. `spawn.c` says why it exists, and
`VampireReplay/Spawn.lean` why it is in this package.
-/
target spawnShim pkg : FilePath := do
  let src ← inputTextFile <| pkg.dir / "spawn.c"
  buildO (pkg.buildDir / "spawn.o") src
    #["-I", (← getLeanIncludeDir).toString, "-fPIC", "-O2"]

extern_lib vampireSpawn pkg := do
  let name := nameToStaticLib "vampireSpawn"
  buildStaticLib (pkg.staticLibDir / name) #[← spawnShim.fetch]

@[default_target]
lean_lib VampireReplay where
  roots := #[
    `VampireReplay.InferenceRule, `VampireReplay.Wire,
    `VampireReplay.Translate, `VampireReplay.Reconstruct,
    `VampireReplay.Abstract, `VampireReplay.Spawn]
  globs := #[
    .one `VampireReplay.InferenceRule, .one `VampireReplay.Wire,
    .one `VampireReplay.Translate,
    .one `VampireReplay.Abstract, .one `VampireReplay.Spawn,
    .andSubmodules `VampireReplay.Reconstruct]
  precompileModules := true
