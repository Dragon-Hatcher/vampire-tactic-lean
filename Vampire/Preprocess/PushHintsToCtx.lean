/-
Ported from lean-smt (`Smt/Preprocess/PushHintsToCtx.lean`), Copyright (c) 2021-2024 by
the authors listed in that project's AUTHORS file. Released under Apache 2.0; see
`NOTICE`.
-/
import Vampire.Preprocess.Basic

namespace Vampire.Preprocess

open Lean

/-- Move each hint into the local context, so that everything the prover sees is a local
hypothesis and can be referred to by name. A hint that is already an fvar or a constant
is left where it is. -/
def pushHintsToCtx (mv : MVarId) (hs : Array Expr) : MetaM Result := do
  hs.foldrM pushHint { map := {}, hs := #[], mv }
where
  pushHint (h : Expr) (r : Result) : MetaM Result := do
    if h.isFVar || h.isConst then
      return { r with map := r.map.insert h #[h], hs := r.hs.push h }
    else
      let mv' ← r.mv.assert (← mkFreshId) (← Meta.inferType h) h
      let ⟨fv, mv'⟩ ← mv'.intro1
      let h' := .fvar fv
      return { map := r.map.insert h' #[h], hs := r.hs.push h', mv := mv' }

end Vampire.Preprocess
