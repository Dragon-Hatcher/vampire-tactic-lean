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

/--
Binds every name the proof introduces, before any step is replayed.

Neither kind of introduction can be relied on to come first while replaying.
Splitting makes a definition a premise of the steps using its name, but naming
does not: it replaces a subformula in place and states the definition as a
separate root. And a definition's own body can mention a skolem, while what an
existential is skolemised over can mention a named predicate, so the two are
bound together, in rounds, until a round binds nothing.
-/
private partial def bindIntroduced : ReconstructM PUnit := do
  let proof := (← read).proof
  -- Where the existentials a unit's skolems came from are written down: its
  -- own formula, unless a skolemisation step transformed a formula into it.
  let skolemSource (u : Vampire.Unit) : Option (Vampire.Unit × Formula) :=
    match u.rule? with
    | some .skolemize => do
      let parent ← u.parents[0]?
      return (parent, ← parent.formula?)
    | _ => do return (u, ← u.formula?)
  let bind (u : Vampire.Unit) : ReconstructM PUnit := do
    if (u.rule?.map Definition.introducesName).getD false then
      Definition.register u
    if u.rule? == some .generalSplittingComponent then
      Splitting.register u
    -- What clausification named, which nothing in the proof states: the name
    -- stands for the formula, so binding it to that formula is what it means.
    for (name, arguments, named) in u.namings do
      unless ← resolvesSymbol name do
        let sorts := u.varSorts
        let bound := boundSorts sorts arguments
        unless bound.size == arguments.size do
          throwError "step {u.number} named a formula over variables it does \
            not record the sorts of"
        let definition ← reading u <| withVars bound {} fun vars locals => do
          mkLambdaFVars locals (← formula sorts vars named)
        modify fun s =>
          { s with introduced := s.introduced.insert name definition }
    -- Clausification records the steps it took, which say where each of its
    -- skolemisations happened; anything else is looked for in the formula.
    if u.genClause?.isSome then
      Clausify.registerSkolemsOf u
    else unless u.skolems.isEmpty do
      let some (owner, f) := skolemSource u
        | throwError "step {u.number} records skolems but states no formula"
      registerSkolems (owner.varSorts ++ u.varSorts)
        (Std.HashMap.ofList u.skolems.toList) {} f
  let mut pending := proof.units.filter fun u =>
    (u.rule?.map Definition.introducesName).getD false
      || u.rule? == some .generalSplittingComponent || !u.skolems.isEmpty
      || !u.namings.isEmpty
      || (u.genClause?.isSome && u.parents.any fun p => !p.skolems.isEmpty)
  -- Which names a step mentions is not said, so the order is found by
  -- trying: a step that fails is tried again once another has bound
  -- something, until a round binds nothing. A failed attempt is undone -- the
  -- metavariables it assigned and anything it bound -- so that it leaves
  -- nothing half-made behind, and what it failed with is kept.
  let mut failures : Std.HashMap UInt32 MessageData := {}
  repeat
    let mut progressed := false
    let mut again := #[]
    for u in pending do
      let saved ← Meta.saveState
      let state ← get
      try
        bind u
        progressed := true
        failures := failures.erase u.number
      catch e =>
        saved.restore
        set state
        failures := failures.insert u.number e.toMessageData
        again := again.push u
    pending := again
    unless progressed && !pending.isEmpty do break
  -- What is left may be bound while replaying -- a definition mentioning a
  -- skolem that clausifying introduces is -- so it is not an error yet; it is
  -- reported when a name it would have bound is first needed.
  for u in pending do
    let name := (u.rule?.map (·.name)).getD "unknown"
    trace[vampire] "could not bind what step {u.number} ({name}) introduces: \
      {failures.getD u.number m!"no reason given"}"
  modify fun s => { s with bindFailures := pending.map fun u =>
    (u.number, failures.getD u.number m!"no reason given") }

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
    (contradiction : Array Expr → Option Expr → MetaM Expr)
    (rearranged : Expr → Expr → MetaM (Option Expr))
    (cancelling : Expr → Expr → Expr → MetaM (Option Expr))
    (checkSteps : Bool := false) :
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
    (go.run { symbols, proof, givens, contradiction, rearranged, cancelling, checkSteps
              flipped := proof.polarityFlipBoundary
              numerals := proof.functions.foldl (init := {}) fun acc sym =>
                match sym.numeral? with
                | some n => acc.insert (sym.name, sym.arity.toNat) n
                | none => acc }).run {}
  return some outcome

end Vampire.Reconstruct
