/-
Ported from lean-smt (`Smt/Preprocess/Basic.lean`), Copyright (c) 2021-2024 by the
authors listed in that project's AUTHORS file. Released under Apache 2.0; see `NOTICE`.
-/
import Lean

/-!
# Preprocessing the goal

Before translating anything the goal is put into the shape the prover expects: every
hypothesis in the local context, and `False` as the target. Each step returns the new
goal, the hypotheses to send, and a map from each new hypothesis back to the ones it
came from — which is what lets an unsat core be reported in the user's own terms.
-/

namespace Vampire.Preprocess

open Lean

/-- What a preprocessing step produces. -/
structure Result where
  /-- Each resulting hypothesis, mapped back to the originals it came from. -/
  map : Std.HashMap Expr (Array Expr)
  /-- The hypotheses to translate. -/
  hs : Array Expr
  /-- The goal after this step. -/
  mv : MVarId

/-- Every proposition in the local context. `Nonempty` hypotheses are skipped: they say
something about Lean's type theory, not about the first-order problem. -/
def getPropHyps : MetaM (Array FVarId) := do
  let mut result := #[]
  for localDecl in (← getLCtx) do
    unless localDecl.isImplementationDetail do
      if ← pure !(isNonEmpty localDecl.type) <&&> Meta.isProp localDecl.type then
        result := result.push localDecl.fvarId
  return result
where
  isNonEmpty (e : Expr) : Bool :=
    match e with
    | .app (.const ``Nonempty _) _ => true
    | .forallE _ _ b _ => isNonEmpty b
    | _ => false

/-- Run the steps in order, composing their hypothesis maps. -/
def applySteps (mv : MVarId) (hs : Array Expr)
    (steps : Array (MVarId → Array Expr → MetaM Result)) : MetaM Result := do
  if h : 0 < steps.size then
    let mut { map, hs, mv } ← steps[0] mv hs
    for step in steps[1:] do
      let ⟨map', hs', mv'⟩ ← step mv hs
      map := compose map map'
      hs := hs'
      mv := mv'
    return { map, hs, mv }
  else
    return Result.mk {} #[] mv
where
  compose (m₁ m₂ : Std.HashMap Expr (Array Expr)) : Std.HashMap Expr (Array Expr) :=
    m₂.fold (init := m₁) fun map k v =>
      map.insert k (v.map fun x => m₁.getD x #[x]).flatten

end Vampire.Preprocess
