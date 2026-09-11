import Vampire.Reconstruct.Basic

/-!
The conflict a congruence closure reaches.

AVATAR keeps a decision procedure beside its SAT solver so that the models it
picks respect the theory of equality. When a model does not, the clause saying
so goes into the proof as an axiom: its literals cannot all be false, and
nothing says why. Vampire records the reasoning while it encodes the proof --
the equalities the clause denies, closed under congruence, make the two sides
of the equality it states equal -- and this rebuilds those steps.
-/

namespace Vampire.Reconstruct.Closure

open Lean Meta

/-- `f as = f bs`, from what says each pair of arguments is equal. -/
private def congruent (head : Expr) (args : Array Expr)
    (equal : Array (Option Expr)) : MetaM Expr := do
  let mut congruence ← mkEqRefl head
  for (argument, i) in args.zipIdx do
    congruence ← match equal[i]? with
      | some (some proof) => mkCongr congruence proof
      | _ => mkCongrFun congruence argument
  return congruence

/--
A clause whose literals a congruence closure showed cannot all be false.

Suppose they are. Then each of them says the opposite of what it does: the
literals denying an equality give the equalities to reason with, and the one
the reasoning settles is contradicted by its own.
-/
def conflict (step : Step) : ReconstructM Expr := do
  let some clause := step.unit.clause?
    | throwError "a congruence-closure conflict is not a clause"
  let recorded ←
    match step.unit.congruences with
    | .ok steps => pure steps
    | .error e => throwError "{e}"
  if recorded.isEmpty then
    throwError "nothing is recorded of why the literals of step \
      {step.unit.number} cannot all be false"
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut vars : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      vars := vars.insert v x
    let literals := clause.literals
    let parts ← literals.mapM (literal vars)
    let refuted ← withLocalDeclD `h (mkApp (mkConst ``Not) target) fun h => do
      -- What says the `i`th literal fails, the whole disjunction having failed.
      let refuting (i : Nat) : ReconstructM Expr := do
        let some part := parts[i]? | throwError "no literal {i} in the clause"
        withLocalDeclD `l part fun l => do
          mkLambdaFVars #[l] (mkApp h (← injectGiven parts i l))
      -- The atom of a literal that denies one, and what says the atom holds.
      let denied (i : Nat) : ReconstructM (Expr × Expr) := do
        let some part := parts[i]? | throwError "no literal {i} in the clause"
        let some atom := asNegation part
          | throwError "literal {i} of step {step.unit.number} denies nothing:\
            {indentExpr part}"
        return (atom, ofNotNot atom (← refuting i))
      -- The arguments of a literal, as the clause states them.
      let arguments (i : Nat) : ReconstructM (Expr × Array Expr) := do
        let some l := literals[i]? | throwError "no literal {i} in the clause"
        let some symbol := l.symbol?
          | throwError "literal {i} is over an unknown predicate"
        return (← symbolExpr symbol.name, ← l.args.mapM (term vars))
      -- What each step proves, in the order they were recorded: a step stands
      -- on the ones before it, so this is filled in as they are read.
      let proofAt (proofs : Array Expr) (i : Nat) : ReconstructM Expr := do
        let some proof := proofs[i]? | throwError "congruence step {i} is unproved"
        return proof
      let proofsAt (proofs : Array Expr) (args : Array (Option Nat)) :
          ReconstructM (Array (Option Expr)) :=
        args.mapM fun arg => arg.mapM (proofAt proofs)
      let mut proofs : Array Expr := #[]
      let mut closed : Option Expr := none
      for recording in recorded do
        match recording with
        | .input i => proofs := proofs.push (← denied i).2
        | .congruence lhs rhs args =>
          let some symbol := lhs.symbol?
            | throwError "a congruence is over an unknown symbol"
          unless rhs.symbol?.map (·.name) == some symbol.name do
            throwError "a congruence relates two different symbols"
          proofs := proofs.push (← congruent (← symbolExpr symbol.name)
            (← lhs.args.mapM (term vars)) (← proofsAt proofs args))
        | .trans i j =>
          proofs := proofs.push
            (← mkEqTrans (← proofAt proofs i) (← proofAt proofs j))
        | .symm i => proofs := proofs.push (← mkEqSymm (← proofAt proofs i))
        | .goalEquality i j =>
          let some part := parts[i]? | throwError "no literal {i} in the clause"
          closed := some (← mkAppOptM ``absurd
            #[some part, some (mkConst ``False), some (← proofAt proofs j),
              some (← refuting i)])
        | .goalLiterals a b args =>
          -- Which of the two denies its atom is read off the clause rather
          -- than taken from the record: polarity flipping leaves a literal
          -- meaning the opposite of what it did, and the two swap roles.
          let some first := parts[a]? | throwError "no literal {a} in the clause"
          let flipped := (asNegation first).isNone
          let (negative, positive) := if flipped then (b, a) else (a, b)
          let equal ← proofsAt proofs args
          let equal ← if flipped then
              equal.mapM fun p => p.mapM fun p => mkEqSymm p
            else pure equal
          let (head, negativeArgs) ← arguments negative
          let (_, holds) ← denied negative
          let alike ← congruent head negativeArgs equal
          let some part := parts[positive]?
            | throwError "no literal {positive} in the clause"
          closed := some (← mkAppOptM ``absurd
            #[some part, some (mkConst ``False),
              some (← mkEqMP alike holds), some (← refuting positive)])
      let some contradiction := closed
        | throwError "what is recorded of step {step.unit.number} settles nothing"
      mkLambdaFVars #[h] contradiction
    mkLambdaFVars xs (ofNotNot target refuted)

end Vampire.Reconstruct.Closure
