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
private def definitionLiteral (u : Vampire.Unit) : ReconstructM Literal := do
  if let some c := u.clause? then
    let some l := c.literals[0]?
      | throwError "definition step {u.number} states no literal"
    return l
  if let some f := u.formula? then
    if let some l := f.literal? then
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
