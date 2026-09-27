import VampireReplay.Reconstruct.Basic

/-!
Pure predicate removal.

`PredicateDefinition` replaces a predicate that occurs with one polarity only by
the truth value that satisfies each of its occurrences -- `true` for one that
occurs only positively -- and simplifies the truth values away
(`PredicateDefinition::replacePurePredicates`). Every occurrence becoming true
makes the formula weaker, so the result follows from the formula by
monotonicity: replay follows the same walk, proving at each subformula the
implication its polarity calls for.

A pure predicate is never under an equivalence: an occurrence there counts as
one of either polarity. Predicates are found pure one after another, and each
step replaces those found before it was made: the worker records which
predicates were replaced, by what, and in which order.
-/

namespace Vampire.Reconstruct.PurePredicate

open Lean Meta

/-- What pure predicate removal made of a subformula. -/
private inductive Kept
  /-- The truth value it simplified to. -/
  | truth (holds : Bool)
  /--
  A proposition, with its parts where it is a junction: a junction of the same
  connective is merged into the one around it.
  -/
  | prop (e : Expr) (junction : Option (Connective × Array Expr) := none)
deriving Inhabited

private def Kept.expr : Kept → Expr
  | .truth true => mkConst ``True
  | .truth false => mkConst ``False
  | .prop e _ => e

/-- `fun h : a => body h`. -/
private def implication (a : Expr) (body : Expr → ReconstructM Expr) : ReconstructM Expr :=
  withLocalDeclD `h a fun h => do mkLambdaFVars #[h] (← body h)

/-- `∃ xs, body` from `h : body`, the witnesses being `xs` themselves. -/
private def existsIntro (xs : Array Expr) (body h : Expr) : ReconstructM Expr := do
  let mut prop := body
  let mut proof := h
  for x in xs.reverse do
    let p ← mkLambdaFVars #[x] prop
    proof ← mkAppOptM ``Exists.intro #[none, some p, some x, some proof]
    prop ← mkAppM ``Exists #[p]
  return proof

/-- `motive` from `h : ∃ xs, body`, by `k` of the witnesses and the body. -/
private partial def existsElim (xs : Array Expr) (body h motive : Expr)
    (k : Expr → ReconstructM Expr) : ReconstructM Expr := do
  -- The proposition after each witness: `∃ xs[i:], body`.
  let mut props := #[body]
  for x in xs.reverse do
    props := props.push (← mkAppM ``Exists #[← mkLambdaFVars #[x] props.back!])
  let after := props.reverse
  let rec go (i : Nat) (h : Expr) : ReconstructM Expr := do
    if i == xs.size then return ← k h
    let x := xs[i]!
    let inner ← withLocalDeclD `h after[i + 1]! fun hx => do
      mkLambdaFVars #[x, hx] (← go (i + 1) hx)
    mkAppOptM ``Exists.elim #[none, none, some motive, some h, some inner]
  go 0 h

/--
What pure predicate removal makes of `f`, and a proof relating the two as the
polarity `f` occurs with calls for: `⟦f⟧ → r` at a positive one, `r → ⟦f⟧` at
a negative one. `pure` says what each replaced predicate became.
-/
private partial def purged (replaced : Literal → Option Bool) (sorts : Array (UInt32 × String))
    (vars : Vars) (f : Formula) (positive : Bool) : ReconstructM (Kept × Expr) := do
  let stated ← formula sorts vars f
  let unchanged : ReconstructM (Kept × Expr) := do
    return (.prop stated, ← implication stated fun h => pure h)
  let children : ReconstructM (Array Expr) := f.subformulas.mapM (formula sorts vars)
  match ← connectiveOf f with
  | .literal =>
    let some l := f.literal? | throwError "an atom without a literal"
    let some value := replaced l | unchanged
    -- `value ^ l->isNegative()`: what the literal itself became.
    let holds := value != !l.polarity
    if positive then
      unless holds do
        throwError "pure predicate removal made{indentExpr stated}\nfalse where it occurs \
          positively"
      return (.truth true, ← implication stated fun _ => pure (mkConst ``True.intro))
    if holds then
      throwError "pure predicate removal made{indentExpr stated}\ntrue where it occurs \
        negatively"
    return (.truth false,
      ← implication (mkConst ``False) fun h => mkAppOptM ``False.elim #[some stated, some h])
  | .«true» => return (.truth true, ← implication stated fun h => pure h)
  | .«false» => return (.truth false, ← implication stated fun h => pure h)
  | .not =>
    let some g := f.subformulas[0]? | throwError "a negation without a subformula"
    let inner ← formula sorts vars g
    let (k, p) ← purged replaced sorts vars g !positive
    match k with
    | .truth false =>
      if positive then return (.truth true, ← implication stated fun _ => pure (mkConst ``True.intro))
      -- `p : ⟦g⟧ → False`, which is `¬⟦g⟧`.
      return (.truth true, ← implication (mkConst ``True) fun _ => pure p)
    | .truth true =>
      if positive then
        return (.truth false, ← implication stated fun h => pure (mkApp h (mkApp p (mkConst ``True.intro))))
      return (.truth false, ← implication (mkConst ``False) fun h =>
        mkAppOptM ``False.elim #[some stated, some h])
    | .prop g' _ =>
      -- `fun h x => h (p x)` either way round.
      let r := mkNot g'
      if positive then
        return (.prop r, ← implication stated fun h => implication g' fun x => pure (mkApp h (mkApp p x)))
      return (.prop r, ← implication r fun h => implication inner fun x => pure (mkApp h (mkApp p x)))
  | .and | .or =>
    let isAnd := (← connectiveOf f) matches .and
    let connective : Connective := if isAnd then .and else .or
    let (fn, unit) := if isAnd then (``And, ``True) else (``Or, ``False)
    let subs := f.subformulas
    let childStated ← children
    let results ← subs.mapM (purged replaced sorts vars · positive)
    -- The value that decides the whole: `False` for a conjunction, `True`
    -- for a disjunction, at the first child to simplify to it.
    let deciding := results.findIdx? fun (k, _) => match k with
      | .truth b => b != isAnd
      | _ => false
    if let some i := deciding then
      let p := results[i]!.2
      let r : Kept := .truth (!isAnd)
      if isAnd then
        if positive then
          return (r, ← implication stated fun h => do
            return mkApp p (← projectGiven childStated i h))
        return (r, ← implication (mkConst ``False) fun h =>
          mkAppOptM ``False.elim #[some stated, some h])
      if positive then
        return (r, ← implication stated fun _ => pure (mkConst ``True.intro))
      return (r, ← implication (mkConst ``True) fun _ => do
        injectGiven childStated i (mkApp p (mkConst ``True.intro)))
    -- The parts the result is made of, in the order `replacePurePredicates`
    -- puts them: the children kept whole, in order, and then the parts of each
    -- child that became a junction of the same connective, the last such
    -- child's first.
    let mut items : Array (Nat × Option Nat × Expr) := #[]
    let mut merged : Array Nat := #[]
    for ((k, _), i) in results.zipIdx do
      match k with
      | .truth _ => continue
      | .prop e (some (c, _)) => if c == connective then merged := merged.push i else
          items := items.push (i, none, e)
      | .prop e none => items := items.push (i, none, e)
    for i in merged.reverse do
      let .prop _ (some (_, parts)) := results[i]!.1 | throwError "a merged child with no parts"
      for (part, j) in parts.zipIdx do
        items := items.push (i, some j, part)
    let itemExprs := items.map (·.2.2)
    let r : Kept := match itemExprs.size with
      | 0 => .truth isAnd
      | 1 => .prop itemExprs[0]!
      | _ => .prop (junction fn unit itemExprs) (some (connective, itemExprs))
    let childParts (i : Nat) : Array Expr := match results[i]!.1 with
      | .prop _ (some (c, parts)) => if c == connective then parts else #[]
      | _ => #[]
    let itemAt (i : Nat) (j? : Option Nat) : Nat :=
      (items.findIdx? fun (i', j', _) => i' == i && j' == j?).getD 0
    if isAnd then
      if positive then
        return (r, ← implication stated fun h => do
          introGiven itemExprs fun k => do
            let (i, j?, _) := items[k]!
            let hi := mkApp results[i]!.2 (← projectGiven childStated i h)
            match j? with
            | some j => projectGiven (childParts i) j hi
            | none => pure hi)
      return (r, ← implication r.expr fun hr => do
        let item (k : Nat) : ReconstructM Expr := projectGiven itemExprs k hr
        introGiven childStated fun i => do
          let ri ← match results[i]!.1 with
            | .truth _ => pure (mkConst ``True.intro)
            | .prop _ _ =>
              let parts := childParts i
              if parts.isEmpty then item (itemAt i none)
              else introGiven parts fun j => item (itemAt i (some j))
          return mkApp results[i]!.2 ri)
    if positive then
      return (r, ← implication stated fun h => do
        let into (k : Nat) (x : Expr) : ReconstructM Expr := injectGiven itemExprs k x
        let onChild (i : Nat) (hi : Expr) : ReconstructM Expr := do
          let ri := mkApp results[i]!.2 hi
          match results[i]!.1 with
          | .truth _ => mkAppOptM ``False.elim #[some r.expr, some ri]
          | .prop _ _ =>
            let parts := childParts i
            if parts.isEmpty then into (itemAt i none) ri
            else elimGiven parts (fun j hj => into (itemAt i (some j)) hj) ri (motive? := some r.expr)
        elimGiven childStated onChild h (motive? := some r.expr))
    if itemExprs.isEmpty then
      return (r, ← implication (mkConst ``False) fun h =>
        mkAppOptM ``False.elim #[some stated, some h])
    return (r, ← implication r.expr fun hr => do
      let onItem (k : Nat) (hk : Expr) : ReconstructM Expr := do
        let (i, j?, _) := items[k]!
        let ri ← match j? with
          | some j => injectGiven (childParts i) j hk
          | none => pure hk
        injectGiven childStated i (mkApp results[i]!.2 ri)
      elimGiven itemExprs onItem hr (motive? := some stated))
  | .imp =>
    let #[l, rr] := f.subformulas | throwError "an implication of {f.subformulas.size} sides"
    let left ← formula sorts vars l
    let (kr, pr) ← purged replaced sorts vars rr positive
    if kr matches .truth true then
      if positive then return (.truth true, ← implication stated fun _ => pure (mkConst ``True.intro))
      return (.truth true, ← implication (mkConst ``True) fun _ =>
        implication left fun _ => pure (mkApp pr (mkConst ``True.intro)))
    let (kl, pl) ← purged replaced sorts vars l !positive
    match kl with
    | .truth true =>
      if positive then
        return (kr, ← implication stated fun h => pure (mkApp pr (mkApp h (mkApp pl (mkConst ``True.intro)))))
      return (kr, ← implication kr.expr fun hr => implication left fun _ => pure (mkApp pr hr))
    | .truth false =>
      if positive then return (.truth true, ← implication stated fun _ => pure (mkConst ``True.intro))
      return (.truth true, ← implication (mkConst ``True) fun _ => implication left fun hl => do
        mkAppOptM ``False.elim #[some (← formula sorts vars rr), some (mkApp pl hl)])
    | .prop l' _ =>
      let right ← formula sorts vars rr
      if kr matches .truth false then
        let r := mkNot l'
        if positive then
          return (.prop r, ← implication stated fun h => implication l' fun hl =>
            pure (mkApp pr (mkApp h (mkApp pl hl))))
        return (.prop r, ← implication r fun hr => implication left fun hl => do
          mkAppOptM ``False.elim #[some right, some (mkApp hr (mkApp pl hl))])
      let r ← mkArrow l' kr.expr
      if positive then
        return (.prop r, ← implication stated fun h => implication l' fun hl =>
          pure (mkApp pr (mkApp h (mkApp pl hl))))
      return (.prop r, ← implication r fun hr => implication left fun hl =>
        pure (mkApp pr (mkApp hr (mkApp pl hl))))
  | .iff | .xor =>
    -- An occurrence under an equivalence is one of either polarity, so no
    -- pure predicate is there, and nothing in it changes.
    for g in f.subformulas do
      let (k, _) ← purged replaced sorts vars g positive
      unless k.expr == (← formula sorts vars g) do
        throwError "pure predicate removal changed{indentExpr (← formula sorts vars g)}\n\
          under an equivalence"
    unchanged
  | .«forall» | .«exists» =>
    let isForall := (← connectiveOf f) matches .«forall»
    let some body := f.subformulas[0]? | throwError "a quantifier without a body"
    let bound := boundSorts sorts f.boundVars
    withVars bound vars fun inner xs => do
      let bodyStated ← formula sorts inner body
      let (k, p) ← purged replaced sorts inner body positive
      let elements ← xs.mapM fun x => do someElement (← inferType x)
      -- `p` at the elements, for a result that no longer binds anything.
      let atElements (proof : Expr) : ReconstructM Expr := do
        return (← mkLambdaFVars xs proof).beta elements
      if isForall then
        match k with
        | .truth true =>
          if positive then return (.truth true, ← implication stated fun _ => pure (mkConst ``True.intro))
          return (.truth true, ← implication (mkConst ``True) fun _ => do
            mkLambdaFVars xs (mkApp p (mkConst ``True.intro)))
        | .truth false =>
          if positive then
            return (.truth false, ← implication stated fun h => do
              atElements (mkApp p (mkAppN h xs)))
          return (.truth false, ← implication (mkConst ``False) fun h =>
            mkAppOptM ``False.elim #[some stated, some h])
        | .prop b' _ =>
          let r ← mkForallFVars xs b'
          if positive then
            return (.prop r, ← implication stated fun h => do mkLambdaFVars xs (mkApp p (mkAppN h xs)))
          return (.prop r, ← implication r fun hr => do mkLambdaFVars xs (mkApp p (mkAppN hr xs)))
      else
        match k with
        | .truth false =>
          if positive then
            return (.truth false, ← implication stated fun h => do
              existsElim xs bodyStated h (mkConst ``False) fun hb => pure (mkApp p hb))
          return (.truth false, ← implication (mkConst ``False) fun h =>
            mkAppOptM ``False.elim #[some stated, some h])
        | .truth true =>
          if positive then return (.truth true, ← implication stated fun _ => pure (mkConst ``True.intro))
          return (.truth true, ← implication (mkConst ``True) fun _ => do
            atElements (← existsIntro xs bodyStated (mkApp p (mkConst ``True.intro))))
        | .prop b' _ =>
          let r ← xs.foldrM (fun x acc => do mkAppM ``Exists #[← mkLambdaFVars #[x] acc]) b'
          if positive then
            return (.prop r, ← implication stated fun h => do
              existsElim xs bodyStated h r fun hb => existsIntro xs b' (mkApp p hb))
          return (.prop r, ← implication r fun hr => do
            existsElim xs b' hr stated fun hb => existsIntro xs bodyStated (mkApp p hb))
  | _ => unchanged

/-- `pure_predicate_removal`: the premise with its pure predicates replaced. -/
def purePredicateRemoval (step : Step) : ReconstructM Expr := do
  let ⟨parent, premiseProof, _⟩ ← step.onlyPremise
  let some f := parent.formula?
    | throwError "pure_predicate_removal should be given a formula"
  -- What each predicate this step replaced became: those found pure before
  -- the step was made, the rest being replaced by later steps.
  let stage := step.unit.variant
  let replaced (l : Literal) : Option Bool := do
    let (value, order) ← l.symbol?.bind (·.pure?)
    if order < stage then some value else none
  let (k, p) ← purged replaced parent.varSorts {} f true
  let conclusion ← step.conclusion
  unless ← sameFormula k.expr conclusion do
    throwError "pure predicate removal made{indentExpr k.expr}\nof the premise, where the step \
      states{indentExpr conclusion}"
  mkExpectedTypeHint (mkApp p premiseProof) conclusion

end Vampire.Reconstruct.PurePredicate
