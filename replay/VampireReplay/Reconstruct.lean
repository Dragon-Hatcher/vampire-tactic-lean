import VampireReplay.Reconstruct.Basic
import VampireReplay.Reconstruct.Rules

namespace Vampire.Reconstruct

open Lean Meta

/-- Beta-reduces throughout, so that a reported mismatch is a real one. -/
private def betaAll (e : Expr) : MetaM Expr :=
  Meta.transform e (post := fun e => return .done e.headBeta)

/-- What came of replaying a proof. -/
structure Outcome where
  /-- A proof of `False` from the goal's hypotheses. -/
  proof : Expr
  /-- Rules that fell to `unimplemented`, so the term still contains `sorry`. -/
  unimplemented : Array String
  /-- How many steps of vampire's the refutation rests on, all of them replayed. -/
  steps : Nat

/--
The steps a refutation rests on, each after the ones it was inferred from.

A step is shared by as many steps as were inferred from it, so the derivation
is a graph rather than a tree; it is walked once.
-/
private partial def order (u : Vampire.Unit) :
    StateM (Std.HashSet UInt32 × Array Vampire.Unit) PUnit := do
  if (← get).1.contains u.number then return
  modify fun (seen, order) => (seen.insert u.number, order)
  for parent in u.parents do
    order parent
  modify fun (seen, order) => (seen, order.push u)

/--
Replays a step, from what proves the steps it was inferred from.

@b context is the context the whole proof is built in: the goal's, plus a local
for each step already replayed. Anything else a step's term mentions is a local
some rule made and failed to abstract.
-/
private def replay (u : Vampire.Unit) (context : LocalContext) :
    ReconstructM (Expr × Expr) := reading u do
  let some rule := u.rule?
    | throwError "step {u.number} has unknown inference rule {u.ruleIndex}"
  let premises ← u.parents.mapM fun parent => do
    let some proof := (← get).proofs[parent.number]?
      | throwError "step {u.number} was reached before step {parent.number}, \
        which it was inferred from"
    return (parent, proof, ← conclusionOf parent)
  -- A clause splitting worked on holds only under the names it was split
  -- against, so those are assumed here and discharged into the conclusion. A
  -- premise assumes some of the same names, and is applied to them; one
  -- assuming anything else is left as it stands, for a rule that knows what
  -- to make of it -- which is what the splitting rules themselves do.
  let names := u.splits
  let types ← names.mapM namedFormula
  let decls := types.mapIdx fun i τ =>
    (Name.mkSimple s!"a{i}", fun _ => pure τ)
  let proof ← withLocalDeclsD decls fun assumed => do
    let discharged ← premises.mapM fun (parent, proof, stated) => do
      unless parent.splits.all (names.contains ·) do
        return (proof, stated)
      let mut proof := proof
      let mut stated := stated
      for name in parent.splits do
        let some (_, h) := (names.zip assumed).find? (·.1 == name)
          | throwError "step {u.number} does not assume `{name}`"
        proof := mkApp proof h
        stated ← instantiateForall stated #[h]
      return (proof, stated)
    let body ←
      try
        ofRule { unit := u, rule, premises := discharged
                 assumed := names.zip assumed }
      catch e =>
        throwError "replaying {rule.name} for step {u.number}: {e.toMessageData}"
    mkLambdaFVars assumed body
  -- Asked for after the rule has run, so that a rule introducing a name has
  -- bound it first; it is rebuilt once and cached.
  let conclusion ←
    try
      conclusionOf u
    catch e =>
      throwError "stating step {u.number} ({rule.name}): {e.toMessageData}"
  -- Two ways a rule can build something the elaborator accepts and the kernel
  -- does not, both of which otherwise arrive as an anonymous kernel error once
  -- the whole proof is assembled. Asked for by `checkSteps`, which is off by
  -- default: see the field.
  if (← read).checkSteps then
    -- A rule that leaks a local it introduced -- a clause's variable, a
    -- hypothesis it assumed -- still passes `inferType`, which reads that
    -- local's type out of the context it was made in.
    let leaked := (Lean.collectFVars {} (← instantiateMVars proof)).fvarIds.filter
      fun id => (context.find? id).isNone
    unless leaked.isEmpty do
      throwError "reconstruction of {rule.name} for step {u.number} leaked the \
        local{indentD (.joinSep (leaked.toList.map fun id => m!"{Expr.fvar id}") ", ")}\n\
        which is out of scope in the proof it was built for"
    -- And that the term is well-typed at all, which `inferType` does not say:
    -- it reads an application's type off the head's signature and the
    -- arguments given for the head's own binders, and never looks at the rest.
    try
      Meta.check proof
    catch e =>
      throwError "reconstruction of {rule.name} for step {u.number} is \
        ill-typed: {e.toMessageData}"
  -- And that it is a proof of what the step claims, which being well-typed does
  -- not say; a wrong implementation is then caught here rather than at `assign`.
  unless ← isDefEq (← inferType proof) conclusion do
    throwError "reconstruction of {rule.name} for step {u.number} proves\
      {indentExpr (← betaAll (← inferType proof))}\n\
      but the step claims{indentExpr (← betaAll conclusion)}"
  return (proof, conclusion)

/--
Every step of a refutation, each bound to what proves it.

Bound rather than written out: a step a dozen others were inferred from is
otherwise checked against what each of them expects of it, and what they expect
is a clause, which is not a small thing to compare.
-/
private partial def replayAll (steps : Array Vampire.Unit) (i : Nat)
    (bound : Array Expr) (refutation : Vampire.Unit) : ReconstructM Expr := do
  let some u := steps[i]?
    | do
      let some proof := (← get).proofs[refutation.number]?
        | throwError "the refutation was not replayed"
      let started ← IO.monoMsNow
      let closed ← bindLets bound proof (share := true)
      trace[vampire.timing] "binding the {bound.size} steps took \
        {(← IO.monoMsNow) - started}ms"
      return closed
  let started ← IO.monoMsNow
  let (value, stated) ← replay u (← getLCtx)
  trace[vampire.timing] "step {(u.rule?.map (·.name)).getD "?"} took \
    {(← IO.monoMsNow) - started}ms"
  withLetDecl (Name.mkSimple s!"s{u.number}") stated value fun s => do
    modify fun st => { st with proofs := st.proofs.insert u.number s }
    replayAll steps (i + 1) (bound.push s) refutation

/-- The symbols a term mentions, by name. -/
private partial def termSymbols (t : Term) (acc : Array String) : Array String :=
  if t.isVar then acc
  else t.args.foldl (fun acc a => termSymbols a acc)
    (match t.symbol? with | some s => acc.push s.name | none => acc)

/-- The symbols a literal mentions, by name. -/
private def literalSymbols (l : Literal) (acc : Array String) : Array String :=
  l.args.foldl (fun acc a => termSymbols a acc)
    (match l.symbol? with | some s => acc.push s.name | none => acc)

/-- The symbols a formula mentions, by name. -/
private partial def formulaSymbols (f : Formula) (acc : Array String) : Array String :=
  let acc := match f.literal? with | some l => literalSymbols l acc | none => acc
  f.subformulas.foldl (fun acc g => formulaSymbols g acc) acc

/-- The symbols a unit's statement mentions, by name. -/
private def unitSymbols (u : Vampire.Unit) : Array String :=
  match u.clause?, u.formula? with
  | some c, _ => c.literals.foldl (fun acc l => literalSymbols l acc) #[]
  | none, some f => formulaSymbols f #[]
  | none, none => #[]

/-- One thing the proof introduces, and what binds it. -/
private structure Introduction where
  /--
  When the latest symbol it is made of was created. Vampire makes a symbol of
  symbols that exist already -- a name of the formula it names, a skolem of
  the formula it witnesses -- so binding in this order binds what each is made
  of first. Skolems introduced together go when the first of them was created,
  since what speaks of it can be made before the rest are.
  -/
  created : Nat
  /--
  Whether it introduces a symbol, which is then the latest it is made of: it
  goes before anything else made of that symbol.
  -/
  introduces : Bool
  /-- The step that records it. -/
  unit : Vampire.Unit
  bind : ReconstructM PUnit

/--
Binds every name the proof introduces, before any step is replayed.

Neither kind of introduction can be relied on to come first while replaying.
Splitting makes a definition a premise of the steps using its name, but naming
does not: it replaces a subformula in place and states the definition as a
separate root. And a definition's own body can mention a skolem, while what an
existential is skolemised over can mention a named predicate. Vampire made each
symbol of ones that existed already, and records when each was created, so they
are bound in that order.
-/
private def bindIntroduced : ReconstructM PUnit := do
  let proof := (← read).proof
  -- Only what replay binds: the goal's symbols are there already, and vampire
  -- makes a numeral's or an interpreted operation's symbol whenever it first
  -- meets one, which says nothing about what anything is made of.
  let goal := (← read).symbols.symbols
  let created : Std.HashMap String Nat :=
    (proof.functions ++ proof.predicates).foldl (init := {}) fun m s =>
      if s.numeral?.isSome || s.name.startsWith "$" || goal.contains s.name then m
      else m.insert s.name s.created
  let latest (names : Array String) : Nat :=
    names.foldl (fun m n => max m (created.getD n 0)) 0
  -- Skolems are introduced several at once, and what speaks of the first of
  -- them can be made before the last is: such a binding goes when its first
  -- symbol was created.
  let earliest (skolems : Array Term) : Nat :=
    (skolems.filterMap fun t => t.symbol?.map fun s => created.getD s.name 0).foldl min
      (latest (skolems.foldl (fun acc t => termSymbols t acc) #[]))
  -- What clausification named, which nothing in the proof states: the name
  -- stands for the formula, so binding it to that formula is what it means.
  let bindNaming (u : Vampire.Unit) (name : String) (arguments : Array UInt32)
      (named : Formula) : ReconstructM PUnit := do
    if ← resolvesSymbol name then return
    let sorts := u.varSorts
    let bound := boundSorts sorts arguments
    unless bound.size == arguments.size do
      throwError "step {u.number} named a formula over variables it does \
        not record the sorts of"
    let definition ← reading u <| withVars bound {} fun vars locals => do
      mkLambdaFVars locals (← formula sorts vars named)
    defineIntroduced name definition
  let mut introductions : Array Introduction := #[]
  -- Clausification steps several of its clauses share, each bound once.
  let mut steps : Std.HashSet UInt32 := {}
  for u in proof.units do
    if (u.rule?.map Definition.introducesName).getD false then
      introductions := introductions.push
        { created := latest (unitSymbols u), unit := u, bind := Definition.register u
          -- An avatar definition names a component by no symbol.
          introduces := u.rule? != some .avatarDefinition }
    if u.rule? == some .generalSplittingComponent then
      introductions := introductions.push
        { created := latest (unitSymbols u), introduces := true, unit := u
          bind := Splitting.register u }
    for (name, arguments, named) in u.namings do
      introductions := introductions.push
        { created := latest (formulaSymbols named #[name]), introduces := true, unit := u
          bind := bindNaming u name arguments named }
    -- Clausification records the steps it took, which say where each of its
    -- skolemisations happened; anything else is read off the unit's recorded
    -- skolems and the formula they came from.
    if let some clause := u.genClause? then
      let (sorts, skolems) := Clausify.skolemContext u
      if skolems.isEmpty then continue
      for c in Clausify.chainTo clause do
        if steps.contains c.index then continue
        let introduced ← Clausify.skolemsOfStep sorts c
        if introduced.isEmpty then continue
        steps := steps.insert c.index
        introductions := introductions.push
          { created := earliest (introduced.map (·.2)), introduces := true, unit := u
            bind := Clausify.registerStep sorts skolems c }
    else unless u.skolems.isEmpty do
      -- Where the existentials a unit's skolems came from are written down:
      -- its own formula, unless a skolemisation step transformed a formula
      -- into it.
      let source : Option (Vampire.Unit × Formula) :=
        match u.rule? with
        | some .skolemize => do
          let parent ← u.parents[0]?
          return (parent, ← parent.formula?)
        | _ => do return (u, ← u.formula?)
      let some (owner, f) := source
        | throwError "step {u.number} records skolems but states no formula"
      introductions := introductions.push
        { created := earliest (u.skolems.map (·.2)), introduces := true, unit := u
          bind := registerSkolems (owner.varSorts ++ u.varSorts)
            (Std.HashMap.ofList u.skolems.toList) {} f }
  let ordered := introductions.zipIdx.qsort fun (a, i) (b, j) =>
    a.created < b.created
      || (a.created == b.created && (a.introduces && !b.introduces
        || (a.introduces == b.introduces && i < j)))
  for (introduction, _) in ordered do
    try
      introduction.bind
    catch e =>
      let u := introduction.unit
      throwError "binding what step {u.number} ({(u.rule?.map (·.name)).getD "?"}) \
        introduces: {e.toMessageData}"

/--
Replays a refutation as a Lean proof of `False` from the hypotheses in the
current local context, or gives `none` when the proof has no refutation.

What vampire introduced itself -- skolem functions, the names clausification
and splitting define -- has nothing in the goal to stand for, so each is bound
to the Lean term it means: before any step is replayed where that can be done
(`bindIntroduced`), and otherwise by the step that introduces it. Fails if a
step needs a name that was never bound, or cannot be replayed.
-/
def run (proof : Proof) (symbols : Symbols)
    (literalIff : LiteralRewrite → Expr → Expr → Int × Nat → MetaM Expr)
    (literalFalse : LiteralRewrite → Expr → Int × Nat → MetaM Expr)
    (literalRewritten : LiteralRewrite → Expr → MetaM (Expr × Expr))
    (virasRefute : Expr → Expr → Nat → Array Expr → Array Expr →
      Option Expr → Bool → Option Bool → MetaM Expr)
    (ringNormalForms : Array Expr → MetaM (Array (Expr × Expr)))
    (checkSteps : Bool := false)
    (numerically : Expr → MetaM Expr := fun _ =>
      throwError "replay was not given a way to evaluate facts about numerals") :
    MetaM (Option Outcome) := do
  let some refutation := proof.refutation? | return none
  let go : ReconstructM Outcome := do
    let started ← IO.monoMsNow
    bindIntroduced
    trace[vampire.timing] "binding what the proof introduces took \
      {(← IO.monoMsNow) - started}ms"
    let (_, steps) := ((order refutation).run ({}, #[])).2
    let term ← replayAll steps 0 #[] refutation
    return { proof := term, unimplemented := (← get).unimplemented.toArray,
             steps := steps.size }
  -- Taken here, where the context is the goal's: from here on the context is
  -- whatever a rule has introduced on top of it.
  let context ← getLCtx
  let givens := context.getFVarIds.filterMap fun id =>
    match context.find? id with
    | some decl => if decl.isImplementationDetail then none else some decl.toExpr
    | none => none
  let (outcome, _) ←
    (go.run { symbols, proof, givens, literalIff, literalFalse,
              literalRewritten, virasRefute, ringNormalForms,
              checkSteps, numerically
              flipped := proof.polarityFlipBoundary
              numerals := proof.functions.foldl (init := {}) fun acc sym =>
                match sym.numeral? with
                | some n => acc.insert (sym.name, sym.arity.toNat) n
                | none => acc }).run {}
  return some outcome

end Vampire.Reconstruct
