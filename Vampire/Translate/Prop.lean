/-
Ported from lean-smt (`Smt/Translate/Prop.lean`), Copyright (c) 2021-2022 by the authors
listed in that project's AUTHORS file. Released under Apache 2.0; see `NOTICE`.
Changes: equality and disequality between propositions become `iff` rather than `=`,
because Vampire keeps terms and formulas apart and `=` is a term-level relation.
-/
import Vampire.Recognizers
import Vampire.Translate

/-!
# The propositional fragment

`Prop` becomes the formula sort; the connectives become Vampire's own. Everything here
is a `Translator`, so the traversal in `Vampire/Translate.lean` picks it up by
attribute.
-/

namespace Vampire.Translate.Prop

open Lean Expr
open Vampire.Translator Vampire.Term

private def mkBool : Lean.Expr := toTypeExpr Bool

/-- `Prop` is the sort of formulas. -/
@[vampire_translate] def translateType : Translator := fun e => match e with
  | .sort 0 => return symbolT "Bool"
  | _       => return none

@[vampire_translate] def translateProp : Translator := fun e => do
  if let .const ``True _ := e then
    return symbolT "true"
  else if let .const ``False _ := e then
    return symbolT "false"
  else if let some p := e.not? then
    return appT (symbolT "not") (← applyTranslators! p)
  else if let some (p, q) := e.and? then
    return mkApp2 (symbolT "and") (← applyTranslators! p) (← applyTranslators! q)
  else if let some (p, q) := e.vampireOr? then
    return mkApp2 (symbolT "or") (← applyTranslators! p) (← applyTranslators! q)
  else if let some (p, q) := e.app2? ``Iff then
    return mkApp2 (symbolT "iff") (← applyTranslators! p) (← applyTranslators! q)
  else if let some (α, x, y) := e.eq? then
    if α == mkBool then return none
    -- Equality of propositions is not first-order equality: it relates formulas, so it
    -- has to become a connective.
    if (← Meta.inferType α).isProp || α.isProp then
      return mkApp2 (symbolT "iff") (← applyTranslators! x) (← applyTranslators! y)
    return mkApp2 (symbolT "=") (← applyTranslators! x) (← applyTranslators! y)
  else if let some (α, x, y) := e.ne? then
    if α == mkBool then return none
    if (← Meta.inferType α).isProp || α.isProp then
      return appT (symbolT "not")
        (mkApp2 (symbolT "iff") (← applyTranslators! x) (← applyTranslators! y))
    return mkApp2 (symbolT "distinct") (← applyTranslators! x) (← applyTranslators! y)
  -- Implication is checked last: it is a (non-dependent) arrow in Lean, so recognising
  -- it costs an `inferType` on both sides.
  else if let some (p, q) ← e.vampireImp? then
    return mkApp2 (symbolT "=>") (← applyTranslators! p) (← applyTranslators! q)
  else
    return none

@[vampire_translate] def translateExists : Translator
  | e@(app (app (const ``Exists _) _) f) => do
    let lam n t b bi := f | throwError "vampire: unexpected predicate {f} in {e}"
    withScopedName n b fun n => do
      let tmT ← applyTranslators! t
      let tmB ← Meta.withLocalDecl n bi t (translateBody b)
      return existsT n.toString tmT tmB
  | _ => return none
where
  translateBody (b : Expr) (x : Expr) : TranslationM Term := do
    modify fun s => { s with localFVars := s.localFVars.insert x.fvarId! }
    let tmB ← applyTranslators! (b.instantiate #[x])
    modify fun s => { s with localFVars := s.localFVars.erase x.fvarId! }
    return tmB

/-- `Eq.rec` erases: its motive is a proof-irrelevant detail of the Lean term. -/
@[vampire_translate] def translateEqRec : Translator
  | app (app (app (app (app (app (const ``Eq.rec _) _) _) _) e) _) _ => applyTranslators? e
  | _ => return none

/-- Drop a local `have`: the proof it binds has no first-order content. -/
@[vampire_translate] def translateHave : Translator := fun e => do
  if !e.isHave then return none
  Meta.letTelescope e.appFn! (nondepLetOnly := true) fun args bd => do
    let #[arg] := args | return none
    if !(← Meta.inferType (← Meta.inferType arg)).isProp then return none
    applyTranslators? (bd.instantiate #[arg])

end Vampire.Translate.Prop
