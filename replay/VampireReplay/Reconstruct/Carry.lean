import VampireReplay.Reconstruct.Literal

namespace Vampire.Reconstruct

open Lean Meta

/--
Where each literal of a premise went in the conclusion, as the worker recorded
it: `Unit.placement?`.
-/
abbrev Placement := Array (Option (Nat × Bool))

/--
A conclusion's literals, to place a premise's literals into: a `Disjunction`,
so that placing one costs the same wherever it lands.

Every carry proves the whole conclusion from each literal it is handed, one
elimination of the premise with the conclusion as its motive. Where a literal
lands then says nothing about the cost: a clause is carried in its length
whatever order its literals come out in -- which literal selection changes, a
resolvent interleaves and factoring merges.
-/
abbrev Into := Disjunction

/--
The literals of `stated`, which says what a clause of `count` literals does,
or a formula where `count` is `none`: a clause's by its count, since a literal
naming a subformula stands for that formula and can be a disjunction, and a
formula's by its shape, which is what it says.
-/
def clauseLiterals (stated : Expr) (count : Option Nat) : ReconstructM (Array Expr) :=
  match count with
  | some n => countedParts ``Or stated n
  | none => pure (junctionParts ``Or stated)

/--
`k` given `target`, a clause of `count` literals (or a formula, where `count`
is `none`), to place literals into; see `Into`.
-/
def withInto (target : Expr) (count : Option Nat) (k : Into → ReconstructM Expr) :
    ReconstructM Expr := do
  withDisjunction (← clauseLiterals target count) k

/--
A premise's `i`th literal placed where the worker recorded it went, turned
round if it was. The worker records where every literal of a clause premise
went; one it recorded as going nowhere the step acted on or dropped, which is
for the rule to prove, not for this to look for.
-/
def Into.placeAt (into : Into) (placed : Option Placement) (i : Nat) (h : Expr) :
    ReconstructM Expr := do
  let some placement := placed
    | throwError "the worker recorded no placement of the premise's literals"
  let some (some (k, flipped)) := placement[i]?
    | throwError "the worker recorded literal {i} as none of the conclusion's: the step \
        acted on it, which the rule has to say what of"
  let some h ← (if flipped then flipEquality h else pure (some h))
    | throwError "the worker recorded literal {i} as turned round, but\
        {indentExpr (← instantiateMVars (← inferType h))}\nis no equality"
  let some part := into.parts[k]?
    | throwError "the worker placed literal {i} at literal {k} of a conclusion of \
        {into.parts.size}"
  let stated ← instantiateMVars (← inferType h)
  unless stated == part do
    throwError "the worker placed{indentExpr stated}\nat literal {k} of the \
      conclusion, which is{indentExpr part}"
  return into.inject k h

/--
A proof of `motive` from a proof `h` of `source`, a clause of `count` literals
(or a formula's disjunction, where `count` is `none`), sending each literal to
`handler`, which proves `motive` from it.
-/
def elimLiterals (source : Expr) (count : Option Nat)
    (handler : Nat → Expr → ReconstructM Expr) (h : Expr) (motive? : Option Expr := none) :
    ReconstructM Expr :=
  do elimGiven (← clauseLiterals source count) handler h (motive? := motive?)

/--
`target` from a proof of `source`, whose literals the step carried into it:
`carried i h` says what the `i`th gives, which is put where the worker
recorded it went (`placed`).
-/
def carryWith (source target proof : Expr) (into : Into)
    (carried : Nat → Expr → ReconstructM Expr)
    (placed : Option Placement := none) (sourceCount : Option Nat := none) :
    ReconstructM Expr :=
  elimLiterals source sourceCount (motive? := some target) (fun i h => do
    into.placeAt placed i (← carried i h)) proof

/--
`target` from a proof of `source`, a clause whose literals the step carried,
but for those the worker recorded as rewritten (`recordRewritten`): `rewrite h
wanted` proves `wanted`, the conclusion's literal stated the way round the
premise's is, from `h`, the premise's.
-/
def carryRewritten (source target proof : Expr) (into : Into) (placement : Placement)
    (rewritten : Array Bool) (sourceCount : Option Nat)
    (rewrite : Expr → Expr → ReconstructM Expr) : ReconstructM Expr :=
  carryWith source target proof into (placed := some placement) (sourceCount := sourceCount)
    fun k h => do
      unless rewritten[k]?.getD false do return h
      let some (some (j, flipped)) := placement[k]? | return h
      let some part := into.parts[j]?
        | throwError "the worker placed literal {k} at literal {j} of a conclusion of \
            {into.parts.size}"
      let wanted ← if flipped then turnedRound part else pure part
      rewrite h wanted
where
  /-- An equality literal the other way round. -/
  turnedRound (e : Expr) : ReconstructM Expr := do
    let some (τ, a, b, negated) := equalityLiteral? e
      | throwError "the worker recorded{indentExpr e}\nas turned round, but it is no equation"
    let eq ← mkEq b a
    let _ := τ
    return if negated then mkNot eq else eq

/--
`wanted` from `h`, where `wanted` is what `h` says with names this step
introduced in place of what they name: those it has and `h` does not.
-/
def throughNames (h wanted : Expr) : ReconstructM Expr := do
  let stated ← instantiateMVars (← inferType h)
  let wanted ← instantiateMVars wanted
  -- Through every name the premise's literal does not have: what one names
  -- can mention another.
  let before := stated.getUsedConstants
  let folded (n : Name) : Bool := isIntroducedDefinition n && !before.contains n
  let unfolded ← unfoldDefinitions wanted (only := folded)
  unless unfolded == stated do
    throwError "{indentExpr wanted}\nis not{indentExpr stated}\nwith what it names folded: \
      it unfolds to{indentExpr unfolded}"
  mkExpectedTypeHint h wanted

/--
`target` from a proof of `source`, a step having acted on the literals
`special` picks out and carried the rest.

`onSpecial i h` proves all of `target` from one it acted on; one it carried is
placed as `carryWith` places it.
-/
def carryPast (source target proof : Expr) (into : Into) (special : Nat → Bool)
    (onSpecial : Nat → Expr → ReconstructM Expr)
    (placed : Option Placement := none) (sourceCount : Option Nat := none) :
    ReconstructM Expr :=
  elimLiterals source sourceCount (motive? := some target) (fun i h => do
    if special i then onSpecial i h else into.placeAt placed i h) proof

/--
`carryWith`, for a step that left every literal as it was: nothing to do where
the two say the same thing, which is the common case.

@b into is the conclusion's, where the caller has it; otherwise `target` is
taken apart by @b targetCount, or by its shape where that is `none`.
-/
def carryAll (source target proof : Expr) (placed : Option Placement := none)
    (into : Option Into := none) (sourceCount targetCount : Option Nat := none) :
    ReconstructM Expr := do
  if (← instantiateMVars source) == (← instantiateMVars target) then
    return proof
  match into with
  | some into => carryWith source target proof into (fun _ h => pure h) placed sourceCount
  | none =>
    withInto target targetCount fun into =>
      carryWith source target proof into (fun _ h => pure h) placed sourceCount

end Vampire.Reconstruct
