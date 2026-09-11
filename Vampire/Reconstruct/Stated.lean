import Vampire.Reconstruct.Monad

namespace Vampire.Reconstruct

open Lean Meta

/-- A formula's top-level connective. -/
def connectiveOf (f : Formula) : ReconstructM Connective :=
  match f.connective with
  | .ok c => return c
  | .error e => throwError "{e}"

/-- The local standing for each of a step's variables. -/
abbrev Vars := Std.HashMap UInt32 Expr

/-- Rebuilds a vampire term as a Lean expression. -/
partial def term (vars : Vars) (t : Term) : ReconstructM Expr := do
  if t.isVar then
    let some x := vars[t.var]?
      | throwError "variable X{t.var} has no recorded sort"
    return x
  let some symbol := t.symbol?
    | throwError "term has unknown functor {t.functor}"
  shared (mkAppN (← symbolExpr symbol.name) (← t.args.mapM (term vars)))

/--
Whether a literal occurs positively, as the step it belongs to means it.

Polarity flipping leaves a flipped predicate meaning the opposite of what it
did, so a literal over one occurs the other way round in the steps after it.
-/
def literalPolarity (l : Literal) : ReconstructM Bool := do
  if (← read).flipping then
    if let some symbol := l.symbol? then
      if symbol.flipped then
        return !l.polarity
  return l.polarity

/-- Rebuilds a vampire literal as a Lean proposition. -/
def literal (vars : Vars) (l : Literal) : ReconstructM Expr := do
  let args ← l.args.mapM (term vars)
  let polarity ← literalPolarity l
  let atom ←
    if l.isEquality then
      let some sortName := l.sort?
        | throwError "equality literal without a recorded argument sort"
      let #[lhs, rhs] := args
        | throwError "equality literal with {args.size} arguments"
      mkAppOptM ``Eq #[some (← sortType sortName), some lhs, some rhs]
    else
      let some symbol := l.symbol?
        | throwError "literal has unknown predicate {l.predicate}"
      pure (mkAppN (← symbolExpr symbol.name) args)
  shared (if polarity then atom else mkApp (mkConst ``Not) atom)

/--
Folds an n-ary junction, right-associated as Lean writes them. Vampire's
conjunctions and disjunctions take any number of arguments, and an empty one is
the connective's unit.
-/
def junction (fn unit : Name) (args : Array Expr) : Expr :=
  if args.isEmpty then
    mkConst unit
  else
    args.pop.foldr (fun a acc => mkApp2 (mkConst fn) a acc) args.back!

/--
A clause with each of its literals the one term of its shape.

Instantiating a clause at a substitution builds its literals afresh, so they
are no longer the terms the conclusion was built from, and every literal
carried across the inference is then compared by its shape rather than by its
address.
-/
partial def sharedClause (e : Expr) : ReconstructM Expr := do
  if e.isAppOfArity ``Or 2 then
    let left ← sharedClause e.appFn!.appArg!
    let right ← sharedClause e.appArg!
    return ← shared (mkApp2 (mkConst ``Or) left right)
  shared e

/-- Rebuilds a clause as the disjunction of its literals. -/
def clause (vars : Vars) (c : Clause) : ReconstructM Expr := do
  sharedClause (junction ``Or ``False (← c.literals.mapM (literal vars)))

/-- Introduces a local for each variable in `sorts`, in order. -/
def withVars (sorts : Array (UInt32 × String)) (vars : Vars)
    (k : Vars → Array Expr → ReconstructM α) : ReconstructM α := do
  let rec go (i : Nat) (vars : Vars) (locals : Array Expr) : ReconstructM α := do
    if h : i < sorts.size then
      let (v, sortName) := sorts[i]
      withLocalDeclD (Name.mkSimple s!"X{v}") (← sortType sortName) fun x =>
        go (i + 1) (vars.insert v x) (locals.push x)
    else
      k vars locals
  go 0 vars #[]

/-- Rebuilds a formula, binding quantified variables as it descends. -/
partial def formula (sorts : Array (UInt32 × String)) (vars : Vars) (f : Formula) :
    ReconstructM Expr := do
  let sub (i : Nat) : ReconstructM Expr := do
    let some g := f.subformulas[i]? | throwError "formula is missing a subformula"
    formula sorts vars g
  let all : ReconstructM (Array Expr) := f.subformulas.mapM (formula sorts vars)
  let binary (fn : Name) : ReconstructM Expr :=
    return mkApp2 (mkConst fn) (← sub 0) (← sub 1)
  let quantified (bind : Array Expr → Expr → ReconstructM Expr) : ReconstructM Expr := do
    let bound := f.boundVars.filterMap fun v =>
      (sorts.find? (·.1 == v)).map fun (_, s) => (v, s)
    withVars bound vars fun vars locals => do
      let body ← formula sorts vars (← do
        let some g := f.subformulas[0]? | throwError "quantifier without a body"
        pure g)
      bind locals body
  shared (← do
    match ← connectiveOf f with
    | .literal =>
      let some l := f.literal? | throwError "atom without a literal"
      literal vars l
    | .«true» => return mkConst ``True
    | .«false» => return mkConst ``False
    | .not => return mkApp (mkConst ``Not) (← sub 0)
    | .and => return junction ``And ``True (← all)
    | .or => return junction ``Or ``False (← all)
    | .imp => mkArrow (← sub 0) (← sub 1)
    | .iff => binary ``Iff
    | .xor => return mkApp (mkConst ``Not) (← binary ``Iff)
    | .«forall» => quantified fun locals body => mkForallFVars locals body
    | .«exists» => quantified fun locals body => do
      locals.foldrM (fun x body => do mkAppM ``Exists #[← mkLambdaFVars #[x] body]) body
    | .name =>
      let some raw := f.name? | throwError "named formula without a name"
      namedFormula raw
    | c => throwError "cannot rebuild a formula with connective {repr c}")

/--
The arguments of an n-ary junction, however it was nested.

Both sides are descended into, not just the right: flattening is what merges a
nested junction into a wider one, so the two sides of such a step differ in
exactly that.
-/
partial def junctionParts (fn : Name) (e : Expr) : Array Expr :=
  if e.isAppOfArity fn 2 then
    junctionParts fn e.appFn!.appArg! ++ junctionParts fn e.appArg!
  else
    #[e]

end Vampire.Reconstruct
