import VampireReplay.Reconstruct.Basic

/-!
Negation normal form.

`NNF::ennf` and `NNF::nnf` both walk a formula carrying a polarity, and return
something equivalent to the formula at positive polarity and to its negation at
negative polarity: negations are pushed inward, implications become
disjunctions, and a quantifier or a junction flips where the polarity is
negative. They differ over equivalences. `ennf` leaves one standing, flipping
`<=>` and `<+>` where the polarity is negative and normalising both sides at
positive polarity; `nnf` expands it, `l <=> r` into `(l => r) & (r => l)` and
`l <+> r` into `(l | r) & (~l | ~r)`, and normalises that.

Replay follows the same walk and builds the equivalence between what it was
given and what it returns as it goes.
-/

namespace Vampire.Reconstruct.Normalize

open Lean Meta

private theorem not_iff_expand {a b : Prop} : ¬(a ↔ b) ↔ ((a ∨ b) ∧ (¬a ∨ ¬b)) := by
  constructor
  · intro h
    refine ⟨?_, ?_⟩
    · rcases Classical.em a with ha | ha
      · exact Or.inl ha
      · rcases Classical.em b with hb | hb
        · exact Or.inr hb
        · exact absurd ⟨fun x => absurd x ha, fun x => absurd x hb⟩ h
    · rcases Classical.em a with ha | ha
      · exact Or.inr fun hb => h ⟨fun _ => hb, fun _ => ha⟩
      · exact Or.inl ha
  · rintro ⟨hor, hnot⟩ ⟨hab, hba⟩
    rcases hor with ha | hb
    · rcases hnot with hna | hnb
      · exact hna ha
      · exact hnb (hab ha)
    · rcases hnot with hna | hnb
      · exact hna (hba hb)
      · exact hnb hb

/-- `(a → b) ↔ (¬a ∨ b)`, which needs the excluded middle. -/
private def impIffNotOr (a b : Expr) : ReconstructM Expr := do
  let decidable ← mkAppOptM ``Classical.propDecidable #[some a]
  mkAppOptM ``Decidable.imp_iff_not_or #[some a, some b, some decidable]

/--
What a normalised part's proof is, written out: `Iff.refl` where the walk left
it alone, for a lemma that needs one either way.
-/
private def proofOf (part : Expr × Expr × Option Expr) : ReconstructM Expr :=
  iffOrRefl part.1 part.2.2

/--
De Morgan over a junction, one argument at a time, then the congruence of the
arguments: what a junction at negative polarity comes to. `¬(g₀ ∘ … ∘ gₙ)` is
`¬g₀ • ¬(g₁ ∘ …)`, the first argument's proof and the rest's give `r₀ • (r₁ • …)`,
and so on down.

Built from the last argument up, over the suffixes of what was given (`gs`) and
of what the arguments became (`rs`), each built once: rebuilding the rest of
the junction at every argument, and unifying a lemma with it, is the square of
its width -- and a clause's disjunction can be a thousand literals wide.
-/
private def distributed (deMorgan congruence fn unit resultFn resultUnit : Name)
    (givens results : Array Expr) (parts : Array (Expr × Expr × Option Expr)) :
    ReconstructM Expr := do
  let n := parts.size
  let gs := suffixJunctions fn unit givens
  let rs := suffixJunctions resultFn resultUnit results
  let denied (e : Expr) : Expr := mkApp (mkConst ``Not) e
  let some last := parts.back? | throwError "a junction with no arguments"
  let mut proof ← proofOf last
  for k in [0 : n - 1] do
    let i := n - 2 - k
    -- `¬gs[i] ↔ ¬givens[i] • ¬gs[i+1] ↔ results[i] • rs[i+1] = rs[i]`.
    let split := mkApp2 (mkConst resultFn) (denied givens[i]!) (denied gs[i + 1]!)
    let byParts := congr2 congruence (denied givens[i]!) results[i]! (denied gs[i + 1]!)
      rs[i + 1]! (← proofOf parts[i]!) proof
    proof := mkApp5 (mkConst ``Iff.trans) (denied gs[i]!) split rs[i]!
      (mkApp2 (mkConst deMorgan) givens[i]! gs[i + 1]!) byParts
  return proof

/--
What a formula normalised at a polarity says as it was given: the source is the
formula itself at positive polarity and its negation at negative.
-/
private def givenOf (part : Expr × Expr × Option Expr) (polarity : Bool) : Expr :=
  if polarity then part.1 else (part.1.not?).getD part.1

/--
The walks already made, by formula, polarity and what the variables in scope
stand for: an expanded equivalence normalises each side at both polarities, so
equivalences nested in each other would otherwise walk the innermost ones once
for every way of reaching them.
-/
private abbrev Walked :=
  IO.Ref (Std.HashMap (UInt32 × Bool × List (UInt32 × Expr)) (Expr × Expr × Option Expr))

mutual

/--
`f` in negation normal form, and the equivalence saying it says the same: at
positive polarity that of `⟦f⟧`, at negative polarity that of `¬⟦f⟧`.

`expand` picks `nnf` over `ennf`, the two differing only over equivalences.
Returns what was given as well, since a lemma about it has to be stated at it.
The equivalence is `none` where the walk changed nothing.

What the formula says as given is put together from what its parts said, so
that no part of it is rebuilt at each node above it.
-/
partial def normalize (walked : Walked) (expand : Bool)
    (sorts : Array (UInt32 × String)) (vars : Vars) (f : Formula) (polarity : Bool) :
    ReconstructM (Expr × Expr × Option Expr) := do
  let key := (f.index, polarity, vars.toList.mergeSort (·.1 ≤ ·.1))
  if let some done := (← walked.get)[key]? then
    return done
  let done ← walk
  walked.modify (·.insert key done)
  return done
where
  walk : ReconstructM (Expr × Expr × Option Expr) := do
  let sourceOf (given : Expr) : Expr :=
    if polarity then given else mkApp (mkConst ``Not) given
  let sub (i : Nat) : ReconstructM Formula := do
    let some g := f.subformulas[i]? | throwError "formula is missing a subformula"
    return g
  let normalizePart := normalize walked expand sorts
  match ← connectiveOf f with
  | .literal =>
    let given ← Reconstruct.formula sorts vars f
    let source := sourceOf given
    let unchanged : ReconstructM (Expr × Expr × Option Expr) := do
      return (source, source, none)
    if polarity then unchanged
    else
      -- A negative literal is `¬a`, and its complement is `a`.
      match given.not? with
      | some inner =>
        return (source, inner, some (← mkAppOptM ``Classical.not_not #[some inner]))
      | none => unchanged
  | .«true» | .«false» =>
    let given ← Reconstruct.formula sorts vars f
    let source := sourceOf given
    if polarity then return (source, source, none)
    else if expand then
      -- `nnf` returns these as they are whatever the polarity, which says
      -- `¬⊤` is `⊤`. It is only ever given a formula `ennf` has been through,
      -- where no such constant is left under a negation.
      throwError "nnf cannot normalise the negated truth value{indentExpr source}\n\
        which vampire's nnf leaves as it is; it expects ennf to have removed it"
    else if given.isConstOf ``True then
      return (source, mkConst ``False,
        some (← mkAppM ``iff_of_eq #[mkConst ``not_true_eq_false]))
    else
      return (source, mkConst ``True,
        some (← mkAppM ``iff_of_eq #[mkConst ``not_false_eq_true]))
  | .and | .or =>
    let isAnd := (← connectiveOf f) matches .and
    let parts ← f.subformulas.mapM (normalizePart vars · polarity)
    let results := parts.map (·.2.1)
    let givens := parts.map (givenOf · polarity)
    let source := sourceOf
      (if isAnd then junction ``And ``True givens else junction ``Or ``False givens)
    if parts.size == 0 then
      throwError "a junction with no arguments"
    else if parts.size == 1 then
      let some (_, result, proof) := parts[0]? | throwError "a junction with no arguments"
      return (source, result, proof)
    else
      let (fn, unit) := if isAnd == polarity then (``And, ``True) else (``Or, ``False)
      let result := junction fn unit results
      if polarity then
        -- Only the arguments changed, so the proof is their congruence, and
        -- where none did there is nothing to prove.
        if parts.all (·.2.2.isNone) then return (source, source, none)
        let congruence := if isAnd then ``and_congr else ``or_congr
        return (source, result, some (← congrJunction congruence (← parts.mapM proofOf)))
      else
        -- De Morgan, one argument at a time, then their congruence.
        let (deMorgan, congruence) :=
          if isAnd then (``Classical.not_and_iff_not_or_not, ``or_congr)
          else (``not_or, ``and_congr)
        let (givenFn, givenUnit) := if isAnd then (``And, ``True) else (``Or, ``False)
        return (source, result,
          some (← distributed deMorgan congruence givenFn givenUnit fn unit givens results parts))
  | .imp =>
    let partL ← normalizePart vars (← sub 0) !polarity
    let partR ← normalizePart vars (← sub 1) polarity
    let left := givenOf partL !polarity
    let right := givenOf partR polarity
    let source := sourceOf (← mkArrow left right)
    let (_, resultL, _) := partL
    let (_, resultR, _) := partR
    -- An implication becomes a disjunction whatever its sides do, so the step
    -- is taken either way, and their congruence only where one changed.
    if polarity then
      return (source, mkApp2 (mkConst ``Or) resultL resultR,
        ← iffTrans? (some (← impIffNotOr left right))
          (← congr2? ``or_congr partL.1 partR.1 partL.2.2 partR.2.2))
    else
      return (source, mkApp2 (mkConst ``And) resultL resultR,
        ← iffTrans? (some (← mkAppOptM ``Classical.not_imp #[some left, some right]))
          (← congr2? ``and_congr partL.1 partR.1 partL.2.2 partR.2.2))
  | .iff | .xor =>
    let isIff := (← connectiveOf f) matches .iff
    -- Both sides are normalised at positive polarity whichever normalisation
    -- this is, and what they say as given is read off that.
    let (left, resultL, proofL) ← normalizePart vars (← sub 0) true
    let (right, resultR, proofR) ← normalizePart vars (← sub 1) true
    let equivalenceGiven := mkApp2 (mkConst ``Iff) left right
    let source := sourceOf
      (if isIff then equivalenceGiven else mkApp (mkConst ``Not) equivalenceGiven)
    if !expand then
      -- The equivalence stands, and negative polarity turns `<=>` into `<+>`
      -- and back.
      let congruence ← congr2? ``iff_congr left right proofL proofR
      let equivalence := mkApp2 (mkConst ``Iff) resultL resultR
      if isIff == polarity then
        if isIff then return (source, equivalence, congruence)
        -- `¬⟦l <+> r⟧` is `¬¬(l ↔ r)`, whose double negation goes first.
        return (source, equivalence,
          ← iffTrans? (some (← mkAppOptM ``Classical.not_not
            #[some (mkApp2 (mkConst ``Iff) left right)])) congruence)
      else
        return (source, mkApp (mkConst ``Not) equivalence,
          ← congr1? ``not_congr congruence)
    else if isIff == polarity then
      -- `l <=> r`, expanded into `(l => r) & (r => l)`.
      let partNotL ← normalizePart vars (← sub 0) false
      let partNotR ← normalizePart vars (← sub 1) false
      let result := mkApp2 (mkConst ``And)
        (mkApp2 (mkConst ``Or) partNotL.2.1 resultR)
        (mkApp2 (mkConst ``Or) partNotR.2.1 resultL)
      let expanded ← mkAppM ``Iff.trans
        #[← mkAppOptM ``iff_iff_implies_and_implies #[some left, some right],
          ← mkAppM ``and_congr
            #[← impIffNotOr left right, ← impIffNotOr right left]]
      let congruence ← mkAppM ``and_congr
        #[← mkAppM ``or_congr #[← proofOf partNotL, ← iffOrRefl right proofR],
          ← mkAppM ``or_congr #[← proofOf partNotR, ← iffOrRefl left proofL]]
      let proof ← mkAppM ``Iff.trans #[expanded, congruence]
      if polarity then
        return (source, result, some proof)
      else
        -- `¬⟦l <+> r⟧` is `¬¬(l ↔ r)`.
        return (source, result, some (← mkAppM ``Iff.trans
            #[← mkAppOptM ``Classical.not_not
                #[some (mkApp2 (mkConst ``Iff) left right)], proof]))
    else
      -- `l <+> r`, expanded into `(l | r) & (~l | ~r)`.
      let partNotL ← normalizePart vars (← sub 0) false
      let partNotR ← normalizePart vars (← sub 1) false
      let result := mkApp2 (mkConst ``And)
        (mkApp2 (mkConst ``Or) resultL resultR)
        (mkApp2 (mkConst ``Or) partNotL.2.1 partNotR.2.1)
      let congruence ← mkAppM ``and_congr
        #[← mkAppM ``or_congr #[← iffOrRefl left proofL, ← iffOrRefl right proofR],
          ← mkAppM ``or_congr #[← proofOf partNotL, ← proofOf partNotR]]
      return (source, result, some (← mkAppM ``Iff.trans
          #[← mkAppOptM ``not_iff_expand #[some left, some right], congruence]))
  | .not =>
    let part ← normalizePart vars (← sub 0) !polarity
    let (innerSource, result, proof) := part
    if polarity then
      -- What this says is what its argument at the other polarity says.
      return (innerSource, result, proof)
    else
      let inner := givenOf part true
      let source := sourceOf (mkApp (mkConst ``Not) inner)
      return (source, result,
        ← iffTrans? (some (← mkAppOptM ``Classical.not_not #[some inner])) proof)
  | .«forall» | .«exists» =>
    let isForall := (← connectiveOf f) matches .«forall»
    let body ← sub 0
    let bound := boundSorts sorts f.boundVars
    quantified walked expand sorts body polarity isForall bound.toList vars

  | c => throwError "cannot normalise a formula with connective {repr c}"

/--
The binders of a quantified formula, one at a time: the quantifier stays where
the polarity is positive, and flips where it is negative, the negation moving
in past it.
-/
partial def quantified (walked : Walked) (expand : Bool)
    (sorts : Array (UInt32 × String)) (body : Formula) (polarity isForall : Bool)
    (rest : List (UInt32 × String)) (vars : Vars) :
    ReconstructM (Expr × Expr × Option Expr) := do
  match rest with
  | [] => normalize walked expand sorts vars body polarity
  | (v, sortName) :: rest =>
    let τ ← sortType sortName
    withLocalDeclD (Name.mkSimple s!"X{v}") τ fun x => do
      let (innerSource, innerResult, innerProof) ←
        quantified walked expand sorts body polarity isForall rest (vars.insert v x)
      let congruence ← mkLambdaFVars #[x] (← iffOrRefl innerSource innerProof)
      if polarity then
        let congruent (lemma_ : Name) : ReconstructM (Option Expr) :=
          if innerProof.isNone then pure none
          else some <$> mkAppM lemma_ #[congruence]
        if isForall then
          return (← mkForallFVars #[x] innerSource, ← mkForallFVars #[x] innerResult,
            ← congruent ``forall_congr')
        else
          return (← mkAppM ``Exists #[← mkLambdaFVars #[x] innerSource],
            ← mkAppM ``Exists #[← mkLambdaFVars #[x] innerResult],
            ← congruent ``exists_congr)
      else
        -- The body speaks of its own negation already, so what is left is to
        -- move that negation out past this binder, flipping it.
        let some inside := innerSource.not?
          | throwError "the body of a quantifier at negative polarity is not a \
              negation:{indentExpr innerSource}"
        let insideOf ← mkLambdaFVars #[x] inside
        if isForall then
          return (mkApp (mkConst ``Not) (← mkForallFVars #[x] inside),
            ← mkAppM ``Exists #[← mkLambdaFVars #[x] innerResult],
            some (← mkAppM ``Iff.trans
              #[← mkAppOptM ``Classical.not_forall #[some τ, some insideOf],
                ← mkAppM ``exists_congr #[congruence]]))
        else
          return (mkApp (mkConst ``Not) (← mkAppM ``Exists #[insideOf]),
            ← mkForallFVars #[x] innerResult,
            some (← mkAppM ``Iff.trans
              #[← mkAppOptM ``not_exists #[some τ, some insideOf],
                ← mkAppM ``forall_congr' #[congruence]]))

end

/-- Either normalisation: the premise's formula, normalised. -/
private def normalizeStep (expand : Bool) (step : Step) : ReconstructM Expr := do
  let ⟨parent, premiseProof, _⟩ ← step.onlyPremise
  let some premise := parent.formula?
    | throwError "normalisation should be given a formula"
  let sorts := parent.varSorts ++ step.unit.varSorts
  let walked ← IO.mkRef {}
  let normalised ← match ← normalize walked expand sorts {} premise true with
    | (_, _, some proof) => mkAppM ``Iff.mp #[proof, premiseProof]
    | (_, _, none) => pure premiseProof
  -- Normalising here settles what the formula becomes, but not the order
  -- vampire keeps a junction's arguments in, which is its own; so what the
  -- step claims is what this is stated as.
  restate normalised (← inferType normalised) (← step.conclusion)

/-- `ennf`: negations pushed inward, with equivalences left standing. -/
def ennf (step : Step) : ReconstructM Expr := normalizeStep false step

/-- `nnf`: the same, with equivalences expanded. -/
def nnf (step : Step) : ReconstructM Expr := normalizeStep true step

end Vampire.Reconstruct.Normalize
