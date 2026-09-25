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
def clauseLiterals (stated : Expr) (count : Option Nat) : Array Expr :=
  match count with
  | some 0 => #[]
  | some n => Id.run do
    let mut parts := #[]
    let mut rest := stated
    for _ in [0 : n - 1] do
      unless rest.isAppOfArity ``Or 2 do return parts.push rest
      parts := parts.push rest.appFn!.appArg!
      rest := rest.appArg!
    return parts.push rest
  | none => junctionParts ``Or stated

/--
`k` given `target`, a clause of `count` literals (or a formula, where `count`
is `none`), to place literals into; see `Into`.
-/
def withInto (target : Expr) (count : Option Nat) (k : Into → ReconstructM Expr) :
    ReconstructM Expr := do
  let parts := clauseLiterals target count
  if let some n := count then
    unless parts.size == n do
      throwError "the conclusion{indentExpr target}\nis not a clause of {n} literals"
  withDisjunction parts k

/--
A proof of the conclusion from one of its literals, found among them, or
`none` where it is not among them in any of the ways it can be stated.

@b hint is where the literal is likely to be, looked at first: a literal
carried in order sits where it sat, and comparing it with every literal before
it would make placing a clause cost its square.
-/
def Into.place? (into : Into) (h : Expr) (hint : Option Nat := none) :
    ReconstructM (Option Expr) := do
  let place (candidate : Expr) : ReconstructM (Option Expr) := do
    let stated ← instantiateMVars (← inferType candidate)
    if let some i := hint then
      if into.parts[i]? == some stated then return some (into.inject i candidate)
    let some k ← findPart? into.parts stated | return none
    return some (into.inject k candidate)
  if let some placed ← place h then return placed
  if let some flipped ← flipEquality h then
    if let some placed ← place flipped then return placed
  for candidate in ← doubleNegations h do
    if let some placed ← place candidate then return placed
  return none

/-- `Into.place?`, for a caller that cannot go on without the literal placed. -/
def Into.place (into : Into) (h : Expr) (hint : Option Nat := none) :
    ReconstructM Expr := do
  let some placed ← into.place? h hint
    | throwError "the literal{indentExpr (← instantiateMVars (← inferType h))}\
        \nis not among{indentExpr into.whole}"
  return placed

/--
A premise's `i`th literal placed where the worker recorded it went, turned
round if it was; looked for, where nothing is recorded for it.
-/
def Into.placeAt (into : Into) (placed : Option Placement) (i : Nat) (h : Expr) :
    ReconstructM Expr := do
  let some (some (k, flipped)) := placed.bind (·[i]?) | into.place h (hint := i)
  let some h ← (if flipped then flipEquality h else pure (some h))
    | throwError "the worker recorded literal {i} as turned round, but\
        {indentExpr (← instantiateMVars (← inferType h))}\nis no equality"
  let some part := into.parts[k]?
    | throwError "the worker placed literal {i} at literal {k} of a conclusion of \
        {into.parts.size}"
  let stated ← instantiateMVars (← inferType h)
  unless stated == part || (← isDefEq stated part) do
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
  elimGiven (clauseLiterals source count) handler h (motive? := motive?)

/--
`target` from a proof of `source`, whose literals the step carried into it:
`carried i h` says what the `i`th gives, which is put where the worker
recorded it went (`placed`), and looked for where nothing is recorded.
-/
def carryWith (source target proof : Expr) (into : Into)
    (carried : Nat → Expr → ReconstructM Expr)
    (placed : Option Placement := none) (sourceCount : Option Nat := none) :
    ReconstructM Expr :=
  elimLiterals source sourceCount (motive? := some target) (fun i h => do
    into.placeAt placed i (← carried i h)) proof

/--
`target` from a proof of `source`, a step having acted on the literals
`special` picks out and carried the rest.

`onSpecial i h` proves all of `target` from one it acted on; `onKept i h` says
what one it carried gives, which is placed as `carryWith` places it.
-/
def carryPast (source target proof : Expr) (into : Into) (special : Nat → Bool)
    (onSpecial : Nat → Expr → ReconstructM Expr)
    (onKept : Nat → Expr → ReconstructM Expr := fun _ h => pure h)
    (placed : Option Placement := none) (sourceCount : Option Nat := none) :
    ReconstructM Expr :=
  elimLiterals source sourceCount (motive? := some target) (fun i h => do
    if special i then onSpecial i h
    else into.placeAt placed i (← onKept i h)) proof

/--
`carryWith`, for a step that left every literal as it was: nothing to do where
the two say the same thing, which is the common case.

@b into is the conclusion's, where the caller has it; otherwise `target` is
taken apart by @b targetCount, or by its shape where that is `none`.
-/
def carryAll (source target proof : Expr) (placed : Option Placement := none)
    (into : Option Into := none) (sourceCount targetCount : Option Nat := none) :
    ReconstructM Expr := do
  if ← sameFormula source target then
    return proof
  match into with
  | some into => carryWith source target proof into (fun _ h => pure h) placed sourceCount
  | none =>
    withInto target targetCount fun into =>
      carryWith source target proof into (fun _ h => pure h) placed sourceCount

end Vampire.Reconstruct
