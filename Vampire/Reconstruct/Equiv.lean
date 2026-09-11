import Vampire.Reconstruct.Literal

namespace Vampire.Reconstruct

open Lean Meta

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
  for (fn, congruence) in [(``And, ``and_congr), (``Or, ``or_congr)] do
    if e.isAppOfArity fn 2 then
      let (l, pl) ← toNNF e.appFn!.appArg!
      let (r, pr) ← toNNF e.appArg!
      return (mkApp2 (mkConst fn) l r, ← mkAppM congruence #[pl, pr])
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
A key for a formula that does not depend on the order of anything inside it:
junctions are keyed by their parts' keys, sorted.

This is what pairs the parts of two junctions that say the same thing in
different orders, and it pairs a part that is a formula in its own right --
whose insides are reordered as well -- as readily as an atom.
-/
private partial def shapeKey (e : Expr) : String :=
  match e with
  | .forallE _ τ body _ => "A(" ++ shapeKey τ ++ "," ++ shapeKey body ++ ")"
  | .mdata _ inner => shapeKey inner
  | _ =>
    match_expr e with
    | Not a => "~" ++ shapeKey a
    | And _ _ => junction "&" ``And e
    | Or _ _ => junction "|" ``Or e
    | Iff a b => "<->(" ++ shapeKey a ++ "," ++ shapeKey b ++ ")"
    | Exists _ p => "E(" ++ shapeKey p ++ ")"
    -- A sum and a product are as much unordered as a junction is: vampire
    -- keeps their arguments in an order of its own too, and a literal that is
    -- the goal's own written another way round has to key the same.
    | HAdd.hAdd _ _ _ _ _ _ => junction "+" ``HAdd.hAdd e
    | HMul.hMul _ _ _ _ _ _ => junction "*" ``HMul.hMul e
    | LT.lt _ _ a b => "<(" ++ shapeKey a ++ "," ++ shapeKey b ++ ")"
    | LE.le _ _ a b => "<=(" ++ shapeKey a ++ "," ++ shapeKey b ++ ")"
    | Eq _ a b =>
      let keys := #[shapeKey a, shapeKey b]
      "=(" ++ String.intercalate "," (keys.qsort (· < ·)).toList ++ ")"
    | _ => toString e
where
  junction (tag : String) (fn : Name) (e : Expr) : String :=
    let parts :=
      if fn == ``And || fn == ``Or then junctionParts fn e
      else operands fn e
    let keys := parts.map shapeKey
    tag ++ "(" ++ String.intercalate "," (keys.qsort (· < ·)).toList ++ ")"
  -- The operands of a chain of one arithmetic operator, however it nests.
  operands (fn : Name) (e : Expr) : Array Expr :=
    if e.isAppOfArity fn 6 then
      operands fn e.appFn!.appArg! ++ operands fn e.appArg!
    else
      #[e]

/--
An order on `locals` that does not depend on the order of anything in `e`.

Each binder is keyed by what the body says of it: the body with that binder
marked and the others alike, keyed by its shape. Where two binders play the
same part in the body they are interchangeable and either order will do.
-/
private def binderOrder (locals : Array Expr) (e : Expr) : Array Nat :=
  let keyOf (i : Nat) : String :=
    shapeKey (e.replace fun inner =>
      match locals.findIdx? (· == inner) with
      | some j => some (mkConst (if j == i then `here else `another))
      | none => none)
  let keyed := (Array.range locals.size).map fun i => (keyOf i, i)
  (keyed.qsort fun a b => a.1 < b.1 || (a.1 == b.1 && a.2 < b.2)).map (·.2)

/--
Which part of `bp` each part of `ap` answers to, and what relates them where
that is already known.

Vampire keeps a junction's arguments in a set, so the order they come back in
is neither the order they went in nor one this side could predict: four parts
came back as the first, the fourth, the second and the third. What pairs them
is therefore what they say -- the same part of the goal, met on both sides --
and a part that is a formula in its own right, whose insides are reordered
too, is paired with the one it can be related to.
-/
private def alignParts (ap bp : Array Expr)
    (relate : Expr → Expr → ReconstructM (Option Expr)) :
    ReconstructM (Array Nat × Array (Option Expr)) := do
  let mut taken := Array.replicate bp.size false
  let mut pairing := Array.replicate ap.size bp.size
  let mut proofs : Array (Option Expr) := Array.replicate ap.size none
  -- The same term on both sides, which is what a part of the goal restated is.
  for (a, i) in ap.zipIdx do
    for j in [0 : bp.size] do
      if !taken[j]! && bp[j]! == a then
        pairing := pairing.set! i j
        taken := taken.set! j true
        break
  for (a, i) in ap.zipIdx do
    if pairing[i]! == bp.size then
      for j in [0 : bp.size] do
        if !taken[j]! && (← isDefEq a bp[j]!) then
          pairing := pairing.set! i j
          taken := taken.set! j true
          break
  -- What is left is paired by what it says with the order left out of it,
  -- which is what tells two reordered subformulas apart.
  let keys := bp.map shapeKey
  for (a, i) in ap.zipIdx do
    if pairing[i]! == bp.size then
      let key := shapeKey a
      for j in [0 : bp.size] do
        if !taken[j]! && keys[j]! == key then
          pairing := pairing.set! i j
          taken := taken.set! j true
          break
  -- And anything still left by relating it, which is the last thing that can
  -- say which one it is.
  for (a, i) in ap.zipIdx do
    if pairing[i]! == bp.size then
      for j in [0 : bp.size] do
        if !taken[j]! then
          if let some proof ← relate a bp[j]! then
            pairing := pairing.set! i j
            taken := taken.set! j true
            proofs := proofs.set! i (some proof)
            break
  -- Whatever none of that paired, in the order it stands in.
  let mut free := (Array.range bp.size).filter fun j => !taken[j]!
  for (_, i) in ap.zipIdx do
    if pairing[i]! == bp.size then
      let some j := free[0]? | return (pairing, proofs)
      pairing := pairing.set! i j
      free := free.extract 1 free.size
  return (pairing, proofs)

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

If they speak of numbers, what relates them is arithmetic -- vampire's
normalisation puts an equality between two inequalities, which is no congruence
-- and otherwise there is nothing more to try.
-/
private def unrelated (a b : Expr) (why : MessageData) : ReconstructM Expr := do
  try
    arithmeticIff a b
  catch _ =>
    throwError "{why}"

/--
The types a run of quantifiers of one kind binds, and the body under them.

`positive` asks after existentials and anything else after universals; an arrow
is not a universal of this sort, binding a proof rather than an element.
-/
private partial def blockOf (positive : Bool) (e : Expr) :
    ReconstructM (Array Expr × Expr) := do
  if positive then
    if e.isAppOfArity ``Exists 2 then
      if let .lam _ τ body _ := e.appArg! then
        let (types, inner) ← blockOf positive body
        return (#[τ] ++ types, inner)
  else if let .forallE _ τ body _ := e then
    unless (← isProp τ) && !body.hasLooseBVars do
      let (types, inner) ← blockOf positive body
      return (#[τ] ++ types, inner)
  return (#[], e)

/-- `∃ xs, body` from a proof of the body, at the witnesses given. -/
private partial def introBlock (target : Expr) (witnesses : Array Expr)
    (proof : Expr) : ReconstructM Expr := do
  let some witness := witnesses[0]? | return proof
  let #[τ, predicate] := target.getAppArgs
    | throwError "not an existential:{indentExpr target}"
  let rest ← introBlock (predicate.beta #[witness])
    (witnesses.extract 1 witnesses.size) proof
  mkAppOptM ``Exists.intro #[some τ, some predicate, some witness, some rest]

/--
`target` from a proof of `∃ xs, body`, given what to make of the block's
variables and a proof of the body.
-/
private partial def elimBlock (source target : Expr) (depth : Nat) (proof : Expr)
    (bound : Array Expr)
    (k : Array Expr → Expr → ReconstructM Expr) : ReconstructM Expr := do
  if depth == 0 then
    return ← k bound proof
  let #[τ, predicate] := source.getAppArgs
    | throwError "not an existential:{indentExpr source}"
  let handler ← withLocalDeclD `x τ fun x => do
    let inner := predicate.beta #[x]
    withLocalDeclD `h inner fun h => do
      mkLambdaFVars #[x, h] (← elimBlock inner target (depth - 1) h (bound.push x) k)
  mkAppOptM ``Exists.elim
    #[some τ, some predicate, some target, some proof, some handler]

/--
`a ↔ b`, where the two quantify one body over the same variables in another
order, and `none` if that is not what they are.

Vampire's rectification renumbers a formula's variables and its flattening
merges adjacent quantifiers, and neither keeps a block in the order it found
it: `∃ x y, p` comes back as `∃ y x, p`. Which binder answers to which is read
off rather than searched for -- instantiating the one body at metavariables and
the other at locals says it in a step -- and the two are then the same body
under the same binders, taken in one order or in the other.
-/
private partial def permutedBlock (a b : Expr) : ReconstructM (Option Expr) := do
  for positive in [true, false] do
    if let some proof ← attempt positive then
      return some proof
  return none
where
  attempt (positive : Bool) : ReconstructM (Option Expr) := do
    let (aTypes, aBody) ← blockOf positive a
    let (bTypes, bBody) ← blockOf positive b
    if aTypes.size < 2 || aTypes.size != bTypes.size then return none
    for (τ, σ) in aTypes.zip bTypes do
      unless ← isDefEq τ σ do return none
    let decls := aTypes.mapIdx fun i τ => (Name.mkSimple s!"x{i}", fun _ => pure τ)
    let order? ← withLocalDeclsD decls fun locals => do
      let mut holes := #[]
      for τ in bTypes do
        holes := holes.push (← mkFreshExprMVar τ)
      unless ← isDefEq (aBody.instantiateRev locals) (bBody.instantiateRev holes) do
        return none
      let mut order := #[]
      for hole in holes do
        let some i := locals.findIdx? (· == (← instantiateMVars hole)) | return none
        order := order.push i
      -- Every binder of the one answers to one of the other's, or this is not
      -- a block taken in another order but two different formulas.
      unless (Array.range locals.size).all order.contains do return none
      return some order
    let some order := order? | return none
    let inverse := Array.ofFn (n := order.size) fun j =>
      (order.findIdx? (· == j.val)).getD 0
    return some (← mkAppM ``Iff.intro
      #[← across positive a b order, ← across positive b a inverse])
  -- `source → target`, the block put back in the order the target wants it.
  across (positive : Bool) (source target : Expr) (order : Array Nat) :
      ReconstructM Expr := do
    let (types, _) ← blockOf positive source
    withLocalDeclD `h source fun h => do
      if positive then
        mkLambdaFVars #[h] (← elimBlock source target types.size h #[]
          fun locals body => introBlock target (order.map fun i => locals[i]!) body)
      else
        -- A universal is not taken apart: it is applied to the variables the
        -- target binds, in the order it binds them.
        let decls := types.mapIdx fun i τ => (Name.mkSimple s!"y{i}", fun _ => pure τ)
        withLocalDeclsD decls fun locals => do
          let mut applied := Array.replicate locals.size locals[0]!
          for (i, j) in order.zipIdx do
            applied := applied.set! i locals[j]!
          mkLambdaFVars #[h] (← mkLambdaFVars locals (mkAppN h applied))

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
  -- so one side can carry a binder the other does not.
  for (x, y) in [(a, b), (b, a)] do
    if let .forallE _ d body _ := x then
      unless (← isProp d) && !body.hasLooseBVars do
        if !body.hasLooseBVars && !(y matches .forallE ..) then
          let dropped ← mkAppOptM ``forall_const
            #[some body, some d, some (← nonempty d)]
          let related ← if x == a then equivNormal body y else equivNormal y body
          return ← if x == a then mkAppM ``Iff.trans #[dropped, related]
            else mkAppM ``Iff.trans #[related, ← mkAppM ``Iff.symm #[dropped]]
    if x.isAppOfArity ``Exists 2 && !(y.isAppOfArity ``Exists 2) then
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
    try
      return ← withLocalDeclD `x ad fun x => do
        let inner ← equivNormal (ab.instantiate1 x) (bb.instantiate1 x)
        mkAppM ``forall_congr' #[← mkLambdaFVars #[x] inner]
    catch e =>
      -- Binder for binder they do not relate; they may be one body under a
      -- block the two take in different orders.
      let some permuted ← permutedBlock a b | throw e
      return permuted
  | _, _ =>
    if a.isAppOfArity ``Exists 2 && b.isAppOfArity ``Exists 2 then
      match a.appArg!, b.appArg! with
      | .lam _ ad abody _, .lam _ _ bbody _ =>
        try
          return ← withLocalDeclD `x ad fun x => do
            let inner ← equivNormal (abody.instantiate1 x) (bbody.instantiate1 x)
            mkAppM ``exists_congr #[← mkLambdaFVars #[x] inner]
        catch e =>
          let some permuted ← permutedBlock a b | throw e
          return permuted
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
              {indentD (shapeKey a)}\nand{indentD (shapeKey b)}"
        -- Which part answers to which is settled first, the two sides not
        -- keeping them in the same order. They may also associate differently,
        -- which is what flattening changes, so the parts are reached by index
        -- rather than by following either shape.
        let (pairing, found) ← alignParts ap bp fun x y =>
          try return some (← equivNormal x y) catch _ => return none
        let bp := pairing.map (bp[·]!)
        let values ← ap.zipIdx.mapM fun (x, i) => do
          match found[i]! with
          | some proof => pure proof
          | none => equivNormal x bp[i]!
        -- Both sides right-nested over the same parts: the congruence follows
        -- their shape, one step per part. Taking them apart and putting them
        -- back together a part at a time would cost the square of their width,
        -- and a formula's own disjunction can be hundreds of literals wide.
        if rightNested fn a ap && rightNested fn b bp
            && pairing == Array.range ap.size then
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
          let inverse := Array.ofFn (n := pairing.size) fun j =>
            (pairing.findIdx? (· == j.val)).getD 0
          if fn == ``And then
            let forward ← withLocalDeclD `h a fun h => do
              mkLambdaFVars #[h] (← introParts b 0 fun j => do
                return mp inverse[j]! (← projectPart fn a inverse[j]! h))
            let backward ← withLocalDeclD `h b fun h => do
              mkLambdaFVars #[h] (← introParts a 0 fun i => do
                return mpr i (← projectPart fn b pairing[i]! h))
            return mkApp4 (mkConst ``Iff.intro) a b forward backward
          else
            -- A part of the one is a part of the other at the index the
            -- pairing gives, and the junctions are built at those.
            let inverse := Array.ofFn (n := pairing.size) fun j =>
              (pairing.findIdx? (· == j.val)).getD 0
            let forward ← withLocalDeclD `h a fun h => do
              mkLambdaFVars #[h] (← elimParts a 0 (fun i hi =>
                injectPart fn b pairing[i]! (mp i hi)) h)
            let backward ← withLocalDeclD `h b fun h => do
              mkLambdaFVars #[h] (← elimParts b 0 (fun j hj =>
                injectPart fn a inverse[j]! (mpr inverse[j]! hj)) h)
            return mkApp4 (mkConst ``Iff.intro) a b forward backward
    -- Nothing in the shape of the two relates them. If they are arithmetic,
    -- what relates them is arithmetic.
    try
      return ← arithmeticIff a b
    catch _ =>
      -- The two may be one body under a block of binders taken in different
    -- orders, which no congruence relates.
    if let some permuted ← permutedBlock a b then
      return permuted
    unrelated a b m!"cannot relate{indentExpr a}\nto{indentExpr b}"

/--
`⟦parts⟧ ↔ ⟦parts in the order given⟧`, for a junction whose parts are the same
either way round.
-/
private def permutedJunction (fn : Name) (parts : Array Expr) (order : Array Nat) :
    ReconstructM Expr := do
  let sorted := order.map (parts[·]!)
  let inverse := Array.ofFn (n := order.size) fun i =>
    (order.findIdx? (· == i.val)).getD 0
  let source := junction fn (if fn == ``And then ``True else ``False) parts
  let target := junction fn (if fn == ``And then ``True else ``False) sorted
  if fn == ``And then
    let forward ← withLocalDeclD `h source fun h => do
      mkLambdaFVars #[h] (← introGiven sorted fun j => projectGiven parts order[j]! h)
    let backward ← withLocalDeclD `h target fun h => do
      mkLambdaFVars #[h] (← introGiven parts fun i => projectGiven sorted inverse[i]! h)
    return mkApp4 (mkConst ``Iff.intro) source target forward backward
  let forward ← withLocalDeclD `h source fun h => do
    mkLambdaFVars #[h] (← elimGiven parts
      (fun i hi => injectGiven sorted inverse[i]! hi) h)
  let backward ← withLocalDeclD `h target fun h => do
    mkLambdaFVars #[h] (← elimGiven sorted
      (fun j hj => injectGiven parts order[j]! hj) h)
  return mkApp4 (mkConst ``Iff.intro) source target forward backward

/--
`e ↔ ⟦its parts⟧`, a junction however it was nested against the same parts
right-nested, which is how one is built here.
-/
private def flattenedJunction (fn : Name) (e : Expr) (parts : Array Expr) :
    ReconstructM Expr := do
  let target := junction fn (if fn == ``And then ``True else ``False) parts
  if ← isDefEq e target then
    return ← mkAppOptM ``Iff.refl #[some e]
  if fn == ``And then
    let forward ← withLocalDeclD `h e fun h => do
      mkLambdaFVars #[h] (← introGiven parts fun i => projectPart fn e i h)
    let backward ← withLocalDeclD `h target fun h => do
      mkLambdaFVars #[h] (← introParts e 0 fun i => projectGiven parts i h)
    return mkApp4 (mkConst ``Iff.intro) e target forward backward
  let forward ← withLocalDeclD `h e fun h => do
    mkLambdaFVars #[h] (← elimParts e 0 (fun i hi => injectGiven parts i hi) h)
  let backward ← withLocalDeclD `h target fun h => do
    mkLambdaFVars #[h] (← elimGiven parts (fun i hi => injectPart fn e i hi) h)
  return mkApp4 (mkConst ``Iff.intro) e target forward backward

/-- `⟦parts⟧ ↔ ⟦what each part becomes⟧`, from what says so of each. -/
private def junctionCongr (fn : Name) (parts canonical : Array Expr)
    (proofs : Array Expr) : ReconstructM Expr := do
  let unit := if fn == ``And then ``True else ``False
  let source := junction fn unit parts
  let target := junction fn unit canonical
  let mp (i : Nat) (h : Expr) : ReconstructM Expr :=
    mkAppM ``Iff.mp #[proofs[i]!, h]
  let mpr (i : Nat) (h : Expr) : ReconstructM Expr :=
    mkAppM ``Iff.mpr #[proofs[i]!, h]
  if fn == ``And then
    let forward ← withLocalDeclD `h source fun h => do
      mkLambdaFVars #[h] (← introGiven canonical fun i => do
        mp i (← projectGiven parts i h))
    let backward ← withLocalDeclD `h target fun h => do
      mkLambdaFVars #[h] (← introGiven parts fun i => do
        mpr i (← projectGiven canonical i h))
    return mkApp4 (mkConst ``Iff.intro) source target forward backward
  let forward ← withLocalDeclD `h source fun h => do
    mkLambdaFVars #[h] (← elimGiven parts
      (fun i hi => do injectGiven canonical i (← mp i hi)) h)
  let backward ← withLocalDeclD `h target fun h => do
    mkLambdaFVars #[h] (← elimGiven canonical
      (fun i hi => do injectGiven parts i (← mpr i hi)) h)
  return mkApp4 (mkConst ``Iff.intro) source target forward backward

/-- Both proofs, one after the other. -/
private def alsoIff (first second : Expr) : ReconstructM Expr :=
  mkAppM ``Iff.trans #[first, second]

/--
`e` with every block of quantifiers in an order of its own body's making, and
that it says the same thing.

Vampire keeps a quantifier's variables in a set, so a block comes back in an
order that is neither the one it went in nor one this side could predict:
`? [X0,X1,X2,X3]` came back as `? [X3,X0,X2,X1]`. Both sides are therefore put
into an order that depends only on the body -- each binder by where it is first
met in it -- and it is there that they are compared.
-/
private partial def sortedBlocks (e : Expr) : ReconstructM (Expr × Expr) := do
  let refl (e : Expr) : ReconstructM (Expr × Expr) := do
    return (e, ← mkAppOptM ``Iff.refl #[some e])
  let congruence (fn : Name) (a b : Expr) : ReconstructM (Expr × Expr) := do
    let (ca, pa) ← sortedBlocks a
    let (cb, pb) ← sortedBlocks b
    return (mkApp2 (mkConst fn) ca cb,
      ← mkAppM (if fn == ``And then ``and_congr
        else if fn == ``Or then ``or_congr else ``iff_congr) #[pa, pb])
  match e with
  | .forallE _ τ body _ =>
    if (← isProp τ) && !body.hasLooseBVars then
      let (ca, pa) ← sortedBlocks τ
      let (cb, pb) ← sortedBlocks body
      return (← mkArrow ca cb, ← mkAppM ``imp_congr #[pa, pb])
    sortBlock false e
  | _ =>
    match_expr e with
    | Not a =>
      let (ca, pa) ← sortedBlocks a
      return (mkApp (mkConst ``Not) ca, ← mkAppM ``not_congr #[pa])
    | And _ _ => sortJunction ``And e
    | Or _ _ => sortJunction ``Or e
    | Iff a b => congruence ``Iff a b
    | Exists _ _ => sortBlock true e
    | _ => refl e
where
  -- A junction: its parts put in order of what they say, and each of them so.
  sortJunction (fn : Name) (e : Expr) : ReconstructM (Expr × Expr) := do
    let parts := junctionParts fn e
    let flattened ← flattenedJunction fn e parts
    let mut canonical := #[]
    let mut proofs := #[]
    for part in parts do
      let (c, p) ← sortedBlocks part
      canonical := canonical.push c
      proofs := proofs.push p
    let congruence ← junctionCongr fn parts canonical proofs
    let keyed := canonical.mapIdx fun i c => (shapeKey c, i)
    let order := (keyed.qsort fun a b =>
      a.1 < b.1 || (a.1 == b.1 && a.2 < b.2)).map (·.2)
    let unit := if fn == ``And then ``True else ``False
    if order == Array.range canonical.size then
      return (junction fn unit canonical, ← alsoIff flattened congruence)
    let permuted ← permutedJunction fn canonical order
    return (junction fn unit (order.map (canonical[·]!)),
      ← alsoIff flattened (← alsoIff congruence permuted))
  sortBlock (positive : Bool) (e : Expr) : ReconstructM (Expr × Expr) := do
    let (types, _) ← blockOf positive e
    if types.isEmpty then
      return (e, ← mkAppOptM ``Iff.refl #[some e])
    let decls := types.mapIdx fun i τ => (Name.mkSimple s!"x{i}", fun _ => pure τ)
    withLocalDeclsD decls fun locals => do
      -- What the block is over, and the body under all of it.
      let body ← instantiateBlock positive e locals
      let (canonical, inner) ← sortedBlocks body
      let order := binderOrder locals canonical
      if order == Array.range locals.size && (← isDefEq body canonical) then
        return (e, ← mkAppOptM ``Iff.refl #[some e])
      let sorted := order.map (locals[·]!)
      let target ←
        if positive then
          sorted.foldrM (fun x body => do
            mkAppM ``Exists #[← mkLambdaFVars #[x] body]) canonical
        else
          mkForallFVars sorted canonical
      -- `inner` speaks of the locals; taking a block apart gives variables of
      -- its own, so it is abstracted here and applied to those.
      let abstracted ← mkLambdaFVars locals inner
      let forward ← withLocalDeclD `h e fun h => do
        if positive then
          mkLambdaFVars #[h] (← elimBlock e target types.size h #[]
            fun bound proof => do
              let carried ← mkAppM ``Iff.mp #[abstracted.beta bound, proof]
              introBlock target (order.map (bound[·]!)) carried)
        else
          mkLambdaFVars #[h] (← mkLambdaFVars sorted
            (← mkAppM ``Iff.mp #[inner, mkAppN h locals]))
      let backward ← withLocalDeclD `h target fun h => do
        if positive then
          mkLambdaFVars #[h] (← elimBlock target e types.size h #[]
            fun bound proof => do
              -- `bound` is the block in the order the target takes it.
              let original := Array.ofFn (n := order.size) fun i =>
                bound[(order.findIdx? (· == i.val)).getD 0]!
              let carried ← mkAppM ``Iff.mpr #[abstracted.beta original, proof]
              introBlock e original carried)
        else
          mkLambdaFVars #[h] (← mkLambdaFVars locals
            (← mkAppM ``Iff.mpr #[inner, mkAppN h sorted]))
      return (target, ← mkAppM ``Iff.intro #[forward, backward])
  -- The body of a block, at the locals given.
  instantiateBlock (positive : Bool) (e : Expr) (locals : Array Expr) :
      ReconstructM Expr := do
    let mut body := e
    for x in locals do
      if positive then
        body := body.appArg!.beta #[x]
      else
        body := body.bindingBody!.instantiate1 x
    return body

/-- The connectives of a formula with its atoms left out, for a diagnostic. -/
private partial def shapeSkeleton (x : Expr) : String :=
  match_expr x with
  | Not a => "~" ++ shapeSkeleton a
  | And _ _ =>
    "&(" ++ String.intercalate ","
      ((junctionParts ``And x).map shapeSkeleton).toList ++ ")"
  | Or _ _ =>
    "|(" ++ String.intercalate ","
      ((junctionParts ``Or x).map shapeSkeleton).toList ++ ")"
  | Exists _ p => "E" ++ shapeSkeleton p
  | _ =>
    match x with
    | .forallE _ _ b _ => "A" ++ shapeSkeleton b
    | .lam _ _ b _ => shapeSkeleton b
    | _ => "a"

/-- `a ↔ b`, for two ways of writing one formula. -/
def equiv (a b : Expr) : ReconstructM Expr := do
  let a ← instantiateMVars a
  let b ← instantiateMVars b
  if ← isDefEq a b then
    return ← mkAppOptM ``Iff.refl #[some a]
  -- Both sides are normalised and then put into an order of their own making,
  -- junction by junction and block by block: the order vampire keeps either in
  -- is its own, and nothing about it is to be relied on.
  let (na, pa) ← toNNF a
  let (nb, pb) ← toNNF b
  let (sa, qa) ← sortedBlocks na
  let (sb, qb) ← sortedBlocks nb
  let core ←
    try equivNormal sa sb
    catch e =>
      let skeleton (x : Expr) : String := shapeSkeleton x
      throwError "{e.toMessageData}\nthe one is{indentD (skeleton sa)}\n\
        and the other{indentD (skeleton sb)}"
  let core ← mkAppM ``Iff.trans
    #[qa, ← mkAppM ``Iff.trans #[core, ← mkAppM ``Iff.symm #[qb]]]
  mkAppM ``Iff.trans
    #[pa, ← mkAppM ``Iff.trans #[core, ← mkAppM ``Iff.symm #[pb]]]

end Vampire.Reconstruct
