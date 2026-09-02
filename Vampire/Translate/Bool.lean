/-
Ported from lean-smt (`Smt/Translate/Bool.lean`), Copyright (c) 2021-2022 by the authors
listed in that project's AUTHORS file. Released under Apache 2.0; see `NOTICE`.
-/
import Vampire.Recognizers
import Vampire.Translate

/-!
# The `Bool` fragment

`Bool` is identified with `Prop`, as it is in SMT-LIB: a `Bool`-valued Lean function
becomes a Vampire predicate. This loses the distinction Lean draws between the decidable
and the propositional, which is exactly the point — Vampire has only formulas.
-/

namespace Vampire.Translate.Bool

open Vampire.Translator Vampire.Term

@[vampire_translate] def translateType : Translator := fun e => match e with
  | .const ``Bool _ => return symbolT "Bool"
  | _               => return none

@[vampire_translate] def translateBool : Translator := fun e => do
  if let .const ``true _ := e then
    return symbolT "true"
  else if let .const ``false _ := e then
    return symbolT "false"
  else if let some b := e.app1? ``not then
    return appT (symbolT "not") (← applyTranslators! b)
  else if let some (a, b) := e.app2? ``and then
    return mkApp2 (symbolT "and") (← applyTranslators! a) (← applyTranslators! b)
  else if let some (a, b) := e.app2? ``or then
    return mkApp2 (symbolT "or") (← applyTranslators! a) (← applyTranslators! b)
  else if let some (a, b) := e.app2? ``xor then
    return mkApp2 (symbolT "xor") (← applyTranslators! a) (← applyTranslators! b)
  else if let some (α, x, y) := e.vampireBEq? then
    if α == .const ``Bool [] then
      return mkApp2 (symbolT "iff") (← applyTranslators! x) (← applyTranslators! y)
    return mkApp2 (symbolT "=") (← applyTranslators! x) (← applyTranslators! y)
  else if let some (α, x, y) := e.vampireBNe? then
    if α == .const ``Bool [] then
      return appT (symbolT "not")
        (mkApp2 (symbolT "iff") (← applyTranslators! x) (← applyTranslators! y))
    return mkApp2 (symbolT "distinct") (← applyTranslators! x) (← applyTranslators! y)
  else
    return none

/-- `(a : Bool) = b` is a formula equivalence, not first-order equality. -/
@[vampire_translate] def translateProp : Translator := fun e => do
  if let some (.const ``Bool _, a, b) := e.eq? then
    return mkApp2 (symbolT "iff") (← applyTranslators! a) (← applyTranslators! b)
  else
    return none

end Vampire.Translate.Bool
