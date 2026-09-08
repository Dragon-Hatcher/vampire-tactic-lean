/-
Ported from lean-smt (`Smt/Translate/Commands.lean`), Copyright (c) 2021-2022 by the
authors listed in that project's AUTHORS file. Released under Apache 2.0; see `NOTICE`.
Changes: the SMT-LIB-specific commands are dropped, and rendering to s-expressions is
replaced by compilation in `Translate/Build.lean`.
-/
import Vampire.Translate.Term

/-!
# What the translation produces

A problem is a list of declarations and assertions in dependency order. This is the
same shape as an SMT-LIB query, minus the parts of SMT-LIB that Vampire does not have.

The one that is genuinely missing is `define-fun`: Vampire has no definitions, so
`Build.lean` lowers one into a declaration plus a universally quantified defining
equation. That is the standard encoding and it is what the TPTP route would produce too.
-/

namespace Vampire

/-- A single declaration or assertion in the problem handed to Vampire. -/
inductive Command where
  /-- A new sort. Vampire is monomorphic, so `arity` is 0 for everything we emit today;
  the field is kept because the query builder computes it. -/
  | declareSort (nm : String) (arity : Nat)
  /-- A new symbol of the given sort. An arrow chain ending in `Bool` becomes a
  predicate; anything else becomes a function. -/
  | declare (nm : String) (st : Term)
  /-- A definition, lowered to a declaration plus its defining equation. -/
  | defineFun (nm : String) (ps : List (String × Term)) (cod : Term) (tm : Term) (isRec : Bool)
  /-- A type abbreviation. Not supported yet; `Build.lean` reports it. -/
  | defineSort (nm : String) (ps : List Term) (tm : Term)
  /-- An assertion. `conjecture` marks the one that is the negated goal. -/
  | assert (tm : Term) (conjecture : Bool := false)
  deriving Inhabited

namespace Command

protected def toString : Command → String
  | .declareSort nm arity => s!"sort {nm}/{arity}"
  | .declare nm st => s!"{nm} : {st}"
  | .defineFun nm ps cod tm _ =>
    let ps := String.intercalate " " (ps.map fun (n, s) => s!"({n} : {s})")
    s!"{nm} {ps} : {cod} := {tm}"
  | .defineSort nm _ tm => s!"sort {nm} := {tm}"
  | .assert tm conj => s!"{if conj then "assert-goal" else "assert"} {tm}"

instance : ToString Command := ⟨Command.toString⟩

instance : Lean.ToMessageData Command :=
  ⟨fun c => Lean.MessageData.ofFormat (Command.toString c)⟩

end Command

end Vampire
