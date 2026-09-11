import Vampire.Reconstruct.Stated

namespace Vampire.Reconstruct

open Lean Meta

/--
Something of the sort that the goal itself holds.

A sort is a type the goal speaks of and vampire's domains are never empty, so
where an instance does not say a sort is inhabited the goal may still say it: a
variable or hypothesis of that type says as much, and a goal can well have the
one without the other.
-/
private def given (τ : Expr) : ReconstructM (Option Expr) := do
  for e in (← read).givens do
    if ← isDefEq (← inferType e) τ then
      return some e
  return none

/-- `Nonempty α`, which Hilbert choice needs to pick a witness at all. -/
def nonempty (τ : Expr) : ReconstructM Expr := do
  if let some inst := (← get).nonempty[τ]? then
    return inst
  let goal := mkApp (mkConst ``Nonempty [(← getLevel τ)]) τ
  let inst ←
    match ← trySynthInstance goal with
    | .some inst => pure inst
    | _ =>
      match ← given τ with
      | some element => mkAppOptM ``Nonempty.intro #[some τ, some element]
      | none =>
        throwError "nothing says{indentExpr τ}\nis inhabited: there is no \
          `Nonempty` instance for it and the goal holds nothing of it"
  modify fun s => { s with nonempty := s.nonempty.insert τ inst }
  return inst

/--
`(∃ v, p v) ↔ p (Classical.epsilon p)`, with the chosen witness.

Forwards is `epsilon_spec_aux`, which is already the implication and takes the
`Nonempty` instance explicitly, so the witness it speaks of is the one built
here. Backwards the witness is that very term.
-/
def epsilon (τ p : Expr) : ReconstructM (Expr × Expr) := do
  let level ← getLevel τ
  let inst ← nonempty τ
  let witness ← shared (mkApp3 (mkConst ``Classical.epsilon [level]) τ inst p)
  -- Written out rather than found: a clausification asks for one of these at
  -- every quantifier of every clause it passes through.
  let forward := mkApp3 (mkConst ``Classical.epsilon_spec_aux [level]) τ inst p
  let satisfied := p.beta #[witness]
  let backward := .lam `h satisfied
    (mkApp4 (mkConst ``Exists.intro [level]) τ p witness (.bvar 0)) .default
  let existence := mkApp2 (mkConst ``Exists [level]) τ p
  return (witness,
    mkApp4 (mkConst ``Iff.intro) existence satisfied forward backward)

/--
A witness making a quantified formula fail, from a proof that it does.

`¬∀x, p x` gives `∃x, ¬p x`, and Hilbert choice a witness for it. Nothing is
introduced by this: the witness is a term, and the quantifier it came from is
the one the name was defined with.
-/
def witnessAgainst (against : Expr) : ReconstructM (Expr × Expr) := do
  let stated ← instantiateMVars (← inferType against)
  let some inner := asNegation stated
    | throwError "not a refutation of anything:{indentExpr stated}"
  let .forallE n τ body bi := inner
    | throwError "not a quantified formula:{indentExpr inner}"
  let predicate := Expr.lam n τ body bi
  let existence ← mkAppM ``Iff.mp
    #[← mkAppOptM ``Classical.not_forall #[some τ, some predicate], against]
  let refuting ← withLocalDeclD n τ fun x => do
    mkLambdaFVars #[x] (mkApp (mkConst ``Not) (body.instantiate1 x))
  let (witness, choice) ← epsilon τ refuting
  return (witness, ← mkAppM ``Iff.mp #[choice, existence])

/--
Something of the clause's sort, for a variable the clause does not mention.

A universal can bind more than the clause kept, and instantiating it needs
some element; vampire's domains are never empty.
-/
def someElement (τ : Expr) : ReconstructM Expr := do
  mkAppOptM ``Classical.choice #[some τ, some (← nonempty τ)]

/--
`⟦∃ vs, body⟧`: what a premise says a block of existentials means.

A witness is chosen from this, so it has to come from the premise: a conclusion
states the block in terms of the skolem that choosing the witness is what
introduces.
-/
partial def blockProp (positive : Bool) (sorts : Array (UInt32 × String))
    (bound : List (UInt32 × String)) (vars : Vars) (body : Formula) :
    ReconstructM Expr := do
  match bound with
  | [] =>
    let inner ← formula sorts vars body
    return if positive then inner else mkApp (mkConst ``Not) inner
  | (v, sortName) :: rest =>
    withLocalDeclD (Name.mkSimple s!"X{v}") (← sortType sortName) fun x => do
      let inner ← blockProp positive sorts rest (vars.insert v x) body
      if positive then
        mkAppM ``Exists #[← mkLambdaFVars #[x] inner]
      else
        -- A universal block is skolemised through its failing, so the negation
        -- stays outermost and the quantifier goes inside it.
        let some quantified := inner.not?
          | throwError "a universal block did not come back negated"
        return mkApp (mkConst ``Not) (← mkForallFVars #[x] quantified)

/-- `⟦∃ vs, body⟧`: what a premise says a block of existentials means. -/
partial def existsProp (sorts : Array (UInt32 × String))
    (bound : List (UInt32 × String)) (vars : Vars) (body : Formula) :
    ReconstructM Expr :=
  blockProp true sorts bound vars body


/--
Binds the symbol vampire chose for an existential variable to `witness`.

Its arguments are the universals it depends on, taken as vampire recorded them
rather than re-derived, so that a use of the symbol rebuilds to the same term.
-/
def registerSkolem (skolems : Std.HashMap UInt32 Term) (vars : Vars) (v : UInt32)
    (witness : Expr) : ReconstructM PUnit := do
  let some skolemTerm := skolems[v]?
    | throwError "no skolem recorded for the existential X{v}"
  let some symbol := skolemTerm.symbol?
    | throwError "the skolem term for X{v} has no symbol"
  let args ← skolemTerm.args.mapM fun arg => do
    unless arg.isVar do
      throwError "skolem {symbol.name} was applied to {arg}, not a variable"
    let some x := vars[arg.var]?
      | throwError "variable X{arg.var} has no recorded sort"
    return x
  let definition ← mkLambdaFVars args witness
  modify fun s => { s with introduced := s.introduced.insert symbol.name definition }

/--
Binds every skolem the premise's existentials introduce.

`newcnf` skolemises while clausifying, so the clause is stated in symbols that
nothing has bound yet -- and the clause has to be read before it can be
derived. Choosing the witnesses needs only the premise, so this runs first.
-/
partial def registerSkolems (sorts : Array (UInt32 × String))
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

end Vampire.Reconstruct
