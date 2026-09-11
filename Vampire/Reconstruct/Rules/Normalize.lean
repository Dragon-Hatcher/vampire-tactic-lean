import Vampire.Reconstruct.Basic

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

private theorem not_true_expand : ¬True ↔ False := by simp

private theorem not_false_expand : ¬False ↔ True := by simp

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

/-- The congruence of a junction's arguments, folded as the junction is. -/
private partial def congruent (congruence : Name)
    (parts : Array (Expr × Expr × Expr)) (i : Nat) : ReconstructM Expr := do
  let some (_, _, proof) := parts[i]? | throwError "missing argument"
  if i + 1 == parts.size then return proof
  mkAppM congruence #[proof, ← congruent congruence parts (i + 1)]

/--
De Morgan over a junction, one argument at a time, then the congruence of the
arguments: what a junction at negative polarity comes to.
-/
private partial def distributed (deMorgan congruence fn unit : Name)
    (givens : Array Expr) (parts : Array (Expr × Expr × Expr)) (i : Nat) :
    ReconstructM Expr := do
  let some (_, _, proof) := parts[i]? | throwError "missing argument"
  if i + 1 == parts.size then return proof
  let some head := givens[i]? | throwError "missing argument"
  let tail := junction fn unit (givens.extract (i + 1) givens.size)
  mkAppM ``Iff.trans
    #[← mkAppOptM deMorgan #[some head, some tail],
      ← mkAppM congruence
        #[proof, ← distributed deMorgan congruence fn unit givens parts (i + 1)]]

mutual

/--
`f` in negation normal form, and the equivalence saying it says the same: at
positive polarity that of `⟦f⟧`, at negative polarity that of `¬⟦f⟧`.

`expand` picks `nnf` over `ennf`, the two differing only over equivalences.
Returns what was given as well, since a lemma about it has to be stated at it.
-/
partial def normalize (expand : Bool) (sorts : Array (UInt32 × String))
    (vars : Vars) (f : Formula) (polarity : Bool) :
    ReconstructM (Expr × Expr × Expr) := do
  let given ← Reconstruct.formula sorts vars f
  let source := if polarity then given else mkApp (mkConst ``Not) given
  let unchanged : ReconstructM (Expr × Expr × Expr) := do
    return (source, source, ← mkAppOptM ``Iff.refl #[some source])
  let sub (i : Nat) : ReconstructM Formula := do
    let some g := f.subformulas[i]? | throwError "formula is missing a subformula"
    return g
  match ← connectiveOf f with
  | .literal =>
    if polarity then unchanged
    else
      -- A negative literal is `¬a`, and its complement is `a`.
      match given.not? with
      | some inner =>
        return (source, inner, ← mkAppOptM ``Classical.not_not #[some inner])
      | none => unchanged
  | .«true» | .«false» =>
    if polarity then unchanged
    else if expand then
      -- `nnf` returns these as they are whatever the polarity, which says
      -- `¬⊤` is `⊤`. It is only ever given a formula `ennf` has been through,
      -- where no such constant is left under a negation.
      throwError "nnf cannot state{indentExpr source}"
    else if given.isConstOf ``True then
      return (source, mkConst ``False, ← mkAppOptM ``not_true_expand #[])
    else
      return (source, mkConst ``True, ← mkAppOptM ``not_false_expand #[])
  | .and | .or =>
    let isAnd := (← connectiveOf f) matches .and
    let parts ← f.subformulas.mapM (normalize expand sorts vars · polarity)
    let results := parts.map (·.2.1)
    if parts.size == 0 then
      throwError "a junction with no arguments"
    else if parts.size == 1 then
      let some (_, result, proof) := parts[0]? | throwError "a junction with no arguments"
      return (source, result, proof)
    else
      let (fn, unit) := if isAnd == polarity then (``And, ``True) else (``Or, ``False)
      let result := junction fn unit results
      if polarity then
        -- Only the arguments changed, so the proof is their congruence.
        let congruence := if isAnd then ``and_congr else ``or_congr
        return (source, result, ← congruent congruence parts 0)
      else
        -- De Morgan, one argument at a time, then their congruence.
        let givens ← f.subformulas.mapM (Reconstruct.formula sorts vars)
        let (deMorgan, congruence) :=
          if isAnd then (``Classical.not_and_iff_not_or_not, ``or_congr)
          else (``not_or, ``and_congr)
        let (givenFn, givenUnit) := if isAnd then (``And, ``True) else (``Or, ``False)
        return (source, result,
          ← distributed deMorgan congruence givenFn givenUnit givens parts 0)
  | .imp =>
    let left ← Reconstruct.formula sorts vars (← sub 0)
    let right ← Reconstruct.formula sorts vars (← sub 1)
    let (_, resultL, proofL) ← normalize expand sorts vars (← sub 0) !polarity
    let (_, resultR, proofR) ← normalize expand sorts vars (← sub 1) polarity
    if polarity then
      return (source, mkApp2 (mkConst ``Or) resultL resultR,
        ← mkAppM ``Iff.trans
          #[← impIffNotOr left right, ← mkAppM ``or_congr #[proofL, proofR]])
    else
      return (source, mkApp2 (mkConst ``And) resultL resultR,
        ← mkAppM ``Iff.trans
          #[← mkAppOptM ``Classical.not_imp #[some left, some right],
            ← mkAppM ``and_congr #[proofL, proofR]])
  | .iff | .xor =>
    let isIff := (← connectiveOf f) matches .iff
    let left ← Reconstruct.formula sorts vars (← sub 0)
    let right ← Reconstruct.formula sorts vars (← sub 1)
    if !expand then
      -- The equivalence stands; both sides are normalised at positive
      -- polarity, and negative polarity turns `<=>` into `<+>` and back.
      let (_, resultL, proofL) ← normalize expand sorts vars (← sub 0) true
      let (_, resultR, proofR) ← normalize expand sorts vars (← sub 1) true
      let congruence ← mkAppM ``iff_congr #[proofL, proofR]
      let equivalence := mkApp2 (mkConst ``Iff) resultL resultR
      if isIff == polarity then
        return (source, equivalence, congruence)
      else
        return (source, mkApp (mkConst ``Not) equivalence,
          ← mkAppM ``not_congr #[congruence])
    else if isIff == polarity then
      -- `l <=> r`, expanded into `(l => r) & (r => l)`.
      let (_, notL, proofNotL) ← normalize expand sorts vars (← sub 0) false
      let (_, resultR, proofR) ← normalize expand sorts vars (← sub 1) true
      let (_, notR, proofNotR) ← normalize expand sorts vars (← sub 1) false
      let (_, resultL, proofL) ← normalize expand sorts vars (← sub 0) true
      let result := mkApp2 (mkConst ``And)
        (mkApp2 (mkConst ``Or) notL resultR) (mkApp2 (mkConst ``Or) notR resultL)
      let expanded ← mkAppM ``Iff.trans
        #[← mkAppOptM ``iff_iff_implies_and_implies #[some left, some right],
          ← mkAppM ``and_congr
            #[← impIffNotOr left right, ← impIffNotOr right left]]
      let congruence ← mkAppM ``and_congr
        #[← mkAppM ``or_congr #[proofNotL, proofR],
          ← mkAppM ``or_congr #[proofNotR, proofL]]
      let proof ← mkAppM ``Iff.trans #[expanded, congruence]
      if polarity then
        return (source, result, proof)
      else
        -- `¬⟦l <+> r⟧` is `¬¬(l ↔ r)`.
        return (source, result,
          ← mkAppM ``Iff.trans
            #[← mkAppOptM ``Classical.not_not
                #[some (mkApp2 (mkConst ``Iff) left right)], proof])
    else
      -- `l <+> r`, expanded into `(l | r) & (~l | ~r)`.
      let (_, resultL, proofL) ← normalize expand sorts vars (← sub 0) true
      let (_, resultR, proofR) ← normalize expand sorts vars (← sub 1) true
      let (_, notL, proofNotL) ← normalize expand sorts vars (← sub 0) false
      let (_, notR, proofNotR) ← normalize expand sorts vars (← sub 1) false
      let result := mkApp2 (mkConst ``And)
        (mkApp2 (mkConst ``Or) resultL resultR) (mkApp2 (mkConst ``Or) notL notR)
      let congruence ← mkAppM ``and_congr
        #[← mkAppM ``or_congr #[proofL, proofR],
          ← mkAppM ``or_congr #[proofNotL, proofNotR]]
      return (source, result,
        ← mkAppM ``Iff.trans
          #[← mkAppOptM ``not_iff_expand #[some left, some right], congruence])
  | .not =>
    let (innerSource, result, proof) ← normalize expand sorts vars (← sub 0) !polarity
    if polarity then
      -- What this says is what its argument at the other polarity says.
      return (innerSource, result, proof)
    else
      let inner ← Reconstruct.formula sorts vars (← sub 0)
      return (source, result,
        ← mkAppM ``Iff.trans
          #[← mkAppOptM ``Classical.not_not #[some inner], proof])
  | .«forall» | .«exists» =>
    let isForall := (← connectiveOf f) matches .«forall»
    let body ← sub 0
    let bound := f.boundVars.filterMap fun v =>
      (sorts.find? (·.1 == v)).map fun (_, s) => (v, s)
    quantified expand sorts body polarity isForall bound.toList vars

  | c => throwError "cannot normalise a formula with connective {repr c}"

/--
The binders of a quantified formula, one at a time: the quantifier stays where
the polarity is positive, and flips where it is negative, the negation moving
in past it.
-/
partial def quantified (expand : Bool) (sorts : Array (UInt32 × String))
    (body : Formula) (polarity isForall : Bool) (rest : List (UInt32 × String))
    (vars : Vars) : ReconstructM (Expr × Expr × Expr) := do
  match rest with
  | [] => normalize expand sorts vars body polarity
  | (v, sortName) :: rest =>
    let τ ← sortType sortName
    withLocalDeclD (Name.mkSimple s!"X{v}") τ fun x => do
      let (innerSource, innerResult, innerProof) ←
        quantified expand sorts body polarity isForall rest (vars.insert v x)
      let congruence ← mkLambdaFVars #[x] innerProof
      if polarity then
        if isForall then
          return (← mkForallFVars #[x] innerSource, ← mkForallFVars #[x] innerResult,
            ← mkAppM ``forall_congr' #[congruence])
        else
          return (← mkAppM ``Exists #[← mkLambdaFVars #[x] innerSource],
            ← mkAppM ``Exists #[← mkLambdaFVars #[x] innerResult],
            ← mkAppM ``exists_congr #[congruence])
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
            ← mkAppM ``Iff.trans
              #[← mkAppOptM ``Classical.not_forall #[some τ, some insideOf],
                ← mkAppM ``exists_congr #[congruence]])
        else
          return (mkApp (mkConst ``Not) (← mkAppM ``Exists #[insideOf]),
            ← mkForallFVars #[x] innerResult,
            ← mkAppM ``Iff.trans
              #[← mkAppOptM ``not_exists #[some τ, some insideOf],
                ← mkAppM ``forall_congr' #[congruence]])

end

/-- Either normalisation: the premise's formula, normalised. -/
private def normalizeStep (expand : Bool) (step : Step) : ReconstructM Expr := do
  let #[(premiseProof, _)] := step.premises
    | throwError "normalisation should have one premise, got {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "normalisation without a premise"
  let some premise := parent.formula?
    | throwError "normalisation should be given a formula"
  let sorts := parent.varSorts ++ step.unit.varSorts
  let (_, _, proof) ← normalize expand sorts {} premise true
  let normalised ← mkAppM ``Iff.mp #[proof, premiseProof]
  -- Normalising here settles what the formula becomes, but not the order
  -- vampire keeps a junction's arguments in, which is its own; so what the
  -- step claims is what this is stated as.
  let conclusion ← step.conclusion
  let stated ← inferType normalised
  if ← isDefEq stated conclusion then
    return normalised
  mkAppM ``Iff.mp #[← equiv stated conclusion, normalised]

/-- `ennf`: negations pushed inward, with equivalences left standing. -/
def ennf (step : Step) : ReconstructM Expr := normalizeStep false step

/-- `nnf`: the same, with equivalences expanded. -/
def nnf (step : Step) : ReconstructM Expr := normalizeStep true step

end Vampire.Reconstruct.Normalize
