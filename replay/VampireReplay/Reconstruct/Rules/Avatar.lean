import VampireReplay.Reconstruct.Basic

/-!
Splitting.

`Splitter` breaks a clause into components with no variables in common, names
each component with a propositional variable, and hands the disjunction of the
names to a SAT solver. Work then goes on under an assignment to those names: a
clause derived while the name `n` is assumed carries `n` among its assumptions,
and means no more than that its literals follow from what is assumed.

A name means what its definition says it does, and `avatar_definition` binds it
to that, so a name and the component it stands for are the same thing here.
That is what makes the rules below go through: what a step assumes it can also
use.
-/

namespace Vampire.Reconstruct.Avatar

open Lean Meta

/--
The component an avatar definition `name <=> component` names, and the
variables its leading universal quantifier binds.
-/
private def definedComponent (definition : Formula) :
    ReconstructM (Option (Formula × Array UInt32)) := do
  let some component := (← definition.subformulas.findSomeM? fun g => do
      return if (← connectiveOf g) matches .name then none else some g)
    | return none
  let bound :=
    if (← connectiveOf component) matches .«forall» then component.boundVars else #[]
  return some (component, bound)

/-- Whether a name is the negation `~name` of a component's name. -/
private def isNegatedName (name : String) : Bool :=
  name.startsWith "~"

/-- The component name a name speaks of, without the `~` of its negation. -/
private def positiveName (name : String) : String :=
  if isNegatedName name then (name.drop 1).toString else name

/--
`avatar_component`: the component a name stands for, under that name.

The clause is the component itself, and the name assumed is the definition of
the component, so there is nothing to do but read one as the other.
-/
def component (step : Step) : ReconstructM Expr := do
  let #[(name, assumption)] := step.assumed
    | throwError "an avatar component clause should hold under one name, got \
      {step.assumed.size}"
  let #[(_, _)] := step.premises
    | throwError "an avatar component clause should have one premise, got \
      {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "an avatar component clause without its definition"
  let core ← step.conclusion
  if ← sameFormula (← inferType assumption) core then
    return assumption
  -- The definition states the component as a formula, which `Formula::fromClause`
  -- builds by pushing the clause's literals onto a list, so the two disagree
  -- over the order of the literals and over which variable is bound where.
  -- Both speak of vampire's variables, though, so the binders can be paired by
  -- the variable each stands for, and the literals found by what they say.
  let some definition := parent.formula?
    | throwError "an avatar component clause's definition states no formula"
  let some (_, bound) ← definedComponent definition
    | throwError "the avatar definition in step {parent.number} states no component"
  step.underVars fun vars target => do
    let args ← bound.mapM fun v => do
      let some x := vars[v]?
        | throwError "the definition of `{name}` binds X{v}, which the \
          component does not mention"
      return x
    let instance_ := mkAppN assumption args
    let stated ← instantiateForall (← inferType assumption) args
    carryAll stated target instance_

/--
`avatar_contradiction_clause`: the names a refuted clause held under cannot all
be assumed at once.

The premise derived the empty clause from them, so at least one of them fails,
which is what the disjunction of their negations says.
-/
def contradictionClause (step : Step) : ReconstructM Expr := do
  let #[(premiseProof, _)] := step.premises
    | throwError "an avatar contradiction clause should have one premise, got \
      {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "an avatar contradiction clause should have one premise, got none"
  let target ← step.conclusion
  let parts := junctionParts ``Or target
  -- Were every one of those names to fail, nothing would follow from the
  -- premise; so suppose the disjunction fails and read each name off that.
  let contradiction ← withLocalDeclD `h (mkApp (mkConst ``Not) target) fun h => do
    let mut proof := premiseProof
    for name in parent.splits do
      let (flipped, says) ← flipName name
      let mut found := none
      for (part, i) in parts.zipIdx do
        if ← sameFormula part flipped then
          found := some i
          break
      let some i := found
        | throwError "the negation of `{name}`{indentExpr flipped}\nis not \
          among{indentExpr target}"
      let refuted : Expr := .lam `d flipped
        (mkApp h (← injectPart ``Or target i (.bvar 0))) .default
      let body ← namedFormula name
      proof := mkApp proof
        (← mkAppM ``Iff.mp
          #[← mkAppOptM ``Classical.not_not #[some body],
            ← mkAppM ``Iff.mp #[← mkAppM ``not_congr #[says], refuted]])
    mkLambdaFVars #[h] proof
  mkAppM ``Iff.mp
    #[← mkAppOptM ``Classical.not_not #[some target], contradiction]

/--
What a propositional clause says: what each of its names stands for, and their
disjunction.

Built once per clause and read back from `states`. The solver uses a clause as a
premise of as many derivations as it likes, so premise uses far outnumber
clauses, and rebuilding what a clause says at each use would dominate replaying
the refutation.
-/
private def satClauseParts (c : SatClause) :
    ReconstructM (Array Expr × Expr) := do
  let parts ← c.literals.mapM namedFormula
  return (parts, junction ``Or ``False parts)

/--
The clauses a propositional refutation rests on, each after the ones it was
derived from.

The solver reuses a clause in as many derivations as it likes, so the clauses
form a graph rather than a tree; walking it once and proving each clause once
is what keeps the refutation the size the solver made it.
-/
private partial def satOrder (c : SatClause) :
    StateM (Std.HashSet UInt32 × Array SatClause) PUnit := do
  if (← get).1.contains c.index then return
  modify fun (seen, order) => (seen.insert c.index, order)
  for premise in c.premises do
    satOrder premise
  modify fun (seen, order) => (seen, order.push c)

/--
`¬says`, for a literal of a clause, from what is known of its name's flip: a
proof `negated` of `refuting`.

Which of the two carries the negation is read off what the two names stand for
-- a name and its negation are two names, and either may carry it. Asking a
conversion check instead meant comparing two components, which are whole
first-order formulas, once for every literal of every premise use.
-/
private def refutationOf (says refuting negated : Expr) : ReconstructM Expr := do
  if refuting == mkApp (mkConst ``Not) says then
    return negated
  if says == mkApp (mkConst ``Not) refuting then
    return mkApp2 (mkConst ``not_not_intro) refuting negated
  throwError "neither of{indentExpr says}\nand{indentExpr refuting}\n\
    is the negation of the other"

/--
`¬part` for the `j`th literal of a premise, which the propagation has made false.
-/
private def falseAt (parts : Array Expr) (names : Array String)
    (known : Std.HashMap String (Expr × Expr)) (j : Nat) : ReconstructM Expr := do
  let some name := names[j]? | throwError "missing literal"
  let some says := parts[j]? | throwError "missing literal"
  let some (negated, refuting) := known[flippedName name]?
    | throwError "literal {j} of a propositional premise is not false"
  refutationOf says refuting negated

/--
`¬(parts[j] ∨ … )`, the premise's literals from the `j`th on all being false.
-/
private def allFalseFrom (parts suffix : Array Expr) (names : Array String)
    (known : Std.HashMap String (Expr × Expr)) (j : Nat) : ReconstructM Expr := do
  let last := parts.size - 1
  let mut acc ← falseAt parts names known last
  for d in [0 : last - j] do
    let i := last - 1 - d
    acc := mkApp4 (mkConst ``not_or_intro) parts[i]! suffix[i + 1]!
      (← falseAt parts names known i) acc
  return acc

/--
The one literal of a premise its others leave, from what says each of those is
false: the literals before it resolved away from the front, and those after it
from the back, all of them at once.

Self-contained: it says nothing about the rest of the propagation, which is what
keeps the propagation linear. It is also the whole of the replay's share of a
large propositional refutation, so it is written with the fewest terms: a
resolution per literal, where taking the clause apart by cases wrote out a
motive, a hypothesis and an `absurd` for each of them.
-/
private def implied (parts : Array Expr) (names : Array String) (u : Nat)
    (known : Std.HashMap String (Expr × Expr)) (proof : Expr) :
    ReconstructM Expr := do
  unless u < parts.size do throwError "missing literal"
  let suffix := suffixJunctions ``Or ``False parts
  let mut h := proof
  for j in [0 : u] do
    h := mkApp4 (mkConst ``Or.resolve_left) parts[j]! suffix[j + 1]! h
      (← falseAt parts names known j)
  if u + 1 == parts.size then
    return h
  return mkApp4 (mkConst ``Or.resolve_right) parts[u]! suffix[u + 1]! h
    (← allFalseFrom parts suffix names known (u + 1))

/--
`False`, by unit propagation through the clauses a derived clause was derived
from: each of them has all but one of its literals already false, so that one
holds, and the last of them has none left.

What each premise leaves is bound rather than written out, so a literal a dozen
later premises are false by is proved once.
-/
private partial def propagate (states : Std.HashMap UInt32 (Array Expr × Expr))
    (proved : Std.HashMap UInt32 Expr)
    (known : Std.HashMap String (Expr × Expr)) (premises : Array SatClause)
    (i : Nat) (bound : Array Expr) : ReconstructM Expr := do
  let some premise := premises[i]?
    | throwError "unit propagation through the recorded premises ended without \
      a contradiction"
  let names := premise.literals
  let some proof := proved[premise.index]?
    | throwError "a propositional clause used before it was proved"
  let some (parts, _) := states[premise.index]?
    | throwError "a propositional clause used before it was stated"
  let unassigned := names.zipIdx.filterMap fun (name, j) =>
    if (known[flippedName name]?).isNone then some j else none
  -- The parts are given rather than found throughout: what a name stands for
  -- can be a disjunction in its own right, and then the shape of what the
  -- clause says is not where its literals are.
  if let #[u] := unassigned then
    let some says := parts[u]? | throwError "missing literal"
    let some name := names[u]? | throwError "missing literal"
    let value ← implied parts names u known proof
    withLetDecl (Name.mkSimple s!"p{i}") says value fun p =>
      propagate states proved (known.insert name (p, says)) premises (i + 1)
        (bound.push p)
  else if unassigned.isEmpty then
    -- Nothing left to hold: the premise is the contradiction.
    if parts.isEmpty then
      return ← bindLets bound proof
    let suffix := suffixJunctions ``Or ``False parts
    let contradiction := mkApp (← allFalseFrom parts suffix names known 0) proof
    bindLets bound contradiction
  else
    -- More than one literal left, so the premise would be a case split rather
    -- than a propagation. The solver's derivations are propagations, each
    -- premise leaving one literal, so a derivation that is not one is not what
    -- the solver recorded.
    throwError "expected a propositional premise to leave one literal \
      unassigned, got {unassigned.size}: the derivation is not unit propagation"

/--
A proof of what a propositional clause says, from proofs of the clauses it was
derived from.

A clause is either a first-order clause's propositional shadow, and then it says
what that clause says, up to the order of the names; or the solver derived it,
and then it follows from the clauses it was derived from by unit propagation:
supposing its own literals false, each clause in turn has all but one of its
literals false, so that one holds -- and the last has none left.
-/
private def satClause (states : Std.HashMap UInt32 (Array Expr × Expr))
    (proved : Std.HashMap UInt32 Expr)
    (origins : Std.HashMap UInt32 (Expr × Expr)) (c : SatClause) :
    ReconstructM Expr := do
  let some (parts, target) := states[c.index]?
    | throwError "a propositional clause proved before it was stated"
  if let some origin := c.origin? then
    let some (proof, stated) := origins[origin.number]?
      | throwError "the propositional clause for step {origin.number} is not \
        among the refutation's premises"
    return ← carryAll stated target proof
  -- Suppose the clause fails; then each of its literals is false, which is to
  -- say that each of their negations holds.
  let contradiction ← withLocalDeclD `n (mkApp (mkConst ``Not) target) fun n => do
    let mut known : Std.HashMap String (Expr × Expr) := {}
    let suffix := suffixJunctions ``Or ``False parts
    for (name, i) in c.literals.zipIdx do
      let (flipped, says) ← flipName name
      let some body := parts[i]? | throwError "missing literal"
      let refuted : Expr := .lam `d body
        (mkApp n (← injectGiven parts i (.bvar 0) (suffix? := some suffix))) .default
      known := known.insert (flippedName name)
        (mkApp4 (mkConst ``Iff.mpr) flipped (mkApp (mkConst ``Not) body) says refuted,
          flipped)
    mkLambdaFVars #[n] (← propagate states proved known c.premises 0 #[])
  let notNot := mkApp (mkConst ``Not) (mkApp (mkConst ``Not) target)
  return mkApp4 (mkConst ``Iff.mp) notNot target (mkApp (mkConst ``Classical.not_not) target)
    contradiction

/--
A proof of what a derived propositional clause says, as a lemma of its own:
the clause over propositional atoms, one for each name it and its premises
speak of, from the premises over the same atoms, applied to what the names
stand for and to the premises' proofs.

The solver's derivations are propositional, and what a name stands for is a
whole first-order formula only the leaves need to see. Built in the proof,
every derivation sat under the ones before it, and each formula it used was a
different term at each depth; as a lemma each is a small closed term the
kernel checks alone. And one derivation's lemma is every derivation's that
has its shape, which a solver's many small learnt clauses often do.
-/
private def derivedAsLemma (proved : Std.HashMap UInt32 Expr)
    (origins : Std.HashMap UInt32 (Expr × Expr)) (c : SatClause) :
    ReconstructM Expr := do
  -- The names, in the order they are met, so two derivations of one shape
  -- state one lemma.
  let mut keys : Array String := #[]
  let mut premises : Array SatClause := #[]
  for name in c.literals do
    let key := (splitName name).2
    unless keys.contains key do keys := keys.push key
  for p in c.premises do
    unless premises.any (·.index == p.index) do premises := premises.push p
    for name in p.literals do
      let key := (splitName name).2
      unless keys.contains key do keys := keys.push key
  let saved := (← get).named
  let mut bodies := #[]
  for key in keys do
    let some body := saved[key]? | throwIntroduced "the named subformula" key
    bodies := bodies.push body
  let atomDecls := keys.mapIdx fun i _ =>
    (Name.mkSimple s!"A{i}", fun (_ : Array Expr) => pure (mkSort .zero))
  let (type, value) ← withLocalDeclsD atomDecls fun atoms => do
    let rebound := keys.zipIdx.foldl (fun m (key, i) => m.insert key atoms[i]!) saved
    modify fun s => { s with named := rebound }
    try
      let stated ← premises.mapM satClauseParts
      let hypDecls := stated.mapIdx fun i (_, says) =>
        (Name.mkSimple s!"p{i}", fun (_ : Array Expr) => pure says)
      withLocalDeclsD hypDecls fun hyps => do
        let mut states : Std.HashMap UInt32 (Array Expr × Expr) := {}
        let mut provedHere : Std.HashMap UInt32 Expr := {}
        for (p, i) in premises.zipIdx do
          states := states.insert p.index stated[i]!
          provedHere := provedHere.insert p.index hyps[i]!
        let (parts, target) ← satClauseParts c
        states := states.insert c.index (parts, target)
        let proof ← satClause states provedHere origins c
        return (← mkForallFVars (atoms ++ hyps) target,
          ← mkLambdaFVars (atoms ++ hyps) proof)
    finally
      modify fun s => { s with named := saved }
  -- Added directly, and looked up by what it states before that: a lemma of
  -- replay's own is closed, propositional and safe, so the checks and the
  -- environment-wide cache `mkAuxLemma` goes through are for nothing here.
  let name ← match (← get).lemmas[type]? with
    | some name => pure name
    | none => do
      let name ← mkAuxDeclName `_satClause
      addDecl (.thmDecl { name, levelParams := [], type, value })
      modify fun s => { s with lemmas := s.lemmas.insert type name }
      pure name
  let mut args := bodies
  for p in premises do
    let some h := proved[p.index]? | throwError "a propositional clause used before it was proved"
    args := args.push h
  return mkAppN (mkConst name) args

/--
The refutation, with every clause it rests on bound to what proves it.

Bound rather than written out: a clause a dozen derivations use would otherwise
be proved into each of them, and every binder of the proof being built would
have to be put through the whole of what it already holds.
-/
private partial def satBound (origins : Std.HashMap UInt32 (Expr × Expr))
    (order : Array SatClause) (i : Nat)
    (states : Std.HashMap UInt32 (Array Expr × Expr))
    (proved : Std.HashMap UInt32 Expr)
    (bound : Array Expr) : ReconstructM Expr := do
  if h : i < order.size then
    let c := order[i]
    let (parts, stated) ← satClauseParts c
    let states := states.insert c.index (parts, stated)
    let value ← if c.origin?.isSome then satClause states proved origins c
      else derivedAsLemma proved origins c
    withLetDecl (Name.mkSimple s!"c{i}") stated value fun s =>
      satBound origins order (i + 1) states (proved.insert c.index s)
        (bound.push s)
  else
    let some root := order.back?
      | throwError "a propositional refutation without a clause"
    let some proof := proved[root.index]?
      | throwError "the refuting clause was not proved"
    bindLets bound proof

/--
`avatar_split_clause`: a clause holds only if one of its components does.

The components share no variables, so if each of them failed there would be a
way of making it fail -- and instantiating the clause at all of those at once
leaves every one of its literals refuted. That is what the disjunction of the
names says, together with the names the clause itself held under, any of which
may be what fails instead.

A component is named once and reused for every variant of it, so the clause
naming it need not speak of the same variables; the renaming that relates the
two comes recorded against the definition.
-/
def splitClause (step : Step) : ReconstructM Expr := do
  let some (clauseProof, clauseStated) := step.premises[0]?
    | throwError "an avatar split clause without the clause it splits"
  let some parent := step.unit.parents[0]?
    | throwError "an avatar split clause without the clause it splits"
  let some stated := step.unit.formula?
    | throwError "an avatar split clause states no formula"
  -- The disjuncts are names, which the formula gives as they were written, so
  -- each can be told from the definition it belongs to.
  let disjuncts ←
    (if (← connectiveOf stated) matches .or then stated.subformulas else #[stated]).mapM
      fun g => do
        let some name := g.name?
          | throwError "an avatar split clause states {g}, which is not a name"
        return name
  let target ← step.conclusion
  -- Which definition says what each component name means, and how it was
  -- renamed to name this clause's literals.
  -- Two components of one clause can be variants of each other, and then they
  -- are the same component and share its name: the clause names it twice, and
  -- each occurrence has its own renaming recorded.
  let mut definitions : Std.HashMap String (Vampire.Unit × Array PremiseUse × Nat) := {}
  for (parent, position) in (step.unit.parents.zipIdx).extract 1 do
    let some definition := parent.formula?
      | continue
    let some name := (← definition.subformulas.findSomeM? fun g => do
        return if (← connectiveOf g) matches .name then g.name? else none)
      | continue
    let uses := step.unit.premiseUses.filter (·.premise == parent.number)
    if uses.isEmpty then
      -- The definitions of the names the clause holds under are premises too,
      -- and it is the components that have a renaming recorded against them.
      continue
    definitions := definitions.insert name (parent, uses, position)
  withLocalDeclD `h (mkApp (mkConst ``Not) target) fun h => do
    let refuted (i : Nat) (of : Expr) : ReconstructM Expr := do
      pure (.lam `d of
        (mkApp h (← injectPart ``Or target i (.bvar 0))) .default)
    -- What the clause held under: the disjunct for each of those names is its
    -- negation, so failing means the name holds and the clause can be used.
    let mut proof := clauseProof
    let mut stated ← instantiateMVars clauseStated
    for name in parent.splits do
      let (flipped, says) ← flipName name
      let some i := disjuncts.findIdx? (· == flippedName name)
        | throwError "the negation of `{name}` is not among{indentExpr target}"
      let body ← namedFormula name
      let holds ← mkAppM ``Iff.mp
        #[← mkAppOptM ``Classical.not_not #[some body],
          ← mkAppM ``Iff.mp
            #[← mkAppM ``not_congr #[says], ← refuted i flipped]]
      proof := mkApp proof holds
      stated ← instantiateForall stated #[holds]
    -- Each component's name failing gives a way of making that component
    -- fail, and with it the negation of each of its literals.
    let mut arguments : Std.HashMap UInt32 Expr := {}
    -- How many times each name has been met, so that a component named twice
    -- takes its two renamings in turn.
    let mut met : Std.HashMap String Nat := {}
    let mut negations : Array (Expr × Expr) := #[]
    -- Which clause literal each component literal is, as the worker recorded
    -- it under the component's renaming: that literal is refuted by that
    -- negation, with nothing to look for.
    let mut negationAt : Std.HashMap Nat (Expr × Expr × Bool) := {}
    for (name, i) in disjuncts.zipIdx do
      if (parent.splits.contains (flippedName name)) then
        continue
      let key := positiveName name
      let some (definition, uses, position) := definitions[key]?
        | throwError "no definition was recorded for `{name}`"
      let seen := met.getD key 0
      met := met.insert key (seen + 1)
      let some use := uses[seen]?
        | throwError "`{name}` names more components of this clause than it has renamings recorded"
      let mut against ← refuted i (← namedFormula name)
      let some body := definition.formula?
        | throwError "the definition of `{name}` states no formula"
      let some (quantified, binders) ← definedComponent body
        | throwError "the definition of `{name}` states no component"
      let renamed := Std.HashMap.ofList use.bindings.toList
      let mut componentVars : Vars := {}
      for v in binders do
        let (witness, rest) ← witnessAgainst against
        against := rest
        let some image := renamed[v]?
          | throwError "the definition of `{name}` binds X{v}, which nothing \
            relates to the clause"
        unless image.isVar do
          throwError "`{name}` was renamed to a term, not a variable"
        componentVars := componentVars.insert v witness
        arguments := arguments.insert image.var witness
      -- `against` now refutes the component itself, so each of its literals is
      -- refuted with it. Which literals those are is read off the component as
      -- vampire states it: a literal naming a subformula stands for a whole
      -- formula, so the disjuncts of what it rebuilds to are not its literals.
      let parts ←
        if isNegatedName name then
          -- A ground component of one negative literal is named positively,
          -- the definition stating the literal's complement, so the component
          -- is what the negated name says rather than what the definition does.
          pure #[← namedFormula name]
        else
          let component ←
            if (← connectiveOf quantified) matches .«forall» then
              let some inner := quantified.subformulas[0]?
                | throwError "a quantifier without a body"
              pure inner
            else pure quantified
          let literals :=
            if (← connectiveOf component) matches .or then component.subformulas
            else #[component]
          literals.mapM (Reconstruct.formula definition.varSorts componentVars)
      let disjunction := junction ``Or ``False parts
      let placed := if isNegatedName name then none
        else step.unit.placement? position seen
      for (part, j) in parts.zipIdx do
        let negation : Expr := .lam `l part
          (mkApp against (← injectPart ``Or disjunction j (.bvar 0))) .default
        negations := negations.push (part, negation)
        if let some placed := placed then
          if let some (some (k, flipped)) := placed[j]? then
            negationAt := negationAt.insert k (part, negation, flipped)
    -- The clause at all of those witnesses at once has every literal refuted.
    let arguments' ← argsFor parent arguments
    let instance_ := mkAppN proof arguments'
    let instantiated ← instantiateForall stated arguments'
    let contradiction ← elimParts instantiated 0 (fun i hl => do
      if let some (part, negation, flipped) := negationAt[i]? then
        -- The worker recorded the component's literal as the clause's, turned
        -- round where it said so.
        if let some hl ← (if flipped then flipEquality hl else pure (some hl)) then
          let literal ← instantiateMVars (← inferType hl)
          if ← isDefEq part literal then
            return ← mkAppOptM ``absurd
              #[some literal, some (mkConst ``False), some hl, some negation]
      -- A named component and the clause's own literal over it can meet with a
      -- double negation between them: which of a name and its negation carries
      -- one is up to which of the two splitting introduced, and polarity
      -- flipping can add another. And vampire shares an equation whichever way
      -- round it is written, so the component can state it the other way.
      for candidate in #[hl] ++ (← doubleNegations hl) ++ (← flipEquality hl).toArray do
        let literal ← instantiateMVars (← inferType candidate)
        for (part, negation) in negations do
          if ← isDefEq part literal then
            return ← mkAppOptM ``absurd
              #[some literal, some (mkConst ``False), some candidate,
                some negation]
      throwError "nothing refutes{indentExpr (← instantiateMVars (← inferType hl))}\
        \nof the clause {parent}, whose components are {disjuncts}") instance_
    mkAppM ``Iff.mp
      #[← mkAppOptM ``Classical.not_not #[some target],
        ← mkLambdaFVars #[h] contradiction]

/--
`avatar_refutation`: the propositional problem the names were handed to has no
model, so what they stand for cannot all hold.
-/
def refutation (step : Step) : ReconstructM Expr := do
  let some root := step.unit.satPremise?
    | throwError "an avatar refutation without the propositional clause it \
      stands on"
  let mut origins : Std.HashMap UInt32 (Expr × Expr) := {}
  for (parent, premise) in step.unit.parents.zip step.premises do
    origins := origins.insert parent.number premise
  let (_, order) := ((satOrder root).run ({}, #[])).2
  satBound origins order 0 {} {} #[]

end Vampire.Reconstruct.Avatar
