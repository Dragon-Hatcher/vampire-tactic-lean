import Vampire.Reconstruct.Literal

namespace Vampire.Reconstruct

open Lean Meta

/-- Whether an expression is the type `Prop`. -/
private def isPropType (e : Expr) : Bool := e matches .sort .zero

/--
One step of negation normal form, with a proof that it changes nothing.

`ennf` and `nnf` eliminate implications and equivalences and push negations
inward. Each case is picked by the shape in hand, and every one moves toward
the normal form.
-/
def nnfStep (e : Expr) : ReconstructM (Option (Expr × Expr)) := do
  if let .forallE _ d body _ := e then
    if (← isProp d) && !body.hasLooseBVars then
      let rewritten := mkApp2 (mkConst ``Or) (mkApp (mkConst ``Not) d) body
      let decidable ← mkAppOptM ``Classical.propDecidable #[some d]
      return some (rewritten,
        ← mkAppOptM ``Decidable.imp_iff_not_or #[some d, some body, some decidable])
  if let some (x, y) := e.iff? then
    let rewritten ← mkAppM ``And #[← mkArrow x y, ← mkArrow y x]
    return some (rewritten,
      ← mkAppOptM ``iff_iff_implies_and_implies #[some x, some y])
  if let some inner := e.not? then
    if let some doubly := inner.not? then
      return some (doubly, ← mkAppOptM ``Classical.not_not #[some doubly])
    if let some (x, y) := inner.app2? ``And then
      let rewritten := mkApp2 (mkConst ``Or)
        (mkApp (mkConst ``Not) x) (mkApp (mkConst ``Not) y)
      return some (rewritten,
        ← mkAppOptM ``Classical.not_and_iff_not_or_not #[some x, some y])
    if let some (x, y) := inner.app2? ``Or then
      let rewritten := mkApp2 (mkConst ``And)
        (mkApp (mkConst ``Not) x) (mkApp (mkConst ``Not) y)
      return some (rewritten, ← mkAppOptM ``not_or #[some x, some y])
    if let .forallE n d body bi := inner then
      unless (← isProp d) && !body.hasLooseBVars do
        -- `not_forall` speaks of the predicate quantified over, not its
        -- negation.
        let quantified := Expr.lam n d body bi
        let negated := Expr.lam n d (mkApp (mkConst ``Not) body) bi
        let rewritten ← mkAppM ``Exists #[negated]
        return some (rewritten,
          ← mkAppOptM ``Classical.not_forall #[some d, some quantified])
    if let some (α, p) := inner.app2? ``Exists then
      let rewritten ← withLocalDeclD `x α fun x => do
        mkForallFVars #[x] (mkApp (mkConst ``Not) (p.beta #[x]))
      return some (rewritten, ← mkAppOptM ``not_exists #[some α, some p])
  return none

/--
A formula in negation normal form, with a proof that it says the same thing.

The two sides of an `ennf` or `nnf` step are one formula written before and
after that normalisation, so normalising both and comparing the results is
what relates them. Every case moves toward the normal form, so it terminates.

Junction nesting is left alone: merging it is a separate step, and comparing
parts by index already allows for either shape.
-/
partial def toNNF (e : Expr) : ReconstructM (Expr × Expr) := do
  let e ← instantiateMVars e
  if let some (rewritten, step) ← nnfStep e then
    let (normal, rest) ← toNNF rewritten
    return (normal, ← mkAppM ``Iff.trans #[step, rest])
  for (fn, lemma) in [(``And, ``and_congr), (``Or, ``or_congr)] do
    if e.isAppOfArity fn 2 then
      let (l, pl) ← toNNF e.appFn!.appArg!
      let (r, pr) ← toNNF e.appArg!
      return (mkApp2 (mkConst fn) l r, ← mkAppM lemma #[pl, pr])
  if e.not?.isSome then
    -- Anything but an atom under a negation was taken apart above.
    return (e, ← mkAppOptM ``Iff.refl #[some e])
  if e.isAppOfArity ``Exists 2 then
    match e.appArg! with
    | .lam n d body bi =>
      return ← withLocalDeclD `x d fun x => do
        let (normal, proof) ← toNNF (body.instantiate1 x)
        let normalLam := Expr.lam n d (normal.abstract #[x]) bi
        return (← mkAppM ``Exists #[normalLam],
          ← mkAppM ``exists_congr #[← mkLambdaFVars #[x] proof])
    | _ => return (e, ← mkAppOptM ``Iff.refl #[some e])
  match e with
  | .forallE _ d body _ =>
    if !(← isProp d) || body.hasLooseBVars then
      return ← withLocalDeclD `x d fun x => do
        let (normal, proof) ← toNNF (body.instantiate1 x)
        return (← mkForallFVars #[x] normal,
          ← mkAppM ``forall_congr' #[← mkLambdaFVars #[x] proof])
    return (e, ← mkAppOptM ``Iff.refl #[some e])
  | _ => return (e, ← mkAppOptM ``Iff.refl #[some e])

/--
`source → target`, where the two say the same thing up to the order and nesting
of junctions.

Vampire's parser reverses a junction's arguments, so a formula's own reading of
itself differs from the goal's, and a rule that drops or repeats literals
leaves the rest in place. Both come to relating two junctions over the same
parts, which a lookup settles rather than a search: each part of one is found
among the parts of the other by structural equality.

A disjunct of the source that is absent from the target has to be refutable on
its own, as `t ≠ t` is, which is how a removed literal is accounted for.
-/
partial def implies (source target : Expr) : ReconstructM Expr := do
  let source ← instantiateMVars source
  let target ← instantiateMVars target
  if ← isDefEq source target then
    return ← withLocalDeclD `h source fun h => mkLambdaFVars #[h] h
  match source, target with
  | .forallE _ sd sb _, .forallE _ td tb _ =>
    -- Only a genuine quantifier: `¬a` is an arrow too, but not a `forallE`.
    unless ← isDefEq sd td do
      throwError "implies: cannot relate{indentExpr source}\nto{indentExpr target}"
    withLocalDeclD `x sd fun x => do
      let rest ← implies (sb.instantiate1 x) (tb.instantiate1 x)
      withLocalDeclD `h source fun h => do
        mkLambdaFVars #[h] (← mkLambdaFVars #[x] (mkApp rest (mkApp h x)))
  | _, _ =>
    if target.isAppOfArity ``And 2 then
      let parts := junctionParts ``And target
      return ← withLocalDeclD `h source fun h => do
        mkLambdaFVars #[h] (← introParts target 0 fun j => do
          return mkApp (← implies source parts[j]!) h)
    -- What the source says of each of its conjuncts, when the target is one of
    -- them: a rule that leaves a conjunct out keeps the rest in place.
    if source.isAppOfArity ``And 2 && !target.isAppOfArity ``And 2 then
      let conjuncts := junctionParts ``And source
      for (conjunct, i) in conjuncts.zipIdx do
        if ← isDefEq conjunct target then
          return ← withLocalDeclD `h source fun h => do
            mkLambdaFVars #[h] (← projectPart ``And source i h)
    let parts := junctionParts ``Or target
    let index := parts.zipIdx.foldl (init := ({} : Std.HashMap Expr Nat))
      fun acc (p, i) => acc.insert p i
    -- `l : d` becomes a proof of the target, if `d` is among its disjuncts or
    -- is refutable on its own. An equality can be stated either way round, so
    -- the flipped form is looked up too rather than searched for.
    let branchFor (d : Expr) : ReconstructM Expr := do
      if let some i := index[d]? then
        return ← withLocalDeclD `l d fun l => do
          mkLambdaFVars #[l] (← injectPart ``Or target i l)
      if let some (α, a, b) := d.eq? then
        let flipped ← mkAppOptM ``Eq #[some α, some b, some a]
        if let some i := index[flipped]? then
          return ← withLocalDeclD `l d fun l => do
            mkLambdaFVars #[l] (← injectPart ``Or target i (← mkAppM ``Eq.symm #[l]))
      if let some inner := d.not? then
        if let some (α, a, b) := inner.eq? then
          let flipped ← mkAppOptM ``Eq #[some α, some b, some a]
          let negated := mkApp (mkConst ``Not) flipped
          if let some i := index[negated]? then
            return ← withLocalDeclD `l d fun l => do
              let contrapositive ← withLocalDeclD `e flipped fun e => do
                mkLambdaFVars #[e] (mkApp l (← mkAppM ``Eq.symm #[e]))
              mkLambdaFVars #[l] (← injectPart ``Or target i contrapositive)
        -- Absent, so it has to be refutable: `t ≠ t` is what removal leaves.
        if let some (_, a, b) := inner.eq? then
          if ← isDefEq a b then
            return ← withLocalDeclD `l d fun l => do
              mkLambdaFVars #[l]
                (← mkAppOptM ``absurd
                  #[some inner, some target, some (← mkEqRefl a), some l])
        if inner.isConstOf ``True then
          return ← withLocalDeclD `l d fun l => do
            mkLambdaFVars #[l]
              (← mkAppOptM ``absurd
                #[some (mkConst ``True), some target,
                  some (mkConst ``True.intro), some l])
      -- Simplifying away a truth value leaves nothing of a disjunct that was
      -- `⊥`, and nothing of one that was `¬⊤`.
      if d.isConstOf ``False then
        return ← withLocalDeclD `l d fun l => do
          mkLambdaFVars #[l] (← mkAppOptM ``False.elim #[some target, some l])
      throwError "implies: the disjunct{indentExpr d}\nis neither among\
        {indentExpr target}\nnor refutable"
    let branches ← (junctionParts ``Or source).mapM branchFor
    withLocalDeclD `h source fun h => do
      mkLambdaFVars #[h] (← elimParts source 0 (fun i hi => do
        let some branch := branches[i]? | throwError "missing disjunct"
        return mkApp branch hi) h)

/--
`⟦parts⟧ ↔ ⟦the parts that are not the junction's unit⟧`, with those parts.

Absorbing a truth value leaves a junction with fewer parts than it found, which
is what simplifying one does wherever in a formula it sits.
-/
private partial def withoutUnits (fn unit : Name) (parts : Array Expr) :
    ReconstructM (Array Expr × Expr) := do
  let some head := parts[0]?
    | return (#[], ← mkAppOptM ``Iff.refl #[some (mkConst unit)])
  if parts.size == 1 then
    return (if head.isConstOf unit then #[] else #[head],
      ← mkAppOptM ``Iff.refl #[some head])
  let congruence := if fn == ``And then ``and_congr else ``or_congr
  let absorbHead := if fn == ``And then ``true_and else ``false_or
  let absorbTail := if fn == ``And then ``and_true else ``or_false
  let rest := parts.extract 1 parts.size
  let tail := junction fn unit rest
  let (keptRest, saysRest) ← withoutUnits fn unit rest
  if head.isConstOf unit then
    return (keptRest, ← mkAppM ``Iff.trans
      #[← mkAppM ``iff_of_eq #[mkApp (mkConst absorbHead) tail], saysRest])
  let onTail ← mkAppM congruence
    #[← mkAppOptM ``Iff.refl #[some head], saysRest]
  if keptRest.isEmpty then
    return (#[head], ← mkAppM ``Iff.trans
      #[onTail, ← mkAppM ``iff_of_eq #[mkApp (mkConst absorbTail) head]])
  return (#[head] ++ keptRest, onTail)

/-- Whether a junction is the right-nested one over exactly these parts. -/
private def rightNested (fn : Name) (e : Expr) (parts : Array Expr) : Bool :=
  Id.run do
    let mut rest := e
    for i in [0 : parts.size - 1] do
      unless rest.isAppOfArity fn 2 && rest.appFn!.appArg! == parts[i]! do
        return false
      rest := rest.appArg!
    return parts.back? == some rest

/--
`k`'s result, with each of `values` standing behind a local of the given type
rather than written out wherever it is used.

A congruence over a junction needs each part's equivalence twice, once each way
round, so writing them out doubles the term at every level of nesting. Bound
once and applied, the term stays the size of the proof it stands for.
-/
def standingFor (types values : Array Expr)
    (k : Array Expr → ReconstructM Expr) : ReconstructM Expr := do
  let decls := types.mapIdx fun i τ => (Name.mkSimple s!"e{i}", fun _ => pure τ)
  let abstracted ← withLocalDeclsD decls fun locals => do
    mkLambdaFVars locals (← k locals)
  return mkAppN abstracted values

/--
`a ↔ b` when nothing in the shape of the two relates them.

If they speak of numbers, what relates them is arithmetic: vampire's
normalisation states a literal one way where the goal states it the other, and
puts an equality between the two inequalities it stands between, neither of
which is a congruence.
-/
private def unrelated (a b : Expr) (why : MessageData) : ReconstructM Expr := do
  try
    arithmeticIff a b
  catch _ =>
    throwError "{why}"

/--
`a ↔ b`, where the two say the same thing up to the shape vampire keeps them in.

Congruence rather than implication, because a formula's parts sit in positions
of either polarity -- the left of an arrow reverses -- and only an equivalence
composes through all of them.

Vampire's parser reverses a junction's arguments, so its reading of a formula
differs from the goal's in the order of every conjunction and disjunction. The
parts are therefore paired in order and, failing that, in reverse: two fixed
pairings, not a search among them.
-/
partial def equivNormal (a b : Expr) : ReconstructM Expr := do
  -- A hypothesis reaches here through elaboration, so its type can still be a
  -- metavariable; every recogniser below would miss it.
  let a ← instantiateMVars a
  let b ← instantiateMVars b
  if ← isDefEq a b then
    return ← mkAppOptM ``Iff.refl #[some a]
  -- An equality can be stated either way round.
  if let (some (α, x, y), some (_, x', y')) := (a.eq?, b.eq?) then
    if (← isDefEq x y') && (← isDefEq y x') then
      return ← mkAppOptM ``eq_comm #[some α, some x, some y]
  -- Flattening cancels a double negation, so one side can carry two where the
  -- other carries none.
  if let some ia := a.not? then
    if let some iia := ia.not? then
      return ← mkAppM ``Iff.trans
        #[← mkAppOptM ``Classical.not_not #[some iia], ← equivNormal iia b]
  if let some ib := b.not? then
    if let some iib := ib.not? then
      return ← mkAppM ``Iff.trans
        #[← equivNormal a iib, ← mkAppM ``Iff.symm #[← mkAppOptM ``Classical.not_not #[some iib]]]
  if let (some ia, some ib) := (a.not?, b.not?) then
    return ← mkAppM ``not_congr #[← equivNormal ia ib]
  if let (some (a₁, a₂), some (b₁, b₂)) := (a.iff?, b.iff?) then
    return ← mkAppM ``iff_congr #[← equivNormal a₁ b₁, ← equivNormal a₂ b₂]
  -- Rectification drops a quantifier over a variable its body never mentions,
  -- so one side can carry a binder the other does not. Whether it can be
  -- dropped is settled by its own body and nothing else: were this to wait
  -- until the other side had run out of binders, a prefix of quantifiers would
  -- be paired off in order, and an unused one on one side would be taken to
  -- answer to a used one on the other.
  for (x, y) in [(a, b), (b, a)] do
    if let .forallE _ d body _ := x then
      unless (← isProp d) && !body.hasLooseBVars do
        if !body.hasLooseBVars then
          let dropped ← mkAppOptM ``forall_const
            #[some body, some d, some (← nonempty d)]
          let related ← if x == a then equivNormal body y else equivNormal y body
          return ← if x == a then mkAppM ``Iff.trans #[dropped, related]
            else mkAppM ``Iff.trans #[related, ← mkAppM ``Iff.symm #[dropped]]
    if x.isAppOfArity ``Exists 2 then
      if let .lam _ d body _ := x.appArg! then
        unless body.hasLooseBVars do
          let dropped ← mkAppOptM ``exists_const
            #[some body, some d, some (← nonempty d)]
          let related ← if x == a then equivNormal body y else equivNormal y body
          return ← if x == a then mkAppM ``Iff.trans #[dropped, related]
            else mkAppM ``Iff.trans #[related, ← mkAppM ``Iff.symm #[dropped]]
  match a, b with
  | .forallE _ ad ab _, .forallE _ bd bb _ =>
    if (← isProp ad) && (← isProp bd) && !ab.hasLooseBVars && !bb.hasLooseBVars then
      -- An arrow: its left side is negative, which is why this is an ↔.
      return ← mkAppM ``imp_congr #[← equivNormal ad bd, ← equivNormal ab bb]
    unless ← isDefEq ad bd do
      return ← unrelated a b
        m!"equiv/forall: cannot relate{indentExpr a}\nto{indentExpr b}"
    return ← withLocalDeclD `x ad fun x => do
      let inner ← equivNormal (ab.instantiate1 x) (bb.instantiate1 x)
      mkAppM ``forall_congr' #[← mkLambdaFVars #[x] inner]
  | _, _ =>
    if a.isAppOfArity ``Exists 2 && b.isAppOfArity ``Exists 2 then
      match a.appArg!, b.appArg! with
      | .lam _ ad abody _, .lam _ _ bbody _ =>
        return ← withLocalDeclD `x ad fun x => do
          let inner ← equivNormal (abody.instantiate1 x) (bbody.instantiate1 x)
          mkAppM ``exists_congr #[← mkLambdaFVars #[x] inner]
      | _, _ =>
        return ← unrelated a b
          m!"equiv/exists: cannot relate{indentExpr a}\nto{indentExpr b}"
    for fn in [``And, ``Or] do
      if a.isAppOfArity fn 2 || b.isAppOfArity fn 2 then
        let ap := junctionParts fn a
        let bp := junctionParts fn b
        unless ap.size == bp.size do
          -- One side has a truth value the other has absorbed.
          let unit := if fn == ``And then ``True else ``False
          if rightNested fn a ap && rightNested fn b bp then
            let (aKept, aSays) ← withoutUnits fn unit ap
            let (bKept, bSays) ← withoutUnits fn unit bp
            if aKept.size == bKept.size && !aKept.isEmpty then
              let core ← equivNormal (junction fn unit aKept) (junction fn unit bKept)
              return ← mkAppM ``Iff.trans
                #[aSays, ← mkAppM ``Iff.trans
                  #[core, ← mkAppM ``Iff.symm #[bSays]]]
          return ← unrelated a b
            m!"junctions have {ap.size} and {bp.size} parts:\
              {indentExpr a}\nand{indentExpr b}"
        -- Part by part, in order. The translation emits a junction in the
        -- order vampire keeps it, so there is nothing to align: were the two
        -- to disagree, an `input` step would say so rather than a guess being
        -- made about which part answers to which. The two sides may associate
        -- differently, which is what flattening changes, so the parts are
        -- reached by index rather than by following either shape.
        let values ← ap.zipIdx.mapM fun (x, i) => equivNormal x bp[i]!
        -- Both sides right-nested over the same parts: the congruence follows
        -- their shape, one step per part. Taking them apart and putting them
        -- back together a part at a time would cost the square of their width,
        -- and a formula's own disjunction can be hundreds of literals wide.
        if rightNested fn a ap && rightNested fn b bp then
          let congruence := if fn == ``And then ``and_congr else ``or_congr
          let mut aTail := ap.back!
          let mut bTail := bp.back!
          let mut proof := values.back!
          for i in [0 : ap.size - 1] do
            let j := ap.size - 2 - i
            proof ← mkAppOptM congruence
              #[some ap[j]!, some bp[j]!, some aTail, some bTail,
                some values[j]!, some proof]
            aTail := mkApp2 (mkConst fn) ap[j]! aTail
            bTail := mkApp2 (mkConst fn) bp[j]! bTail
          return proof
        let types := ap.zipIdx.map fun (x, i) => mkApp2 (mkConst ``Iff) x bp[i]!
        return ← standingFor types values fun parts => do
          let mp (i : Nat) (h : Expr) : Expr :=
            mkApp4 (mkConst ``Iff.mp) ap[i]! bp[i]! parts[i]! h
          let mpr (i : Nat) (h : Expr) : Expr :=
            mkApp4 (mkConst ``Iff.mpr) ap[i]! bp[i]! parts[i]! h
          if fn == ``And then
            let forward ← withLocalDeclD `h a fun h => do
              mkLambdaFVars #[h] (← introParts b 0 fun j => do
                return mp j (← projectPart fn a j h))
            let backward ← withLocalDeclD `h b fun h => do
              mkLambdaFVars #[h] (← introParts a 0 fun j => do
                return mpr j (← projectPart fn b j h))
            return mkApp4 (mkConst ``Iff.intro) a b forward backward
          else
            let forward ← withLocalDeclD `h a fun h => do
              mkLambdaFVars #[h] (← elimParts a 0 (fun i hi =>
                injectPart fn b i (mp i hi)) h)
            let backward ← withLocalDeclD `h b fun h => do
              mkLambdaFVars #[h] (← elimParts b 0 (fun i hi =>
                injectPart fn a i (mpr i hi)) h)
            return mkApp4 (mkConst ``Iff.intro) a b forward backward
    unrelated a b m!"cannot relate{indentExpr a}\nto{indentExpr b}"

/--
`e` with every comparison stated the way round vampire's normalisation states
it, and that it says the same thing.

`InterpretedNormalizer` rewrites `a ≤ b` into `¬(b < a)` and back, which
changes what a negation sits on and so what the shapes of the two sides are.
Both are put the same way round first, so that what is compared is the shape
and not which way a literal happens to be written.
-/
private partial def sameWayRound (e : Expr) : ReconstructM (Expr × Expr) := do
  let refl (e : Expr) : ReconstructM (Expr × Expr) := do
    return (e, ← mkAppOptM ``Iff.refl #[some e])
  let congruence (fn : Name) (a b : Expr) : ReconstructM (Expr × Expr) := do
    let (ca, pa) ← sameWayRound a
    let (cb, pb) ← sameWayRound b
    let lemmaName := if fn == ``And then ``and_congr
      else if fn == ``Or then ``or_congr else ``iff_congr
    return (mkApp2 (mkConst fn) ca cb, ← mkAppM lemmaName #[pa, pb])
  match e with
  | .forallE name τ body _ =>
    if (← isProp τ) && !body.hasLooseBVars then
      let (ca, pa) ← sameWayRound τ
      let (cb, pb) ← sameWayRound body
      return (← mkArrow ca cb, ← mkAppM ``imp_congr #[pa, pb])
    withLocalDeclD name τ fun x => do
      let (inner, proof) ← sameWayRound (body.instantiate1 x)
      return (← mkForallFVars #[x] inner,
        ← mkAppM ``forall_congr' #[← mkLambdaFVars #[x] proof])
  | .mdata _ inner => sameWayRound inner
  | _ =>
    match_expr e with
    | Not a =>
      -- A comparison denied is a comparison the other way round.
      match_expr a with
      | LT.lt _ _ x y =>
        let flipped ← mkAppM ``LE.le #[y, x]
        return (flipped, ← arithmeticIff e flipped)
      | LE.le _ _ x y =>
        let flipped ← mkAppM ``LT.lt #[y, x]
        return (flipped, ← arithmeticIff e flipped)
      | _ =>
        let (ca, pa) ← sameWayRound a
        return (mkApp (mkConst ``Not) ca, ← mkAppM ``not_congr #[pa])
    | And a b => congruence ``And a b
    | Or a b => congruence ``Or a b
    | Iff a b => congruence ``Iff a b
    -- Two propositions equal is the two of them each following from the other,
    -- which is what TPTP has and what the goal may have written as `=`.
    | Eq α x y =>
      if isPropType α then
        let (cx, px) ← sameWayRound x
        let (cy, py) ← sameWayRound y
        let bridge ← mkAppM ``Iff.intro
          #[← mkAppOptM ``iff_of_eq #[some x, some y],
            ← mkAppOptM ``propext #[some x, some y]]
        return (mkApp2 (mkConst ``Iff) cx cy,
          ← mkAppM ``Iff.trans #[bridge, ← mkAppM ``iff_congr #[px, py]])
      refl e
    | Exists _ p =>
      match p with
      | .lam name τ body _ =>
        withLocalDeclD name τ fun x => do
          let (inner, proof) ← sameWayRound (body.instantiate1 x)
          return (← mkAppM ``Exists #[← mkLambdaFVars #[x] inner],
            ← mkAppM ``exists_congr #[← mkLambdaFVars #[x] proof])
      | _ => refl e
    | _ => refl e

/-- `a ↔ b`, for two ways of writing one formula. -/
def equiv (a b : Expr) : ReconstructM Expr := do
  let a ← instantiateMVars a
  let b ← instantiateMVars b
  if ← isDefEq a b then
    return ← mkAppOptM ``Iff.refl #[some a]
  let (wa, qa) ← sameWayRound a
  let (wb, qb) ← sameWayRound b
  let (na, pa) ← toNNF wa
  let (nb, pb) ← toNNF wb
  let core ← equivNormal na nb
  let core ← mkAppM ``Iff.trans
    #[pa, ← mkAppM ``Iff.trans #[core, ← mkAppM ``Iff.symm #[pb]]]
  mkAppM ``Iff.trans
    #[qa, ← mkAppM ``Iff.trans #[core, ← mkAppM ``Iff.symm #[qb]]]

end Vampire.Reconstruct
