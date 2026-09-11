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
  /--
  The number of the first step polarity flipping made, or zero if it never ran:
  the steps from there on mean the opposite by the predicates it flipped.
  -/
  flipped : UInt32 := 0
  /--
  Whether the step being read is one of those polarity flipping has been
  through.

  Flipping picks a set of predicates and replaces every literal of every clause
  over them by its complement, all at once. It says nothing, then, about the
  clauses -- it says that those predicates now mean the opposite of what they
  did. So a step after it is read with the polarity of a flipped predicate's
  literals inverted, which is what makes the flipping itself say nothing.
  -/
  flipping : Bool := false

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
  /-- The one term standing for each shape a rebuilt term has taken. -/
  shared : Std.HashMap Expr Expr := {}

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

/--
Whether the goal is where a TPTP symbol comes from.

This is what tells a symbol vampire introduced from one of the goal's own,
which asking whether it resolves no longer does: names are bound before any
step is replayed, so by then an introduced one resolves too.
-/
def isGoalSymbol (name : String) : ReconstructM Bool := do
  return ((← read).symbols.symbols[name]?).isSome

/--
What a name splitting introduced stands for, `~n` for the negation of what `n`
does.
-/
def namedFormula (name : String) : ReconstructM Expr := do
  let negated := name.startsWith "~"
  let key := if negated then (name.drop 1).toString else name
  let some body := (← get).named[key]?
    | throwIntroduced "the named subformula" name
  return if negated then mkApp (mkConst ``Not) body else body

/--
What a proposition is the negation of, whether it is written `¬a` or `a → False`
-- which is the same thing, and which of the two a proof term states depends on
how it was built.
-/
def asNegation (e : Expr) : Option Expr :=
  match e.not? with
  | some inner => some inner
  | none =>
    -- `a ≠ b` is the same thing again, and a proof built by `Ne.symm` states
    -- itself that way.
    if e.isAppOfArity ``Ne 3 then
      match e.getAppFn with
      | .const _ levels =>
        let args := e.getAppArgs
        some (mkAppN (.const ``Eq levels) args)
      | _ => none
    else
      match e with
      | .forallE _ d body _ =>
        if body.isConstOf ``False && !body.hasLooseBVars then some d else none
      | _ => none

/-- The name of the negation of what `name` names. -/
def flippedName (name : String) : String :=
  if name.startsWith "~" then (name.drop 1).toString else "~" ++ name

/--
`⟦~n⟧`, and that it says what `¬⟦n⟧` does.

One is the other under a double negation: a name and its negation are two
names, and which of the two carries the negation is up to which one splitting
introduced.
-/
def flipName (name : String) : ReconstructM (Expr × Expr) := do
  let flipped := flippedName name
  let body ← namedFormula name
  let flippedBody ← namedFormula flipped
  if flippedBody == mkApp (mkConst ``Not) body then
    return (flippedBody, ← mkAppOptM ``Iff.refl #[some flippedBody])
  if body == mkApp (mkConst ``Not) flippedBody then
    return (flippedBody,
      ← mkAppM ``Iff.symm #[← mkAppOptM ``Classical.not_not #[some flippedBody]])
  throwError "`{name}` and `{flipped}` are not each other's negation"

/--
The one term of this shape, so that two rebuildings of it are the same term.

A proof states the same literals over and over -- every step of it says what
its premises and its conclusion are -- and each rebuilding otherwise makes its
own copy. Lean shares the subterms of what it is handed before checking it, and
compares terms by their address before their shape, so what the copies cost is
paid many times over.
-/
def shared (e : Expr) : ReconstructM Expr := do
  if let some one := (← get).shared[e]? then
    return one
  modify fun s => { s with shared := s.shared.insert e e }
  return e

/-- `Nonempty α`, which Hilbert choice needs to pick a witness at all. -/
def nonempty (τ : Expr) : ReconstructM Expr := do
  let goal := mkApp (mkConst ``Nonempty [(← getLevel τ)]) τ
  match ← trySynthInstance goal with
  | .some inst => return inst
  | _ =>
    throwError "cannot skolemise over{indentExpr τ}\nwithout `Nonempty` for it"

/--
`(∃ v, p v) ↔ p (Classical.epsilon p)`, with the chosen witness.

Forwards is `epsilon_spec_aux`, which is already the implication and takes the
`Nonempty` instance explicitly, so the witness it speaks of is the one built
here. Backwards the witness is that very term.
-/
def epsilon (τ p : Expr) : ReconstructM (Expr × Expr) := do
  let inst ← nonempty τ
  let witness ← shared (mkApp3 (mkConst ``Classical.epsilon [← getLevel τ]) τ inst p)
  let forward ← mkAppOptM ``Classical.epsilon_spec_aux #[some τ, some inst, some p]
  -- `p` has to be given: `h`'s type is beta-reduced, so it cannot be recovered
  -- from the arguments by unification.
  let backward ← withLocalDeclD `h (p.beta #[witness]) fun h => do
    mkLambdaFVars #[h]
      (← mkAppOptM ``Exists.intro #[some τ, some p, some witness, some h])
  return (witness, ← mkAppM ``Iff.intro #[forward, backward])

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
One step of negation normal form, with a proof that it changes nothing.

`ennf` and `nnf` eliminate implications and equivalences and push negations
inward. Each case is picked by the shape in hand, and every one moves toward
the normal form.
-/
def nnfStep (e : Expr) : ReconstructM (Option (Expr × Expr)) := do
  if let .forallE _ d body _ := e then
    if (← isProp d) && !body.hasLooseBVars then
      let rewritten := mkApp2 (mkConst ``Or) (mkApp (mkConst ``Not) d) body
      let decidable ← mkAppOptM ``Classical.propDecidable #[some d]
      return some (rewritten,
        ← mkAppOptM ``Decidable.imp_iff_not_or #[some d, some body, some decidable])
  if let some (x, y) := e.iff? then
    let rewritten ← mkAppM ``And #[← mkArrow x y, ← mkArrow y x]
    return some (rewritten,
      ← mkAppOptM ``iff_iff_implies_and_implies #[some x, some y])
  if let some inner := e.not? then
    if let some doubly := inner.not? then
      return some (doubly, ← mkAppOptM ``Classical.not_not #[some doubly])
    if let some (x, y) := inner.app2? ``And then
      let rewritten := mkApp2 (mkConst ``Or)
        (mkApp (mkConst ``Not) x) (mkApp (mkConst ``Not) y)
      return some (rewritten,
        ← mkAppOptM ``Classical.not_and_iff_not_or_not #[some x, some y])
    if let some (x, y) := inner.app2? ``Or then
      let rewritten := mkApp2 (mkConst ``And)
        (mkApp (mkConst ``Not) x) (mkApp (mkConst ``Not) y)
      return some (rewritten, ← mkAppOptM ``not_or #[some x, some y])
    if let .forallE n d body bi := inner then
      unless (← isProp d) && !body.hasLooseBVars do
        -- `not_forall` speaks of the predicate quantified over, not its
        -- negation.
        let quantified := Expr.lam n d body bi
        let negated := Expr.lam n d (mkApp (mkConst ``Not) body) bi
        let rewritten ← mkAppM ``Exists #[negated]
        return some (rewritten,
          ← mkAppOptM ``Classical.not_forall #[some d, some quantified])
    if let some (α, p) := inner.app2? ``Exists then
      let rewritten ← withLocalDeclD `x α fun x => do
        mkForallFVars #[x] (mkApp (mkConst ``Not) (p.beta #[x]))
      return some (rewritten, ← mkAppOptM ``not_exists #[some α, some p])
  return none

/--
A formula in negation normal form, with a proof that it says the same thing.

The two sides of an `ennf` or `nnf` step are one formula written before and
after that normalisation, so normalising both and comparing the results is
what relates them. Every case moves toward the normal form, so it terminates.

Junction nesting is left alone: merging it is a separate step, and comparing
parts by index already allows for either shape.
-/
partial def toNNF (e : Expr) : ReconstructM (Expr × Expr) := do
  let e ← instantiateMVars e
  if let some (rewritten, step) ← nnfStep e then
    let (normal, rest) ← toNNF rewritten
    return (normal, ← mkAppM ``Iff.trans #[step, rest])
  for (fn, lemma) in [(``And, ``and_congr), (``Or, ``or_congr)] do
    if e.isAppOfArity fn 2 then
      let (l, pl) ← toNNF e.appFn!.appArg!
      let (r, pr) ← toNNF e.appArg!
      return (mkApp2 (mkConst fn) l r, ← mkAppM lemma #[pl, pr])
  if e.not?.isSome then
    -- Anything but an atom under a negation was taken apart above.
    return (e, ← mkAppOptM ``Iff.refl #[some e])
  if e.isAppOfArity ``Exists 2 then
    match e.appArg! with
    | .lam n d body bi =>
      return ← withLocalDeclD `x d fun x => do
        let (normal, proof) ← toNNF (body.instantiate1 x)
        let normalLam := Expr.lam n d (normal.abstract #[x]) bi
        return (← mkAppM ``Exists #[normalLam],
          ← mkAppM ``exists_congr #[← mkLambdaFVars #[x] proof])
    | _ => return (e, ← mkAppOptM ``Iff.refl #[some e])
  match e with
  | .forallE _ d body _ =>
    if !(← isProp d) || body.hasLooseBVars then
      return ← withLocalDeclD `x d fun x => do
        let (normal, proof) ← toNNF (body.instantiate1 x)
        return (← mkForallFVars #[x] normal,
          ← mkAppM ``forall_congr' #[← mkLambdaFVars #[x] proof])
    return (e, ← mkAppOptM ``Iff.refl #[some e])
  | _ => return (e, ← mkAppOptM ``Iff.refl #[some e])

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


/--
Something of the clause's sort, for a variable the clause does not mention.

A universal can bind more than the clause kept, and instantiating it needs
some element; vampire's domains are never empty.
-/
def someElement (τ : Expr) : ReconstructM Expr := do
  let goal := mkApp (mkConst ``Nonempty [← getLevel τ]) τ
  match ← trySynthInstance goal with
  | .some inst =>
    mkAppOptM ``Classical.choice #[some τ, some inst]
  | _ =>
    throwError "cannot instantiate a quantifier over{indentExpr τ}\n\
      without `Nonempty` for it"

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

/--
The `i`th part of a junction, from a proof of the whole.

Indices count parts left to right, whatever the nesting: flattening merges a
nested junction into a wider one, leaving the parts in place but not the shape,
so neither side can be taken to associate one way.
-/
partial def projectPart (fn : Name) (chain : Expr) (i : Nat) (h : Expr) :
    ReconstructM Expr := do
  if !chain.isAppOfArity fn 2 then
    return h
  let left := chain.appFn!.appArg!
  let right := chain.appArg!
  let n := (junctionParts fn left).size
  if i < n then
    projectPart fn left i (mkApp3 (mkConst ``And.left) left right h)
  else
    projectPart fn right (i - n) (mkApp3 (mkConst ``And.right) left right h)

/-- A proof of a whole disjunction from a proof of its `i`th part. -/
partial def injectPart (fn : Name) (chain : Expr) (i : Nat) (h : Expr) :
    ReconstructM Expr := do
  if !chain.isAppOfArity fn 2 then
    return h
  let left := chain.appFn!.appArg!
  let right := chain.appArg!
  let n := (junctionParts fn left).size
  if i < n then
    return mkApp3 (mkConst ``Or.inl) left right (← injectPart fn left i h)
  else
    return mkApp3 (mkConst ``Or.inr) left right (← injectPart fn right (i - n) h)

/--
A closed `chain → motive` sending each part of `chain` to `handler`, along with
the motive, which the leftmost part's proof settles.

The bound variable is put in place as the elimination is built rather than
abstracted into it afterwards: abstracting at every level of a right-nested
chain walks the whole of what has been built so far each time.
-/
partial def elimFunction (chain : Expr) (offset : Nat)
    (handler : Nat → Expr → ReconstructM Expr) (motive? : Option Expr) :
    ReconstructM (Expr × Expr) := do
  if !chain.isAppOfArity ``Or 2 then
    return ← withLocalDeclD `a chain fun a => do
      let body ← handler offset a
      let motive ← match motive? with
        | some motive => pure motive
        | none => inferType body
      return (← mkLambdaFVars #[a] body, motive)
  let left := chain.appFn!.appArg!
  let right := chain.appArg!
  let n := (junctionParts ``Or left).size
  let (onLeft, motive) ← elimFunction left offset handler motive?
  let (onRight, _) ← elimFunction right (offset + n) handler (some motive)
  return (.lam `x chain
    (mkApp6 (mkConst ``Or.elim) left right motive (.bvar 0) onLeft onRight)
    .default, motive)

/-- Eliminates a disjunction, sending its `i`th part to `handler i`. -/
partial def elimParts (chain : Expr) (offset : Nat)
    (handler : Nat → Expr → ReconstructM Expr) (h : Expr) : ReconstructM Expr := do
  if !chain.isAppOfArity ``Or 2 then
    return ← handler offset h
  let left := chain.appFn!.appArg!
  let right := chain.appArg!
  let n := (junctionParts ``Or left).size
  let (onLeft, motive) ← elimFunction left offset handler none
  let (onRight, _) ← elimFunction right (offset + n) handler (some motive)
  return mkApp6 (mkConst ``Or.elim) left right motive h onLeft onRight

/-!
The helpers above take a junction apart by its shape, which is right for a
formula, whose shape is what it says. A generalised clause is different: its
parts are subformulas, and a part can be a junction in its own right, so its
parts have to be given rather than found.
-/

/-- A proof of `junction fn unit parts` from a proof of its `i`th part. -/
partial def injectGiven (parts : Array Expr) (i : Nat) (h : Expr) :
    ReconstructM Expr := do
  if parts.size <= 1 then return h
  let rest := parts.extract 1 parts.size
  let tail := junction ``Or ``False rest
  if i == 0 then
    return mkApp3 (mkConst ``Or.inl) parts[0]! tail h
  else
    return mkApp3 (mkConst ``Or.inr) parts[0]! tail (← injectGiven rest (i - 1) h)


/-- `elimFunction`, for a disjunction whose parts are given rather than found. -/
partial def elimGivenFunction (parts : Array Expr) (offset : Nat)
    (handler : Nat → Expr → ReconstructM Expr) (motive? : Option Expr) :
    ReconstructM (Expr × Expr) := do
  if parts.size <= 1 then
    return ← withLocalDeclD `a parts[0]! fun a => do
      let body ← handler offset a
      let motive ← match motive? with
        | some motive => pure motive
        | none => inferType body
      return (← mkLambdaFVars #[a] body, motive)
  let rest := parts.extract 1 parts.size
  let tail := junction ``Or ``False rest
  let (onLeft, motive) ← elimGivenFunction #[parts[0]!] offset handler motive?
  let (onRight, _) ← elimGivenFunction rest (offset + 1) handler (some motive)
  return (.lam `x (junction ``Or ``False parts)
    (mkApp6 (mkConst ``Or.elim) parts[0]! tail motive (.bvar 0) onLeft onRight)
    .default, motive)

/-- Eliminates a disjunction of the given parts, sending the `i`th to `handler i`. -/
partial def elimGiven (parts : Array Expr)
    (handler : Nat → Expr → ReconstructM Expr) (h : Expr) (offset : Nat := 0) :
    ReconstructM Expr := do
  if parts.size <= 1 then return ← handler offset h
  let rest := parts.extract 1 parts.size
  let tail := junction ``Or ``False rest
  let (onLeft, motive) ← elimGivenFunction #[parts[0]!] offset handler none
  let (onRight, _) ← elimGivenFunction rest (offset + 1) handler (some motive)
  return mkApp6 (mkConst ``Or.elim) parts[0]! tail motive h onLeft onRight

/-- The `i`th part of a conjunction of the given parts, from a proof of the whole. -/
partial def projectGiven (parts : Array Expr) (i : Nat) (h : Expr) :
    ReconstructM Expr := do
  if parts.size <= 1 then return h
  let rest := parts.extract 1 parts.size
  let tail := junction ``And ``True rest
  if i == 0 then
    return mkApp3 (mkConst ``And.left) parts[0]! tail h
  else
    projectGiven rest (i - 1) (mkApp3 (mkConst ``And.right) parts[0]! tail h)

/-- A conjunction of the given parts, from a proof of each. -/
partial def introGiven (parts : Array Expr)
    (component : Nat → ReconstructM Expr) (offset : Nat := 0) :
    ReconstructM Expr := do
  if parts.size == 0 then return mkConst ``True.intro
  if parts.size == 1 then return ← component offset
  let rest := parts.extract 1 parts.size
  return mkApp4 (mkConst ``And.intro) parts[0]! (junction ``And ``True rest)
    (← component offset) (← introGiven rest component (offset + 1))

/-- Builds a conjunction from a proof of each of its parts. -/
partial def introParts (chain : Expr) (offset : Nat)
    (component : Nat → ReconstructM Expr) : ReconstructM Expr := do
  if !chain.isAppOfArity ``And 2 then
    return ← component offset
  let left := chain.appFn!.appArg!
  let right := chain.appArg!
  let n := (junctionParts ``And left).size
  return mkApp4 (mkConst ``And.intro) left right
    (← introParts left offset component) (← introParts right (offset + n) component)

/--
`source → target`, where the two say the same thing up to the order and nesting
of junctions.

Vampire's parser reverses a junction's arguments, so a formula's own reading of
itself differs from the goal's, and a rule that drops or repeats literals
leaves the rest in place. Both come to relating two junctions over the same
parts, which a lookup settles rather than a search: each part of one is found
among the parts of the other by structural equality.

A disjunct of the source that is absent from the target has to be refutable on
its own, as `t ≠ t` is, which is how a removed literal is accounted for.
-/
partial def implies (source target : Expr) : ReconstructM Expr := do
  let source ← instantiateMVars source
  let target ← instantiateMVars target
  if ← isDefEq source target then
    return ← withLocalDeclD `h source fun h => mkLambdaFVars #[h] h
  match source, target with
  | .forallE _ sd sb _, .forallE _ td tb _ =>
    -- Only a genuine quantifier: `¬a` is an arrow too, but not a `forallE`.
    unless ← isDefEq sd td do
      throwError "implies: cannot relate{indentExpr source}\nto{indentExpr target}"
    withLocalDeclD `x sd fun x => do
      let rest ← implies (sb.instantiate1 x) (tb.instantiate1 x)
      withLocalDeclD `h source fun h => do
        mkLambdaFVars #[h] (← mkLambdaFVars #[x] (mkApp rest (mkApp h x)))
  | _, _ =>
    if target.isAppOfArity ``And 2 then
      let parts := junctionParts ``And target
      return ← withLocalDeclD `h source fun h => do
        mkLambdaFVars #[h] (← introParts target 0 fun j => do
          return mkApp (← implies source parts[j]!) h)
    -- What the source says of each of its conjuncts, when the target is one of
    -- them: a rule that leaves a conjunct out keeps the rest in place.
    if source.isAppOfArity ``And 2 && !target.isAppOfArity ``And 2 then
      let conjuncts := junctionParts ``And source
      for (conjunct, i) in conjuncts.zipIdx do
        if ← isDefEq conjunct target then
          return ← withLocalDeclD `h source fun h => do
            mkLambdaFVars #[h] (← projectPart ``And source i h)
    let parts := junctionParts ``Or target
    let index := parts.zipIdx.foldl (init := ({} : Std.HashMap Expr Nat))
      fun acc (p, i) => acc.insert p i
    -- `l : d` becomes a proof of the target, if `d` is among its disjuncts or
    -- is refutable on its own. An equality can be stated either way round, so
    -- the flipped form is looked up too rather than searched for.
    let branchFor (d : Expr) : ReconstructM Expr := do
      if let some i := index[d]? then
        return ← withLocalDeclD `l d fun l => do
          mkLambdaFVars #[l] (← injectPart ``Or target i l)
      if let some (α, a, b) := d.eq? then
        let flipped ← mkAppOptM ``Eq #[some α, some b, some a]
        if let some i := index[flipped]? then
          return ← withLocalDeclD `l d fun l => do
            mkLambdaFVars #[l] (← injectPart ``Or target i (← mkAppM ``Eq.symm #[l]))
      if let some inner := d.not? then
        if let some (α, a, b) := inner.eq? then
          let flipped ← mkAppOptM ``Eq #[some α, some b, some a]
          let negated := mkApp (mkConst ``Not) flipped
          if let some i := index[negated]? then
            return ← withLocalDeclD `l d fun l => do
              let contrapositive ← withLocalDeclD `e flipped fun e => do
                mkLambdaFVars #[e] (mkApp l (← mkAppM ``Eq.symm #[e]))
              mkLambdaFVars #[l] (← injectPart ``Or target i contrapositive)
        -- Absent, so it has to be refutable: `t ≠ t` is what removal leaves.
        if let some (_, a, b) := inner.eq? then
          if ← isDefEq a b then
            return ← withLocalDeclD `l d fun l => do
              mkLambdaFVars #[l]
                (← mkAppOptM ``absurd
                  #[some inner, some target, some (← mkEqRefl a), some l])
        if inner.isConstOf ``True then
          return ← withLocalDeclD `l d fun l => do
            mkLambdaFVars #[l]
              (← mkAppOptM ``absurd
                #[some (mkConst ``True), some target,
                  some (mkConst ``True.intro), some l])
      -- Simplifying away a truth value leaves nothing of a disjunct that was
      -- `⊥`, and nothing of one that was `¬⊤`.
      if d.isConstOf ``False then
        return ← withLocalDeclD `l d fun l => do
          mkLambdaFVars #[l] (← mkAppOptM ``False.elim #[some target, some l])
      throwError "implies: the disjunct{indentExpr d}\nis neither among\
        {indentExpr target}\nnor refutable"
    let branches ← (junctionParts ``Or source).mapM branchFor
    withLocalDeclD `h source fun h => do
      mkLambdaFVars #[h] (← elimParts source 0 (fun i hi => do
        let some branch := branches[i]? | throwError "missing disjunct"
        return mkApp branch hi) h)



/--
`a` from `¬¬a`, with both written out.

`mkAppM` would find them again from the proof it is given, which for a proof
the size of a clausification's is the whole of it.
-/
def ofNotNot (a : Expr) (h : Expr) : Expr :=
  let negated := mkApp (mkConst ``Not) a
  mkApp4 (mkConst ``Iff.mp) (mkApp (mkConst ``Not) negated) a
    (mkApp (mkConst ``Classical.not_not) a) h

/-- A proof of a right-folded conjunction from proofs of its parts. -/
def introAnd (parts : Array Expr) : ReconstructM Expr := do
  if parts.isEmpty then
    return ← mkAppM ``True.intro #[]
  let mut acc := parts.back!
  for p in parts.pop.reverse do
    acc ← mkAppM ``And.intro #[p, acc]
  return acc

/-- Eliminates a disjunction, sending its `i`th disjunct to `handlers[i]`. -/
partial def elimOr (chain : Expr) (handlers : Array Expr) (h : Expr) (i : Nat := 0) :
    ReconstructM Expr := do
  if i + 1 == handlers.size then
    return mkApp handlers[i]! h
  let some handler := handlers[i]? | throwError "missing disjunct"
  let rest := chain.appArg!
  withLocalDeclD `a chain.appFn!.appArg! fun a =>
    withLocalDeclD `b rest fun b => do
      mkAppM ``Or.elim #[h,
        ← mkLambdaFVars #[a] (mkApp handler a),
        ← mkLambdaFVars #[b] (← elimOr rest handlers b (i + 1))]

/--
`⟦parts⟧ ↔ ⟦the parts that are not the junction's unit⟧`, with those parts.

Absorbing a truth value leaves a junction with fewer parts than it found, which
is what simplifying one does wherever in a formula it sits.
-/
private partial def withoutUnits (fn unit : Name) (parts : Array Expr) :
    ReconstructM (Array Expr × Expr) := do
  let some head := parts[0]?
    | return (#[], ← mkAppOptM ``Iff.refl #[some (mkConst unit)])
  if parts.size == 1 then
    return (if head.isConstOf unit then #[] else #[head],
      ← mkAppOptM ``Iff.refl #[some head])
  let congruence := if fn == ``And then ``and_congr else ``or_congr
  let absorbHead := if fn == ``And then ``true_and else ``false_or
  let absorbTail := if fn == ``And then ``and_true else ``or_false
  let rest := parts.extract 1 parts.size
  let tail := junction fn unit rest
  let (keptRest, saysRest) ← withoutUnits fn unit rest
  if head.isConstOf unit then
    return (keptRest, ← mkAppM ``Iff.trans
      #[← mkAppM ``iff_of_eq #[mkApp (mkConst absorbHead) tail], saysRest])
  let onTail ← mkAppM congruence
    #[← mkAppOptM ``Iff.refl #[some head], saysRest]
  if keptRest.isEmpty then
    return (#[head], ← mkAppM ``Iff.trans
      #[onTail, ← mkAppM ``iff_of_eq #[mkApp (mkConst absorbTail) head]])
  return (#[head] ++ keptRest, onTail)

/-- Whether a junction is the right-nested one over exactly these parts. -/
private def rightNested (fn : Name) (e : Expr) (parts : Array Expr) : Bool :=
  Id.run do
    let mut rest := e
    for i in [0 : parts.size - 1] do
      unless rest.isAppOfArity fn 2 && rest.appFn!.appArg! == parts[i]! do
        return false
      rest := rest.appArg!
    return parts.back? == some rest

/--
`k`'s result, with each of `values` standing behind a local of the given type
rather than written out wherever it is used.

A congruence over a junction needs each part's equivalence twice, once each way
round, so writing them out doubles the term at every level of nesting. Bound
once and applied, the term stays the size of the proof it stands for.
-/
def standingFor (types values : Array Expr)
    (k : Array Expr → ReconstructM Expr) : ReconstructM Expr := do
  let decls := types.mapIdx fun i τ => (Name.mkSimple s!"e{i}", fun _ => pure τ)
  let abstracted ← withLocalDeclsD decls fun locals => do
    mkLambdaFVars locals (← k locals)
  return mkAppN abstracted values

/--
`a ↔ b`, where the two say the same thing up to the shape vampire keeps them in.

Congruence rather than implication, because a formula's parts sit in positions
of either polarity -- the left of an arrow reverses -- and only an equivalence
composes through all of them.

Vampire's parser reverses a junction's arguments, so its reading of a formula
differs from the goal's in the order of every conjunction and disjunction. The
parts are therefore paired in order and, failing that, in reverse: two fixed
pairings, not a search among them.
-/
partial def equivNormal (a b : Expr) : ReconstructM Expr := do
  -- A hypothesis reaches here through elaboration, so its type can still be a
  -- metavariable; every recogniser below would miss it.
  let a ← instantiateMVars a
  let b ← instantiateMVars b
  if ← isDefEq a b then
    return ← mkAppOptM ``Iff.refl #[some a]
  -- An equality can be stated either way round.
  if let (some (α, x, y), some (_, x', y')) := (a.eq?, b.eq?) then
    if (← isDefEq x y') && (← isDefEq y x') then
      return ← mkAppOptM ``eq_comm #[some α, some x, some y]
  -- Flattening cancels a double negation, so one side can carry two where the
  -- other carries none.
  if let some ia := a.not? then
    if let some iia := ia.not? then
      return ← mkAppM ``Iff.trans
        #[← mkAppOptM ``Classical.not_not #[some iia], ← equivNormal iia b]
  if let some ib := b.not? then
    if let some iib := ib.not? then
      return ← mkAppM ``Iff.trans
        #[← equivNormal a iib, ← mkAppM ``Iff.symm #[← mkAppOptM ``Classical.not_not #[some iib]]]
  if let (some ia, some ib) := (a.not?, b.not?) then
    return ← mkAppM ``not_congr #[← equivNormal ia ib]
  if let (some (a₁, a₂), some (b₁, b₂)) := (a.iff?, b.iff?) then
    return ← mkAppM ``iff_congr #[← equivNormal a₁ b₁, ← equivNormal a₂ b₂]
  -- Rectification drops a quantifier over a variable its body never mentions,
  -- so one side can carry a binder the other does not.
  for (x, y) in [(a, b), (b, a)] do
    if let .forallE _ d body _ := x then
      unless (← isProp d) && !body.hasLooseBVars do
        if !body.hasLooseBVars && !(y matches .forallE ..) then
          let dropped ← mkAppOptM ``forall_const
            #[some body, some d, some (← nonempty d)]
          let related ← if x == a then equivNormal body y else equivNormal y body
          return ← if x == a then mkAppM ``Iff.trans #[dropped, related]
            else mkAppM ``Iff.trans #[related, ← mkAppM ``Iff.symm #[dropped]]
    if x.isAppOfArity ``Exists 2 && !(y.isAppOfArity ``Exists 2) then
      if let .lam _ d body _ := x.appArg! then
        unless body.hasLooseBVars do
          let dropped ← mkAppOptM ``exists_const
            #[some body, some d, some (← nonempty d)]
          let related ← if x == a then equivNormal body y else equivNormal y body
          return ← if x == a then mkAppM ``Iff.trans #[dropped, related]
            else mkAppM ``Iff.trans #[related, ← mkAppM ``Iff.symm #[dropped]]
  match a, b with
  | .forallE _ ad ab _, .forallE _ bd bb _ =>
    if (← isProp ad) && (← isProp bd) && !ab.hasLooseBVars && !bb.hasLooseBVars then
      -- An arrow: its left side is negative, which is why this is an ↔.
      return ← mkAppM ``imp_congr #[← equivNormal ad bd, ← equivNormal ab bb]
    unless ← isDefEq ad bd do
      throwError "equiv/forall: cannot relate{indentExpr a}\nto{indentExpr b}"
    return ← withLocalDeclD `x ad fun x => do
      let inner ← equivNormal (ab.instantiate1 x) (bb.instantiate1 x)
      mkAppM ``forall_congr' #[← mkLambdaFVars #[x] inner]
  | _, _ =>
    if a.isAppOfArity ``Exists 2 && b.isAppOfArity ``Exists 2 then
      match a.appArg!, b.appArg! with
      | .lam _ ad abody _, .lam _ _ bbody _ =>
        return ← withLocalDeclD `x ad fun x => do
          let inner ← equivNormal (abody.instantiate1 x) (bbody.instantiate1 x)
          mkAppM ``exists_congr #[← mkLambdaFVars #[x] inner]
      | _, _ => throwError "equiv/exists: cannot relate{indentExpr a}\nto{indentExpr b}"
    for fn in [``And, ``Or] do
      if a.isAppOfArity fn 2 || b.isAppOfArity fn 2 then
        let ap := junctionParts fn a
        let bp := junctionParts fn b
        unless ap.size == bp.size do
          -- One side has a truth value the other has absorbed.
          let unit := if fn == ``And then ``True else ``False
          if rightNested fn a ap && rightNested fn b bp then
            let (aKept, aSays) ← withoutUnits fn unit ap
            let (bKept, bSays) ← withoutUnits fn unit bp
            if aKept.size == bKept.size && !aKept.isEmpty then
              let core ← equivNormal (junction fn unit aKept) (junction fn unit bKept)
              return ← mkAppM ``Iff.trans
                #[aSays, ← mkAppM ``Iff.trans
                  #[core, ← mkAppM ``Iff.symm #[bSays]]]
          throwError "junctions have {ap.size} and {bp.size} parts:\
            {indentExpr a}\nand{indentExpr b}"
        -- Part by part, in order. The translation emits a junction in the
        -- order vampire keeps it, so there is nothing to align: were the two
        -- to disagree, an `input` step would say so rather than a guess being
        -- made about which part answers to which. The two sides may associate
        -- differently, which is what flattening changes, so the parts are
        -- reached by index rather than by following either shape.
        let values ← ap.zipIdx.mapM fun (x, i) => equivNormal x bp[i]!
        -- Both sides right-nested over the same parts: the congruence follows
        -- their shape, one step per part. Taking them apart and putting them
        -- back together a part at a time would cost the square of their width,
        -- and a formula's own disjunction can be hundreds of literals wide.
        if rightNested fn a ap && rightNested fn b bp then
          let congruence := if fn == ``And then ``and_congr else ``or_congr
          let mut aTail := ap.back!
          let mut bTail := bp.back!
          let mut proof := values.back!
          for i in [0 : ap.size - 1] do
            let j := ap.size - 2 - i
            proof ← mkAppOptM congruence
              #[some ap[j]!, some bp[j]!, some aTail, some bTail,
                some values[j]!, some proof]
            aTail := mkApp2 (mkConst fn) ap[j]! aTail
            bTail := mkApp2 (mkConst fn) bp[j]! bTail
          return proof
        let types := ap.zipIdx.map fun (x, i) => mkApp2 (mkConst ``Iff) x bp[i]!
        return ← standingFor types values fun parts => do
          let mp (i : Nat) (h : Expr) : Expr :=
            mkApp4 (mkConst ``Iff.mp) ap[i]! bp[i]! parts[i]! h
          let mpr (i : Nat) (h : Expr) : Expr :=
            mkApp4 (mkConst ``Iff.mpr) ap[i]! bp[i]! parts[i]! h
          if fn == ``And then
            let forward ← withLocalDeclD `h a fun h => do
              mkLambdaFVars #[h] (← introParts b 0 fun j => do
                return mp j (← projectPart fn a j h))
            let backward ← withLocalDeclD `h b fun h => do
              mkLambdaFVars #[h] (← introParts a 0 fun j => do
                return mpr j (← projectPart fn b j h))
            return mkApp4 (mkConst ``Iff.intro) a b forward backward
          else
            let forward ← withLocalDeclD `h a fun h => do
              mkLambdaFVars #[h] (← elimParts a 0 (fun i hi =>
                injectPart fn b i (mp i hi)) h)
            let backward ← withLocalDeclD `h b fun h => do
              mkLambdaFVars #[h] (← elimParts b 0 (fun i hi =>
                injectPart fn a i (mpr i hi)) h)
            return mkApp4 (mkConst ``Iff.intro) a b forward backward
    throwError "cannot relate{indentExpr a}\nto{indentExpr b}"

/-- `a ↔ b`, for two ways of writing one formula. -/
def equiv (a b : Expr) : ReconstructM Expr := do
  let a ← instantiateMVars a
  let b ← instantiateMVars b
  if ← isDefEq a b then
    return ← mkAppOptM ``Iff.refl #[some a]
  let (na, pa) ← toNNF a
  let (nb, pb) ← toNNF b
  let core ← equivNormal na nb
  mkAppM ``Iff.trans
    #[pa, ← mkAppM ``Iff.trans #[core, ← mkAppM ``Iff.symm #[pb]]]

/--
Reads a step the way that step means it: polarity flipping divides the proof
into the steps before it and the steps after it, which mean the opposite by the
predicates it flipped.
-/
def reading (u : Vampire.Unit) (k : ReconstructM α) : ReconstructM α :=
  withReader (fun c =>
    { c with flipping := c.flipped != 0 && u.number >= c.flipped }) k

/--
The Lean proposition a step asserts. A clause is implicitly universally
quantified over its variables; a formula carries its own binders.

Splitting works on a clause under the assumption that the components it split
off are false, and writes those assumptions on the clause. So such a clause
says no more than that its literals follow from the names it holds under.
-/
private def buildConclusion (u : Vampire.Unit) : ReconstructM Expr := do
  let sorts := u.varSorts
  let stated ←
    match u.clause?, u.formula? with
    | some c, _ =>
      withVars sorts {} fun vars locals => do
        mkForallFVars locals (← clause vars c)
    | _, some f => formula sorts {} f
    | _, _ => throwError "step {u.number} is neither a clause nor a formula"
  let mut conclusion := stated
  for name in u.splits.reverse do
    conclusion ← mkArrow (← namedFormula name) conclusion
  return conclusion

/--
The proposition a step asserts, rebuilt once.

A rule that introduces a name has to bind it before this is called, which is
why it is taken on demand rather than handed to the rule ready-made.
-/
def conclusionOf (u : Vampire.Unit) : ReconstructM Expr := do
  if let some c := (← get).conclusions[u.number]? then
    return c
  let c ← reading u (buildConclusion u)
  modify fun s => { s with conclusions := s.conclusions.insert u.number c }
  return c

/--
Instantiates a premise at what the inference bound its variables to.

A variable the inference left alone is bound to itself, and one the conclusion
did not keep stands for nothing in particular, so `vars` has to cover the
premise's variables before this is called.
-/
def instantiateAt (parent : Vampire.Unit) (use : PremiseUse) (vars : Vars)
    (proof stated : Expr) : ReconstructM (Expr × Expr) := do
  let bound := Std.HashMap.ofList use.bindings.toList
  let mut args := #[]
  for (v, sortName) in parent.varSorts do
    match bound[v]? with
    | some image => args := args.push (← term vars image)
    | none => args := args.push (← someElement (← sortType sortName))
  return (mkAppN proof args, ← sharedClause (← instantiateForall stated args))

/--
What each of a premise's variables stands for under the substitution recorded
against it.

A term of the premise -- the subterm an inference rewrote, say -- is recorded
as the premise states it, so reading it back needs the premise's own variables
rather than the conclusion's.
-/
def substitutedVars (use : PremiseUse) (vars : Vars) : ReconstructM Vars := do
  let mut out : Vars := {}
  for (v, image) in use.bindings do
    out := out.insert v (← term vars image)
  return out

/--
Something of the right sort for each of a premise's variables the conclusion
did not keep.

Such a variable is instantiated at an arbitrary element, and both premises have
to agree on which: a substitution recorded against the premise can mention it.
-/
def coverVars (parent : Vampire.Unit) (vars : Vars) : ReconstructM Vars := do
  let mut vars := vars
  for (v, sortName) in parent.varSorts do
    unless vars.contains v do
      vars := vars.insert v (← someElement (← sortType sortName))
  return vars

/--
A proof of the same literal with an equality's arguments the other way round,
if it is an equality at all.

Vampire's equality literals are unordered: matching one against another tries
both orientations, so a literal carried into a conclusion or resolved against
can come back the other way round.
-/
def flipEquality (h : Expr) : ReconstructM (Option Expr) := do
  let stated ← instantiateMVars (← inferType h)
  if stated.isAppOfArity ``Eq 3 then
    return some (← mkAppM ``Eq.symm #[h])
  if let some inner := stated.not? then
    if inner.isAppOfArity ``Eq 3 then
      return some (← mkAppM ``Ne.symm #[h])
  return none

/--
The same literal with a double negation taken off, or put on.

A name and its negation are two names, and polarity flipping leaves a literal
meaning the opposite of what it did, so the two can meet with one negation
between them either way round.
-/
def doubleNegations (h : Expr) : ReconstructM (Array Expr) := do
  let stated ← instantiateMVars (← inferType h)
  let mut out := #[]
  if let some inner := stated.not? then
    if let some innermost := inner.not? then
      out := out.push (← mkAppM ``Iff.mp
        #[← mkAppOptM ``Classical.not_not #[some innermost], h])
  out := out.push (← mkAppM ``Iff.mpr
    #[← mkAppOptM ``Classical.not_not #[some stated], h])
  return out

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

/-- `a` with its double negations stripped. -/
private partial def stripped (a : Expr) : Expr :=
  match a.not? with
  | some inner =>
    match inner.not? with
    | some innermost => stripped innermost
    | none => a
  | none => a

/-- `a` with its double negations stripped, and that it says the same. -/
private partial def strippedOf (a : Expr) : ReconstructM (Expr × Expr) := do
  if let some inner := a.not? then
    if let some innermost := inner.not? then
      let (stripped, proof) ← strippedOf innermost
      return (stripped, ← mkAppM ``Iff.trans
        #[← mkAppOptM ``Classical.not_not #[some innermost], proof])
  return (a, ← mkAppOptM ``Iff.refl #[some a])

/--
`a ↔ b`, when the two differ only by double negations.

Clausification records what it put in a clause before its own normalisation
has unwrapped a negation into the sign it carries, so the two can meet with a
double negation between them.
-/
def sameUpToDoubleNegation (a b : Expr) : ReconstructM (Option Expr) := do
  -- Asked of every literal of a clause against every literal of the clause it
  -- was reached from, so what says the two are the same is built only once one
  -- knows they are.
  unless ← isDefEq (stripped a) (stripped b) do return none
  let (_, saysA) ← strippedOf a
  let (_, saysB) ← strippedOf b
  return some (← mkAppM ``Iff.trans #[saysA, ← mkAppM ``Iff.symm #[saysB]])

/--
`target` from two complementary literals.

Which of the two is the negation of the other is settled by comparing them, and
an equality can be stated either way round, so one of them may have to be
turned about first.
-/
def closeComplementary (target h₁ h₂ : Expr) : ReconstructM Expr := do
  let (positive, negative) ←
    if (asNegation (← instantiateMVars (← inferType h₁))).isSome then pure (h₂, h₁)
    else pure (h₁, h₂)
  let stated ← instantiateMVars (← inferType positive)
  let some refuted := asNegation (← instantiateMVars (← inferType negative))
    | throwError "the literals resolved on are not complementary"
  let positive ←
    if ← isDefEq refuted stated then pure positive
    else
      let some flipped ← flipEquality positive
        | throwError "the literals{indentExpr stated}\nand{indentExpr refuted}\n\
          are not complementary"
      pure flipped
  mkAppOptM ``absurd
    #[some (← inferType positive), some target, some positive, some negative]

/--
A proof of `target` from one of its literals, found by lookup.

A simplifying or generating inference carries every literal it did not act on
into the conclusion unchanged, so where the literal lands is not searched for.
-/
def placeLiteral (target : Expr) (h : Expr) : ReconstructM Expr := do
  let parts := junctionParts ``Or target
  -- The literal is usually the very one the conclusion was built from, so it
  -- is looked for as it stands before anything is made of it: a clause of a
  -- few hundred literals is placed a literal at a time, and building the ways
  -- a literal can be stated differently for each of them costs more than the
  -- inferences do.
  let place (candidate : Expr) : ReconstructM (Option Expr) := do
    let stated ← instantiateMVars (← inferType candidate)
    if let some i := parts.findIdx? (· == stated) then
      return some (← injectPart ``Or target i candidate)
    for (part, i) in parts.zipIdx do
      if ← isDefEq part stated then
        return some (← injectPart ``Or target i candidate)
    return none
  if let some placed ← place h then
    return placed
  if let some flipped ← flipEquality h then
    if let some placed ← place flipped then
      return placed
  for candidate in ← doubleNegations h do
    if let some placed ← place candidate then
      return placed
  throwError "the literal{indentExpr (← instantiateMVars (← inferType h))}\
    \nis not among{indentExpr target}"

/--
`¬pᵢ` for each part of a disjunction, from a refutation of the whole.

Putting a part back into the disjunction to refute it takes a constructor for
each part before it, so refuting every part of a clause costs the square of its
width; each of these is one step from the one beside it.
-/
def refuters (parts : Array Expr) (against : Expr) : Array Expr := Id.run do
  if parts.size == 0 then return #[]
  if parts.size == 1 then return #[against]
  -- `tails[i]` is what the parts from `i` on say, each built from the next.
  let mut tails := parts
  for i in [0 : parts.size - 1] do
    let j := parts.size - 2 - i
    tails := tails.set! j (mkApp2 (mkConst ``Or) parts[j]! tails[j + 1]!)
  let mut out := #[]
  let mut against := against
  for i in [0 : parts.size - 1] do
    out := out.push (.lam `d parts[i]!
      (mkApp against (mkApp3 (mkConst ``Or.inl) parts[i]! tails[i + 1]! (.bvar 0)))
      .default)
    against := .lam `x tails[i + 1]!
      (mkApp against (mkApp3 (mkConst ``Or.inr) parts[i]! tails[i + 1]! (.bvar 0)))
      .default
  return out.push against

/--
`source → target`, following the shape of both at once.

Putting a clause's literals back into the conclusion one at a time writes out
a constructor for each literal before the one being placed, so carrying a
clause of `k` literals costs `k²` -- at every step that clause takes part in.
Walking the two disjunctions together costs `k`.

`inStep i a t` says what the `i`th literal of `source` gives for `t`, the
literal of `target` the walk has reached. A literal that gives something else
is left to `whole`, which has to account for it against all of `target` that
is left; where it cannot, the two do not run in step and `none` says so.
-/
partial def carrying (source target : Expr) (i : Nat)
    (inStep : Nat → Expr → Expr → ReconstructM (Option Expr))
    (whole : Nat → Expr → Expr → ReconstructM (Option Expr)) :
    ReconstructM (Option Expr) := do
  let stepping (from_ t : Expr) : ReconstructM (Option Expr) :=
    withLocalDeclD `a from_ fun a => do
      match ← inStep i a t with
      | some p => return some (← mkLambdaFVars #[a] p)
      | none => return none
  let accounting (from_ : Expr) : ReconstructM (Option Expr) :=
    withLocalDeclD `a from_ fun a => do
      match ← whole i a target with
      | some p => return some (← mkLambdaFVars #[a] p)
      | none => return none
  unless source.isAppOfArity ``Or 2 do
    if target.isAppOfArity ``Or 2 then
      let t := target.appFn!.appArg!
      let restT := target.appArg!
      if let some f ← stepping source t then
        return some (.lam `x source
          (mkApp3 (mkConst ``Or.inl) t restT (mkApp f (.bvar 0))) .default)
    return ← accounting source
  let s := source.appFn!.appArg!
  let restS := source.appArg!
  if target.isAppOfArity ``Or 2 then
    let t := target.appFn!.appArg!
    let restT := target.appArg!
    if let some f ← stepping s t then
      let some rest ← carrying restS restT (i + 1) inStep whole | return none
      return some (mkApp6 (mkConst ``Or.imp) s t restS restT f rest)
  -- Not the literal the target has reached: this one has to be accounted for
  -- against what is left of it, which stays where it is.
  let some f ← accounting s | return none
  let some rest ← carrying restS target (i + 1) inStep whole | return none
  return some (.lam `x source
    (mkApp6 (mkConst ``Or.elim) s restS target (.bvar 0) f rest) .default)

/--
`target` from a proof of `source`, whose literals the step carried into it.

The two say the same thing unless the step changed a literal, so the common
case is that nothing has to be done at all.
-/
def carryWith (source target proof : Expr)
    (literal : Nat → Expr → ReconstructM Expr) : ReconstructM Expr := do
  let inStep : Nat → Expr → Expr → ReconstructM (Option Expr) := fun i a t => do
    let given ←
      try literal i a
      catch _ => return none
    if ← isDefEq (← instantiateMVars (← inferType given)) t then
      return some given
    return none
  let whole : Nat → Expr → Expr → ReconstructM (Option Expr) := fun i a rest => do
    try return some (← placeLiteral rest (← literal i a))
    catch _ => return none
  match ← carrying source target 0 inStep whole with
  | some f => return mkApp f proof
  | none =>
    elimParts source 0 (fun i h => do placeLiteral target (← literal i h)) proof

/--
`target` from a proof of `source`, where the step acted on some of its
literals and carried the rest.

`onSpecial i h rest` accounts for one it acted on against all of `target` that
is left; `onKept i h` says what one it carried gives.
-/
def carryPast (source target proof : Expr) (special : Nat → Bool)
    (onSpecial : Nat → Expr → Expr → ReconstructM Expr)
    (onKept : Nat → Expr → ReconstructM Expr := fun _ h => pure h) :
    ReconstructM Expr := do
  let inStep : Nat → Expr → Expr → ReconstructM (Option Expr) := fun i a t => do
    if special i then return none
    let given ←
      try onKept i a
      catch _ => return none
    if ← isDefEq (← instantiateMVars (← inferType given)) t then
      return some given
    return none
  let whole : Nat → Expr → Expr → ReconstructM (Option Expr) := fun i a rest => do
    try
      if special i then
        return some (← onSpecial i a rest)
      return some (← placeLiteral rest (← onKept i a))
    catch _ => return none
  match ← carrying source target 0 inStep whole with
  | some f => return mkApp f proof
  | none =>
    elimParts source 0 (fun i h => do
      if special i then onSpecial i h target
      else placeLiteral target (← onKept i h)) proof

/-- `carryWith`, for a step that left every literal as it was. -/
def carryAll (source target proof : Expr) : ReconstructM Expr := do
  if ← isDefEq source target then
    return proof
  carryWith source target proof fun _ h => pure h

/-- A step of vampire's proof, with everything needed to justify it. -/
structure Step where
  unit : Vampire.Unit
  rule : InferenceRule
  /-- The premises: a proof of each, paired with what it proves. -/
  premises : Array (Expr × Expr)
  /--
  The names the step holds under, each with the hypothesis standing for it.

  Discharged into the conclusion by the framework, so a rule only reads these
  where what it does depends on them, as splitting's own rules do.
  -/
  assumed : Array (String × Expr)

/--
What a step concludes, without the assumptions it holds under: what a rule has
to prove, the framework having put those assumptions in scope.
-/
def coreOf (u : Vampire.Unit) : ReconstructM Expr := do
  let mut core ← conclusionOf u
  for name in u.splits do
    unless core.isForall do
      throwError "step {u.number} holds under `{name}` but states        {indentExpr core}"
    core := core.bindingBody!
  return core

/-- The step's conclusion, as a Lean proposition. -/
def Step.conclusion (step : Step) : ReconstructM Expr := coreOf step.unit

/--
How a step used the premise in position `i` among its parents.

A premise can be used twice -- an inference can take a clause as both of its
premises -- so a use is found by position rather than by which premise it is,
counting the uses of that premise in the order they were recorded.
-/
def Step.useAt (step : Step) (i : Nat) : ReconstructM PremiseUse := do
  let some parent := step.unit.parents[i]?
    | throwError "step {step.unit.number} has no premise in position {i}"
  let earlier := (step.unit.parents.extract 0 i).countP (·.number == parent.number)
  let uses := step.unit.premiseUses.filter (·.premise == parent.number)
  let some use := uses[earlier]?
    | throwError "step {step.unit.number} did not record how it used step \
      {parent.number}"
  return use

/--
A step whose conclusion restates its premise's literals, whatever it did to
them.

The literals are taken as vampire has them rather than found by taking the
clause apart: a literal naming a subformula stands for a whole formula, and the
disjuncts of what it rebuilds to are not literals of the clause.
-/
def relateLiterals (step : Step) (parent : Vampire.Unit)
    (premiseProof premiseStated : Expr) : ReconstructM Expr := do
  let some source := parent.clause?
    | -- These rules run over formulas too, before clausification, and there a
      -- formula's shape is what it says.
      return mkApp (← implies (← instantiateMVars premiseStated)
        (← step.conclusion)) premiseProof
  let some conclusion := step.unit.clause?
    | return mkApp (← implies (← instantiateMVars premiseStated)
        (← step.conclusion)) premiseProof
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut kept : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      kept := kept.insert v x
    -- Dropping a literal can drop the last occurrence of a variable with it.
    let vars ← coverVars parent kept
    let mut args := #[]
    for (v, sortName) in parent.varSorts do
      match vars[v]? with
      | some x => args := args.push x
      | none => args := args.push (← someElement (← sortType sortName))
    -- The premise's literals are read as the premise means them: polarity
    -- flipping divides the proof, and this step can be the line itself.
    let sourceParts ← reading parent (source.literals.mapM (literal vars))
    let targetParts ← conclusion.literals.mapM (Reconstruct.literal vars)
    -- As in `placeLiteral`: a literal is looked for as it stands before the
    -- other ways of stating it are built, which for a clause of a few hundred
    -- literals is the whole cost of the step.
    let placeIn (chain candidate : Expr) : ReconstructM (Option Expr) := do
      let parts := if chain == target then targetParts else junctionParts ``Or chain
      let says ← instantiateMVars (← inferType candidate)
      if let some i := parts.findIdx? (· == says) then
        return some (← injectGiven parts i candidate)
      for (part, i) in parts.zipIdx do
        if ← isDefEq part says then
          return some (← injectGiven parts i candidate)
      return none
    -- Every literal the step kept is one of the conclusion's; one it dropped
    -- has to be refutable on its own, as `t ≠ t` is.
    let says (candidate : Expr) : ReconstructM Expr := do
      instantiateMVars (← inferType candidate)
    -- A literal the clause repeats is left where it is until its last
    -- occurrence, so that the earlier ones still have it to be placed at.
    let recurs := sourceParts.mapIdx fun i part =>
      (sourceParts.extract (i + 1) sourceParts.size).contains part
    let inStep : Nat → Expr → Expr → ReconstructM (Option Expr) := fun i h t => do
      if recurs[i]! then return none
      for candidate in #[h] ++ (← doubleNegations h) ++ (← flipEquality h).toArray do
        if ← isDefEq (← says candidate) t then
          return some candidate
      return none
    let accountedFor (h rest : Expr) : ReconstructM (Option Expr) := do
      let stated ← says h
      for candidate in #[h] ++ (← doubleNegations h) ++ (← flipEquality h).toArray do
        if let some placed ← placeIn rest candidate then
          return some placed
      if let some inner := asNegation stated then
        if let some (_, lhs, rhs) := inner.eq? then
          if ← isDefEq lhs rhs then
            return some (← mkAppOptM ``absurd
              #[some inner, some rest, some (← mkEqRefl lhs), some h])
      if stated.isConstOf ``False then
        return some (← mkAppOptM ``False.elim #[some rest, some h])
      return none
    -- The literals usually run in step, and then the clause is carried across
    -- following the shape of both rather than put back a literal at a time.
    let whole : Nat → Expr → Expr → ReconstructM (Option Expr) :=
      fun _ h rest => accountedFor h rest
    if let some carried ←
        carrying (junction ``Or ``False sourceParts) target 0 inStep whole then
      return ← mkLambdaFVars xs (mkApp carried (mkAppN premiseProof args))
    let body ← elimGiven sourceParts (fun _ h => do
      match ← accountedFor h target with
      | some placed => return placed
      | none =>
        throwError "the literal{indentExpr (← says h)}\nis neither among\
          {indentExpr target}\nnor refutable on its own")
      (mkAppN premiseProof args)
    mkLambdaFVars xs body

/--
Stands in for a rule that has no implementation yet. The step's conclusion is
still rebuilt and checked, so only the justification is missing.
-/
def unimplemented (step : Step) : ReconstructM Expr := do
  modify fun s => { s with unimplemented := s.unimplemented.insert step.rule.name }
  mkSorry (← step.conclusion) (synthetic := false)

end Vampire.Reconstruct
