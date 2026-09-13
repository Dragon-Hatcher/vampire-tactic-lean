import Vampire.Reconstruct.Literal

namespace Vampire.Reconstruct

open Lean Meta

/--
`source → target`, following the shape of both at once.

Putting a clause's literals back into the conclusion one at a time writes out
a constructor for each literal before the one being placed, so carrying a
clause of `k` literals costs `k²` -- at every step that clause takes part in.
Walking the two disjunctions together costs `k`.

`inStep i a t` says what the `i`th literal of `source` gives for `t`, the
literal of `target` the walk has reached. A literal that gives something else
is left to `whole`, which has to account for it against all of `target` that
is left; where it cannot, the two do not run in step and `none` says so.
-/
partial def carrying (source target : Expr) (i : Nat)
    (inStep : Nat → Expr → Expr → ReconstructM (Option Expr))
    (whole : Nat → Expr → Expr → ReconstructM (Option Expr)) :
    ReconstructM (Option Expr) := do
  let stepping (from_ t : Expr) : ReconstructM (Option Expr) :=
    withLocalDeclD `a from_ fun a => do
      match ← inStep i a t with
      | some p => return some (← mkLambdaFVars #[a] p)
      | none => return none
  let accounting (from_ : Expr) : ReconstructM (Option Expr) :=
    withLocalDeclD `a from_ fun a => do
      match ← whole i a target with
      | some p => return some (← mkLambdaFVars #[a] p)
      | none => return none
  unless source.isAppOfArity ``Or 2 do
    if target.isAppOfArity ``Or 2 then
      let t := target.appFn!.appArg!
      let restT := target.appArg!
      if let some f ← stepping source t then
        return some (.lam `x source
          (mkApp3 (mkConst ``Or.inl) t restT (mkApp f (.bvar 0))) .default)
    return ← accounting source
  let s := source.appFn!.appArg!
  let restS := source.appArg!
  if target.isAppOfArity ``Or 2 then
    let t := target.appFn!.appArg!
    let restT := target.appArg!
    if let some f ← stepping s t then
      let some rest ← carrying restS restT (i + 1) inStep whole | return none
      return some (mkApp6 (mkConst ``Or.imp) s t restS restT f rest)
  -- Not the literal the target has reached: this one has to be accounted for
  -- against what is left of it, which stays where it is.
  let some f ← accounting s | return none
  let some rest ← carrying restS target (i + 1) inStep whole | return none
  return some (.lam `x source
    (mkApp6 (mkConst ``Or.elim) s restS target (.bvar 0) f rest) .default)

/--
`target` from a proof of `source`, whose literals the step carried into it.

The two say the same thing unless the step changed a literal, so the common
case is that nothing has to be done at all.
-/
def carryWith (source target proof : Expr)
    (literal : Nat → Expr → ReconstructM Expr) : ReconstructM Expr := do
  let inStep : Nat → Expr → Expr → ReconstructM (Option Expr) := fun i a t => do
    let given ←
      try literal i a
      catch _ => return none
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
  let whole : Nat → Expr → Expr → ReconstructM (Option Expr) := fun i a rest => do
    try return some (← placeLiteral rest (← literal i a))
    catch _ => return none
  match ← carrying source target 0 inStep whole with
  | some f => return mkApp f proof
  | none =>
    elimParts source 0 (fun i h => do placeLiteral target (← literal i h)) proof

/--
`target` from a proof of `source`, where the step acted on some of its
literals and carried the rest.

`onSpecial i h rest` accounts for one it acted on against all of `target` that
is left; `onKept i h` says what one it carried gives.
-/
def carryPast (source target proof : Expr) (special : Nat → Bool)
    (onSpecial : Nat → Expr → Expr → ReconstructM Expr)
    (onKept : Nat → Expr → ReconstructM Expr := fun _ h => pure h) :
    ReconstructM Expr := do
  let inStep : Nat → Expr → Expr → ReconstructM (Option Expr) := fun i a t => do
    if special i then return none
    let given ←
      try onKept i a
      catch _ => return none
    if ← isDefEq (← instantiateMVars (← inferType given)) t then
      return some given
    return none
  let whole : Nat → Expr → Expr → ReconstructM (Option Expr) := fun i a rest => do
    try
      if special i then
        return some (← onSpecial i a rest)
      return some (← placeLiteral rest (← onKept i a))
    catch _ => return none
  match ← carrying source target 0 inStep whole with
  | some f => return mkApp f proof
  | none =>
    elimParts source 0 (fun i h => do
      if special i then onSpecial i h target
      else placeLiteral target (← onKept i h)) proof

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
  let atom (e : Expr) : Option (Expr × Expr × Expr × Bool) :=
    let (inner, negated) := match e.not? with
      | some inner => (inner, true)
      | none => (e, false)
    if inner.isAppOfArity ``Eq 3 then
      match inner.getAppArgs with
      | #[τ, lhs, rhs] => some (τ, lhs, rhs, negated)
      | _ => none
    else none
  if let (some (τ, lhs, rhs, negated), some (τ', lhs', rhs', negated')) :=
      (atom s, atom t) then
    if τ == τ' && lhs == rhs' && rhs == lhs' && negated == negated' then
      let symm := if negated then ``Ne.symm else ``Eq.symm
      return some (.lam `a s
        (mkApp4 (mkConst symm [← getLevel τ]) τ lhs rhs (.bvar 0)) .default)
  if ← isDefEq s t then
    return some (.lam `a s (.bvar 0) .default)
  return none

/--
`carryWith`, for a step that left every literal as it was.

The literals of the two clauses are walked together, which is all the carry is
when nothing was done to any of them.
-/
partial def carryAll (source target proof : Expr) : ReconstructM Expr := do
  if ← isDefEq source target then
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
  | none => carryWith source target proof fun _ h => pure h

end Vampire.Reconstruct
