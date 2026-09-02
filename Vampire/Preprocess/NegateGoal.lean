/-
Ported from lean-smt (`Smt/Preprocess/NegateGoal.lean`), Copyright (c) 2021-2026 by the
authors listed in that project's AUTHORS file. Released under Apache 2.0; see `NOTICE`.
-/
import Vampire.Preprocess.Basic
import Lean.Meta.Tactic.Apply
import Lean.Meta.Tactic.Intro

namespace Vampire.Preprocess

open Lean

/-- Turn `⊢ p` into `¬p ⊢ False`, which is the refutation Vampire is asked for. This is
where classical reasoning enters, and it is the only place: everything downstream is a
first-order refutation. -/
def negateGoal (mv : MVarId) (hs : Array Expr) : MetaM Result := do
  let target ← mv.getType
  if target.isFalse then return { map := {}, hs, mv }
  let [mv] ← mv.applyConst ``Classical.byContradiction
    | throwError "vampire: unexpected result after applying {``Classical.byContradiction}"
  let (fv, mv) ← mv.intro1
  return { map := Std.HashMap.insert {} (.fvar fv) #[.fvar fv], hs := hs.push (.fvar fv), mv }

end Vampire.Preprocess
