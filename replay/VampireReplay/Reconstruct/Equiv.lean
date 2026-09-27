import VampireReplay.Reconstruct.Literal

namespace Vampire.Reconstruct

open Lean Meta

/-- Whether an expression is the type `Prop`. -/
private def isPropType (e : Expr) : Bool := e matches .sort .zero

/--
`source → target`, where the two say the same thing up to the order and nesting
of junctions.

A rule that drops or repeats literals leaves the rest in place, but can nest
what is left differently, so this comes to relating two junctions over the
same parts, which a lookup settles rather than a search: each part of one is
found among the parts of the other by structural equality.

A disjunct of the source that is absent from the target has to be refutable on
its own, as `t ≠ t` is, which is how a removed literal is accounted for.
-/
partial def implies (source target : Expr) : ReconstructM Expr := do
  let source ← instantiateMVars source
  let target ← instantiateMVars target
  if ← sameFormula source target then
    return ← withLocalDeclD `h source fun h => mkLambdaFVars #[h] h
  match source, target with
  | .forallE _ sd sb _, .forallE _ td tb _ =>
    -- Only a genuine quantifier: `¬a` is an arrow too, but not a `forallE`.
    unless ← sameFormula sd td do
      throwError "cannot show that{indentExpr source}\nimplies{indentExpr target}\n\
        their binders have different types"
    withLocalDeclD `x sd fun x => do
      let rest ← implies (sb.instantiate1 x) (tb.instantiate1 x)
      withLocalDeclD `h source fun h => do
        mkLambdaFVars #[h] (← mkLambdaFVars #[x] (mkApp rest (mkApp h x)))
  | _, _ =>
    if target.isAppOfArity ``And 2 then
      let parts := junctionParts ``And target
      return ← withLocalDeclD `h source fun h => do
        mkLambdaFVars #[h] (← introParts target fun j => do
          return mkApp (← implies source parts[j]!) h)
    -- What the source says of each of its conjuncts, when the target is one of
    -- them: a rule that leaves a conjunct out keeps the rest in place.
    if source.isAppOfArity ``And 2 && !target.isAppOfArity ``And 2 then
      let conjuncts := junctionParts ``And source
      for (conjunct, i) in conjuncts.zipIdx do
        if ← sameFormula conjunct target then
          return ← withLocalDeclD `h source fun h => do
            mkLambdaFVars #[h] (← projectPart source i h)
    let parts := junctionParts ``Or target
    let index := parts.zipIdx.foldl (init := ({} : Std.HashMap Expr Nat))
      fun acc (p, i) => acc.insert p i
    -- `l : d` becomes a proof of the target, if `d` is among its disjuncts or
    -- is refutable on its own. An equality can be stated either way round, so
    -- the flipped form is looked up too rather than searched for.
    withShapeDisjunction target fun inject => do
    let branchFor (d : Expr) : ReconstructM Expr := do
      if let some i := index[d]? then
        return ← withLocalDeclD `l d fun l => do
          mkLambdaFVars #[l] (inject i l)
      if let some (α, a, b, negated) := equalityLiteral? d then
        let equation ← mkAppOptM ``Eq #[some α, some b, some a]
        let flipped := if negated then mkApp (mkConst ``Not) equation else equation
        if let some i := index[flipped]? then
          return ← withLocalDeclD `l d fun l => do
            mkLambdaFVars #[l] (inject i (← symmLiteral α a b negated l))
      -- Absent, so it has to be refutable on its own.
      withLocalDeclD `l d fun l => do
        let some refuted ← refuteDropped? target l
          | throwError "the disjunct{indentExpr d}\nis neither among\
              {indentExpr target}\nnor refutable on its own"
        mkLambdaFVars #[l] refuted
    let branches ← (junctionParts ``Or source).mapM branchFor
    withLocalDeclD `h source fun h => do
      mkLambdaFVars #[h] (← elimParts source (fun i hi => do
        let some branch := branches[i]?
          | throwError "the disjunction{indentExpr source}\nhas no disjunct {i}"
        return mkApp branch hi) h)

/--
What a step that restates a formula does to it, and so what relating the
premise to the conclusion may undo -- nothing else: each is applied exactly
where the two differ in that way, and anything else is an error.
-/
structure Restating where
  /-- Vampire's parser folds `~` into an atom's polarity: `¬¬a`, of an atom, is `a`. -/
  atomDoubleNegations : Bool := false
  /-- Flattening cancels double negations anywhere. -/
  doubleNegations : Bool := false
  /-- Vampire shares an equation with its sides in an order of its own. -/
  equations : Bool := false
  /--
  Nested junctions of one connective as one list of their parts, in order:
  the translation writes them so, vampire's parser merges them
  (`makeJunction`), and so does flattening.
  -/
  junctions : Bool := false
  /-- The translation writes an equation between propositions as `<=>`. -/
  propositionEquations : Bool := false
  /-- Rectification drops a quantifier over a variable nothing mentions. -/
  vacuousQuantifiers : Bool := false

/-- Whether a proposition is an atom, as against a connective or quantifier. -/
private def isAtom (e : Expr) : Bool :=
  !(e.isAppOfArity ``Not 1 || e.isAppOfArity ``And 2 || e.isAppOfArity ``Or 2 ||
    e.isAppOfArity ``Iff 2 || e.isAppOfArity ``Exists 2 || e.isForall ||
    e.isConstOf ``True || e.isConstOf ``False)

/-- `¬(x = y)` for `x ≠ y`, which is what it unfolds to. -/
private def unfoldNe (e : Expr) : Expr :=
  if e.isAppOfArity ``Ne 3 then
    match e.getAppFn with
    | .const _ levels => mkNot (mkAppN (.const ``Eq levels) e.getAppArgs)
    | _ => e
  else e

/-- `p₀ ∘ (p₁ ∘ … pₙ)`, the parts of a junction of `fn` nested to the right. -/
private def rightNested (fn : Name) (parts : Array Expr) : Expr := Id.run do
  let mut acc := parts.back!
  for p in (parts.pop).reverse do
    acc := mkApp2 (mkConst fn) p acc
  return acc

private def congrOf (fn : Name) : Name :=
  if fn == ``And then ``and_congr else ``or_congr

private def assocOf (fn : Name) : Name :=
  if fn == ``And then ``and_assoc else ``or_assoc

/-- `fn (nest ps) (nest qs) ↔ nest (ps ++ qs)`, by associativity. -/
private partial def appended (fn : Name) (ps qs : Array Expr) : MetaM Expr := do
  if ps.size == 1 then return mkApp (mkConst ``Iff.refl) (rightNested fn (ps ++ qs))
  let p := ps[0]!
  let rest := ps.extract 1 ps.size
  let reassociated ← mkAppOptM (assocOf fn)
    #[some p, some (rightNested fn rest), some (rightNested fn qs)]
  let congr ← mkAppM (congrOf fn) #[← mkAppM ``Iff.refl #[p], ← appended fn rest qs]
  mkAppM ``Iff.trans #[reassociated, congr]

/-- The parts of `e`, a junction of `fn` nested any way, in order, and `e ↔` them nested right. -/
private partial def junctionOf (fn : Name) (e : Expr) : MetaM (Array Expr × Expr) := do
  if !e.isAppOfArity fn 2 then return (#[e], mkApp (mkConst ``Iff.refl) e)
  let (px, hx) ← junctionOf fn e.appFn!.appArg!
  let (py, hy) ← junctionOf fn e.appArg!
  let congr ← mkAppM (congrOf fn) #[hx, hy]
  return (px ++ py, ← mkAppM ``Iff.trans #[congr, ← appended fn px py])

/-- `nest ps ↔ nest qs` from each `pᵢ ↔ qᵢ`. -/
private def nestedCongr (fn : Name) (hs : Array Expr) : MetaM Expr := do
  let mut acc := hs.back!
  for h in (hs.pop).reverse do
    acc ← mkAppM (congrOf fn) #[h, acc]
  return acc

/--
`a ↔ b`, for the premise `a` and conclusion `b` of a step that restates a
formula doing only what `r` says: congruence down to where the two differ, and
there exactly the rewrite `r` allows.
-/
partial def relate (r : Restating) (a b : Expr) : ReconstructM Expr := do
  let a := unfoldNe (← instantiateMVars a)
  let b := unfoldNe (← instantiateMVars b)
  if a == b then return mkApp (mkConst ``Iff.refl) a
  if ← sameFormula a b then return ← mkExpectedTypeHint (mkApp (mkConst ``Iff.refl) a) (← mkAppM ``Iff #[a, b])
  -- A double negation the step cancelled.
  if let some inner := a.not? then
    if let some x := inner.not? then
      if r.doubleNegations || (r.atomDoubleNegations && isAtom x) then
        let rest ← relate r x b
        return ← mkAppM ``Iff.trans #[mkApp (mkConst ``Classical.not_not) x, rest]
  -- An equation between propositions, which the translation wrote as `<=>`.
  if r.propositionEquations then
    if let some (α, x, y) := a.eq? then
      if α.isProp then
        let rest ← relate r (← mkAppM ``Iff #[x, y]) b
        return ← mkAppM ``Iff.trans #[← mkAppOptM ``eq_iff_iff #[some x, some y], rest]
  -- A quantifier over a variable nothing mentions, which rectification drops
  -- wherever it is: what it makes has none.
  if r.vacuousQuantifiers then
    if let .forallE _ d body _ := a then
      if !body.hasLooseBVars && !(← isProp d) then
        let rest ← relate r body b
        return ← mkAppM ``Iff.trans #[← mkAppOptM ``forall_const #[some body, some d, none], rest]
    if let some (d, p) := a.app2? ``Exists then
      if let .lam _ _ body _ := p then
        if !body.hasLooseBVars then
          let rest ← relate r body b
          return ← mkAppM ``Iff.trans #[← mkAppOptM ``exists_const #[some body, some d, none], rest]
  -- An equation whose sides vampire shares the other way round.
  if r.equations then
    if let (some (α, x, y), some (_, x', y')) := (a.eq?, b.eq?) then
      if x == y' && y == x' then
        return ← mkAppOptM ``eq_comm #[some α, some x, some y]
  -- A junction's parts, however either side nests them.
  if r.junctions then
    for fn in [``And, ``Or] do
      if a.isAppOfArity fn 2 && b.isAppOfArity fn 2 then
        let (pa, ha) ← junctionOf fn a
        let (pb, hb) ← junctionOf fn b
        unless pa.size == pb.size do
          throwError "{indentExpr a}\nand{indentExpr b}\njoin {pa.size} and {pb.size} parts"
        let hs ← (pa.zip pb).mapM fun (x, y) => relate r x y
        let middle ← nestedCongr fn hs
        return ← mkAppM ``Iff.trans #[ha, ← mkAppM ``Iff.trans #[middle, ← mkAppM ``Iff.symm #[hb]]]
  let both (lemma_ : Name) (a₁ a₂ b₁ b₂ : Expr) : ReconstructM Expr := do
    mkAppM lemma_ #[← relate r a₁ b₁, ← relate r a₂ b₂]
  if let (some ia, some ib) := (a.not?, b.not?) then
    return ← mkAppM ``not_congr #[← relate r ia ib]
  for fn in [``And, ``Or, ``Iff] do
    if a.isAppOfArity fn 2 && b.isAppOfArity fn 2 then
      let lemma_ := if fn == ``And then ``and_congr else if fn == ``Or then ``or_congr else ``iff_congr
      return ← both lemma_ a.appFn!.appArg! a.appArg! b.appFn!.appArg! b.appArg!
  if let (.forallE _ ad ab _, .forallE n bd bb bi) := (a, b) then
    if !ab.hasLooseBVars && !bb.hasLooseBVars && (← isProp ad) then
      return ← both ``imp_congr ad ab bd bb
    unless ← sameFormula ad bd do
      throwError "the binders of{indentExpr a}\nand{indentExpr b}\nare of different types"
    return ← withLocalDecl n bi bd fun x => do
      let inner ← relate r (ab.instantiate1 x) (bb.instantiate1 x)
      mkAppM ``forall_congr' #[← mkLambdaFVars #[x] inner]
  if let (some (α, p), some (_, q)) := (a.app2? ``Exists, b.app2? ``Exists) then
    let .lam n _ _ bi := q | throwError "an existential of no predicate{indentExpr b}"
    return ← withLocalDecl n bi α fun x => do
      let inner ← relate r (p.beta #[x]) (q.beta #[x])
      mkAppM ``exists_congr #[← mkLambdaFVars #[x] inner]
  throwError "{indentExpr a}\nis not{indentExpr b}\nby what the step does to a formula"

/--
A proof of `conclusion` from `proof : stated`, where the step made the one of
the other doing only what `r` says.
-/
def restate (proof stated conclusion : Expr) (r : Restating := {}) : ReconstructM Expr := do
  if ← sameFormula (← instantiateMVars stated) conclusion then
    return proof
  let same ← relate r stated conclusion
  mkAppM ``Iff.mp #[← mkExpectedTypeHint same (← mkAppM ``Iff #[stated, conclusion]), proof]

end Vampire.Reconstruct
