import Lake

open Lake DSL System

/-!
The part of the tactic that is its own code: reading what the prover wrote,
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
Compiles the shim that starts vampire. `spawn.c` says why it exists, and
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
    `VampireReplay.InferenceRule, `VampireReplay.Tstp,
    `VampireReplay.Translate, `VampireReplay.Reconstruct,
    `VampireReplay.Spawn, `VampireReplay.Fact, `VampireReplay.Monomorphize]
  globs := #[
    .one `VampireReplay.InferenceRule, .one `VampireReplay.Tstp,
    .one `VampireReplay.Translate,
    .one `VampireReplay.Spawn, .one `VampireReplay.Fact, .one `VampireReplay.Monomorphize,
    .andSubmodules `VampireReplay.Reconstruct]
  precompileModules := true
