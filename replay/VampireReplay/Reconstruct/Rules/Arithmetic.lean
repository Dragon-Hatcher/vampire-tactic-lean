import VampireReplay.Reconstruct.Basic

/-!
The steps that hold by arithmetic.

Vampire's own arithmetic rules record nothing of why each is sound, so these
are the steps whose conclusion replay has to prove for itself. Two kinds:

* The literal-wise simplifications -- evaluation, theory normalization, ALASCA
  normalization, cancellation -- rewrite each literal into one literal, or find
  it false. The worker records which literal each became, and each rewrite is
  proved by exactly the rewrites its rule makes (`Context.literalIff`).
* The rest -- theory axioms, ALASCA's inferences adding inequalities together --
  hold by the arithmetic of their literals, which the decision procedure
  `Context.contradiction` settles.
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
    match step.useAt? i with
    | some use =>
      out := out.push (← instantiateAt parent use (← coverVars parent vars step.unit.boundVarSorts) proof stated)
    | none =>
      -- Nothing recorded: a simplifying inference that applies no substitution
      -- states its premise of the very variables its conclusion speaks of, so
      -- that is what it is instantiated at. A variable the conclusion does not
      -- have is one the step evaluated or dropped the literal of, and the
      -- premise is a fact of every element of its sort, so which element is
      -- taken for it cannot matter.
      let args ← argsFor parent vars
      out := out.push (mkAppN proof args,
        ← sharedClause (← instantiateForall stated args))
  return out

/--
The roundings a formula speaks of: the floors and ceilings, cast back to the
type they were taken at, and the conditionals truncation is stated with.

A decision procedure over ordered fields knows nothing of `⌊x⌋` but that it is
some number; what makes a floor a floor is a pair of bounds, which are
Mathlib's lemmas and are handed to it here.
-/
private partial def roundingsOf (e : Expr) (acc : Array Expr × Std.HashSet Expr) :
    Array Expr × Std.HashSet Expr :=
  if acc.2.contains e then acc
  else
    let acc := (acc.1, acc.2.insert e)
    let acc :=
      if e.isAppOfArity ``Int.cast 3 then
        let inner := e.appArg!
        -- Mathlib's names, with a single backtick: see `rounding` in `Stated.lean`.
        if inner.isAppOfArity `Int.floor 5 || inner.isAppOfArity `Int.ceil 5
          then (acc.1.push e, acc.2) else acc
      else if e.isAppOfArity ``ite 5 then (acc.1.push e, acc.2)
      else acc
    match e with
    | .app f a => roundingsOf a (roundingsOf f acc)
    | .lam _ d b _ | .forallE _ d b _ => roundingsOf b (roundingsOf d acc)
    | .mdata _ b => roundingsOf b acc
    | _ => acc

/--
`k`, handed what bounds each rounding the formulas speak of, with a case made of
each conditional among them.

`⌊x⌋ ≤ x < ⌊x⌋ + 1` and `x ≤ ⌈x⌉ < x + 1` are what the numbers need to know of a
floor or a ceiling, which is what `tha_floor_*`, `tha_ceiling_*` and ALASCA's
floor steps turn on. Truncation is a floor or a ceiling according to the sign
of what it truncates, so it is a case: the condition holds and the conditional
is its first branch, or it fails and it is the second -- which is what
`tha_trunc*` turn on.
-/
private partial def withRoundings (formulas : Array Expr)
    (k : Array Expr → ReconstructM Expr) : ReconstructM Expr := do
  let (found, _) := formulas.foldl (fun acc e => roundingsOf e acc) (#[], {})
  let mut bounds := #[]
  let mut conditionals := #[]
  for e in found do
    if e.isAppOfArity ``ite 5 then
      conditionals := conditionals.push e
      continue
    let inner := e.appArg!
    let x := inner.appArg!
    -- Mathlib's lemmas, named rather than referred to: see `rounding` in
    -- `Stated.lean`.
    let lemmas := if inner.isAppOfArity `Int.floor 5
      then [`Int.floor_le, `Int.lt_floor_add_one]
      else [`Int.le_ceil, `Int.ceil_lt_add_one]
    for lemma_ in lemmas do
      let bound ← mkAppM lemma_ #[x]
      -- Stated of the very term the step speaks of: the lemma reaches the cast
      -- through instances of its own, and a procedure that tells terms apart
      -- by their shape would take the two for two numbers.
      let stated := (← instantiateMVars (← inferType bound)).replace fun s =>
        if s.isAppOfArity ``Int.cast 3 && s.appArg!.getAppFn == inner.getAppFn
          then some e else none
      bounds := bounds.push (← mkExpectedTypeHint bound stated)
  let rec cases (i : Nat) (facts : Array Expr) : ReconstructM Expr := do
    let some e := conditionals[i]? | k facts
    let #[α, c, inst, yes, no] := e.getAppArgs | k facts
    let level ← getLevel α
    let holds ← withLocalDeclD `h c fun h => do
      let first := mkApp6 (mkConst ``if_pos [level]) c inst h α yes no
      mkLambdaFVars #[h] (← cases (i + 1) (facts ++ #[h, first]))
    let fails ← withLocalDeclD `h (mkApp (mkConst ``Not) c) fun h => do
      let second := mkApp6 (mkConst ``if_neg [level]) c inst h α yes no
      mkLambdaFVars #[h] (← cases (i + 1) (facts ++ #[h, second]))
    mkAppM ``Classical.byCases #[holds, fails]
  cases 0 bounds

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
      | throwError "{step.rule.name} on a formula should have one premise, got \
        {step.premises.size}"
    return ← restate proof stated (← step.conclusion)
  step.underVars fun vars target => do
    let premises ← premisesOf step vars
    let targetParts := clauseLiterals target step.unit.clauseSize?
    let suffix := suffixJunctions ``Or ``False targetParts
    -- Each premise holds, so one of its literals does, which is a case; every
    -- case has to make the conclusion. A literal the step carried over is one
    -- of the conclusion's own -- the premise is instantiated at the step's
    -- substitution, and its literals rebuilt as the conclusion's are -- so
    -- that case is closed by finding it there. What is left is the literals
    -- the step acted on, and those are what the numbers settle.
    let premiseParts := premises.zipIdx.map fun ((_, stated), i) =>
      clauseLiterals stated ((step.unit.parents[i]?).bind (·.clauseSize?))
    let rec go (facts : Array Expr) (i : Nat) : ReconstructM Expr := do
      let some (proof, _) := premises[i]?
        | return ← byArithmetic facts target
      elimGiven premiseParts[i]! (motive? := some target)
        (fun _ h => do
          let says ← instantiateMVars (← inferType h)
          if let some j := targetParts.findIdx? (· == says) then
            return ← injectGiven targetParts j h (suffix? := some suffix)
          go (facts.push (← plainly h)) (i + 1)) proof
    let statements := #[target] ++ premises.map (·.2)
    withRoundings statements fun roundings => go roundings 0

/--
A literal-wise simplification: each literal of the premise became the literal
of the conclusion the worker recorded, by the rewrites of the procedure it
recorded, or was found false and dropped.

Before clausification the step states a formula, and its atoms are rewritten
where they stand, which is a congruence down to them; only theory
normalization rewrites formulas.
-/
def literalwise (step : Step) : ReconstructM Expr := do
  let #[(proof, stated)] := step.premises
    | throwError "{step.rule.name} should have one premise, got {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "{step.rule.name} should have one premise, got none"
  if step.unit.clause?.isNone then
    unless step.rule == .theoryNormalization do
      throwError "{step.rule.name} rewrote a formula, which only theory normalization does"
    let rewritten (a b : Expr) : ReconstructM (Option Expr) := do
      return some (← (← read).literalIff .theoryNormalization a b (1, 1))
    return ← restate proof stated (← step.conclusion) rewritten
  let some procedure := step.unit.literalProcedure?.bind LiteralRewrite.ofRecorded?
    | throwError "step {step.unit.number} ({step.rule.name}) recorded no procedure"
  let some images := step.placedAt 0
    | throwError "step {step.unit.number} ({step.rule.name}) recorded nothing of \
      what its literals became"
  let factors := step.unit.literalFactors?
  step.underVars fun vars target => do
    let #[(premise, premiseStated)] ← premisesOf step vars
      | throwError "{step.rule.name} should have one premise"
    let parts := clauseLiterals premiseStated parent.clauseSize?
    unless images.size == parts.size do
      throwError "step {step.unit.number} recorded {images.size} literals' \
        images for a premise of {parts.size}"
    let into := step.into target
    -- A literal of no arguments -- a name, which replay states as what it
    -- stands for -- has nothing in it any of the procedures rewrites.
    let literals := (parent.clause?.map (·.literals)).getD #[]
    let bare (i : Nat) : Bool :=
      (literals[i]?.map fun l => l.arity == 0 && !l.isEquality).getD false
    elimGiven parts (motive? := some target) (fun i h => do
      let factor := (factors.bind (·[i]?)).getD (1, 1)
      match images[i]? with
      | some (some (j, _)) =>
        let some goal := into.parts[j]?
          | throwError "step {step.unit.number} has no literal {j}"
        let iff ← if bare i then do
            unless ← isDefEq parts[i]! goal do
              throwError "{step.rule.name} rewrote{indentExpr parts[i]!}\ninto\
                {indentExpr goal}\nbut it has no arguments to rewrite"
            pure (mkApp (mkConst ``Iff.refl) parts[i]!)
          else (← read).literalIff procedure parts[i]! goal factor
        let some placed := into.inject 0 j (mkApp4 (mkConst ``Iff.mp) parts[i]! goal iff h)
          | throwError "step {step.unit.number} has no literal {j}"
        return placed
      | _ =>
        let refuted ← (← read).literalFalse procedure parts[i]! factor
        return mkApp2 (mkConst ``False.elim [.zero]) target (mkApp refuted h)) premise

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
      | throwError "expected a divisibility axiom to state two products of the \
        number it says is zero, got {products.size}:{indentExpr target}"
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
      | throwError "step {step.unit.number}: no cancellation lemma for \
        multiplication on{indentExpr (← inferType x)}"
    let suffix := suffixJunctions ``Or ``False parts
    let inject (part h : Expr) : ReconstructM Expr := do
      let some i := parts.findIdx? (· == part)
        | throwError "the clause does not say{indentExpr part}"
      injectGiven parts i h (suffix? := some suffix)
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
