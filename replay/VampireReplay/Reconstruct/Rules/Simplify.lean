import VampireReplay.Reconstruct.Basic

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
exactly the step vampire took rather than a normal form some tactic found.
Core states most of them already -- `true_or`, `iff_false` and the rest -- and
those are used as they are; these are the ones it does not. -/

/-! The equivalence's own table. `⊥ ↔ ⊥` and `⊤ ↔ ⊤` are stated on their own
rather than reached through the general cases, because what vampire returns for
them is the constant and not a negated constant. -/

private theorem xor_false_false : ¬(False ↔ False) ↔ False := by simp

private theorem xor_false_true : ¬(False ↔ True) ↔ True := by simp

private theorem xor_false_left {a : Prop} : ¬(False ↔ a) ↔ a := by simp

private theorem xor_true_false : ¬(True ↔ False) ↔ True := by simp

private theorem xor_true_true : ¬(True ↔ True) ↔ False := by simp

private theorem xor_true_left {a : Prop} : ¬(True ↔ a) ↔ ¬a := by simp

private theorem xor_false_right {a : Prop} : ¬(a ↔ False) ↔ a := by simp

private theorem xor_true_right {a : Prop} : ¬(a ↔ True) ↔ ¬a := by simp

private theorem forall_false {α : Sort u} (x : α) : (∀ _ : α, False) ↔ False :=
  ⟨fun h => h x, fun h _ => h⟩

private theorem exists_true {α : Sort u} (x : α) : (∃ _ : α, True) ↔ True :=
  ⟨fun _ => trivial, fun _ => ⟨x, trivial⟩⟩

/-! ### The walk -/

/--
A core lemma stating `lhs = rhs`, as the equivalence the walk composes: core
states the absorptions as equations, which is what `simp` wants of them.
-/
private def ofCore (name : Name) (args : Array Expr) : ReconstructM Expr := do
  mkAppM ``iff_of_eq #[← mkAppM name args]

/--
Absorbs the truth values out of a junction whose arguments have already been
walked.

`True` absorbs a disjunction and is dropped from a conjunction; `False` is the
other way round. An argument that absorbs the junction is looked for before one
that is merely dropped, which is the order vampire settles the two in: a
junction with both loses to the one that absorbs it. Dropping every argument
leaves the unit, which is what vampire returns for a junction left empty.
-/
private def absorbUnits (isAnd : Bool) (parts : Array Expr) :
    ReconstructM (Expr × Option Expr) := do
  let (fn, unit) := if isAnd then (``And, ``True) else (``Or, ``False)
  let dropped := mkConst unit
  let absorbing := mkConst (if isAnd then ``False else ``True)
  let some last := parts.back? | throwError "a junction with no arguments"
  -- From the last argument up, each settled against the tail after it
  -- already absorbed; the tails as given are built once rather than again at
  -- every argument, which over a wide junction is the square of its width.
  let given := suffixJunctions fn unit parts
  let mut tail := last
  let mut tailProof : Option Expr := none
  for k in [0 : parts.size - 1] do
    let i := parts.size - 2 - k
    let head := parts[i]!
    let congruence ← congr2? (if isAnd then ``and_congr else ``or_congr)
      head given[i + 1]! none tailProof
    let compose (result : Expr) (absorption : Expr) : ReconstructM (Expr × Option Expr) :=
      return (result, ← iffTrans? congruence (some absorption))
    let (result, proof) ←
      if head == absorbing then
        compose absorbing (← ofCore (if isAnd then ``false_and else ``true_or) #[tail])
      else if tail == absorbing then
        compose absorbing (← ofCore (if isAnd then ``and_false else ``or_true) #[head])
      else if head == dropped then
        compose tail (← ofCore (if isAnd then ``true_and else ``false_or) #[tail])
      else if tail == dropped then
        compose head (← ofCore (if isAnd then ``and_true else ``or_false) #[head])
      else
        pure (mkApp2 (mkConst fn) head tail, congruence)
    tail := result
    tailProof := proof
  return (tail, tailProof)

mutual

/--
`f` with its truth values absorbed, and the equivalence saying it says the same
as `f` does.

This is `SimplifyFalseTrue::innerSimplify`, case for case: what it returns is
what that returns, and the equivalence is built out of the one lemma each of its
rewrites stands on.

Returns what was given as well, since a lemma about it has to be stated at it.
What the formula says as given is put together from what its parts said, as
`Normalize.normalize` does, so that no part of it is rebuilt at each node above
it.
-/
partial def simplify (sorts : Array (UInt32 × String)) (vars : Vars) (f : Formula) :
    ReconstructM (Expr × Expr × Option Expr) := do
  let sub (i : Nat) : ReconstructM Formula := do
    let some g := f.subformulas[i]? | throwError "formula is missing a subformula"
    return g
  let connective ← connectiveOf f
  match connective with
  -- A truth value is what it is, and a literal has nothing in it to absorb.
  -- (`innerSimplify` descends into an unshared literal's arguments, which is
  -- where a FOOL formula hides a boolean term; nothing in this fragment has
  -- one, and a step that simplified inside one would be caught by the check
  -- that what was proved is what the step claims.)
  | .literal | .«true» | .«false» | .boolTerm =>
    let given ← Reconstruct.formula sorts vars f
    return (given, given, none)
  | .not =>
    let (innerGiven, inner, innerProof) ← simplify sorts vars (← sub 0)
    let given := mkApp (mkConst ``Not) innerGiven
    let congruence ← congr1? ``not_congr innerProof
    let compose (result absorption : Expr) : ReconstructM (Expr × Expr × Option Expr) :=
      return (given, result, ← iffTrans? congruence (some absorption))
    if inner.isConstOf ``False then
      compose (mkConst ``True) (← ofCore ``not_false_eq_true #[])
    else if inner.isConstOf ``True then
      compose (mkConst ``False) (← ofCore ``not_true_eq_false #[])
    else
      return (given, mkApp (mkConst ``Not) inner, congruence)
  | .and | .or =>
    let isAnd := connective matches .and
    let absorbing := mkConst (if isAnd then ``False else ``True)
    -- Left to right, and stopping where an argument absorbs the junction:
    -- vampire returns there, leaving the arguments after it as they stand.
    let mut givens : Array Expr := #[]
    let mut results : Array Expr := #[]
    let mut proofs : Array (Option Expr) := #[]
    let mut absorbed := false
    for g in f.subformulas do
      if absorbed then
        let given ← Reconstruct.formula sorts vars g
        givens := givens.push given
        results := results.push given
        proofs := proofs.push none
      else
        let (given, result, proof) ← simplify sorts vars g
        if result == absorbing then absorbed := true
        givens := givens.push given
        results := results.push result
        proofs := proofs.push proof
    let given :=
      if isAnd then junction ``And ``True givens else junction ``Or ``False givens
    let congruence ←
      if proofs.all Option.isNone then pure none
      else do
        let filled ← (proofs.zip givens).mapM fun (proof, given) => iffOrRefl given proof
        pure (some (← congrJunction (if isAnd then ``and_congr else ``or_congr) filled))
    let (result, absorption) ← absorbUnits isAnd results
    return (given, result, ← iffTrans? congruence absorption)
  | .imp =>
    let (rightGiven, right, rightProof) ← simplify sorts vars (← sub 1)
    -- `_ → ⊤` is `⊤` whatever the antecedent, which is why vampire tests the
    -- consequent before it walks the antecedent at all.
    if right.isConstOf ``True then
      let left ← Reconstruct.formula sorts vars (← sub 0)
      return (← mkArrow left rightGiven, mkConst ``True,
        ← iffTrans? (← congr2? ``imp_congr left rightGiven none rightProof)
          (some (← ofCore ``implies_true #[left])))
    let (left, antecedent, leftProof) ← simplify sorts vars (← sub 0)
    let given ← mkArrow left rightGiven
    let congruence ← congr2? ``imp_congr left rightGiven leftProof rightProof
    let compose (result absorption : Expr) : ReconstructM (Expr × Expr × Option Expr) :=
      return (given, result, ← iffTrans? congruence (some absorption))
    if antecedent.isConstOf ``True then
      compose right (← ofCore ``true_implies #[right])
    else if antecedent.isConstOf ``False then
      compose (mkConst ``True) (← ofCore ``false_implies #[right])
    else if right.isConstOf ``False then
      compose (mkApp (mkConst ``Not) antecedent)
        (← mkAppOptM ``imp_false #[some antecedent])
    else
      return (given, ← mkArrow antecedent right, congruence)
  | .iff | .xor =>
    let isIff := connective matches .iff
    let (leftGiven, left, leftProof) ← simplify sorts vars (← sub 0)
    let (rightGiven, right, rightProof) ← simplify sorts vars (← sub 1)
    let negate (e : Expr) := mkApp (mkConst ``Not) e
    let equivalenceGiven := mkApp2 (mkConst ``Iff) leftGiven rightGiven
    let given := if isIff then equivalenceGiven else negate equivalenceGiven
    -- `l <+> r` is `¬(l ↔ r)`, so both connectives are the same congruence
    -- with a negation around one of them.
    let inner ← congr2? ``iff_congr leftGiven rightGiven leftProof rightProof
    let congruence ← if isIff then pure inner else congr1? ``not_congr inner
    let compose (result absorption : Expr) : ReconstructM (Expr × Expr × Option Expr) :=
      return (given, result, ← iffTrans? congruence (some absorption))
    let constant (e : Expr) : Option Bool :=
      if e.isConstOf ``True then some true
      else if e.isConstOf ``False then some false
      else none
    let truth := mkConst ``True
    let falsity := mkConst ``False
    match constant left, constant right with
    | some false, some false =>
      if isIff then compose truth (← ofCore ``iff_self #[mkConst ``False])
      else compose falsity (← mkAppOptM ``xor_false_false #[])
    | some false, some true =>
      if isIff then compose falsity (mkConst ``false_iff_true)
      else compose truth (← mkAppOptM ``xor_false_true #[])
    | some false, none =>
      if isIff then compose (negate right) (← ofCore ``false_iff #[right])
      else compose right (← mkAppOptM ``xor_false_left #[some right])
    | some true, some false =>
      if isIff then compose falsity (mkConst ``true_iff_false)
      else compose truth (← mkAppOptM ``xor_true_false #[])
    | some true, some true =>
      if isIff then compose truth (← ofCore ``iff_self #[mkConst ``True])
      else compose falsity (← mkAppOptM ``xor_true_true #[])
    | some true, none =>
      if isIff then compose right (← ofCore ``true_iff #[right])
      else compose (negate right) (← mkAppOptM ``xor_true_left #[some right])
    | none, some false =>
      if isIff then compose (negate left) (← ofCore ``iff_false #[left])
      else compose left (← mkAppOptM ``xor_false_right #[some left])
    | none, some true =>
      if isIff then compose left (← ofCore ``iff_true #[left])
      else compose (negate left) (← mkAppOptM ``xor_true_right #[some left])
    | none, none =>
      let equivalence := mkApp2 (mkConst ``Iff) left right
      return (given, if isIff then equivalence else negate equivalence, congruence)
  | .«forall» | .«exists» =>
    let isForall := connective matches .«forall»
    let bound := boundSorts sorts f.boundVars
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
    ReconstructM (Expr × Expr × Option Expr) := do
  match rest with
  | [] => simplify sorts vars body
  | (v, sortName) :: rest =>
    let τ ← sortType sortName
    let (given, result, congruence, inner) ←
        withLocalDeclD (Name.mkSimple s!"X{v}") τ fun x => do
      let (innerGiven, inner, innerProof) ←
        quantified sorts body isForall rest (vars.insert v x)
      let congruence ← innerProof.mapM fun proof => do
        mkAppM (if isForall then ``forall_congr' else ``exists_congr)
          #[← mkLambdaFVars #[x] proof]
      let bind (e : Expr) : ReconstructM Expr := do
        if isForall then mkForallFVars #[x] e
        else mkAppM ``Exists #[← mkLambdaFVars #[x] e]
      return (← bind innerGiven, ← bind inner, congruence, inner)
    let compose (result absorption : Expr) : ReconstructM (Expr × Expr × Option Expr) :=
      return (given, result, ← iffTrans? congruence (some absorption))
    -- A constant body is closed, so what the binder ranges over drops out of
    -- what the formula says.
    if inner.isConstOf ``True then
      if isForall then
        compose (mkConst ``True) (← ofCore ``implies_true #[τ])
      else
        compose (mkConst ``True)
          (← mkAppOptM ``exists_true #[some τ, some (← someElement τ)])
    else if inner.isConstOf ``False then
      if isForall then
        compose (mkConst ``False)
          (← mkAppOptM ``forall_false #[some τ, some (← someElement τ)])
      else
        compose (mkConst ``False) (← mkAppM ``iff_false_intro #[← mkAppOptM ``exists_false #[some τ]])
    else
      return (given, result, congruence)

end

/--
`reduce_false_true`: the premise with its truth values absorbed.

The premise's own formula is walked, so the equivalence this rests on is built
from the premise rather than recovered by comparing it with the conclusion.
-/
def reduceFalseTrue (step : Step) : ReconstructM Expr := do
  let ⟨parent, premiseProof, _⟩ ← step.onlyPremise
  let some premise := parent.formula?
    | throwError "reduce_false_true should be given a formula"
  match ← simplify (parent.varSorts ++ step.unit.varSorts) {} premise with
  | (_, _, some proof) => mkAppM ``Iff.mp #[proof, premiseProof]
  | (_, _, none) => pure premiseProof

end Vampire.Reconstruct.Simplify
