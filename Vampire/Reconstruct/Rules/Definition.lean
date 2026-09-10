import Vampire.Reconstruct.Basic

/-!
Rules that introduce a name and say what it means. Nothing further constrains
the name, so each is an abbreviation: binding it makes the step's own
conclusion hold by reflexivity, and leaves later uses meaning what vampire
meant by them.
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
      if ← resolvesSymbol symbol.name then return none
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
  let connective ← match f.connective with
    | .ok c => pure c
    | .error e => throwError "{e}"
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
Proves a step that holds by reflexivity, which is what a definition amounts to
once its name is bound: `∀ xs, a = a` or `∀ xs, a ↔ a`, up to unfolding the
name that was just introduced.
-/
private def byReflexivity (conclusion : Expr) : ReconstructM Expr :=
  forallTelescopeReducing conclusion fun xs body => do
    let proof ←
      if let some (_, lhs, _) := body.eq? then
        mkEqRefl lhs
      else if let some (lhs, _) := body.iff? then
        mkAppOptM ``Iff.refl #[some lhs]
      else
        throwError "expected an equation or an equivalence, got{indentExpr body}"
    mkLambdaFVars xs proof

/-- `function_definition`: `sF(X₁, …, Xₙ) = t` for a fresh `sF`. -/
def functionDefinition (step : Step) : ReconstructM Expr := do
  registerFunctionDefinition step.unit
  byReflexivity (← step.conclusion)

/-- `avatar_definition`: `name ↔ component` for a fresh propositional `name`. -/
def avatarDefinition (step : Step) : ReconstructM Expr := do
  registerAvatarDefinition step.unit
  byReflexivity (← step.conclusion)

end Vampire.Reconstruct.Definition
