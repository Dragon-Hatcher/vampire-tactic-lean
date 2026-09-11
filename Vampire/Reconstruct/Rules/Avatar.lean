import Vampire.Reconstruct.Basic

/-!
Splitting.

`Splitter` breaks a clause into components with no variables in common, names
each component with a propositional variable, and hands the disjunction of the
names to a SAT solver. Work then goes on under an assignment to those names: a
clause derived while the name `n` is assumed carries `n` among its assumptions,
and means no more than that its literals follow from what is assumed.

A name means what its definition says it does, and `avatar_definition` binds it
to that, so a name and the component it stands for are the same thing here.
That is what makes the rules below go through: what a step assumes it can also
use.
-/

namespace Vampire.Reconstruct.Avatar

open Lean Meta

/--
`avatar_component`: the component a name stands for, under that name.

The clause is the component itself, and the name assumed is the definition of
the component, so there is nothing to do but read one as the other.
-/
def component (step : Step) : ReconstructM Expr := do
  let #[(name, assumption)] := step.assumed
    | throwError "an avatar component clause should hold under one name, got \
      {step.assumed.size}"
  let #[(_, _)] := step.premises
    | throwError "an avatar component clause should have one premise, got \
      {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "an avatar component clause without its definition"
  let core ← step.conclusion
  if ← isDefEq (← inferType assumption) core then
    return assumption
  -- The definition states the component as a formula, which `Formula::fromClause`
  -- builds by pushing the clause's literals onto a list, so the two disagree
  -- over the order of the literals and over which variable is bound where.
  -- Both speak of vampire's variables, though, so the binders can be paired by
  -- the variable each stands for, and the literals found by what they say.
  let some definition := parent.formula?
    | throwError "an avatar component clause's definition states no formula"
  let some component := (← definition.subformulas.filterM fun g => do
      return !((← connectiveOf g) matches .name))[0]?
    | throwError "an avatar definition states no component"
  let bound :=
    if (← connectiveOf component) matches .«forall» then component.boundVars
    else #[]
  forallBoundedTelescope core (some step.unit.varSorts.size) fun xs target => do
    let mut vars : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      vars := vars.insert v x
    let args ← bound.mapM fun v => do
      let some x := vars[v]?
        | throwError "the definition of `{name}` binds X{v}, which the \
          component does not mention"
      return x
    let instance_ := mkAppN assumption args
    let stated ← instantiateForall (← inferType assumption) args
    let place := placeLiteral target
    mkLambdaFVars xs (← carryAll stated target instance_)

/--
`avatar_contradiction_clause`: the names a refuted clause held under cannot all
be assumed at once.

The premise derived the empty clause from them, so at least one of them fails,
which is what the disjunction of their negations says.
-/
def contradictionClause (step : Step) : ReconstructM Expr := do
  let #[(premiseProof, _)] := step.premises
    | throwError "an avatar contradiction clause should have one premise, got \
      {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "an avatar contradiction clause without a premise"
  let target ← step.conclusion
  let parts := junctionParts ``Or target
  -- Were every one of those names to fail, nothing would follow from the
  -- premise; so suppose the disjunction fails and read each name off that.
  let contradiction ← withLocalDeclD `h (mkApp (mkConst ``Not) target) fun h => do
    let mut proof := premiseProof
    for name in parent.splits do
      let (flipped, says) ← flipName name
      let mut found := none
      for (part, i) in parts.zipIdx do
        if ← isDefEq part flipped then
          found := some i
          break
      let some i := found
        | throwError "the negation of `{name}`{indentExpr flipped}\nis not \
          among{indentExpr target}"
      let refuted ← withLocalDeclD `d flipped fun d => do
        mkLambdaFVars #[d] (mkApp h (← injectPart ``Or target i d))
      let body ← namedFormula name
      proof := mkApp proof
        (← mkAppM ``Iff.mp
          #[← mkAppOptM ``Classical.not_not #[some body],
            ← mkAppM ``Iff.mp #[← mkAppM ``not_congr #[says], refuted]])
    mkLambdaFVars #[h] proof
  mkAppM ``Iff.mp
    #[← mkAppOptM ``Classical.not_not #[some target], contradiction]

/-- What a propositional clause says: the disjunction of what its names say. -/
private def satClauseStates (c : SatClause) : ReconstructM Expr := do
  return junction ``Or ``False (← c.literals.mapM namedFormula)

/--
The clauses a propositional refutation rests on, each after the ones it was
derived from.

The solver reuses a clause in as many derivations as it likes, so the clauses
form a graph rather than a tree; walking it once and proving each clause once
is what keeps the refutation the size the solver made it.
-/
private partial def satOrder (c : SatClause) :
    StateM (Std.HashSet UInt32 × Array SatClause) PUnit := do
  if (← get).1.contains c.index then return
  modify fun (seen, order) => (seen.insert c.index, order)
  for premise in c.premises do
    satOrder premise
  modify fun (seen, order) => (seen, order.push c)

/--
`False`, by unit propagation through the clauses a derived clause was derived
from: each of them has all but one of its literals already false, and the last
of them has none left.
-/
private partial def propagate (proved : Std.HashMap UInt32 Expr)
    (known : Std.HashMap String Expr) (premises : Array SatClause) (i : Nat) :
    ReconstructM Expr := do
  let some premise := premises[i]?
    | throwError "the clauses a propositional step was derived from left \
      nothing to contradict"
  let names := premise.literals
  let some proof := proved[premise.index]?
    | throwError "a propositional clause used before it was proved"
  let stated ← satClauseStates premise
  elimParts stated 0 (fun j h => do
    let some name := names[j]? | throwError "missing literal"
    match known[flippedName name]? with
    | some negated =>
      -- The literal is already false, so this case cannot arise. Which of the
      -- two proofs is the negation of the other is settled by comparing them:
      -- a name and its negation are two names, and either may carry the
      -- negation.
      let stated ← instantiateMVars (← inferType h)
      let refuting ← instantiateMVars (← inferType negated)
      let (positive, negation) ←
        if ← isDefEq refuting (mkApp (mkConst ``Not) stated) then
          pure (h, negated)
        else if ← isDefEq stated (mkApp (mkConst ``Not) refuting) then
          pure (negated, h)
        else
          throwError "neither of{indentExpr stated}\nand{indentExpr refuting}\n\
            is the negation of the other"
      mkAppOptM ``absurd
        #[some (← inferType positive), some (mkConst ``False), some positive,
          some negation]
    | none => propagate proved (known.insert name h) premises (i + 1)) proof

/--
A proof of what a propositional clause says, from proofs of the clauses it was
derived from.

A clause is either a first-order clause's propositional shadow, and then it says
what that clause says, up to the order of the names; or the solver derived it,
and then it follows from the clauses it was derived from by unit propagation:
supposing its own literals false, each clause in turn has all but one of its
literals false, so that one holds -- and the last has none left.
-/
private def satClause (proved : Std.HashMap UInt32 Expr)
    (origins : Std.HashMap UInt32 (Expr × Expr)) (c : SatClause) :
    ReconstructM Expr := do
  let target ← satClauseStates c
  if let some origin := c.origin? then
    let some (proof, stated) := origins[origin.number]?
      | throwError "the propositional shadow of step {origin.number}, which is \
        not among the refutation's premises"
    let place := placeLiteral target
    return ← carryAll stated target proof
  -- Suppose the clause fails; then each of its literals is false, which is to
  -- say that each of their negations holds.
  let contradiction ← withLocalDeclD `n (mkApp (mkConst ``Not) target) fun n => do
    let mut known : Std.HashMap String Expr := {}
    for (name, i) in c.literals.zipIdx do
      let (_, says) ← flipName name
      let body ← namedFormula name
      let refuted ← withLocalDeclD `d body fun d => do
        mkLambdaFVars #[d] (mkApp n (← injectPart ``Or target i d))
      known := known.insert (flippedName name)
        (← mkAppM ``Iff.mpr #[says, refuted])
    mkLambdaFVars #[n] (← propagate proved known c.premises 0)
  mkAppM ``Iff.mp #[← mkAppOptM ``Classical.not_not #[some target], contradiction]

/--
The refutation, with every clause it rests on bound to what proves it.

Bound rather than written out: a clause a dozen derivations use would otherwise
be proved into each of them, and every binder of the proof being built would
have to be put through the whole of what it already holds.
-/
private partial def satBound (origins : Std.HashMap UInt32 (Expr × Expr))
    (order : Array SatClause) (i : Nat) (proved : Std.HashMap UInt32 Expr)
    (bound : Array Expr) : ReconstructM Expr := do
  if h : i < order.size then
    let c := order[i]
    let value ← satClause proved origins c
    withLetDecl (Name.mkSimple s!"c{i}") (← satClauseStates c) value fun s =>
      satBound origins order (i + 1) (proved.insert c.index s) (bound.push s)
  else
    let some root := order.back?
      | throwError "a propositional refutation without a clause"
    let some proof := proved[root.index]?
      | throwError "the refuting clause was not proved"
    mkLetFVars bound proof (usedLetOnly := false)

/--
`avatar_split_clause`: a clause holds only if one of its components does.

The components share no variables, so if each of them failed there would be a
way of making it fail -- and instantiating the clause at all of those at once
leaves every one of its literals refuted. That is what the disjunction of the
names says, together with the names the clause itself held under, any of which
may be what fails instead.

A component is named once and reused for every variant of it, so the clause
naming it need not speak of the same variables; the renaming that relates the
two comes recorded against the definition.
-/
def splitClause (step : Step) : ReconstructM Expr := do
  let some (clauseProof, clauseStated) := step.premises[0]?
    | throwError "an avatar split clause without the clause it splits"
  let some parent := step.unit.parents[0]?
    | throwError "an avatar split clause without the clause it splits"
  let some stated := step.unit.formula?
    | throwError "an avatar split clause states no formula"
  -- The disjuncts are names, which the formula gives as they were written, so
  -- each can be told from the definition it belongs to.
  let disjuncts ←
    (if (← connectiveOf stated) matches .or then stated.subformulas else #[stated]).mapM
      fun g => do
        let some name := g.name?
          | throwError "an avatar split clause states {g}, which is not a name"
        return name
  let target ← step.conclusion
  -- Which definition says what each component name means, and how it was
  -- renamed to name this clause's literals.
  -- Two components of one clause can be variants of each other, and then they
  -- are the same component and share its name: the clause names it twice, and
  -- each occurrence has its own renaming recorded.
  let mut definitions : Std.HashMap String (Vampire.Unit × Array PremiseUse) := {}
  for parent in step.unit.parents.extract 1 do
    let some definition := parent.formula?
      | continue
    let some name := (← definition.subformulas.findSomeM? fun g => do
        return if (← connectiveOf g) matches .name then g.name? else none)
      | continue
    let uses := step.unit.premiseUses.filter (·.premise == parent.number)
    if uses.isEmpty then
      -- The definitions of the names the clause holds under are premises too,
      -- and it is the components that have a renaming recorded against them.
      continue
    definitions := definitions.insert name (parent, uses)
  withLocalDeclD `h (mkApp (mkConst ``Not) target) fun h => do
    let refuted (i : Nat) (of : Expr) : ReconstructM Expr :=
      withLocalDeclD `d of fun d => do
        mkLambdaFVars #[d] (mkApp h (← injectPart ``Or target i d))
    -- What the clause held under: the disjunct for each of those names is its
    -- negation, so failing means the name holds and the clause can be used.
    let mut proof := clauseProof
    let mut stated ← instantiateMVars clauseStated
    for name in parent.splits do
      let (flipped, says) ← flipName name
      let some i := disjuncts.findIdx? (· == flippedName name)
        | throwError "the negation of `{name}` is not among{indentExpr target}"
      let body ← namedFormula name
      let holds ← mkAppM ``Iff.mp
        #[← mkAppOptM ``Classical.not_not #[some body],
          ← mkAppM ``Iff.mp
            #[← mkAppM ``not_congr #[says], ← refuted i flipped]]
      proof := mkApp proof holds
      stated ← instantiateForall stated #[holds]
    -- Each component's name failing gives a way of making that component
    -- fail, and with it the negation of each of its literals.
    let mut arguments : Std.HashMap UInt32 Expr := {}
    -- How many times each name has been met, so that a component named twice
    -- takes its two renamings in turn.
    let mut met : Std.HashMap String Nat := {}
    let mut negations : Array (Expr × Expr) := #[]
    for (name, i) in disjuncts.zipIdx do
      if (parent.splits.contains (flippedName name)) then
        continue
      let key := if name.startsWith "~" then (name.drop 1).toString else name
      let some (definition, uses) := definitions[key]?
        | throwError "nothing says what `{name}` means"
      let seen := met.getD key 0
      met := met.insert key (seen + 1)
      let some use := uses[seen]?
        | throwError "`{name}` names more components of this clause than it has renamings recorded"
      let mut against ← refuted i (← namedFormula name)
      let some body := definition.formula?
        | throwError "the definition of `{name}` states no formula"
      let some quantified := (← body.subformulas.findSomeM? fun g => do
          return if (← connectiveOf g) matches .name then none else some g)
        | throwError "the definition of `{name}` states no component"
      let binders :=
        if (← connectiveOf quantified) matches .«forall» then quantified.boundVars
        else #[]
      let renamed := Std.HashMap.ofList use.bindings.toList
      let mut componentVars : Vars := {}
      for v in binders do
        let (witness, rest) ← witnessAgainst against
        against := rest
        let some image := renamed[v]?
          | throwError "the definition of `{name}` binds X{v}, which nothing \
            relates to the clause"
        unless image.isVar do
          throwError "`{name}` was renamed to a term, not a variable"
        componentVars := componentVars.insert v witness
        arguments := arguments.insert image.var witness
      -- `against` now refutes the component itself, so each of its literals is
      -- refuted with it. Which literals those are is read off the component as
      -- vampire states it: a literal naming a subformula stands for a whole
      -- formula, so the disjuncts of what it rebuilds to are not its literals.
      let parts ←
        if name.startsWith "~" then
          -- A ground component of one negative literal is named positively,
          -- the definition stating the literal's complement, so the component
          -- is what the negated name says rather than what the definition does.
          pure #[← namedFormula name]
        else
          let component ←
            if (← connectiveOf quantified) matches .«forall» then
              let some inner := quantified.subformulas[0]?
                | throwError "a quantifier without a body"
              pure inner
            else pure quantified
          let literals :=
            if (← connectiveOf component) matches .or then component.subformulas
            else #[component]
          literals.mapM (Reconstruct.formula definition.varSorts componentVars)
      let disjunction := junction ``Or ``False parts
      for (part, j) in parts.zipIdx do
        let negation ← withLocalDeclD `l part fun l => do
          mkLambdaFVars #[l] (mkApp against (← injectPart ``Or disjunction j l))
        negations := negations.push (part, negation)
    -- The clause at all of those witnesses at once has every literal refuted.
    let mut arguments' := #[]
    for (v, sortName) in parent.varSorts do
      match arguments[v]? with
      | some witness => arguments' := arguments'.push witness
      | none => arguments' := arguments'.push (← someElement (← sortType sortName))
    let instance_ := mkAppN proof arguments'
    let instantiated ← instantiateForall stated arguments'
    let contradiction ← elimParts instantiated 0 (fun _ hl => do
      -- A named component and the clause's own literal over it can meet with a
      -- double negation between them: which of a name and its negation carries
      -- one is up to which of the two splitting introduced, and polarity
      -- flipping can add another.
      for candidate in #[hl] ++ (← doubleNegations hl) do
        let literal ← instantiateMVars (← inferType candidate)
        for (part, negation) in negations do
          if ← isDefEq part literal then
            return ← mkAppOptM ``absurd
              #[some literal, some (mkConst ``False), some candidate,
                some negation]
      throwError "nothing refutes{indentExpr (← instantiateMVars (← inferType hl))}\
        \nof the clause {parent}, whose components are {disjuncts}") instance_
    mkAppM ``Iff.mp
      #[← mkAppOptM ``Classical.not_not #[some target],
        ← mkLambdaFVars #[h] contradiction]

/--
`avatar_refutation`: the propositional problem the names were handed to has no
model, so what they stand for cannot all hold.
-/
def refutation (step : Step) : ReconstructM Expr := do
  let some root := step.unit.satPremise?
    | throwError "an avatar refutation without the propositional clause it \
      stands on"
  let mut origins : Std.HashMap UInt32 (Expr × Expr) := {}
  for (parent, premise) in step.unit.parents.zip step.premises do
    origins := origins.insert parent.number premise
  let (_, order) := ((satOrder root).run ({}, #[])).2
  satBound origins order 0 {} #[]

end Vampire.Reconstruct.Avatar
