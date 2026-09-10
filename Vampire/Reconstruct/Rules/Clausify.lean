import Vampire.Reconstruct.Basic

/-!
Clausification.

`CNF::clausify` collects a clause along one path through the formula: it drops
each universal quantifier, takes every disjunct of a disjunction into the same
clause, and takes the conjuncts of a conjunction into separate clauses. So for
one clause the obligation runs the other way round -- instantiate a universal,
find the conjunct the clause came from, and show that every disjunct leads to
it -- with a literal having to appear in the clause itself.
-/

namespace Vampire.Reconstruct.Clausify

open Lean Meta

/-- The disjuncts of a clause, as it was folded. -/
private partial def disjuncts (target : Expr) : Array Expr :=
  if target.isAppOfArity ``Or 2 then
    #[target.appFn!.appArg!] ++ disjuncts target.appArg!
  else
    #[target]

/-- `hypothesis : dᵢ` becomes a proof of the whole disjunction. -/
private partial def inject (target : Expr) (i : Nat) (hypothesis : Expr) :
    ReconstructM Expr := do
  if !target.isAppOfArity ``Or 2 then
    return hypothesis
  let rest := target.appArg!
  match i with
  | 0 => mkAppOptM ``Or.inl #[none, some rest, some hypothesis]
  | i + 1 =>
    mkAppOptM ``Or.inr
      #[some target.appFn!.appArg!, none, some (← inject rest i hypothesis)]

/--
Something of the clause's sort, for a variable the clause does not mention.

A universal can bind more than the clause kept, and instantiating it needs
some element; vampire's domains are never empty.
-/
private def someElement (τ : Expr) : ReconstructM Expr := do
  let goal := mkApp (mkConst ``Nonempty [← getLevel τ]) τ
  match ← trySynthInstance goal with
  | .some inst =>
    mkAppOptM ``Classical.choice #[some τ, some inst]
  | _ =>
    throwError "cannot instantiate a quantifier over{indentExpr τ}\n\
      without `Nonempty` for it"

/--
A proof of `⟦f⟧ → target`, where `target` is the clause as a disjunction.

`vars` sends a variable of the premise to what stands for it: the local the
clause bound for it, or an arbitrary element where the clause dropped it.
-/
partial def derive (sorts : Array (UInt32 × String)) (vars : Vars)
    (f : Formula) (target : Expr) : ReconstructM Expr := do
  match ← connectiveOf f with
  | .«forall» =>
    let some body := f.subformulas[0]? | throwError "quantifier without a body"
    -- Read the quantifier before extending `vars`, so its own binders are the
    -- ones `formula` introduces rather than anything instantiated below.
    let hypothesis ← Reconstruct.formula sorts vars f
    -- Instantiate rather than bind: the clause has its own binders already.
    let mut vars := vars
    let mut args := #[]
    for v in f.boundVars do
      let arg ←
        match vars[v]? with
        | some x => pure x
        | none =>
          let some (_, sortName) := sorts.find? (·.1 == v)
            | throwError "variable X{v} has no recorded sort"
          someElement (← sortType sortName)
      vars := vars.insert v arg
      args := args.push arg
    let rest ← derive sorts vars body target
    withLocalDeclD `h hypothesis fun h => do
      mkLambdaFVars #[h] (mkApp rest (mkAppN h args))
  | .and =>
    -- The clause came from one conjunct; the others lead elsewhere.
    let parts ← f.subformulas.mapM (Reconstruct.formula sorts vars)
    for (g, i) in f.subformulas.zipIdx do
      -- `derive` only reads, so a failed attempt leaves nothing behind.
      let attempt ← try pure (some (← derive sorts vars g target)) catch _ => pure none
      match attempt with
      | none => continue
      | some rest =>
        let whole := Reconstruct.junction ``And ``True parts
        return ← withLocalDeclD `h whole fun h => do
          let mut projected := h
          for _ in [0:i] do
            projected ← mkAppM ``And.right #[projected]
          -- The last conjunct is the tail itself, not its left.
          if i + 1 != parts.size then
            projected ← mkAppM ``And.left #[projected]
          mkLambdaFVars #[h] (mkApp rest projected)
    throwError "no conjunct of{indentExpr (Reconstruct.junction ``And ``True parts)}\n\
      leads to{indentExpr target}"
  | .or =>
    -- Every disjunct is taken into the same clause, so each must lead to it.
    let parts ← f.subformulas.mapM (Reconstruct.formula sorts vars)
    let branches ← f.subformulas.mapM (derive sorts vars · target)
    let whole := Reconstruct.junction ``Or ``False parts
    withLocalDeclD `h whole fun h => do
      let rec elim (i : Nat) (disjunction : Expr) (hypothesis : Expr) :
          ReconstructM Expr := do
        if i + 1 == branches.size then
          return mkApp branches[i]! hypothesis
        let some branch := branches[i]? | throwError "missing disjunct"
        let rest := disjunction.appArg!
        withLocalDeclD `l disjunction.appFn!.appArg! fun l =>
          withLocalDeclD `r rest fun r => do
            mkAppM ``Or.elim #[hypothesis,
              ← mkLambdaFVars #[l] (mkApp branch l),
              ← mkLambdaFVars #[r] (← elim (i + 1) rest r)]
      mkLambdaFVars #[h] (← elim 0 whole h)
  | .«false» =>
    withLocalDeclD `h (mkConst ``False) fun h => do
      mkLambdaFVars #[h] (← mkAppOptM ``False.elim #[some target, some h])
  | _ =>
    -- A literal, which the clause has to contain.
    let literal ← Reconstruct.formula sorts vars f
    let candidates := disjuncts target
    for (d, i) in candidates.zipIdx do
      if ← isDefEq d literal then
        return ← withLocalDeclD `h literal fun h => do
          mkLambdaFVars #[h] (← inject target i h)
    throwError "the literal{indentExpr literal}\nis not among{indentExpr target}"

/-- `clausify`: one clause of a formula's conjunctive normal form. -/
def clausify (step : Step) : ReconstructM Expr := do
  let #[(premiseProof, _)] := step.premises
    | throwError "clausify should have one premise, got {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "clausify without a premise"
  let some premise := parent.formula?
    | throwError "clausify should be given a formula"
  let sorts := parent.varSorts ++ step.unit.varSorts
  -- The clause binds the variables it kept; work under exactly those. A
  -- bounded telescope matters: `¬a` is `a → False`, which an unbounded one
  -- would take for another binder and leave `False` as the target.
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      vars := vars.insert v x
    let implication ← derive sorts vars premise target
    mkLambdaFVars xs (mkApp implication premiseProof)

end Vampire.Reconstruct.Clausify
