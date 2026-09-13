import Vampire.Reconstruct.Basic

/-!
Absorbing the truth values out of a formula.

`SimplifyFalseTrue::innerSimplify` walks a formula and rewrites away every `⊤`
and `⊥` it can: a `⊥` disjunct and a `⊤` conjunct go, a junction left with one
argument becomes that argument and one left with none becomes its unit, `⊤`
absorbs a disjunction and `⊥` a conjunction, an implication or an equivalence
with a constant side collapses to the table below, a negated constant flips,
and a quantifier over a constant body loses its binders.

The walk is a structural recursion with no choices in it, so replay is the same
recursion, carrying the equivalence between the formula it was given and the
one it returns. Nothing here is searched for and nothing is matched up
afterwards: the result this builds is the formula vampire's own walk produced,
literally, and the framework's check that the step's conclusion is what was
proved is what says so.
-/

namespace Vampire.Reconstruct.Simplify

open Lean Meta

/-! ### The absorptions

One lemma for each rewrite the walk can make, so that the term built states
exactly the step vampire took rather than a normal form some tactic found. -/

private theorem or_absorbs_true_left {a : Prop} : (True ∨ a) ↔ True := by simp

private theorem or_absorbs_true_right {a : Prop} : (a ∨ True) ↔ True := by simp

private theorem or_drops_false_left {a : Prop} : (False ∨ a) ↔ a := by simp

private theorem or_drops_false_right {a : Prop} : (a ∨ False) ↔ a := by simp

private theorem and_absorbs_false_left {a : Prop} : (False ∧ a) ↔ False := by simp

private theorem and_absorbs_false_right {a : Prop} : (a ∧ False) ↔ False := by simp

private theorem and_drops_true_left {a : Prop} : (True ∧ a) ↔ a := by simp

private theorem and_drops_true_right {a : Prop} : (a ∧ True) ↔ a := by simp

private theorem imp_true_right {a : Prop} : (a → True) ↔ True := by simp

private theorem imp_true_left {a : Prop} : (True → a) ↔ a := by simp

private theorem imp_false_left {a : Prop} : (False → a) ↔ True := by simp

private theorem imp_false_right {a : Prop} : (a → False) ↔ ¬a := Iff.rfl

private theorem not_false_collapses : ¬False ↔ True := by simp

private theorem not_true_collapses : ¬True ↔ False := by simp

/-! The equivalence's own table. `⊥ ↔ ⊥` and `⊤ ↔ ⊤` are stated on their own
rather than reached through the general cases, because what vampire returns for
them is the constant and not a negated constant. -/

private theorem iff_false_false : (False ↔ False) ↔ True := by simp

private theorem iff_false_true : (False ↔ True) ↔ False := by simp

private theorem iff_false_left {a : Prop} : (False ↔ a) ↔ ¬a := by simp

private theorem iff_true_false : (True ↔ False) ↔ False := by simp

private theorem iff_true_true : (True ↔ True) ↔ True := by simp

private theorem iff_true_left {a : Prop} : (True ↔ a) ↔ a := by simp

private theorem iff_false_right {a : Prop} : (a ↔ False) ↔ ¬a := by simp

private theorem iff_true_right {a : Prop} : (a ↔ True) ↔ a := by simp

private theorem xor_false_false : ¬(False ↔ False) ↔ False := by simp

private theorem xor_false_true : ¬(False ↔ True) ↔ True := by simp

private theorem xor_false_left {a : Prop} : ¬(False ↔ a) ↔ a := by simp

private theorem xor_true_false : ¬(True ↔ False) ↔ True := by simp

private theorem xor_true_true : ¬(True ↔ True) ↔ False := by simp

private theorem xor_true_left {a : Prop} : ¬(True ↔ a) ↔ ¬a := by simp

private theorem xor_false_right {a : Prop} : ¬(a ↔ False) ↔ a := by simp

private theorem xor_true_right {a : Prop} : ¬(a ↔ True) ↔ ¬a := by simp

private theorem forall_true {α : Sort u} : (∀ _ : α, True) ↔ True := by simp

private theorem forall_false {α : Sort u} (x : α) : (∀ _ : α, False) ↔ False :=
  ⟨fun h => h x, fun h _ => h⟩

private theorem exists_true {α : Sort u} (x : α) : (∃ _ : α, True) ↔ True :=
  ⟨fun _ => trivial, fun _ => ⟨x, trivial⟩⟩

private theorem exists_false {α : Sort u} : (∃ _ : α, False) ↔ False := by simp

/-! ### The walk -/

/-- `⟦e⟧ ↔ ⟦e⟧`, for a subformula the walk left alone. -/
private def refl (e : Expr) : ReconstructM Expr := mkAppOptM ``Iff.refl #[some e]

/--
Absorbs the truth values out of a junction whose arguments have already been
walked.

`True` absorbs a disjunction and is dropped from a conjunction; `False` is the
other way round. An argument that absorbs the junction is looked for before one
that is merely dropped, which is the order vampire settles the two in: a
junction with both loses to the one that absorbs it. Dropping every argument
leaves the unit, which is what vampire returns for a junction left empty.
-/
private partial def absorbUnits (isAnd : Bool) (parts : Array Expr) :
    ReconstructM (Expr × Expr) := do
  let (fn, unit) := if isAnd then (``And, ``True) else (``Or, ``False)
  let dropped := mkConst unit
  let absorbing := mkConst (if isAnd then ``False else ``True)
  let some head := parts[0]? | throwError "a junction with no arguments"
  if parts.size == 1 then
    return (head, ← refl head)
  let rest := parts.extract 1 parts.size
  let (tail, tailProof) ← absorbUnits isAnd rest
  -- The tail absorbed, the junction still standing: what is left is to settle
  -- this one argument against it.
  let congruence ← mkAppM (if isAnd then ``and_congr else ``or_congr)
    #[← refl head, tailProof]
  let compose (result : Expr) (absorption : Expr) : ReconstructM (Expr × Expr) :=
    return (result, ← mkAppM ``Iff.trans #[congruence, absorption])
  if head == absorbing then
    compose absorbing (← mkAppOptM
      (if isAnd then ``and_absorbs_false_left else ``or_absorbs_true_left) #[some tail])
  else if tail == absorbing then
    compose absorbing (← mkAppOptM
      (if isAnd then ``and_absorbs_false_right else ``or_absorbs_true_right) #[some head])
  else if head == dropped then
    compose tail (← mkAppOptM
      (if isAnd then ``and_drops_true_left else ``or_drops_false_left) #[some tail])
  else if tail == dropped then
    compose head (← mkAppOptM
      (if isAnd then ``and_drops_true_right else ``or_drops_false_right) #[some head])
  else
    let result := mkApp2 (mkConst fn) head tail
    return (result, ← mkAppM ``Iff.trans #[congruence, ← refl result])

mutual

/--
`f` with its truth values absorbed, and the equivalence saying it says the same
as `f` does.

This is `SimplifyFalseTrue::innerSimplify`, case for case: what it returns is
what that returns, and the equivalence is built out of the one lemma each of its
rewrites stands on.
-/
partial def simplify (sorts : Array (UInt32 × String)) (vars : Vars) (f : Formula) :
    ReconstructM (Expr × Expr) := do
  let given ← Reconstruct.formula sorts vars f
  let unchanged : ReconstructM (Expr × Expr) := return (given, ← refl given)
  let sub (i : Nat) : ReconstructM Formula := do
    let some g := f.subformulas[i]? | throwError "formula is missing a subformula"
    return g
  match ← connectiveOf f with
  -- A truth value is what it is, and a literal has nothing in it to absorb.
  -- (`innerSimplify` descends into an unshared literal's arguments, which is
  -- where a FOOL formula hides a boolean term; nothing in this fragment has
  -- one, and a step that simplified inside one would be caught by the check
  -- that what was proved is what the step claims.)
  | .literal | .«true» | .«false» | .boolTerm => unchanged
  | .not =>
    let (inner, innerProof) ← simplify sorts vars (← sub 0)
    let congruence ← mkAppM ``not_congr #[innerProof]
    let compose (result absorption : Expr) : ReconstructM (Expr × Expr) :=
      return (result, ← mkAppM ``Iff.trans #[congruence, absorption])
    if inner.isConstOf ``False then
      compose (mkConst ``True) (← mkAppOptM ``not_false_collapses #[])
    else if inner.isConstOf ``True then
      compose (mkConst ``False) (← mkAppOptM ``not_true_collapses #[])
    else
      return (mkApp (mkConst ``Not) inner, congruence)
  | .and | .or =>
    let isAnd := (← connectiveOf f) matches .and
    let absorbing := mkConst (if isAnd then ``False else ``True)
    let givens ← f.subformulas.mapM (Reconstruct.formula sorts vars)
    -- Left to right, and stopping where an argument absorbs the junction:
    -- vampire returns there, leaving the arguments after it as they stand.
    let mut results : Array Expr := #[]
    let mut proofs : Array Expr := #[]
    let mut absorbed := false
    for (g, given) in f.subformulas.zip givens do
      if absorbed then
        results := results.push given
        proofs := proofs.push (← refl given)
      else
        let (result, proof) ← simplify sorts vars g
        if result == absorbing then absorbed := true
        results := results.push result
        proofs := proofs.push proof
    let congruence ←
      congrJunction (if isAnd then ``and_congr else ``or_congr) proofs
    let (result, absorption) ← absorbUnits isAnd results
    return (result, ← mkAppM ``Iff.trans #[congruence, absorption])
  | .imp =>
    let left ← Reconstruct.formula sorts vars (← sub 0)
    let (right, rightProof) ← simplify sorts vars (← sub 1)
    -- `_ → ⊤` is `⊤` whatever the antecedent, which is why vampire tests the
    -- consequent before it walks the antecedent at all.
    if right.isConstOf ``True then
      return (mkConst ``True,
        ← mkAppM ``Iff.trans
          #[← mkAppM ``imp_congr #[← refl left, rightProof],
            ← mkAppOptM ``imp_true_right #[some left]])
    let (antecedent, leftProof) ← simplify sorts vars (← sub 0)
    let congruence ← mkAppM ``imp_congr #[leftProof, rightProof]
    let compose (result absorption : Expr) : ReconstructM (Expr × Expr) :=
      return (result, ← mkAppM ``Iff.trans #[congruence, absorption])
    if antecedent.isConstOf ``True then
      compose right (← mkAppOptM ``imp_true_left #[some right])
    else if antecedent.isConstOf ``False then
      compose (mkConst ``True) (← mkAppOptM ``imp_false_left #[some right])
    else if right.isConstOf ``False then
      compose (mkApp (mkConst ``Not) antecedent)
        (← mkAppOptM ``imp_false_right #[some antecedent])
    else
      return (← mkArrow antecedent right, congruence)
  | .iff | .xor =>
    let isIff := (← connectiveOf f) matches .iff
    let (left, leftProof) ← simplify sorts vars (← sub 0)
    let (right, rightProof) ← simplify sorts vars (← sub 1)
    -- `l <+> r` is `¬(l ↔ r)`, so both connectives are the same congruence
    -- with a negation around one of them.
    let inner ← mkAppM ``iff_congr #[leftProof, rightProof]
    let congruence ← if isIff then pure inner else mkAppM ``not_congr #[inner]
    let compose (result absorption : Expr) : ReconstructM (Expr × Expr) :=
      return (result, ← mkAppM ``Iff.trans #[congruence, absorption])
    let constant (e : Expr) : Option Bool :=
      if e.isConstOf ``True then some true
      else if e.isConstOf ``False then some false
      else none
    let truth := mkConst ``True
    let falsity := mkConst ``False
    let negate (e : Expr) := mkApp (mkConst ``Not) e
    match constant left, constant right with
    | some false, some false =>
      if isIff then compose truth (← mkAppOptM ``iff_false_false #[])
      else compose falsity (← mkAppOptM ``xor_false_false #[])
    | some false, some true =>
      if isIff then compose falsity (← mkAppOptM ``iff_false_true #[])
      else compose truth (← mkAppOptM ``xor_false_true #[])
    | some false, none =>
      if isIff then compose (negate right) (← mkAppOptM ``iff_false_left #[some right])
      else compose right (← mkAppOptM ``xor_false_left #[some right])
    | some true, some false =>
      if isIff then compose falsity (← mkAppOptM ``iff_true_false #[])
      else compose truth (← mkAppOptM ``xor_true_false #[])
    | some true, some true =>
      if isIff then compose truth (← mkAppOptM ``iff_true_true #[])
      else compose falsity (← mkAppOptM ``xor_true_true #[])
    | some true, none =>
      if isIff then compose right (← mkAppOptM ``iff_true_left #[some right])
      else compose (negate right) (← mkAppOptM ``xor_true_left #[some right])
    | none, some false =>
      if isIff then compose (negate left) (← mkAppOptM ``iff_false_right #[some left])
      else compose left (← mkAppOptM ``xor_false_right #[some left])
    | none, some true =>
      if isIff then compose left (← mkAppOptM ``iff_true_right #[some left])
      else compose (negate left) (← mkAppOptM ``xor_true_right #[some left])
    | none, none =>
      let equivalence := mkApp2 (mkConst ``Iff) left right
      return (if isIff then equivalence else negate equivalence, congruence)
  | .«forall» | .«exists» =>
    let isForall := (← connectiveOf f) matches .«forall»
    let bound := f.boundVars.filterMap fun v =>
      (sorts.find? (·.1 == v)).map fun (_, s) => (v, s)
    quantified sorts (← sub 0) isForall bound.toList vars
  | c => throwError "cannot absorb the truth values of a formula with \
    connective {repr c}"

/--
A quantified formula's binders, innermost first.

A binder over a constant body goes: what the body says does not depend on what
was bound, so the quantifier says it too. That is the whole of vampire's
`FORALL`/`EXISTS` case, which drops the block where its body came back a
constant -- and a constant body makes every binder of the block drop in turn.

Dropping `∀` needs the sort to be inhabited, and so does keeping `∃`; vampire's
domains are never empty, and `someElement` is what says so here.
-/
partial def quantified (sorts : Array (UInt32 × String)) (body : Formula)
    (isForall : Bool) (rest : List (UInt32 × String)) (vars : Vars) :
    ReconstructM (Expr × Expr) := do
  match rest with
  | [] => simplify sorts vars body
  | (v, sortName) :: rest =>
    let τ ← sortType sortName
    let (result, congruence, inner) ← withLocalDeclD (Name.mkSimple s!"X{v}") τ fun x => do
      let (inner, innerProof) ← quantified sorts body isForall rest (vars.insert v x)
      let congruence ←
        mkAppM (if isForall then ``forall_congr' else ``exists_congr)
          #[← mkLambdaFVars #[x] innerProof]
      let result ←
        if isForall then mkForallFVars #[x] inner
        else mkAppM ``Exists #[← mkLambdaFVars #[x] inner]
      return (result, congruence, inner)
    let compose (result absorption : Expr) : ReconstructM (Expr × Expr) :=
      return (result, ← mkAppM ``Iff.trans #[congruence, absorption])
    -- A constant body is closed, so what the binder ranges over drops out of
    -- what the formula says.
    if inner.isConstOf ``True then
      if isForall then
        compose (mkConst ``True) (← mkAppOptM ``forall_true #[some τ])
      else
        compose (mkConst ``True)
          (← mkAppOptM ``exists_true #[some τ, some (← someElement τ)])
    else if inner.isConstOf ``False then
      if isForall then
        compose (mkConst ``False)
          (← mkAppOptM ``forall_false #[some τ, some (← someElement τ)])
      else
        compose (mkConst ``False) (← mkAppOptM ``exists_false #[some τ])
    else
      return (result, congruence)

end

/--
`reduce_false_true`: the premise with its truth values absorbed.

The premise's own formula is walked, so the equivalence this rests on is built
from the premise rather than recovered by comparing it with the conclusion.
-/
def reduceFalseTrue (step : Step) : ReconstructM Expr := do
  let #[(premiseProof, _)] := step.premises
    | throwError "reduce_false_true should have one premise, got {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "reduce_false_true without a premise"
  let some premise := parent.formula?
    | throwError "reduce_false_true should be given a formula"
  let (_, proof) ← simplify (parent.varSorts ++ step.unit.varSorts) {} premise
  mkAppM ``Iff.mp #[proof, premiseProof]

end Vampire.Reconstruct.Simplify
