import Lean
import Vampire.Translate
import Vampire.Wire

namespace Vampire.Reconstruct

open Lean Meta

/-- What reconstruction needs to read a proof back into Lean. -/
structure Context where
  /-- What the TPTP names in the proof stand for. -/
  symbols : Symbols
  proof : Proof

structure State where
  /-- The proof term built for each step, by vampire's number for it. -/
  proofs : Std.HashMap UInt32 Expr := {}
  /-- Rules met that have no implementation yet. -/
  unimplemented : Std.HashSet String := {}
  /--
  Symbols vampire introduced and the definition that gave each one meaning,
  e.g. from a `function_definition` step.
  -/
  introduced : Std.HashMap String Expr := {}
  /-- Formulas an `avatar_definition` step named, kept under the positive name. -/
  named : Std.HashMap String Expr := {}
  /-- The proposition rebuilt for each step, by vampire's number for it. -/
  conclusions : Std.HashMap UInt32 Expr := {}

abbrev ReconstructM := ReaderT Context (StateRefT State MetaM)

/--
Raised for a name vampire introduced itself, by skolemisation or AVATAR. Such a
name stands for nothing in the Lean goal, so the step it appears in cannot even
be stated until those rules are implemented.
-/
def throwIntroduced (kind name : String) : ReconstructM α :=
  throwError "vampire introduced {kind} `{name}`, which has no counterpart in \
    the goal; reconstruction cannot proceed"

/-- The Lean type a TPTP sort stands for. -/
def sortType (name : String) : ReconstructM Expr := do
  let some τ := (← read).symbols.sorts[name]? | throwIntroduced "the sort" name
  return τ

/-- The Lean expression a TPTP symbol stands for, from the goal or a definition. -/
def symbolExpr (name : String) : ReconstructM Expr := do
  if let some e := (← read).symbols.symbols[name]? then return e
  if let some e := (← get).introduced[name]? then return e
  throwIntroduced "the symbol" name

/-- Whether a TPTP symbol name has a Lean counterpart yet. -/
def resolvesSymbol (name : String) : ReconstructM Bool := do
  return ((← read).symbols.symbols[name]?).isSome || ((← get).introduced[name]?).isSome

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
  return mkAppN (← symbolExpr symbol.name) (← t.args.mapM (term vars))

/-- Rebuilds a vampire literal as a Lean proposition. -/
def literal (vars : Vars) (l : Literal) : ReconstructM Expr := do
  let args ← l.args.mapM (term vars)
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
  return if l.polarity then atom else mkApp (mkConst ``Not) atom

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

/-- Rebuilds a clause as the disjunction of its literals. -/
def clause (vars : Vars) (c : Clause) : ReconstructM Expr := do
  return junction ``Or ``False (← c.literals.mapM (literal vars))

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
    -- Splitter writes the negation of a component as `~n`, and keeps the
    -- definition under the positive name.
    let some raw := f.name? | throwError "named formula without a name"
    let negated := raw.startsWith "~"
    let key := if negated then (raw.drop 1).toString else raw
    let some body := (← get).named[key]?
      | throwIntroduced "the named subformula" raw
    return if negated then mkApp (mkConst ``Not) body else body
  | c => throwError "cannot rebuild a formula with connective {repr c}"

/--
The Lean proposition a step asserts. A clause is implicitly universally
quantified over its variables; a formula carries its own binders.
-/
private def buildConclusion (u : Vampire.Unit) : ReconstructM Expr := do
  let sorts := u.varSorts
  match u.clause?, u.formula? with
  | some c, _ =>
    withVars sorts {} fun vars locals => do
      mkForallFVars locals (← clause vars c)
  | _, some f => formula sorts {} f
  | _, _ => throwError "step {u.number} is neither a clause nor a formula"

/--
The proposition a step asserts, rebuilt once.

A rule that introduces a name has to bind it before this is called, which is
why it is taken on demand rather than handed to the rule ready-made.
-/
def conclusionOf (u : Vampire.Unit) : ReconstructM Expr := do
  if let some c := (← get).conclusions[u.number]? then
    return c
  let c ← buildConclusion u
  modify fun s => { s with conclusions := s.conclusions.insert u.number c }
  return c

/-- A step of vampire's proof, with everything needed to justify it. -/
structure Step where
  unit : Vampire.Unit
  rule : InferenceRule
  /-- The premises: a proof of each, paired with what it proves. -/
  premises : Array (Expr × Expr)

/-- The step's conclusion, as a Lean proposition. -/
def Step.conclusion (step : Step) : ReconstructM Expr := conclusionOf step.unit

/--
Stands in for a rule that has no implementation yet. The step's conclusion is
still rebuilt and checked, so only the justification is missing.
-/
def unimplemented (step : Step) : ReconstructM Expr := do
  modify fun s => { s with unimplemented := s.unimplemented.insert step.rule.name }
  mkSorry (← step.conclusion) (synthetic := false)

end Vampire.Reconstruct
