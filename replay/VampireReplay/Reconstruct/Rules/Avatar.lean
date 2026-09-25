import VampireReplay.Reconstruct.Basic
import VampireReplay.Reconstruct.Rules.Clause

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

/--
`avatar_component`: the component a name stands for, under that name.

The clause is the component itself, and the name assumed is the definition of
the component, so there is nothing to do but read one as the other.
-/
def component (step : Step) : ReconstructM Expr := do
  let #[(name, assumption)] := step.assumed
    | throwError "an avatar component clause should hold under one name, got \
      {step.assumed.size}"
  let ⟨parent, _, _⟩ ← step.onlyPremise
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
    carryAll stated target instance_ (targetCount := step.unit.clauseSize?)

/--
`avatar_contradiction_clause`: the names a refuted clause held under cannot all
be assumed at once.

The premise derived the empty clause from them, so at least one of them fails,
which is what the disjunction of their negations says.
-/
def contradictionClause (step : Step) : ReconstructM Expr := do
  let ⟨parent, premiseProof, _⟩ ← step.onlyPremise
  let target ← step.conclusion
  -- One disjunct per name the premise held under, whatever the formula each
  -- stands for is: the conclusion is a formula, not a clause with a count of
  -- its own, and a name's formula can itself be a disjunction.
  let parts ← clauseLiterals target (some parent.splits.size)
  -- Were every one of those names to fail, nothing would follow from the
  -- premise; so suppose the disjunction fails and read each name off that.
  let contradiction ← withLocalDeclD `h (mkApp (mkConst ``Not) target) fun h => do
    let refutations := refutationsOf parts h
    let mut proof := premiseProof
    for (name, k) in parent.splits.zipIdx do
      let (flipped, says) ← flipName name
      -- The disjunct is usually the name's own place among them.
      let mut found := none
      if let some part := parts[k]? then
        if ← sameFormula part flipped then found := some k
      if found.isNone then
        for (part, i) in parts.zipIdx do
          if ← sameFormula part flipped then
            found := some i
            break
      let some i := found
        | throwError "the negation of `{name}`{indentExpr flipped}\nis not \
          among{indentExpr target}"
      let refuted ← mkExpectedTypeHint refutations[i]! (mkApp (mkConst ``Not) flipped)
      let body ← namedFormula name
      proof := mkApp proof
        (← mkAppM ``Iff.mp
          #[← mkAppOptM ``Classical.not_not #[some body],
            ← mkAppM ``Iff.mp #[← mkAppM ``not_congr #[says], refuted]])
    mkLambdaFVars #[h] proof
  mkAppM ``Iff.mp
    #[← mkAppOptM ``Classical.not_not #[some target], contradiction]

/--
What the propositional clauses met so far say, by their index, and what
proves each.

Persistent: a refutation binds each clause under the ones before it, and a map
that copied itself on every insert would be kept, a copy at each binder, for as
long as the binders are open -- one per clause of tens of thousands.
-/
private abbrev Stated := Lean.PersistentHashMap UInt32 (Array Expr × Expr)
@[inherit_doc Stated]
private abbrev Proved := Lean.PersistentHashMap UInt32 Expr

/--
That the literals `parts` are not all false: `¬l₁ → … → ¬lₙ → False`.

This is how a propositional clause is stated here, rather than as the
disjunction of its literals. Using a clause is then applying it: a unit
propagation through a premise is `fun x => premise h₁ … x … hₘ`, and a premise
with every literal false is `premise h₁ … hₘ`, where each `hᵢ` says a literal
is false. Through a disjunction the same step resolved literal by literal, and
each resolution wrote out the clause that was left; a propositional refutation
can be tens of thousands of derivations of clauses dozens of literals wide, and
what the proof holds of every one of them is kept for as long as the file is.
-/
private def negativeClause (parts : Array Expr) : Expr :=
  parts.foldr (init := mkConst ``False) fun l rest =>
    .forallE `h (mkApp (mkConst ``Not) l) rest .default

/--
What a propositional clause says: what each of its names stands for, and that
they are not all false (`negativeClause`).

Built once per clause and read back from `states`. The solver uses a clause as a
premise of as many derivations as it likes, so premise uses far outnumber
clauses, and rebuilding what a clause says at each use would dominate replaying
the refutation.
-/
private def satClauseParts (c : SatClause) :
    ReconstructM (Array Expr × Expr) := do
  let parts ← c.literals.mapM namedFormula
  return (parts, negativeClause parts)

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
`¬(parts[j] ∨ …)` from what says each of those literals is false, the
junction's suffixes being `suffix`.
-/
private def allFalseFrom (parts suffix refutations : Array Expr) (j : Nat) : Expr := Id.run do
  let last := parts.size - 1
  let mut acc := refutations[last]!
  for d in [0 : last - j] do
    let i := last - 1 - d
    acc := mkApp4 (mkConst ``not_or_intro) parts[i]! suffix[i + 1]! refutations[i]! acc
  return acc

/--
What says the flip of a literal `says` is false, from `notNot : ¬¬says`.

Of a name and its flip, one says the negation of what the other does, so this
is `notNot` itself where the flip is `¬says`, and `¬¬¬flipped` taken down to
`¬flipped` where `says` is.
-/
private def refutingFlip (says flipped notNot : Expr) : ReconstructM Expr := do
  if flipped == mkApp (mkConst ``Not) says then
    return notNot
  if says == mkApp (mkConst ``Not) flipped then
    -- `fun f => notNot (fun k => k f)`.
    return .lam `f flipped
      (mkApp notNot (.lam `k says (mkApp (.bvar 0) (.bvar 1)) .default)) .default
  throwError "neither of{indentExpr says}\nand{indentExpr flipped}\n\
    is the negation of the other"

/--
`False`, by unit propagation through the clauses a derived clause was derived
from: each of them has all but one of its literals already false, so that one
holds, and the last of them has none left.

`refuted` maps a literal's name to what says it is false. What each premise
leaves is bound rather than written out, so a literal a dozen later premises
are false by is proved once.
-/
private partial def propagate (states : Stated)
    (proved : Proved)
    (refuted : Lean.PersistentHashMap String Expr) (premises : Array SatClause)
    (i : Nat) (bound : Array Expr) : ReconstructM Expr := do
  let some premise := premises[i]?
    | throwError "unit propagation through the recorded premises ended without \
      a contradiction"
  let names := premise.literals
  let some proof := proved.find? (premise.index)
    | throwError "a propositional clause used before it was proved"
  let some (parts, _) := states.find? (premise.index)
    | throwError "a propositional clause used before it was stated"
  let unassigned := names.zipIdx.filterMap fun (name, j) =>
    if (refuted.find? (name)).isNone then some j else none
  let refutation (j : Nat) : Expr := (refuted.find? names[j]!).getD (.bvar 0)
  if let #[u] := unassigned then
    -- `¬¬q` for the one literal `q` left, and so the flip of `q` is false.
    let some says := parts[u]? | throwError "missing literal"
    let some name := names[u]? | throwError "missing literal"
    let notNot : Expr := .lam `x (mkApp (mkConst ``Not) says)
      (mkAppN proof ((List.range names.size).toArray.map refutation)) .default
    let (flipped, _) ← flipName name
    let value ← refutingFlip says flipped notNot
    withLetDecl (Name.mkSimple s!"p{i}") (mkApp (mkConst ``Not) flipped) value fun p =>
      propagate states proved (refuted.insert (flippedName name) p) premises (i + 1)
        (bound.push p)
  else if unassigned.isEmpty then
    -- Nothing left to hold: the premise is the contradiction.
    bindLets bound (mkAppN proof ((List.range names.size).toArray.map refutation))
  else
    -- More than one literal left, so the premise would be a case split rather
    -- than a propagation. The solver's derivations are propagations, each
    -- premise leaving one literal, so a derivation that is not one is not what
    -- the solver recorded.
    throwError "expected a propositional premise to leave one literal \
      unassigned, got {unassigned.size}: the derivation is not unit propagation"

/--
A proof of what a propositional clause says (`negativeClause`), from proofs of
the clauses it was derived from.

A clause is either a first-order clause's propositional shadow, and then it says
what that clause says, up to the order of the names; or the solver derived it,
and then it follows from the clauses it was derived from by unit propagation:
supposing its own literals false, each clause in turn has all but one of its
literals false, so that one holds -- and the last has none left.
-/
private def satClause (states : Stated)
    (proved : Proved)
    (origins : Std.HashMap UInt32 (Expr × Expr)) (c : SatClause) :
    ReconstructM Expr := do
  let some (parts, _) := states.find? (c.index)
    | throwError "a propositional clause proved before it was stated"
  let decls := parts.mapIdx fun i l =>
    (Name.mkSimple s!"h{i}", fun (_ : Array Expr) => pure (mkApp (mkConst ``Not) l))
  withLocalDeclsD decls fun refutations => do
    if let some origin := c.origin? then
      let some (proof, stated) := origins[origin.number]?
        | throwError "the propositional clause for step {origin.number} is not \
          among the refutation's premises"
      -- The first-order clause's literals in the order of the names, and then
      -- all of them false.
      let disjunction := junction ``Or ``False parts
      let carried ← carryAll stated disjunction proof (sourceCount := origin.clauseSize?)
        (targetCount := some parts.size)
      if parts.isEmpty then return carried
      let suffix := suffixJunctions ``Or ``False parts
      return ← mkLambdaFVars refutations
        (mkApp (allFalseFrom parts suffix refutations 0) carried)
    -- Suppose each of the clause's literals false.
    let refuted := c.literals.zipIdx.foldl (init := {})
      fun m (name, i) => m.insert name refutations[i]!
    mkLambdaFVars refutations (← propagate states proved refuted c.premises 0 #[])

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
  -- One disjunct per name, whatever the formula each stands for is.
  let disjunctParts ← clauseLiterals target (some disjuncts.size)
  withLocalDeclD `h (mkApp (mkConst ``Not) target) fun h => do
    let refutations := refutationsOf disjunctParts h
    let refuted (i : Nat) (of : Expr) : ReconstructM Expr := do
      let some refutation := refutations[i]? | throwError "the conclusion has no disjunct {i}"
      mkExpectedTypeHint refutation (mkApp (mkConst ``Not) of)
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
      let key := (splitName name).2
      -- A name the clause held under is in the split clause flipped, and is no
      -- component of it -- unless it is one: a component that is the
      -- complement of an assumption is named by the assumption's flip. Which
      -- an occurrence is, the step's premises say: each component occurrence
      -- has a renaming recorded against its definition, so one with none left
      -- is the assumption.
      if parent.splits.contains (flippedName name) then
        let componentsLeft : Bool := match definitions[key]? with
          | some (_, uses, _) => decide (met.getD key 0 < uses.size)
          | none => false
        unless componentsLeft do continue
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
        if (splitName name).1 then
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
      -- Injected by the count of the component's literals, which can
      -- themselves be disjunctions.
      let refutations := refutationsOf parts against
      let placed := if (splitName name).1 then none
        else step.unit.placement? position seen
      for (part, j) in parts.zipIdx do
        let negation := refutations[j]!
        negations := negations.push (part, negation)
        if let some placed := placed then
          if let some (some (k, flipped)) := placed[j]? then
            negationAt := negationAt.insert k (part, negation, flipped)
    -- The clause at all of those witnesses at once has every literal refuted.
    let arguments' ← argsFor parent arguments
    let instance_ := mkAppN proof arguments'
    let instantiated ← instantiateForall stated arguments'
    -- Its literals by the clause's count of them, not its shape: a literal
    -- naming a subformula stands for that formula, which can be a disjunction.
    let some clause := parent.clause?
      | throwError "an avatar split clause splits {parent}, which is not a clause"
    let clauseParts ← countedParts ``Or instantiated clause.size
    let contradiction ← elimGiven clauseParts (fun i hl => do
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
        \nof the clause {parent}, whose components are {disjuncts}; their \
        literals are{MessageData.joinSep (negations.toList.map (indentExpr ·.1)) ""}") instance_
    mkAppM ``Iff.mp
      #[← mkAppOptM ``Classical.not_not #[some target],
        ← mkLambdaFVars #[h] contradiction]

/--
How many consecutive derived clauses one lemma proves.

A lemma states the premises it takes from outside itself, while the clauses it
derives are stated once each, where they are proved: the more of a
refutation's clauses one lemma derives, the fewer of their premises are
stated again. But the kernel checks a lemma whole, sharing a copy of it and
caching the type of each of its subterms as it goes, so what one check holds
is several times the lemma: a refutation of tens of thousands of clauses in
one lemma is more than a machine holds at once.
-/
private def batchSize : Nat := 4096

/--
A proof that a run of derived propositional clauses hold, as a lemma of its
own: for propositional atoms, one for each name the clauses and their premises
speak of, and the premises from outside the run, the conjunction of `exports`,
the clauses of the run something after it uses. Gives the lemma applied to what the names stand for and to
the outside premises' proofs.

The solver's derivations are propositional, and what a name stands for is a
whole first-order formula only the leaves need to see. Built in the proof,
every derivation sat under the ones before it, and each formula it used was a
different term at each depth; as a lemma each is a closed term the kernel
checks alone. Inside it, each clause of the run is proved once, as a `let`
over the ones before it.
-/
private partial def derivedAsLemma (proved : Proved)
    (origins : Std.HashMap UInt32 (Expr × Expr)) (run exports : Array SatClause) :
    ReconstructM Expr := do
  -- The names, in the order they are met, and the premises from outside the
  -- run, each once.
  let inRun : Std.HashSet UInt32 := run.foldl (·.insert ·.index) {}
  let mut keys : Array String := #[]
  let mut seenKeys : Std.HashSet String := {}
  let mut outside : Array SatClause := #[]
  let mut seenOutside : Std.HashSet UInt32 := {}
  for c in run do
    for clause in #[c] ++ c.premises do
      for name in clause.literals do
        let key := (splitName name).2
        unless seenKeys.contains key do
          seenKeys := seenKeys.insert key
          keys := keys.push key
    for p in c.premises do
      unless inRun.contains p.index || seenOutside.contains p.index do
        seenOutside := seenOutside.insert p.index
        outside := outside.push p
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
      let outsideStated ← outside.mapM satClauseParts
      let runHere ← run.mapM satClauseParts
      let hypDecls := outsideStated.mapIdx fun i (_, says) =>
        (Name.mkSimple s!"p{i}", fun (_ : Array Expr) => pure says)
      withLocalDeclsD hypDecls fun hyps => do
        let mut states : Stated := {}
        let mut provedHere : Proved := {}
        for (p, i) in outside.zipIdx do
          states := states.insert p.index outsideStated[i]!
          provedHere := provedHere.insert p.index hyps[i]!
        for (c, i) in run.zipIdx do
          states := states.insert c.index runHere[i]!
        let exportStated ← exports.mapM satClauseParts
        let says := exportStated.map (·.2)
        let suffix := suffixJunctions ``And ``True says
        -- Each clause of the run in turn, bound once and used by those after.
        let rec derive (i : Nat) (provedHere : Proved)
            (bound : List Expr) : ReconstructM Expr := do
          let some c := run[i]?
            | do
              let proofs ← exports.mapM fun c => do
                let some h := provedHere.find? (c.index)
                  | throwError "a clause of the run was not proved"
                pure h
              bindLets bound.reverse.toArray (← introGiven says fun j => pure proofs[j]!)
          let proof ← satClause states provedHere origins c
          withLetDecl (Name.mkSimple s!"c{i}") runHere[i]!.2 proof fun h =>
            derive (i + 1) (provedHere.insert c.index h) (h :: bound)
        let body ← derive 0 provedHere []
        return (← mkForallFVars (atoms ++ hyps) suffix[0]!,
          ← mkLambdaFVars (atoms ++ hyps) body)
    finally
      modify fun s => { s with named := saved }
  -- Added directly: a lemma of replay's own is closed, propositional and safe,
  -- so the checks and the environment-wide cache `mkAuxLemma` goes through are
  -- for nothing here.
  let name ← mkAuxDeclName `_satClauses
  addDecl (.thmDecl { name, levelParams := [], type, value })
  let mut args := bodies
  for p in outside do
    let some h := proved.find? (p.index)
      | throwError "a propositional clause used before it was proved"
    args := args.push h
  return mkAppN (mkConst name) args

/--
`avatar_refutation`: the propositional problem the names were handed to has no
model, so what they stand for cannot all hold.

The clauses that stand for first-order ones are proved first, from what proves
those; the solver's derived clauses then come in runs of `batchSize`, each run
from a lemma proving their conjunction, which is taken apart a conjunct at a
time. All of them are bound once, and the last, the empty clause, is `False`.
-/
partial def refutation (step : Step) : ReconstructM Expr := do
  let some root := step.unit.satPremise?
    | throwError "an avatar refutation without the propositional clause it \
      stands on"
  let mut origins : Std.HashMap UInt32 (Expr × Expr) := {}
  for (parent, premise) in step.unit.parents.zip step.premises do
    origins := origins.insert parent.number premise
  let (_, order) := ((satOrder root).run ({}, #[])).2
  let shadows := order.filter (·.origin?.isSome)
  let derived := order.filter (·.origin?.isNone)
  -- The last run using each derived clause, the refuting one being used after
  -- all of them: a run proves the clauses used after it, and the rest of its
  -- clauses stay inside its lemma.
  let mut lastUse : Std.HashMap UInt32 Nat := {}
  for (c, p) in derived.zipIdx do
    for q in c.premises do
      lastUse := lastUse.insert q.index (max (lastUse.getD q.index 0) (p / batchSize))
  lastUse := lastUse.insert root.index derived.size
  -- The derived clauses, a run at a time.
  let rec runs (i : Nat) (states : Stated)
      (proved : Proved) (bound : List Expr) : ReconstructM Expr := do
    if i ≥ derived.size then
      let some proof := proved.find? (root.index)
        | throwError "the refuting clause was not proved"
      return ← bindLets bound.reverse.toArray proof
    let run := derived.extract i (i + batchSize)
    let exports := run.filter fun c => lastUse.getD c.index 0 > i / batchSize
    let runStated ← exports.mapM satClauseParts
    let conjunction ← derivedAsLemma proved origins run exports
    let says := runStated.map (·.2)
    let suffix := suffixJunctions ``And ``True says
    -- `c₁` is the conjunction's left, and what is left of it its right, and
    -- so on: a projection each, each bound, so no clause is reached through
    -- the ones before it.
    let rec split (k : Nat) (rest : Expr) (states : Stated)
        (proved : Proved) (bound : List Expr) : ReconstructM Expr := do
      let some c := exports[k]? | runs (i + run.size) states proved bound
      let states := states.insert c.index runStated[k]!
      if k + 1 == exports.size then
        return ← withLetDecl (Name.mkSimple s!"c{i + k}") says[k]! rest fun h =>
          split (k + 1) rest states (proved.insert c.index h) (h :: bound)
      let left := mkApp3 (mkConst ``And.left) says[k]! suffix[k + 1]! rest
      let right := mkApp3 (mkConst ``And.right) says[k]! suffix[k + 1]! rest
      withLetDecl (Name.mkSimple s!"c{i + k}") says[k]! left fun h =>
      withLetDecl (Name.mkSimple s!"r{i + k}") suffix[k + 1]! right fun r =>
        split (k + 1) r states (proved.insert c.index h) (r :: h :: bound)
    if exports.isEmpty then
      return ← runs (i + run.size) states proved bound
    withLetDecl (Name.mkSimple s!"r{i}") suffix[0]! conjunction fun r =>
      split 0 r states proved (r :: bound)
  -- The shadows of first-order clauses: none of them rests on a derived one.
  let rec shadowing (i : Nat) (states : Stated)
      (proved : Proved) (bound : List Expr) : ReconstructM Expr := do
    let some c := shadows[i]? | runs 0 states proved bound
    let (parts, stated) ← satClauseParts c
    let states := states.insert c.index (parts, stated)
    let value ← satClause states proved origins c
    withLetDecl (Name.mkSimple s!"s{i}") stated value fun h =>
      shadowing (i + 1) states (proved.insert c.index h) (h :: bound)
  shadowing 0 {} {} []

end Vampire.Reconstruct.Avatar
