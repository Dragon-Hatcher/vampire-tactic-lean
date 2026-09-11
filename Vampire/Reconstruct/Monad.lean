import Lean
import Vampire.Translate
import Vampire.Wire

namespace Vampire.Reconstruct

open Lean Meta

/-- What reconstruction needs to read a proof back into Lean. -/
structure Context where
  /-- What the TPTP names in the proof stand for. -/
  symbols : Symbols
  proof : Proof
  /--
  The number of the first step polarity flipping made, or zero if it never ran:
  the steps from there on mean the opposite by the predicates it flipped.
  -/
  flipped : UInt32 := 0
  /--
  Whether the step being read is one of those polarity flipping has been
  through.

  Flipping picks a set of predicates and replaces every literal of every clause
  over them by its complement, all at once. It says nothing, then, about the
  clauses -- it says that those predicates now mean the opposite of what they
  did. So a step after it is read with the polarity of a flipped predicate's
  literals inverted, which is what makes the flipping itself say nothing.
  -/
  flipping : Bool := false
  /--
  What the goal holds, for when something of a sort is needed and no instance
  says the sort is inhabited.

  Taken once, before any step is replayed: what a rule brings into scope while
  it works -- a clause's variables, a hypothesis it assumes -- is gone again by
  the time the proof is put together, and nothing of it can be used here.
  -/
  givens : Array Expr := #[]
  /--
  What proves `False` from facts that cannot all hold of any numbers.

  Vampire's arithmetic rules record nothing of why they are sound -- for it,
  soundness is the calculus rather than a derivation -- so those are the one
  kind of step whose conclusion replay has to prove for itself, which for
  arithmetic is what a decision procedure is for. It is handed in rather than
  called directly: `omega` and `linarith` are the procedures, and `linarith`
  lives in a library whose keywords this one cannot afford to have.
  -/
  contradiction : Array Expr → Option Expr → MetaM Expr := fun _ _ =>
    throwError "no way to prove an arithmetic step was given to replay"

structure State where
  /-- The proof term built for each step, by vampire's number for it. -/
  proofs : Std.HashMap UInt32 Expr := {}
  /-- Rules met that have no implementation yet. -/
  unimplemented : Std.HashSet String := {}
  /--
  Symbols vampire introduced and the definition that gave each one meaning,
  e.g. from a `function_definition` step.
  -/
  introduced : Std.HashMap String Expr := {}
  /-- Formulas an `avatar_definition` step named, kept under the positive name. -/
  named : Std.HashMap String Expr := {}
  /-- The proposition rebuilt for each step, by vampire's number for it. -/
  conclusions : Std.HashMap UInt32 Expr := {}
  /-- The one term standing for each shape a rebuilt term has taken. -/
  shared : Std.HashMap Expr Expr := {}
  /-- What says a sort is inhabited, for the sorts that have needed it. -/
  nonempty : Std.HashMap Expr Expr := {}

abbrev ReconstructM := ReaderT Context (StateRefT State MetaM)

/--
Raised for a name vampire introduced itself, by skolemisation or AVATAR. Such a
name stands for nothing in the Lean goal, so the step it appears in cannot even
be stated until those rules are implemented.
-/
def throwIntroduced (kind name : String) : ReconstructM α :=
  throwError "vampire introduced {kind} `{name}`, which has no counterpart in \
    the goal; reconstruction cannot proceed"

/-- The Lean type a TPTP sort stands for. -/
def sortType (name : String) : ReconstructM Expr := do
  if let some τ := (← read).symbols.sorts[name]? then
    return τ
  -- TPTP's own arithmetic types, which a proof can reach for even where the
  -- goal did not: reasoning about the rationals states integer bounds.
  if name == "$int" then return mkConst ``Int
  if name == "$rat" then return mkConst `Rat
  if name == "$real" then return mkConst `Real
  throwIntroduced "the sort" name

/-- The Lean expression a TPTP symbol stands for, from the goal or a definition. -/
def symbolExpr (name : String) : ReconstructM Expr := do
  if let some e := (← read).symbols.symbols[name]? then return e
  if let some e := (← get).introduced[name]? then return e
  throwIntroduced "the symbol" name

/-- Whether a TPTP symbol name has a Lean counterpart yet. -/
def resolvesSymbol (name : String) : ReconstructM Bool := do
  return ((← read).symbols.symbols[name]?).isSome || ((← get).introduced[name]?).isSome

/--
Whether the goal is where a TPTP symbol comes from.

This is what tells a symbol vampire introduced from one of the goal's own,
which asking whether it resolves no longer does: names are bound before any
step is replayed, so by then an introduced one resolves too.
-/
def isGoalSymbol (name : String) : ReconstructM Bool := do
  return ((← read).symbols.symbols[name]?).isSome

/--
What a name splitting introduced stands for, `~n` for the negation of what `n`
does.
-/
def namedFormula (name : String) : ReconstructM Expr := do
  let negated := name.startsWith "~"
  let key := if negated then (name.drop 1).toString else name
  let some body := (← get).named[key]?
    | throwIntroduced "the named subformula" name
  return if negated then mkApp (mkConst ``Not) body else body

/--
What a proposition is the negation of, whether it is written `¬a` or `a → False`
-- which is the same thing, and which of the two a proof term states depends on
how it was built.
-/
def asNegation (e : Expr) : Option Expr :=
  match e.not? with
  | some inner => some inner
  | none =>
    -- `a ≠ b` is the same thing again, and a proof built by `Ne.symm` states
    -- itself that way.
    if e.isAppOfArity ``Ne 3 then
      match e.getAppFn with
      | .const _ levels =>
        let args := e.getAppArgs
        some (mkAppN (.const ``Eq levels) args)
      | _ => none
    else
      match e with
      | .forallE _ d body _ =>
        if body.isConstOf ``False && !body.hasLooseBVars then some d else none
      | _ => none

/-- The name of the negation of what `name` names. -/
def flippedName (name : String) : String :=
  if name.startsWith "~" then (name.drop 1).toString else "~" ++ name

/--
`⟦~n⟧`, and that it says what `¬⟦n⟧` does.

One is the other under a double negation: a name and its negation are two
names, and which of the two carries the negation is up to which one splitting
introduced.
-/
def flipName (name : String) : ReconstructM (Expr × Expr) := do
  let flipped := flippedName name
  let body ← namedFormula name
  let flippedBody ← namedFormula flipped
  if flippedBody == mkApp (mkConst ``Not) body then
    return (flippedBody, ← mkAppOptM ``Iff.refl #[some flippedBody])
  if body == mkApp (mkConst ``Not) flippedBody then
    return (flippedBody,
      ← mkAppM ``Iff.symm #[← mkAppOptM ``Classical.not_not #[some flippedBody]])
  throwError "`{name}` and `{flipped}` are not each other's negation"

/--
The one term of this shape, so that two rebuildings of it are the same term.

A proof states the same literals over and over -- every step of it says what
its premises and its conclusion are -- and each rebuilding otherwise makes its
own copy. Lean shares the subterms of what it is handed before checking it, and
compares terms by their address before their shape, so what the copies cost is
paid many times over.
-/
def shared (e : Expr) : ReconstructM Expr := do
  if let some one := (← get).shared[e]? then
    return one
  modify fun s => { s with shared := s.shared.insert e e }
  return e

end Vampire.Reconstruct
