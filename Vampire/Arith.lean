import Lean
import Mathlib.Tactic.Linarith
import Mathlib.Tactic.Ring
import VampireReplay.Abstract

/-!
What proves an arithmetic step of vampire's.

Kept apart from the rest of the tactic because `linarith` comes with a library
whose keywords -- `lemma`, `says`, `to` -- the replay uses as names of its own.
Replay is handed `contradiction` rather than importing it.
-/

namespace Vampire.Arith

open Lean Meta Mathlib.Tactic

/--
`a ↔ b`, where the two are one comparison with its terms moved across it.

What theory normalisation does to a literal is to gather its terms on one side:
`-14 x + -77 y < 64` for `0 < 64 + 14 x + 77 y`. The two say the same because
the difference between the sides is the same, which is a fact about a ring and
not about an order, so `ring` settles it -- where asking a decision procedure
asks twice, once for each way round the equivalence goes, and asks it to search
for a combination when there is nothing to search for.
-/
def rearranged (a b : Expr) : MetaM (Option Expr) := do
  -- A lemma stated of whatever makes it true here, found by unifying it with
  -- what is wanted of it rather than by counting its arguments.
  let instantiated (name : Name) (want : Expr) : MetaM (Option Expr) := do
    let e ← mkConstWithFreshMVarLevels name
    let (mvars, binders, stated) ← forallMetaTelescope (← inferType e)
    unless ← isDefEq stated want do return none
    -- Unifying settles what the lemma is stated of but not what it is stated
    -- over: an instance argument is found rather than matched.
    for (mvar, binder) in mvars.zip binders do
      if binder == .instImplicit && !(← mvar.mvarId!.isAssigned) then
        match ← trySynthInstance (← mvar.mvarId!.getType) with
        | .some inst => unless ← isDefEq mvar inst do return none
        | _ => return none
    let stated ← instantiateMVars (mkAppN e mvars)
    -- Nothing left unsettled. A term with a hole in it is one the kernel will
    -- not take, and the slow way round is there to be taken instead.
    if stated.hasExprMVar then return none
    return some stated
  -- A comparison read as `0 ≤ d` or `0 < d`, with what says the two are the
  -- same. A denied comparison is a comparison the other way round, which is
  -- the shape normalisation leaves and is a lemma rather than a question.
  let below (e : Expr) : MetaM (Option (Bool × Expr × Expr × Expr)) := do
    let parsed : Option (Bool × Expr × Expr × Option Name) :=
      match e.getAppFnArgs with
      | (``LE.le, #[_, _, x, y]) => some (true, y, x, none)
      | (``LT.lt, #[_, _, x, y]) => some (false, y, x, none)
      | (``Not, #[p]) =>
        match p.getAppFnArgs with
        | (``LT.lt, #[_, _, x, y]) => some (true, x, y, some ``not_lt)
        | (``LE.le, #[_, _, x, y]) => some (false, x, y, some ``not_le)
        | _ => none
      | _ => none
    let some (nonneg, greater, lesser, denied) := parsed | return none
    let difference ← mkAppM ``HSub.hSub #[greater, lesser]
    let α ← inferType difference
    let zero ← mkAppOptM ``OfNat.ofNat #[some α, some (mkRawNatLit 0), none]
    let named (l r : Expr) : MetaM Expr :=
      mkAppM (if nonneg then ``LE.le else ``LT.lt) #[l, r]
    let stated ← named zero difference
    let some core ← instantiated (if nonneg then ``sub_nonneg else ``sub_pos)
        (← mkAppM ``Iff #[stated, ← named lesser greater])
      | return none
    match denied with
    | none => return some (nonneg, difference, stated, core)
    | some name =>
      let some bridge ← instantiated name
          (← mkAppM ``Iff #[e, ← named lesser greater])
        | return none
      return some (nonneg, difference, stated,
        ← mkAppM ``Iff.trans #[core, ← mkAppM ``Iff.symm #[bridge]])
  let some (nonnegA, dA, statedA, saysA) ← below a | return none
  let some (nonnegB, dB, _, saysB) ← below b | return none
  unless nonnegA == nonnegB do return none
  let same ← mkFreshExprMVar (← mkEq dA dB)
  -- A failed attempt is rolled back, so that what it assigned on the way does
  -- not outlive it.
  try
    commitIfNoEx (AtomM.run .reducible (Mathlib.Tactic.Ring.proveEq same.mvarId!))
  catch _ => return none
  -- The two differ only where the difference stands, so one is the other with
  -- it replaced, and `same` says the replacement holds.
  let α ← inferType dA
  let motive := Expr.lam `t α (statedA.abstract #[dA]) .default
  let between ← mkAppM ``iff_of_eq #[← mkAppM ``congrArg #[motive, same]]
  let answer ← instantiateMVars (← mkAppM ``Iff.trans
    #[← mkAppM ``Iff.symm #[saysA], ← mkAppM ``Iff.trans #[between, saysB]])
  if answer.hasExprMVar then return none
  return some answer

/-- `False` or `claim`, asked of the facts as they stand. -/
private def askAbout (facts : Array Expr) (claim : Option Expr) : MetaM Expr := do
  -- `omega` decides the integers and the naturals and nothing else, so asking
  -- it about the rationals or the reals is asking a question whose answer is
  -- known: it cannot say. What is asked here is asked once per literal of
  -- every clause of every arithmetic step, so a procedure that cannot answer
  -- is not asked.
  let integral (e : Expr) : Bool :=
    (e.find? fun s => s.isConstOf ``Int || s.isConstOf ``Nat).isSome
  let discrete := claim.any integral
    || (← facts.anyM fun f => return integral (← instantiateMVars (← inferType f)))
  -- `omega` proves `False` and nothing else. Asked for anything else it
  -- proves `False` anyway and assigns that -- a proof of `False` standing
  -- where the claim should be, which nothing but the kernel would catch -- so
  -- a claim is turned into a fact here and refuted instead.
  let byOmega : MetaM Expr := do
    let refute (facts : Array Expr) : MetaM Expr := do
      let goal ← mkFreshExprMVar (mkConst ``False)
      Lean.Elab.Tactic.Omega.omega facts.toList goal.mvarId!
      instantiateMVars goal
    match claim with
    | none => refute facts
    | some c =>
      let refuted ← withLocalDeclD `h (mkApp (mkConst ``Not) c) fun h => do
        mkLambdaFVars #[h] (← refute (facts.push h))
      mkAppM ``Classical.byContradiction #[refuted]
  -- `linarith` proves a comparison outright, which is what a theory axiom
  -- like commutativity states.
  let byLinarith : MetaM Expr := do
    let goal ← mkFreshExprMVar (claim.getD (mkConst ``False))
    Mathlib.Tactic.Linarith.linarith true facts.toList {} goal.mvarId!
    instantiateMVars goal
  -- Which procedures to ask, in order. `linarith` goes first where there is
  -- a claim, which it proves outright, or where the numbers are not integers,
  -- which is all it is asked about then; `omega` is the second opinion only
  -- where they are.
  let procedures : List (String × MetaM Expr) :=
    if !discrete then [("linarith", byLinarith)]
    else if claim.isSome then [("linarith", byLinarith), ("omega", byOmega)]
    else [("omega", byOmega), ("linarith", byLinarith)]
  let rec firstAnswer (rest : List (String × MetaM Expr))
      (failures : Array (String × Exception)) : MetaM Expr := do
    match rest with
    | [] =>
      let stated ← facts.mapM fun f => do
        return indentExpr (← instantiateMVars (← inferType f))
      let said := failures.toList.map fun (name, e) =>
        m!"\n{name} said: {e.toMessageData}"
      throwError "nothing says {(claim.map fun c =>
          m!"that{indentExpr c}\nfollows").getD m!"these cannot all hold"} \
        of any numbers:{MessageData.joinSep stated.toList ""}\
        {MessageData.joinSep said ""}"
    | (name, ask) :: rest =>
      -- A procedure that fails is rolled back before the next is asked:
      -- what it assigned on the way would otherwise be left for the next.
      try commitIfNoEx ask
      catch e => firstAnswer rest (failures.push (name, e))
  let answer ← firstAnswer procedures #[]
  -- What a procedure assigned is checked against what it was asked, because
  -- a procedure that answers the wrong question answers it convincingly.
  let stated ← instantiateMVars (← inferType answer)
  unless ← isDefEq stated (claim.getD (mkConst ``False)) do
    throwError "a decision procedure was asked for{indentExpr
      (claim.getD (mkConst ``False))}\nand gave something proving{indentExpr stated}"
  return answer

/--
`x ≠ 0 → x * z = x * w → z = w`, where the numbers cancel.

`mul_left_cancel₀` says it of any ring without zero divisors, which the
integers, the rationals and the reals are; a sort that does not cancel has no
instance and gets nothing.
-/
def cancelling (x z w : Expr) : MetaM (Option Expr) := do
  try commitIfNoEx do
    let cancel ← mkAppOptM ``mul_left_cancel₀
      #[none, none, none, none, some x, some z, some w]
    -- What is left to take is the two hypotheses; anything else unsettled
    -- means the sort was not one that cancels.
    let stated ← instantiateMVars (← inferType cancel)
    if stated.hasExprMVar then return none
    return some (← instantiateMVars cancel)
  catch _ => return none

/--
`False` from facts that cannot all hold of any numbers, or `claim` from facts
that make it hold.

The terms the procedure cannot read are put aside by
`VampireReplay.Abstract.abstracting`, which is precompiled; what is handed to
it here is the asking.
-/
def contradiction (facts : Array Expr) (claim : Option Expr) : MetaM Expr :=
  VampireReplay.Abstract.abstracting askAbout facts claim

end Vampire.Arith
