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
partial def derive (sorts : Array (UInt32 × String)) (skolems : Std.HashMap UInt32 Term)
    (vars : Vars) (f : Formula) (target : Expr) : ReconstructM Expr := do
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
    let rest ← derive sorts skolems vars body target
    withLocalDeclD `h hypothesis fun h => do
      mkLambdaFVars #[h] (mkApp rest (mkAppN h args))
  | .and =>
    -- The clause came from one conjunct; the others lead elsewhere.
    let parts ← f.subformulas.mapM (Reconstruct.formula sorts vars)
    for (g, i) in f.subformulas.zipIdx do
      -- `derive` only reads, so a failed attempt leaves nothing behind.
      let attempt ← try pure (some (← derive sorts skolems vars g target)) catch _ => pure none
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
    let branches ← f.subformulas.mapM (derive sorts skolems vars · target)
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
  | .«exists» =>
    -- `newcnf` skolemises while clausifying rather than beforehand, so an
    -- existential can still be here. Hilbert choice gives a witness, and the
    -- symbol vampire chose is bound to it so the clause rebuilds to the same
    -- term. Nothing else has to move: the body is derived under the witness.
    let some body := f.subformulas[0]? | throwError "quantifier without a body"
    let bound := f.boundVars.filterMap fun v =>
      (sorts.find? (·.1 == v)).map fun (_, s) => (v, s)
    let rec peel (bound : List (UInt32 × String)) (vars : Vars) :
        ReconstructM Expr := do
      match bound with
      | [] => derive sorts skolems vars body target
      | (v, sortName) :: rest => do
        let τ ← sortType sortName
        -- The witness is chosen from what the premise says, which is the
        -- remaining block: the clause states it with the skolem instead.
        let p ← withLocalDeclD (Name.mkSimple s!"X{v}") τ fun x => do
          mkLambdaFVars #[x] (← existsProp sorts rest (vars.insert v x) body)
        let (witness, choice) ← epsilon τ p
        registerSkolem skolems vars v witness
        let rest' ← peel rest (vars.insert v witness)
        -- `choice.mp` turns the block into its instance at the witness.
        withLocalDeclD `h (← existsProp sorts ((v, sortName) :: rest) vars body) fun h => do
          mkLambdaFVars #[h]
            (mkApp rest' (← mkAppM ``Iff.mp #[choice, h]))
    peel bound.toList vars
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


/--
Binds every skolem the premise's existentials introduce.

`newcnf` skolemises while clausifying, so the clause is stated in symbols that
nothing has bound yet -- and the clause has to be read before it can be
derived. Choosing the witnesses needs only the premise, so this runs first.
-/
private partial def registerSkolems (sorts : Array (UInt32 × String))
    (skolems : Std.HashMap UInt32 Term) (vars : Vars) (f : Formula) :
    ReconstructM PUnit := do
  let bound (f : Formula) : Array (UInt32 × String) :=
    f.boundVars.filterMap fun v => (sorts.find? (·.1 == v)).map fun (_, s) => (v, s)
  match ← connectiveOf f with
  | .«exists» =>
    let some body := f.subformulas[0]? | throwError "quantifier without a body"
    let rec go (rest : List (UInt32 × String)) (vars : Vars) : ReconstructM PUnit := do
      match rest with
      | [] => registerSkolems sorts skolems vars body
      | (v, sortName) :: rest => do
        let τ ← sortType sortName
        let p ← withLocalDeclD (Name.mkSimple s!"X{v}") τ fun x => do
          mkLambdaFVars #[x] (← existsProp sorts rest (vars.insert v x) body)
        let (witness, _) ← epsilon τ p
        registerSkolem skolems vars v witness
        go rest (vars.insert v witness)
    go (bound f).toList vars
  | .«forall» =>
    let some body := f.subformulas[0]? | throwError "quantifier without a body"
    withVars (bound f) vars fun vars _ => registerSkolems sorts skolems vars body
  | .and | .or | .not | .imp | .iff | .xor =>
    f.subformulas.forM (registerSkolems sorts skolems vars)
  | _ => return

/--
`clausify`: one clause of a formula's conjunctive normal form.

`CNF::clausify` distributes a formula already in negation normal form, which is
what `derive` follows. `newcnf` clausifies the original formula instead,
expanding an equivalence by cases, and that is not covered yet: such a step is
admitted rather than derived. Its skolems are bound either way, so the steps
built on it can still be stated.
-/
def clausify (step : Step) : ReconstructM Expr := do
  let #[(premiseProof, _)] := step.premises
    | throwError "clausify should have one premise, got {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "clausify without a premise"
  let some premise := parent.formula?
    | throwError "clausify should be given a formula"
  let sorts := parent.varSorts ++ step.unit.varSorts
  -- `newcnf` skolemises while clausifying, recording against the formula it
  -- clausified, which is this step's premise.
  let skolems := Std.HashMap.ofList (parent.skolems ++ step.unit.skolems).toList
  registerSkolems sorts skolems {} premise
  -- The clause binds the variables it kept; work under exactly those. A
  -- bounded telescope matters: `¬a` is `a → False`, which an unbounded one
  -- would take for another binder and leave `False` as the target.
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      vars := vars.insert v x
    match ← (try pure (some (← derive sorts skolems vars premise target))
             catch e => do
               trace[vampire] "admitting clausify for step {step.unit.number}: \
                 {e.toMessageData}"
               pure none) with
    | some implication => mkLambdaFVars xs (mkApp implication premiseProof)
    | none => unimplemented step

end Vampire.Reconstruct.Clausify
