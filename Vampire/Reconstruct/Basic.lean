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

/-- Rebuilds a clause as the disjunction of its literals. -/
def clause (vars : Vars) (c : Clause) : ReconstructM Expr := do
  let literals ← c.literals.mapM (literal vars)
  match literals.toList with
  | [] => return mkConst ``False
  | l :: rest => return rest.foldl (fun acc l => mkApp2 (mkConst ``Or) acc l) l

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
  let connective ← match f.connective with
    | .ok c => pure c
    | .error e => throwError "{e}"
  match connective with
  | .literal =>
    let some l := f.literal? | throwError "atom without a literal"
    literal vars l
  | .«true» => return mkConst ``True
  | .«false» => return mkConst ``False
  | .not => return mkApp (mkConst ``Not) (← sub 0)
  | .and => return mkApp2 (mkConst ``And) (← sub 0) (← sub 1)
  | .or => return mkApp2 (mkConst ``Or) (← sub 0) (← sub 1)
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
def conclusion (u : Vampire.Unit) : ReconstructM Expr := do
  let sorts := u.varSorts
  match u.clause?, u.formula? with
  | some c, _ =>
    withVars sorts {} fun vars locals => do
      mkForallFVars locals (← clause vars c)
  | _, some f => formula sorts {} f
  | _, _ => throwError "step {u.number} is neither a clause nor a formula"

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
def registerFunctionDefinition (u : Vampire.Unit) : ReconstructM PUnit := do
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
def registerAvatarDefinition (u : Vampire.Unit) : ReconstructM PUnit := do
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
def byReflexivity (conclusion : Expr) : ReconstructM Expr :=
  forallTelescopeReducing conclusion fun xs body => do
    let proof ←
      if let some (_, lhs, _) := body.eq? then
        mkEqRefl lhs
      else if let some (lhs, _) := body.iff? then
        mkAppOptM ``Iff.refl #[some lhs]
      else
        throwError "expected an equation or an equivalence, got{indentExpr body}"
    mkLambdaFVars xs proof

end Vampire.Reconstruct
