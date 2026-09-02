/-
Ported from lean-smt (`Smt/Preprocess/Intros.lean`), Copyright (c) 2021-2026 by the
authors listed in that project's AUTHORS file. Released under Apache 2.0; see `NOTICE`.
-/
import Vampire.Preprocess.Basic
import Lean.Meta.Tactic.Assert

namespace Vampire.Preprocess

open Lean

/-- Whether `fv` is a propositional hypothesis worth sending. -/
def isPropHyp (fv : FVarId) : MetaM Bool := do
  let localDecl ← fv.getDecl
  unless localDecl.isImplementationDetail do
    if ← pure !(isNonEmpty localDecl.type) <&&> Meta.isProp localDecl.type then
      return true
  return false
where
  isNonEmpty (e : Expr) : Bool :=
    match e with
    | .app (.const ``Nonempty _) _ => true
    | .forallE _ _ b _ => isNonEmpty b
    | _ => false

/-- Introduce the goal's binders, adding the propositional ones to the hypotheses. -/
def intros (mv : MVarId) (hs : Array Expr) : MetaM Result := do
  let (fvs, mv) ← mv.intros
  let fvs ← mv.withContext (fvs.filterM isPropHyp)
  let hfvs := fvs.map Expr.fvar
  return { map := Std.HashMap.insertMany {} (hfvs.zip (hfvs.map (#[·]))), hs := hs ++ hfvs, mv }

end Vampire.Preprocess
