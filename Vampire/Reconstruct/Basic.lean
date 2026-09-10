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
  let witness := mkApp3 (mkConst ``Classical.epsilon [← getLevel τ]) τ inst p
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
  return mkAppN (← symbolExpr symbol.name) (← t.args.mapM (term vars))

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
  return if polarity then atom else mkApp (mkConst ``Not) atom

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
    let some raw := f.name? | throwError "named formula without a name"
    namedFormula raw
  | c => throwError "cannot rebuild a formula with connective {repr c}"


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
  let n := (junctionParts fn left).size
  if i < n then
    projectPart fn left i (← mkAppM ``And.left #[h])
  else
    projectPart fn chain.appArg! (i - n) (← mkAppM ``And.right #[h])

/-- A proof of a whole disjunction from a proof of its `i`th part. -/
partial def injectPart (fn : Name) (chain : Expr) (i : Nat) (h : Expr) :
    ReconstructM Expr := do
  if !chain.isAppOfArity fn 2 then
    return h
  let left := chain.appFn!.appArg!
  let right := chain.appArg!
  let n := (junctionParts fn left).size
  if i < n then
    mkAppOptM ``Or.inl #[none, some right, some (← injectPart fn left i h)]
  else
    mkAppOptM ``Or.inr #[some left, none, some (← injectPart fn right (i - n) h)]

/-- Eliminates a disjunction, sending its `i`th part to `handler i`. -/
partial def elimParts (chain : Expr) (offset : Nat)
    (handler : Nat → Expr → ReconstructM Expr) (h : Expr) : ReconstructM Expr := do
  if !chain.isAppOfArity ``Or 2 then
    return ← handler offset h
  let left := chain.appFn!.appArg!
  let right := chain.appArg!
  let n := (junctionParts ``Or left).size
  withLocalDeclD `a left fun a =>
    withLocalDeclD `b right fun b => do
      mkAppM ``Or.elim #[h,
        ← mkLambdaFVars #[a] (← elimParts left offset handler a),
        ← mkLambdaFVars #[b] (← elimParts right (offset + n) handler b)]

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
  if i == 0 then
    mkAppOptM ``Or.inl #[none, some (junction ``Or ``False rest), some h]
  else
    mkAppOptM ``Or.inr
      #[some parts[0]!, none, some (← injectGiven rest (i - 1) h)]

/-- Eliminates a disjunction of the given parts, sending the `i`th to `handler i`. -/
partial def elimGiven (parts : Array Expr)
    (handler : Nat → Expr → ReconstructM Expr) (h : Expr) (offset : Nat := 0) :
    ReconstructM Expr := do
  if parts.size <= 1 then return ← handler offset h
  let rest := parts.extract 1 parts.size
  let tail := junction ``Or ``False rest
  withLocalDeclD `a parts[0]! fun a =>
    withLocalDeclD `b tail fun b => do
      mkAppM ``Or.elim #[h,
        ← mkLambdaFVars #[a] (← handler offset a),
        ← mkLambdaFVars #[b] (← elimGiven rest handler b (offset + 1))]

/-- The `i`th part of a conjunction of the given parts, from a proof of the whole. -/
partial def projectGiven (parts : Array Expr) (i : Nat) (h : Expr) :
    ReconstructM Expr := do
  if parts.size <= 1 then return h
  if i == 0 then
    mkAppM ``And.left #[h]
  else
    projectGiven (parts.extract 1 parts.size) (i - 1) (← mkAppM ``And.right #[h])

/-- A conjunction of the given parts, from a proof of each. -/
partial def introGiven (parts : Array Expr)
    (component : Nat → ReconstructM Expr) (offset : Nat := 0) :
    ReconstructM Expr := do
  if parts.size == 0 then return mkConst ``True.intro
  if parts.size == 1 then return ← component offset
  mkAppM ``And.intro
    #[← component offset,
      ← introGiven (parts.extract 1 parts.size) component (offset + 1)]

/-- Builds a conjunction from a proof of each of its parts. -/
partial def introParts (chain : Expr) (offset : Nat)
    (component : Nat → ReconstructM Expr) : ReconstructM Expr := do
  if !chain.isAppOfArity ``And 2 then
    return ← component offset
  let left := chain.appFn!.appArg!
  let right := chain.appArg!
  let n := (junctionParts ``And left).size
  mkAppM ``And.intro
    #[← introParts left offset component, ← introParts right (offset + n) component]

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
      throwError "implies: the disjunct{indentExpr d}\nis neither among\
        {indentExpr target}\nnor refutable"
    let branches ← (junctionParts ``Or source).mapM branchFor
    withLocalDeclD `h source fun h => do
      mkLambdaFVars #[h] (← elimParts source 0 (fun i hi => do
        let some branch := branches[i]? | throwError "missing disjunct"
        return mkApp branch hi) h)



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
          throwError "junctions have {ap.size} and {bp.size} parts:\
            {indentExpr a}\nand{indentExpr b}"
        -- Part by part, in order. The translation emits a junction in the
        -- order vampire keeps it, so there is nothing to align: were the two
        -- to disagree, an `input` step would say so rather than a guess being
        -- made about which part answers to which. The two sides may associate
        -- differently, which is what flattening changes, so the parts are
        -- reached by index rather than by following either shape.
        let parts ← ap.zipIdx.mapM fun (x, i) => equivNormal x bp[i]!
        if fn == ``And then
          let forward ← withLocalDeclD `h a fun h => do
            mkLambdaFVars #[h] (← introParts b 0 fun j => do
              mkAppM ``Iff.mp #[parts[j]!, ← projectPart fn a j h])
          let backward ← withLocalDeclD `h b fun h => do
            mkLambdaFVars #[h] (← introParts a 0 fun j => do
              mkAppM ``Iff.mpr #[parts[j]!, ← projectPart fn b j h])
          return ← mkAppM ``Iff.intro #[forward, backward]
        else
          let forward ← withLocalDeclD `h a fun h => do
            mkLambdaFVars #[h] (← elimParts a 0 (fun i hi => do
              injectPart fn b i (← mkAppM ``Iff.mp #[parts[i]!, hi])) h)
          let backward ← withLocalDeclD `h b fun h => do
            mkLambdaFVars #[h] (← elimParts b 0 (fun i hi => do
              injectPart fn a i (← mkAppM ``Iff.mpr #[parts[i]!, hi])) h)
          return ← mkAppM ``Iff.intro #[forward, backward]
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
  return (mkAppN proof args, ← instantiateForall stated args)

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
A proof of `target` from one of its literals, found by lookup.

A simplifying or generating inference carries every literal it did not act on
into the conclusion unchanged, so where the literal lands is not searched for.
-/
def placeLiteral (target : Expr) (h : Expr) : ReconstructM Expr := do
  let parts := junctionParts ``Or target
  for candidate in #[some h, ← flipEquality h] ++ (← doubleNegations h).map some do
    let some candidate := candidate | continue
    let stated ← instantiateMVars (← inferType candidate)
    for (part, i) in parts.zipIdx do
      if ← isDefEq part stated then
        return ← injectPart ``Or target i candidate
  throwError "the literal{indentExpr (← instantiateMVars (← inferType h))}\
    \nis not among{indentExpr target}"

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
Stands in for a rule that has no implementation yet. The step's conclusion is
still rebuilt and checked, so only the justification is missing.
-/
def unimplemented (step : Step) : ReconstructM Expr := do
  modify fun s => { s with unimplemented := s.unimplemented.insert step.rule.name }
  mkSorry (← step.conclusion) (synthetic := false)

end Vampire.Reconstruct
