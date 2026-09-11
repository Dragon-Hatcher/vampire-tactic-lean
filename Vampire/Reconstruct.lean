import Vampire.Reconstruct.Basic
import Vampire.Reconstruct.Rules

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

/--
Replays a step, after its premises. Steps are shared, so each is replayed once
and remembered by vampire's number for it.
-/
partial def step (u : Vampire.Unit) : ReconstructM Expr := reading u do
  if let some p := (← get).proofs[u.number]? then
    return p
  let some rule := u.rule?
    | throwError "step {u.number} has unknown inference rule {u.ruleIndex}"
  -- Premises first: a name vampire introduced is defined by a step that
  -- splitting and definition introduction both place among the premises of
  -- every step using it, so replaying those binds it before it is needed here.
  let premises ← u.parents.mapM fun parent => do
    return (parent, ← step parent, ← conclusionOf parent)
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
        let some i := names.findIdx? (· == name)
          | throwError "step {u.number} does not assume `{name}`"
        let some h := assumed[i]? | throwError "no assumption for `{name}`"
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
  -- The rules are trusted to return a proof of what the step claims; check it,
  -- so a wrong implementation is caught here rather than at `assign`.
  unless ← isDefEq (← inferType proof) conclusion do
    throwError "reconstruction of {rule.name} for step {u.number} proves\
      {indentExpr (← betaAll (← inferType proof))}\n\
      but the step claims{indentExpr (← betaAll conclusion)}"
  modify fun s => { s with proofs := s.proofs.insert u.number proof }
  return proof

/--
Binds every name the proof introduces, before any step is replayed.

Neither kind of introduction can be relied on to come first while replaying.
Splitting makes a definition a premise of the steps using its name, but naming
does not: it replaces a subformula in place and states the definition as a
separate root. And a definition's own body can mention a skolem, while what an
existential is skolemised over can mention a named predicate, so the two are
bound together, repeatedly, until it stops making progress.
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
        let bound := arguments.filterMap fun v =>
          (sorts.find? (·.1 == v)).map fun (_, s) => (v, s)
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
  repeat
    let mut progressed := false
    let mut again := #[]
    for u in pending do
      try
        bind u
        progressed := true
      catch _ =>
        again := again.push u
    pending := again
    unless progressed && !pending.isEmpty do break
  unless pending.isEmpty do
    for u in pending do
      let name := (u.rule?.map (·.name)).getD "unknown"
      trace[vampire] "could not bind what step {u.number} ({name}) introduces"
  -- Anything left over is reported when its name is first needed.

/--
Replays a refutation as a Lean proof of `False`.

Fails if the proof mentions a name vampire introduced itself, since nothing in
the goal corresponds to it.
-/
def run (proof : Proof) (symbols : Symbols) : MetaM (Option Outcome) := do
  let some refutation := proof.refutation? | return none
  let go : ReconstructM Outcome := do
    bindIntroduced
    let term ← step refutation
    return { proof := term, unimplemented := (← get).unimplemented.toArray }
  let (outcome, _) ← (go.run { symbols, proof, flipped := proof.polarityFlipBoundary }).run {}
  return some outcome

end Vampire.Reconstruct
