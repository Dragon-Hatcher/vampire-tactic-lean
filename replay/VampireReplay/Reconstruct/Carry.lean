import VampireReplay.Reconstruct.Literal

namespace Vampire.Reconstruct

open Lean Meta

/--
Where each literal of a premise went in the conclusion, as the worker recorded
it: `Unit.placement?`.
-/
abbrev Placement := Array (Option (Nat × Bool))

/--
A conclusion's literals, to place a premise's literals into by index: the
literals, the junction of each suffix of them, and which of them the target a
carry has reached starts at.
-/
structure Into where
  parts : Array Expr
  suffix : Array Expr
  offset : Nat := 0

/-- A clause of `count` literals, to place literals into. -/
def Into.of (target : Expr) (count : Nat) : Into :=
  let parts := Id.run do
    if count == 0 then return #[]
    let mut parts := #[]
    let mut rest := target
    for _ in [0 : count - 1] do
      unless rest.isAppOfArity ``Or 2 do return #[]
      parts := parts.push rest.appFn!.appArg!
      rest := rest.appArg!
    return parts.push rest
  { parts, suffix := suffixJunctions ``Or ``False parts }

/-- The same conclusion, from its `offset`th literal on. -/
def Into.from (into : Into) (offset : Nat) : Into := { into with offset }

/--
A proof of what is left of the conclusion from its `start`th literal, from a
proof of its `k`th: disjunction introductions, and no search.
-/
def Into.inject (into : Into) (start k : Nat) (h : Expr) : Option Expr := do
  let n := into.parts.size
  guard (start ≤ k && k < n)
  let mut acc :=
    if k + 1 == n then h
    else mkApp3 (mkConst ``Or.inl) into.parts[k]! into.suffix[k + 1]! h
  for d in [0 : k - start] do
    let j := k - 1 - d
    acc := mkApp3 (mkConst ``Or.inr) into.parts[j]! into.suffix[j + 1]! acc
  return acc

/--
A premise literal placed where the worker recorded, turned round if it was:
`none` where nothing is recorded, or where that literal is behind the part of
the conclusion a carry has reached.
-/
def placeAt (into : Into) (placed : Placement) (i start : Nat) (h : Expr) :
    ReconstructM (Option Expr) := do
  let some (some (k, flipped)) := placed[i]? | return none
  let some h ← (if flipped then flipEquality h else pure (some h)) | return none
  return into.inject start k h

/--
`source → target`, following the shape of both at once.

Putting a clause's literals back into the conclusion one at a time writes out
a constructor for each literal before the one being placed, so carrying a
clause of `k` literals costs `k²` -- at every step that clause takes part in.
Walking the two disjunctions together costs `k`.

`inStep i j a t` says what the `i`th literal of `source` gives for `t`, the
`j`th literal of `target`, which the walk has reached. A literal that gives
something else is left to `whole`, which has to account for it against all of
`target` from the `j`th literal on; where it cannot, the two do not run in step
and `none` says so.

@b sourceLeft and @b targetLeft are how many literals each has from the one the
walk has reached on, where the caller knows. A literal can itself be a
disjunction -- a name defined as one, unfolded -- and at the end of a clause
nothing in the shape tells it from the literals before it: without the count
the walk goes on into it, and its indices run past the clause's. Without a
count, each is walked by its shape.
-/
partial def carrying (source target : Expr) (i j : Nat)
    (inStep : Nat → Nat → Expr → Expr → ReconstructM (Option Expr))
    (whole : Nat → Nat → Expr → Expr → ReconstructM (Option Expr))
    (sourceLeft targetLeft : Option Nat := none) :
    ReconstructM (Option Expr) := do
  -- Whether a clause has a literal after the one the walk has reached.
  let continues (e : Expr) (left : Option Nat) : Bool :=
    e.isAppOfArity ``Or 2 && (match left with
      | some n => decide (2 ≤ n)
      | none => true)
  let sourceNext := sourceLeft.map (· - 1)
  let targetNext := targetLeft.map (· - 1)
  let stepping (from_ t : Expr) : ReconstructM (Option Expr) :=
    withLocalDeclD `a from_ fun a => do
      match ← inStep i j a t with
      | some p => return some (← mkLambdaFVars #[a] p)
      | none => return none
  let accounting (from_ : Expr) : ReconstructM (Option Expr) :=
    withLocalDeclD `a from_ fun a => do
      match ← whole i j a target with
      | some p => return some (← mkLambdaFVars #[a] p)
      | none => return none
  unless continues source sourceLeft do
    if continues target targetLeft then
      let t := target.appFn!.appArg!
      let restT := target.appArg!
      if let some f ← stepping source t then
        return some (.lam `x source
          (mkApp3 (mkConst ``Or.inl) t restT (mkApp f (.bvar 0))) .default)
    return ← accounting source
  let s := source.appFn!.appArg!
  let restS := source.appArg!
  if continues target targetLeft then
    let t := target.appFn!.appArg!
    let restT := target.appArg!
    if let some f ← stepping s t then
      let some rest ← carrying restS restT (i + 1) (j + 1) inStep whole
          sourceNext targetNext
        | return none
      return some (mkApp6 (mkConst ``Or.imp) s t restS restT f rest)
  -- Not the literal the target has reached: this one has to be accounted for
  -- against what is left of it, which stays where it is.
  let some f ← accounting s | return none
  let some rest ← carrying restS target (i + 1) j inStep whole sourceNext targetLeft
    | return none
  return some (.lam `x source
    (mkApp6 (mkConst ``Or.elim) s restS target (.bvar 0) f rest) .default)

/--
`x`, or `none` where it fails.

For a caller's own account of a literal, asked on the way the carry tries
first: a literal the caller cannot account for against the part of the
conclusion the walk has reached is what that failing means, and the caller has
no other way to say so. A genuine error is not lost by it -- where the walk
gives up, the carry asks the same caller again and lets what it throws through
-- and neither an interrupt nor a runtime limit is caught.
-/
private def attempt (x : ReconstructM α) : ReconstructM (Option α) := do
  try
    return some (← x)
  catch _ =>
    return none

/--
`target` from a proof of `source`, whose literals the step carried into it.

The two say the same thing unless the step changed a literal, so the common
case is that nothing has to be done at all.
-/
def carryWith (source target proof : Expr)
    (carried : Nat → Expr → ReconstructM Expr)
    (placed : Option Placement := none) (into : Option Into := none) :
    ReconstructM Expr := do
  let placedAt (i start : Nat) (h : Expr) : ReconstructM (Option Expr) := do
    let (some placed, some into) := (placed, into) | return none
    placeAt into placed i (into.offset + start) h
  let inStep : Nat → Nat → Expr → Expr → ReconstructM (Option Expr) := fun i j a t => do
    let some given ← attempt (carried i a) | return none
    -- Where the worker recorded the literal went, it goes there and nowhere
    -- else; the rest is looked for.
    if let (some placed, some into) := (placed, into) then
      if let some (some (k, flipped)) := placed[i]? then
        unless k == into.offset + j do return none
        if flipped then return ← flipEquality given else return some given
    let says ← instantiateMVars (← inferType given)
    -- The literal is usually the conclusion's own, which what the two are
    -- settles before what they mean is asked about.
    if says == t then
      return some given
    if ← isDefEq says t then
      return some given
    -- An equality is stated either way round, and an inference reorients the
    -- one it rewrote; a literal that is the conclusion's the other way round
    -- still runs in step with it.
    let some flipped ← flipEquality given | return none
    if ← isDefEq (← instantiateMVars (← inferType flipped)) t then
      return some flipped
    return none
  let whole : Nat → Nat → Expr → Expr → ReconstructM (Option Expr) := fun i j a rest => do
    let some given ← attempt (carried i a) | return none
    if let some placed ← placedAt i j given then return some placed
    placeLiteral? rest given
  match ← carrying source target 0 0 inStep whole with
  | some f => return mkApp f proof
  | none =>
    elimParts source 0 (fun i h => do
      let given ← carried i h
      if let some placed ← placedAt i 0 given then return placed
      placeLiteral target given) proof

/--
`target` from a proof of `source`, where the step acted on some of its
literals and carried the rest.

`onSpecial i h rest at` accounts for one it acted on against all of `target`
that is left, which starts at the conclusion's `at`th literal; `onKept i h`
says what one it carried gives. Where `placed` says where a carried literal
went among `into`'s literals, it is put there.
-/
def carryPast (source target proof : Expr) (special : Nat → Bool)
    (onSpecial : Nat → Expr → Expr → Nat → ReconstructM Expr)
    (onKept : Nat → Expr → ReconstructM Expr := fun _ h => pure h)
    (placed : Option Placement := none) (into : Option Into := none) :
    ReconstructM Expr := do
  let offset := (into.map (·.offset)).getD 0
  let placedAt (i start : Nat) (h : Expr) : ReconstructM (Option Expr) := do
    let (some placed, some into) := (placed, into) | return none
    placeAt into placed i (offset + start) h
  let inStep : Nat → Nat → Expr → Expr → ReconstructM (Option Expr) := fun i j a t => do
    if special i then return none
    let some given ← attempt (onKept i a) | return none
    if let some placed := placed then
      if let some (some (k, flipped)) := placed[i]? then
        unless k == offset + j do return none
        if flipped then return ← flipEquality given else return some given
    if ← isDefEq (← instantiateMVars (← inferType given)) t then
      return some given
    return none
  let whole : Nat → Nat → Expr → Expr → ReconstructM (Option Expr) := fun i j a rest => do
    if special i then
      return ← attempt (onSpecial i a rest (offset + j))
    let some given ← attempt (onKept i a) | return none
    if let some placed ← placedAt i j given then return some placed
    placeLiteral? rest given
  match ← carrying source target 0 0 inStep whole with
  | some f => return mkApp f proof
  | none =>
    elimParts source 0 (fun i h => do
      if special i then onSpecial i h target offset
      else
        let given ← onKept i h
        if let some placed ← placedAt i 0 given then return placed
        placeLiteral target given) proof

/--
`s → t` for one literal a step carried, or `none` if it did not carry it
there.

Built with the bound variable in place: a clause of a few hundred literals is
carried by every step it takes part in, and introducing a local to stand for
each literal of each of them costs more than everything else the carry does.
-/
private def carriedAlike (s t : Expr) : ReconstructM (Option Expr) := do
  if s == t then
    return some (.lam `a s (.bvar 0) .default)
  -- An equality is stated either way round.
  if let (some (τ, lhs, rhs, negated), some (τ', lhs', rhs', negated')) :=
      (equalityLiteral? s, equalityLiteral? t) then
    if τ == τ' && lhs == rhs' && rhs == lhs' && negated == negated' then
      return some (.lam `a s (← symmLiteral τ lhs rhs negated (.bvar 0)) .default)
  if ← sameFormula s t then
    return some (.lam `a s (.bvar 0) .default)
  return none

/--
`carryWith`, for a step that left every literal as it was.

The literals of the two clauses are walked together, which is all the carry is
when nothing was done to any of them.
-/
partial def carryAll (source target proof : Expr)
    (placed : Option Placement := none) (into : Option Into := none) :
    ReconstructM Expr := do
  if ← sameFormula source target then
    return proof
  let rec alike (source target : Expr) : ReconstructM (Option Expr) := do
    if source.isAppOfArity ``Or 2 && target.isAppOfArity ``Or 2 then
      let s := source.appFn!.appArg!
      let restS := source.appArg!
      let t := target.appFn!.appArg!
      let restT := target.appArg!
      let some here ← carriedAlike s t | return none
      let some rest ← alike restS restT | return none
      return some (mkApp6 (mkConst ``Or.imp) s t restS restT here rest)
    carriedAlike source target
  match ← alike source target with
  | some f => return mkApp f proof
  | none => carryWith source target proof (fun _ h => pure h) placed into

end Vampire.Reconstruct
