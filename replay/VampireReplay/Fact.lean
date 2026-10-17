import Lean

namespace Vampire

open Lean Meta

/-- Where a fact sent to vampire came from. -/
inductive Source where
  /-- The negated goal. -/
  | goal
  /-- A hypothesis the goal introduces, from a binder of its own. -/
  | binder
  /-- A term the caller named in brackets, as they wrote it. -/
  | hint (text : String)
  /-- A hypothesis of the local context, gathered by `*`. -/
  | star (name : Name)
  /-- A premise the library suggestions engine offered `vampire?`. -/
  | suggestion (name : Name)
deriving Inhabited, BEq, Hashable

/--
A fact sent to vampire: what proves it and what it says.

A fact can be polymorphic -- stated over types and instances, or over universe
levels -- until monomorphization gives it instances. Those keep the source of
what they are instances of, and are `derived`.
-/
structure Fact where
  proof : Expr
  type : Expr
  /-- The universe levels `proof` and `type` are stated over. -/
  levelParams : List Name := []
  source : Source
  /-- Whether this is an instance of what `source` names rather than that itself. -/
  derived : Bool := false
deriving Inhabited

/-- A fact proved by a local of the context, with the local's type. -/
def Fact.ofLocal (fv : FVarId) (source : Source) : MetaM Fact := do
  return { proof := .fvar fv, type := ← instantiateMVars (← fv.getType), source }

/-- Whether vampire is to read a fact as the goal's. -/
def Fact.isGoal (f : Fact) : Bool := f.source == .goal

/--
Whether a fact that cannot be stated in TPTP may be left out rather than fail
the call: one the caller did not state themselves -- an instance of a lemma, a
hypothesis gathered by `*`, a suggested premise -- of which only those that can
be stated are of use.
-/
def Fact.droppable (f : Fact) : Bool :=
  f.derived || match f.source with
    | .star _ | .suggestion _ => true
    | _ => false

/--
A fact with what it says transformed: `step` is given the statement and returns
the new one with a proof that the two are equal, or `none` where it changes
nothing.
-/
def Fact.rewrite (f : Fact) (step : Expr → MetaM (Option (Expr × Expr))) : MetaM Fact := do
  let some (type, holds) ← step f.type | return f
  return { f with proof := ← mkEqMP holds f.proof, type }

end Vampire
