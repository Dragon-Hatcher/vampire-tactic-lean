import VampireReplay.Reconstruct.Stated

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
        throwError "cannot show{indentExpr τ}\nis inhabited: it has no \
          `Nonempty` instance and no variable or hypothesis of the goal has \
          this type"
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
  -- `p` can be a predicate applied to the witnesses before this one
  -- (`blockPredicate`), so the application is reduced right through.
  let satisfied := (mkApp p witness).headBeta
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
    | throwError "expected a negated universal formula, got{indentExpr stated}"
  let .forallE n τ body bi := inner
    | throwError "expected the negation of a universal formula, but what is \
        negated is{indentExpr inner}"
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
def blockProp (positive : Bool) (sorts : Array (UInt32 × String))
    (bound : List (UInt32 × String)) (vars : Vars) (body : Formula) :
    ReconstructM Expr := do
  -- The body stated once, every variable of the block abstracted from it in
  -- one pass, and the binders put around it: abstracting a binder at a time
  -- walks the body once per variable, and a block can have a hundred.
  let bound := bound.toArray
  let types ← bound.mapM fun (_, sortName) => sortType sortName
  let decls := bound.zip types |>.map fun ((v, _), τ) =>
    (Name.mkSimple s!"X{v}", fun (_ : Array Expr) => pure τ)
  withLocalDeclsD decls fun xs => do
    let vars := (bound.zip xs).foldl (init := vars) fun acc ((v, _), x) => acc.insert v x
    let inner ← formula sorts vars body
    let mut out := inner.abstract xs
    for i in (List.range bound.size).reverse do
      let name := Name.mkSimple s!"X{bound[i]!.1}"
      let τ := types[i]!
      out ← if positive then
          pure (mkApp2 (mkConst ``Exists [← getLevel τ]) τ (.lam name τ out .default))
        else
          -- A universal block is skolemised through its failing, so the
          -- negation stays outermost and the quantifiers go inside it.
          pure (.forallE name τ out .default)
    return if positive then out else mkApp (mkConst ``Not) out


/--
The predicates a block's witnesses are chosen from, stated once: `qs[i]` is
`fun v₀ … vᵢ => ∃ vᵢ₊₁ …, body` (`¬∀ vᵢ₊₁ …, body` at negative polarity), and
the witness for `vᵢ` is chosen from `qs[i]` at the witnesses before it
(`blockPredicate`).

What `blockProp` gives for each variable in turn, but the body is stated and
abstracted once for the whole block, and a witness is an argument rather than
substituted in: each witness is chosen over the ones before it, so substituting
them makes every predicate hold every witness before it, and each abstraction
walks them all again -- quadratic in a block's length, and a block can have a
hundred variables.
-/
def blockPredicates (positive : Bool) (sorts : Array (UInt32 × String))
    (bound : Array (UInt32 × String)) (vars : Vars) (body : Formula) :
    ReconstructM (Array Expr) := do
  let types ← bound.mapM fun (_, sortName) => sortType sortName
  let levels ← types.mapM fun τ => getLevel τ
  let names := bound.map fun (v, _) => Name.mkSimple s!"X{v}"
  let decls := names.zip types |>.map fun (n, τ) => (n, fun (_ : Array Expr) => pure τ)
  withLocalDeclsD decls fun xs => do
    let vars := (bound.zip xs).foldl (init := vars) fun acc ((v, _), x) => acc.insert v x
    let inner := (← formula sorts vars body).abstract xs
    let n := bound.size
    let mut qs := #[]
    for i in [0:n] do
      -- The variables after `vᵢ`, innermost first, then `vᵢ` and those before
      -- it as the predicate's arguments.
      let mut e := inner
      for j in (List.range n).reverse do
        if j > i then
          e := if positive then
              mkApp2 (mkConst ``Exists [levels[j]!]) types[j]! (.lam names[j]! types[j]! e .default)
            else .forallE names[j]! types[j]! e .default
      unless positive do e := mkApp (mkConst ``Not) e
      for j in (List.range (i + 1)).reverse do
        e := .lam names[j]! types[j]! e .default
      qs := qs.push e
    return qs

/-- `(∃ v, p v) ↔ p w` from the choice `(∃ v, p v) ↔ p ε`, for the symbol `w`
that stands for `ε`. -/
def choiceAt (τ p choice w : Expr) : ReconstructM Expr := do
  let level ← getLevel τ
  mkExpectedTypeHint choice
    (mkApp2 (mkConst ``Iff) (mkApp2 (mkConst ``Exists [level]) τ p) (mkApp p w).headBeta)

/-- The predicate the witness for a block's `i`th variable is chosen from. -/
def blockPredicate (qs : Array Expr) (i : Nat) (witnesses : Array Expr) : Expr :=
  mkAppN qs[i]! witnesses

/--
Binds the symbol vampire chose for an existential variable to `witness`.

Its arguments are the universals it depends on, taken as vampire recorded them
rather than re-derived, so that a use of the symbol rebuilds to the same term.
Gives that term: the symbol applied, which is what the witness is carried on
as, so that nothing states the choice it abbreviates but the definition.
-/
def registerSkolem (skolems : Std.HashMap UInt32 Term) (vars : Vars) (v : UInt32)
    (witness : Expr) : ReconstructM Expr := do
  let some skolemTerm := skolems[v]?
    | throwError "no skolem recorded for the existential X{v}"
  let some symbol := skolemTerm.symbol?
    | throwError "the skolem term for X{v} has no symbol"
  let args ← skolemTerm.args.mapM fun arg => do
    unless arg.isVar do
      throwError "skolem {symbol.name} was applied to {arg}, not a variable"
    let some x := vars[arg.var]?
      | throwError "variable X{arg.var} is not bound here"
    return x
  -- A symbol is registered once: the units that skolemised it choose the
  -- same witness, and a second definition would be a second symbol.
  if (← get).introduced.contains symbol.name then return ← term vars skolemTerm
  let definition ← instantiateMVars (← mkLambdaFVars args witness)
  if definition.hasMVar then
    throwError "the witness chosen for {symbol.name} is not fully elaborated"
  -- A witness is a choice over the rest of its block, and the terms that
  -- mention the symbol are walked by every step that states a clause; as a
  -- definition of its own, closed over the goal's locals it mentions, the
  -- symbol is a constant applied to those, and the choice is unfolded only
  -- where something asks what it is.
  let locals := (collectFVars {} definition).fvarIds.map mkFVar
  let closed ← instantiateMVars (← mkLambdaFVars locals definition)
  let levels := (collectLevelParams {} closed).params
  let name ← mkAuxDeclName `_skolem
  let closedType ← inferType closed
  addDecl (.defnDecl (mkDefinitionValEx name levels.toList closedType closed .abbrev
    .safe [name]))
  let standsFor := mkAppN (mkConst name (levels.toList.map mkLevelParam)) locals
  modify fun s => { s with introduced := s.introduced.insert symbol.name standsFor }
  term vars skolemTerm

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
    boundSorts sorts f.boundVars
  match ← connectiveOf f with
  | .«exists» =>
    let some body := f.subformulas[0]? | throwError "quantifier without a body"
    let block := bound f
    let qs ← blockPredicates true sorts block vars body
    let mut witnesses := #[]
    let mut vars := vars
    for ((v, sortName), i) in block.zipIdx do
      let (witness, _) ← epsilon (← sortType sortName) (blockPredicate qs i witnesses)
      let witness ← registerSkolem skolems vars v witness
      witnesses := witnesses.push witness
      vars := vars.insert v witness
    registerSkolems sorts skolems vars body
  | .«forall» =>
    let some body := f.subformulas[0]? | throwError "quantifier without a body"
    withVars (bound f) vars fun vars _ => registerSkolems sorts skolems vars body
  | .and | .or | .not | .imp | .iff | .xor =>
    f.subformulas.forM (registerSkolems sorts skolems vars)
  | _ => return

end Vampire.Reconstruct
