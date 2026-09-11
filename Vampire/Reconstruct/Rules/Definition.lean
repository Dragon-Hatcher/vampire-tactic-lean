import Vampire.Reconstruct.Basic

/-!
Rules that introduce a name and say what it means. Nothing further constrains
the name, so each is an abbreviation: binding it makes the step's own
conclusion hold, and leaves later uses meaning what vampire meant by them.

Splitting makes a name's definition a premise of every step using it, but
naming does not -- it replaces a subformula in place and states the definition
as a separate root. So these are bound in one pass over the proof, before any
step is replayed.
-/

namespace Vampire.Reconstruct.Definition

open Lean Meta

/-- The single literal a definition step states. -/
private partial def definitionLiteral (u : Vampire.Unit) : ReconstructM Literal := do
  if let some c := u.clause? then
    let some l := c.literals[0]?
      | throwError "definition step {u.number} states no literal"
    return l
  if let some f := u.formula? then
    -- A definition can be stated with its variables quantified.
    let rec descend (f : Formula) : ReconstructM (Option Literal) := do
      if let some l := f.literal? then
        return some l
      if (← connectiveOf f) matches .«forall» then
        let some body := f.subformulas[0]? | return none
        return ← descend body
      return none
    if let some l ← descend f then
      return l
  throwError "definition step {u.number} does not state an equation"

/--
Registers what a `function_definition` step introduces.

Vampire mints a fresh symbol and asserts `sF(X₁, …, Xₙ) = t`, taking the
variables of `t` as arguments. Nothing constrains `sF` beyond that equation, so
it is an abbreviation: binding it to `fun X₁ … Xₙ => t` makes the step's own
conclusion hold by reflexivity, and leaves every later use of `sF` meaning what
vampire meant by it. The equation can be stored either way round, so whichever
side is the fresh symbol is the one being defined.
-/
private def registerFunctionDefinition (u : Vampire.Unit) : ReconstructM PUnit := do
  let l ← definitionLiteral u
  unless l.isEquality do
    throwError "a function_definition step should state an equality, got {l}"
  let #[lhs, rhs] := l.args
    | throwError "equality with {l.args.size} arguments"
  withVars u.varSorts {} fun vars _ => do
    let fresh? (t : Term) : ReconstructM (Option (String × Array Term)) := do
      if t.isVar then return none
      let some symbol := t.symbol? | return none
      if ← isGoalSymbol symbol.name then return none
      return some (symbol.name, t.args)
    let (name, args, body) ←
      match ← fresh? lhs, ← fresh? rhs with
      | some (name, args), _ => pure (name, args, rhs)
      | _, some (name, args) => pure (name, args, lhs)
      | none, none =>
        throwError "a function_definition step should introduce a symbol, \
          but both sides of {l} are already known"
    let locals ← args.mapM fun arg => do
      unless arg.isVar do
        throwError "function_definition applied {name} to {arg}, not a variable"
      let some x := vars[arg.var]?
        | throwError "variable X{arg.var} has no recorded sort"
      return x
    let definition ← mkLambdaFVars locals (← term vars body)
    modify fun s => { s with introduced := s.introduced.insert name definition }

/--
Registers what an `avatar_definition` step introduces.

Splitting gives a component clause a propositional name and asserts
`name ↔ component`. As with a function definition the name is an abbreviation,
so binding it to the component makes the step hold by reflexivity. Splitter
keeps the definition under the positive name and writes the negation of a
component as `~name`.
-/
private def registerAvatarDefinition (u : Vampire.Unit) : ReconstructM PUnit := do
  let some f := u.formula?
    | throwError "an avatar_definition step should state a formula"
  let connective ← connectiveOf f
  unless connective matches .iff do
    throwError "an avatar_definition step should state an equivalence, \
      got {repr connective}"
  let #[lhs, rhs] := f.subformulas
    | throwError "equivalence with {f.subformulas.size} sides"
  let some name := lhs.name?
    | throwError "the left side of an avatar_definition should be a name"
  let body ← withVars u.varSorts {} fun vars _ => formula u.varSorts vars rhs
  modify fun s => { s with named := s.named.insert name body }

/--
Registers what a `predicate_definition` step introduces, and says which of the
two shapes it took.

Naming replaces a subformula by a fresh predicate applied to the subformula's
free variables. It states the definition either as `∀ vs, sP(vs) ↔ f`, or, when
one direction suffices, as `∀ vs, ¬sP(vs) ∨ f` with `f`'s disjuncts spliced in
alongside. Either way the name abbreviates `f`.
-/
private def registerPredicateDefinition (u : Vampire.Unit) : ReconstructM PUnit := do
  let some f := u.formula?
    | throwError "a predicate_definition step should state a formula"
  Reconstruct.withVars u.varSorts {} fun vars _ => do
    -- The definition is quantified over the free variables of what it names.
    let mut f := f
    repeat
      unless (← connectiveOf f) matches .«forall» do break
      let some body := f.subformulas[0]? | throwError "quantifier without a body"
      f := body
    let (name, body) ←
      match ← connectiveOf f with
      | .iff =>
        let #[lhs, rhs] := f.subformulas
          | throwError "equivalence with {f.subformulas.size} sides"
        pure (lhs, ← Reconstruct.formula u.varSorts vars rhs)
      | .or =>
        let some negated := f.subformulas[0]?
          | throwError "a naming definition should start with its own name"
        unless (← connectiveOf negated) matches .not do
          throwError "a naming definition should start with its negated name"
        let some name := negated.subformulas[0]?
          | throwError "negation without a subformula"
        let rest ← (f.subformulas.extract 1 f.subformulas.size).mapM
          (Reconstruct.formula u.varSorts vars)
        pure (name, Reconstruct.junction ``Or ``False rest)
      | c => throwError "unexpected naming definition shape {repr c}"
    let some l := name.literal?
      | throwError "a naming definition's name should be an atom"
    let some symbol := l.symbol?
      | throwError "the name has an unknown predicate {l.predicate}"
    if ← isGoalSymbol symbol.name then
      throwError "a predicate_definition step should introduce a predicate, \
        but {symbol.name} comes from the goal"
    let args ← l.args.mapM fun arg => do
      unless arg.isVar do
        throwError "the name {symbol.name} was applied to {arg}, not a variable"
      let some x := vars[arg.var]?
        | throwError "variable X{arg.var} has no recorded sort"
      return x
    let definition ← mkLambdaFVars args body
    modify fun s => { s with introduced := s.introduced.insert symbol.name definition }

/--
Proves a definition, which once its name is bound says only that something is
itself: `a = a`, `a ↔ a`, or, for a naming definition stated in one direction,
`¬a ∨ a`.
-/
def byDefinition (conclusion : Expr) : ReconstructM Expr :=
  forallTelescopeReducing conclusion fun xs body => do
    let proof ←
      if let some (_, lhs, _) := body.eq? then
        mkEqRefl lhs
      else if let some (lhs, _) := body.iff? then
        mkAppOptM ``Iff.refl #[some lhs]
      else if body.isAppOfArity ``Or 2 then
        let lhs := body.appFn!.appArg!
        let rhs := body.appArg!
        unless lhs.isAppOfArity ``Not 1 do
          throwError "expected a negated name, got{indentExpr lhs}"
        unless ← isDefEq lhs.appArg! rhs do
          throwError "a definition should name its own body, but got\
            {indentExpr lhs.appArg!}\nagainst{indentExpr rhs}"
        mkAppM ``Or.symm #[← mkAppOptM ``Classical.em #[some rhs]]
      else
        throwError "expected an equation, an equivalence or a disjunction, \
          got{indentExpr body}"
    mkLambdaFVars xs proof

/--
The equations `definition_unfolding` unfolds with, by the symbol each defines.

`FunctionDefinition::applyDefinitions` takes the definitions it used as
premises of the step, one per use, and each is a unit equation whose left-hand
side applies the defined symbol to distinct variables.
-/
private def definitions (step : Step) :
    ReconstructM (Std.HashMap String
      (Vampire.Unit × Array UInt32 × Term × Expr × Bool)) := do
  let mut out := {}
  for (parent, (proof, _)) in (step.unit.parents.zip step.premises).extract 1 do
    let some clause := parent.clause?
      | throwError "a definition premise of definition_unfolding is not a clause"
    let some l := clause.literals[0]?
      | throwError "a definition premise of definition_unfolding states no literal"
    unless clause.literals.size == 1 && l.isEquality && l.polarity do
      throwError "a definition premise of definition_unfolding is not an equation"
    let #[left, right] := l.args
      | throwError "equality with {l.args.size} arguments"
    -- Either side of an equation can be the symbol it defines, and the
    -- equation alone does not say which; the step records it.
    let some use := step.unit.premiseUses.find? (·.premise == parent.number)
      | throwError "nothing says which side of the definition in step \
        {parent.number} is the symbol it defines"
    let some side := use.term
      | throwError "nothing says which side of the definition in step \
        {parent.number} is the symbol it defines"
    let (defined, body, flipped) ←
      if side == left then pure (left, right, false)
      else if side == right then pure (right, left, true)
      else throwError "what a definition defines is neither side of it"
    let some symbol := defined.symbol?
      | throwError "what a definition defines is not an applied symbol"
    let args ← defined.args.mapM fun arg => do
      unless arg.isVar do
        throwError "the definition of {symbol.name} applies it to {arg}, \
          not a variable"
      return arg.var
    out := out.insert symbol.name (parent, args, body, proof, flipped)
  return out

/--
`t` at the unfolded definitions, with a proof that it equals what unfolding
makes of it.

The definition's right-hand side is not unfolded again -- the definitions were
unfolded in dependency order before any clause was -- but the arguments the
symbol was applied to are.
-/
private partial def unfold
    (defs : Std.HashMap String
      (Vampire.Unit × Array UInt32 × Term × Expr × Bool))
    (vars : Vars) (t : Term) : ReconstructM (Expr × Expr) := do
  if t.isVar then
    let e ← term vars t
    return (e, ← mkEqRefl e)
  let some symbol := t.symbol?
    | throwError "term has unknown functor {t.functor}"
  let head ← symbolExpr symbol.name
  let mut args := #[]
  let mut congruence ← mkEqRefl head
  for arg in t.args do
    let (unfolded, proof) ← unfold defs vars arg
    args := args.push unfolded
    congruence ← mkCongr congruence proof
  match defs[symbol.name]? with
  | none => return (mkAppN head args, congruence)
  | some (definition, parameters, body, proof, flipped) =>
    let bound := Std.HashMap.ofList (parameters.zip args).toList
    let mut instances := #[]
    for (v, sortName) in definition.varSorts do
      match bound[v]? with
      | some e => instances := instances.push e
      | none => instances := instances.push (← someElement (← sortType sortName))
    let equation ← do
      let instantiated := mkAppN proof instances
      -- The symbol a definition defines can be either side of it.
      if flipped then mkAppM ``Eq.symm #[instantiated] else pure instantiated
    let some (_, defined, _) := (← instantiateMVars (← inferType equation)).eq?
      | throwError "a definition premise does not state an equation"
    -- The definition speaks of the symbol at its own arguments, so it applies
    -- once those have been unfolded.
    unless ← isDefEq defined (mkAppN head args) do
      throwError "the definition of {symbol.name} states{indentExpr defined}\n\
        which is not{indentExpr (mkAppN head args)}"
    let mut bodyVars : Vars := {}
    for (v, e) in parameters.zip args do
      bodyVars := bodyVars.insert v e
    return (← term bodyVars body, ← mkEqTrans congruence equation)

/--
`definition_unfolding`: the premise with every use of a defined symbol replaced
by what defines it.

`FunctionDefinition::applyDefinitions` walks the clause replacing each
application of a defined symbol by that definition's right-hand side at the
application's arguments. Its arguments are themselves unfolded, but the
right-hand side is not looked at again: the definitions were unfolded in
dependency order before any clause was.
-/
def definitionUnfolding (step : Step) : ReconstructM Expr := do
  let some (clauseProof, _) := step.premises[0]?
    | throwError "definition_unfolding without a premise"
  let some parent := step.unit.parents[0]?
    | throwError "definition_unfolding without a premise"
  let some clause := parent.clause?
    | throwError "definition_unfolding should be given a clause"
  let defs ← definitions step
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut kept : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      kept := kept.insert v x
    let vars ← coverVars parent kept
    let body ← carryWith (← instantiateForall (← conclusionOf parent)
        (← parent.varSorts.mapM fun (v, sortName) => do
          match vars[v]? with
          | some x => pure x
          | none => someElement (← sortType sortName))) target
      (mkAppN clauseProof (← parent.varSorts.mapM fun (v, sortName) => do
        match vars[v]? with
        | some x => pure x
        | none => someElement (← sortType sortName)))
      (fun i h => do
        let some l := clause.literals[i]?
          | throwError "the premise has no literal {i}"
        let mut args := #[]
        let mut congruence ←
          if l.isEquality then
            let some sortName := l.sort?
              | throwError "equality literal without a recorded argument sort"
            mkEqRefl (← mkAppOptM ``Eq #[some (← sortType sortName)])
          else
            let some symbol := l.symbol?
              | throwError "literal has unknown predicate {l.predicate}"
            mkEqRefl (← symbolExpr symbol.name)
        for arg in l.args do
          let (unfolded, proof) ← unfold defs vars arg
          args := args.push unfolded
          congruence ← mkCongr congruence proof
        let atom ←
          if ← literalPolarity l then pure congruence
          else mkCongrArg (mkConst ``Not) congruence
        mkAppM ``Eq.mp #[atom, h])
    mkLambdaFVars xs body

/--
A proof of what is kept of a definition, from the definition.

Under the binders both sides share, one direction of an equivalence is what the
equivalence says either way round.
-/
private partial def weaken (premise stated conclusion : Expr) :
    ReconstructM Expr := do
  if let (.forallE _ d body _, .forallE n d' body' _) := (← whnf stated, conclusion) then
    unless (← isProp d) && !body.hasLooseBVars do
      unless ← isDefEq d d' do
        throwError "the definition binds{indentExpr d}\nwhere what is kept of \
          it binds{indentExpr d'}"
      return ← withLocalDeclD n d' fun x => do
        let inner ← weaken (mkApp premise x) (body.instantiate1 x) (body'.instantiate1 x)
        mkLambdaFVars #[x] inner
  let some (antecedent, consequent) := conclusion.arrow?
    | throwError "what is kept of a definition is not an implication:\
      {indentExpr conclusion}"
  if let some (left, right) := stated.iff? then
    if (← isDefEq left antecedent) && (← isDefEq right consequent) then
      return ← mkAppM ``Iff.mp #[premise]
    if (← isDefEq right antecedent) && (← isDefEq left consequent) then
      return ← mkAppM ``Iff.mpr #[premise]
    throwError "neither direction of{indentExpr stated}\nis{indentExpr conclusion}"
  if ← isDefEq stated conclusion then
    return premise
  throwError "cannot keep{indentExpr conclusion}\nof{indentExpr stated}"

/--
`unused_predicate_definition_removal`: one direction of a definition, the only
one still needed.

`PredicateDefinition` keeps a definition whose predicate is only ever used one
way round as an implication rather than an equivalence.
-/
def unusedDefinitionRemoval (step : Step) : ReconstructM Expr := do
  let #[(premiseProof, premiseStated)] := step.premises
    | throwError "unused predicate definition removal should have one premise, \
      got {step.premises.size}"
  weaken premiseProof (← instantiateMVars premiseStated) (← step.conclusion)

/-- Whether a rule introduces a name by defining it. -/
def introducesName : InferenceRule → Bool
  | .functionDefinition | .avatarDefinition | .predicateDefinition => true
  | _ => false

/--
Binds what a definition step introduces. What is named may itself mention a
name introduced elsewhere, so this can fail and be worth retrying once more
names are known.
-/
def register (u : Vampire.Unit) : ReconstructM PUnit := do
  match u.rule? with
  | some .functionDefinition => registerFunctionDefinition u
  | some .avatarDefinition => registerAvatarDefinition u
  | some .predicateDefinition => registerPredicateDefinition u
  | _ => return

/-- Any of the definition rules. -/
def definitionStep (step : Step) : ReconstructM Expr := do
  -- Bound already by the pass over the proof, unless what it names mentions a
  -- symbol only bound while replaying, as a clausified skolem is.
  register step.unit
  byDefinition (← step.conclusion)

end Vampire.Reconstruct.Definition
