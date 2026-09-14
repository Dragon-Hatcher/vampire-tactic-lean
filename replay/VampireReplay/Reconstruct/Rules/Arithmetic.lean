import VampireReplay.Reconstruct.Basic

/-!
The steps that hold by arithmetic.

Vampire's own arithmetic rules -- ALASCA normalising a literal into a sum
against zero, evaluating what is constant, adding two inequalities together --
record nothing of why each is sound, so these are the one kind of step whose
conclusion replay has to prove for itself. What proves it is the decision
procedure `Context.contradiction` holds.
-/

namespace Vampire.Reconstruct.Arithmetic

open Lean Meta

/--
What a step's premises say, each instantiated as the step used it.

A premise is a clause, so what it says is a disjunction; it is taken apart by
the caller, since which of its literals holds is a case to be made rather than
a fact to be had.
-/
private def premisesOf (step : Step) (vars : Vars) :
    ReconstructM (Array (Expr × Expr)) := do
  let mut out := #[]
  for ((proof, stated), i) in step.premises.zipIdx do
    let some parent := step.unit.parents[i]?
      | throwError "no premise in position {i}"
    -- A step that bound the premise's variables recorded what to; one that
    -- took the premise as it stands recorded nothing, and then it is taken so.
    match ← try some <$> step.useAt i catch _ => pure none with
    | some use =>
      out := out.push (← instantiateAt parent use (← coverVars parent vars step.unit.boundVarSorts) proof stated)
    | none =>
      -- Nothing recorded: a simplifying inference that applies no substitution
      -- states its premise of the very variables its conclusion speaks of, so
      -- that is what it is instantiated at. A variable the conclusion does not
      -- have is one the step evaluated or dropped the literal of, and the
      -- premise is a fact of every element of its sort, so which element is
      -- taken for it cannot matter.
      let mut args := #[]
      for (v, sortName) in parent.varSorts do
        match vars[v]? with
        | some x => args := args.push x
        | none => args := args.push (← someElement (← sortType sortName))
      out := out.push (mkAppN proof args,
        ← sharedClause (← instantiateForall stated args))
  return out

/--
A step whose conclusion follows from its premises by arithmetic.

Suppose the conclusion fails. Then each of its literals fails, which is a fact;
and each premise holds, so one of its literals does, which is a case. Every
case ends in facts that cannot all hold of any numbers.
-/
partial def theoryStep (step : Step) : ReconstructM Expr := do
  -- Before clausification a step states a formula, and what it did to it was
  -- to rewrite its literals where they stand: a congruence, whose leaves are
  -- where the arithmetic is.
  if step.unit.clause?.isNone then
    let #[(proof, stated)] := step.premises
      | throwError "a formula normalised from {step.premises.size} premises"
    let conclusion ← step.conclusion
    if ← isDefEq stated conclusion then
      return proof
    return ← mkAppM ``Iff.mp #[← equiv stated conclusion, proof]
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut vars : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      vars := vars.insert v x
    let premises ← premisesOf step vars
    -- Each premise holds, so one of its literals does, which is a case; every
    -- case has to make the conclusion, which is what the numbers settle.
    let rec go (facts : Array Expr) (i : Nat) : ReconstructM Expr := do
      let some (proof, stated) := premises[i]?
        | return ← byArithmetic facts target
      elimGiven (junctionParts ``Or stated)
        (fun _ h => do go (facts.push (← plainly h)) (i + 1)) proof
    mkLambdaFVars xs (← go #[] 0)

/-- `a * b`, whichever numbers those are. -/
private def asProduct (e : Expr) : Option (Expr × Expr) :=
  match e.getAppFnArgs with
  | (``HMul.hMul, #[_, _, _, _, a, b]) => some (a, b)
  | _ => none

/-- Whether a term is the number zero. -/
private def isZero (e : Expr) : Bool := e.nat? == some 0

/--
`tha_divisibility`: `x = 0 ∨ x * z ≠ y ∨ x * w ≠ y ∨ z = w`.

`TheoryAxioms::addMultiplyAxioms` states that multiplication by anything but
zero cancels, in exactly those four literals. No procedure that reads its
facts as linear constraints can see it -- both products are of two variables
-- so the clause is proved from its own literals instead: suppose the
multiplier is not zero and both products hold, and what is left is the
cancellation itself.

The literals are found by their shape, and each equality either way round,
because what orders a clause's literals and orients its equations is
vampire's term order rather than the order the axiom was written in.
-/
def divisibility (step : Step) : ReconstructM Expr := do
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let parts := junctionParts ``Or target
    -- `x = 0`: which number the products multiply by.
    let some (zeroed, x, zero, statedOfX) := parts.findSome? (fun part => do
        let some (_, a, b) := part.eq? | none
        if isZero b then some (part, a, b, true)
        else if isZero a then some (part, b, a, false)
        else none)
      | throwError "a divisibility axiom without a literal saying a number is \
        zero:{indentExpr target}"
    -- `¬(x * z = y)` and `¬(x * w = y)`, which multiply that number and reach
    -- the same one.
    let products := parts.filterMap fun part => do
      let some equation := part.not? | none
      let some (_, a, b) := equation.eq? | none
      if let some (l, r) := asProduct a then
        if l == x then return (part, r, b)
      if let some (l, r) := asProduct b then
        if l == x then return (part, r, a)
      none
    let #[(failsZ, z, y), (failsW, w, y')] := products
      | throwError "a divisibility axiom states {products.size} products of \
        the number it says is zero, not two:{indentExpr target}"
    unless y == y' do
      throwError "a divisibility axiom's products reach{indentExpr y}\nand\
        {indentExpr y'}, which are not the same"
    -- `z = w`, which is what cancelling the multiplier gives.
    let some equal := parts.find? (fun part =>
        match part.eq? with
        | some (_, a, b) => (a == z && b == w) || (a == w && b == z)
        | none => false)
      | throwError "a divisibility axiom without the equation it \
        concludes:{indentExpr target}"
    let some cancel ← (← read).cancelling x z w
      | throwError "nothing says that multiplication by a nonzero \
        {← inferType x} cancels"
    let inject (part h : Expr) : ReconstructM Expr := do
      let some i := parts.findIdx? (· == part)
        | throwError "the clause does not say{indentExpr part}"
      injectGiven parts i h
    -- Either the multiplier is zero, or one of the products fails, or both
    -- hold and the multiplier cancels.
    let byCases (p : Expr) (yes no : Expr → ReconstructM Expr) :
        ReconstructM Expr := do
      let positive ← withLocalDeclD `h p fun h => do
        mkLambdaFVars #[h] (← yes h)
      let negative ← withLocalDeclD `h (mkApp (mkConst ``Not) p) fun h => do
        mkLambdaFVars #[h] (← no h)
      mkAppOptM ``Classical.byCases #[some p, some target, some positive,
        some negative]
    let body ← byCases zeroed (fun h => inject zeroed h) fun refuted => do
      -- What cancellation asks for is that `x` is not zero; the clause can
      -- say that the other way round.
      let nonzero ←
        if statedOfX then pure refuted
        else withLocalDeclD `h (← mkEq x zero) fun h => do
          mkLambdaFVars #[h] (mkApp refuted (← mkAppM ``Eq.symm #[h]))
      let some statedZ := failsZ.not? | throwError "a refuted product is not one"
      let some statedW := failsW.not? | throwError "a refuted product is not one"
      byCases statedZ (fun holdsZ =>
        byCases statedW (fun holdsW => do
          -- `x * z = y` and `x * w = y`, so `x * z = x * w`, and `x` cancels.
          let same ← mkAppM ``Eq.trans #[holdsZ, ← mkAppM ``Eq.symm #[holdsW]]
          let equated ← mkAppM' cancel #[nonzero, same]
          -- The clause can state it the other way round.
          let some (_, a, _) := equal.eq? | throwError "not an equation"
          let stated ← if a == z then pure equated else mkAppM ``Eq.symm #[equated]
          inject equal stated)
          (fun failsW' => inject failsW failsW'))
        (fun failsZ' => inject failsZ failsZ')
    mkLambdaFVars xs body

end Vampire.Reconstruct.Arithmetic
