import Vampire.LiteralRewrite.Polynomial
import Mathlib.Tactic.Linarith

/-!
A port of ALASCA's VIRAS quantifier elimination (`Inferences/ALASCA/VIRAS.cpp`
and the `viras` library's `viras.h`, `lira_term.h`, `lira_literal.h`), for
linear real arithmetic without floors -- which is where vampire runs it: it
eliminates over the rationals and the reals only.

A premise `∀ x, L₁ x ∨ … ∨ Lₙ x ∨ R` has `x` eliminated: VIRAS takes the
complement of each literal (`VirasInterfacing::match_literal`), computes an
elimination set of virtual terms for `x` from them -- `-∞`, a term `t`, or
`t + ε` -- and each conclusion is what substituting one of them for `x` in each
complement gives, complemented back (`create_literal`). The port computes the
same set, substitutes each of its terms as `vsubs_aperiodic` does, and takes
the one that gives the conclusion vampire made; the step is then proved as the
substitution means it: the conclusion failing makes every complement hold at a
point -- `t` itself, a point `t + δ` just above it, or one below every place a
complement changes -- where the premise then fails.

A literal whose term has a floor of `x` in it is one VIRAS handles by its
breaks and periods, and those are not ported: such a step fails, saying so.
-/

namespace Vampire.LiteralRewrite.Viras

open Lean Meta Vampire.Reconstruct

/-- `viras::PredSymbol`: what a complement says of its term. -/
inductive Symbol
  | gt | geq | eq | neq
  deriving BEq, Inhabited, Repr

/-- A premise literal as VIRAS reads it: its complement `u Symbol 0`, `u = -s`
for the literal's own term `s`, and `u`'s slope in `x`. -/
structure Complement where
  symbol : Symbol
  sort : Expr
  /-- The literal's own term `s`, with `x` free; the complement's is `-s`. -/
  term : Expr
  /-- The slope of the complement's term `-s` in `x`. -/
  slope : ℚ

/-- `viras::VirtualTerm`, without the periodic case the port does not reach. -/
inductive Virtual
  | minusInfinity
  | term (t : Expr)
  | plusEpsilon (t : Expr)

/-- The slope of `s` in `x`, which occurs in `s` only as a summand's factor. -/
private def slopeIn (x s : Expr) : MetaM ℚ := do
  let n ← normalizeNf s
  let mut slope : ℚ := 0
  for (k, fs) in n.wrap do
    match fs.toList with
    | [(.leaf _ y, 1)] => if y == x then slope := slope + k; continue
    | _ => pure ()
    for (f, _) in fs do
      if (← f.toExpr).containsFVar x.fvarId! then
        throwError "VIRAS eliminated a variable that occurs in{indentExpr (← f.toExpr)}\n\
          which only a floor would put there; VIRAS with floors is not ported"
  return slope

/--
`VirasInterfacing::match_literal`: `t = 0` is complemented as `-t ≠ 0`,
`t ≠ 0` as `-t = 0`, `t ≥ 0` as `-t > 0` and `t > 0` as `-t ≥ 0`. `none`
for a literal that is none of those, which VIRAS leaves as it is.
-/
def complement? (x p : Expr) : MetaM (Option Complement) := do
  let some c := comparison? p | return none
  let (symbol, s) ← match c.rel, c.positive with
    | .lt, true => if isZero c.lhs then pure (Symbol.geq, c.rhs) else return none
    | .le, true => if isZero c.lhs then pure (Symbol.gt, c.rhs) else return none
    | .eq, positive =>
      unless isZero c.rhs || isZero c.lhs do return none
      let s := if isZero c.rhs then c.lhs else c.rhs
      pure (if positive then Symbol.neq else Symbol.eq, s)
    | _, _ => return none
  -- The complement's term is `-s`, so its slope is `s`'s negated.
  return some { symbol, sort := c.sort, term := s, slope := -(← slopeIn x s) }

/-- `s` at `x := e`. -/
private def at_ (x s e : Expr) : Expr := s.replaceFVar x e

/--
`zero(0)`: where the complement's term `u = -s` crosses zero, `-u(0)/c` for
slope `c` -- a term of the port's own, which is one with vampire's up to the
identities of a ring.
-/
private def zeroOf (x : Expr) (c : Complement) : MetaM Expr := do
  -- `-u(0)/c = s(0)/c`.
  let s0 := at_ x c.term (← wholeOf c.sort 0)
  mkAppM ``HMul.hMul #[← numeralOf c.sort c.slope⁻¹, s0]

/-- `elim_set` for a literal whose term has no breaks. -/
private def elimSet (x : Expr) (c : Complement) : MetaM (Array Virtual) := do
  if c.slope == 0 then return #[.minusInfinity]
  let zero ← zeroOf x c
  return match c.symbol with
    | .neq => #[.minusInfinity, .plusEpsilon zero]
    | .eq => #[.term zero]
    | _ =>
      if c.slope < 0 then #[.minusInfinity]
      else if c.symbol == .geq then #[.term zero] else #[.plusEpsilon zero]

/-- What a conclusion literal can be. -/
inductive Output
  /-- A literal: the complement `u Symbol 0` complemented back (`create_literal`). -/
  | literal (symbol : Symbol) (u : Expr)
  /-- `literal(b)` complemented back: `0 ≠ 0` for `true`, `0 = 0` for `false`. -/
  | constant (complementHolds : Bool)
  /-- The literal as it was: VIRAS left a literal it does not read alone. -/
  | same

/-- `vsubs_aperiodic` of one complement. -/
private def vsubs (x : Expr) (c : Complement) (vt : Virtual) : MetaM Output := do
  let neg (e : Expr) : MetaM Expr := mkAppM ``Neg.neg #[e]
  let u ← neg c.term
  match vt with
  | .minusInfinity =>
    -- A term without `x` is periodic, and is substituted zero: it is itself.
    if c.slope == 0 then return .literal c.symbol u
    return .constant (match c.symbol with
      | .gt | .geq => c.slope < 0
      | .neq => true
      | .eq => false)
  | .term t => return .literal c.symbol (at_ x u t)
  | .plusEpsilon t =>
    match c.symbol with
    | .eq | .neq =>
      if c.slope != 0 then return .constant (c.symbol == .neq)
      return .literal c.symbol (at_ x u t)
    | .gt | .geq =>
      return .literal (if c.slope > 0 then .geq else if c.slope < 0 then .gt else c.symbol)
        (at_ x u t)

/-- The conclusion literal an output is, as replay states it. -/
private def Output.statement (o : Output) (α : Expr) : MetaM (Option Expr) := do
  let zero ← wholeOf α 0
  match o with
  | .same => return none
  | .constant holds =>
    let eq ← mkEq zero zero
    return some (if holds then mkNot eq else eq)
  | .literal symbol u =>
    let negU ← mkAppM ``Neg.neg #[u]
    match symbol with
    | .gt => some <$> mkAppM ``LE.le #[zero, negU]
    | .geq => some <$> mkAppM ``LT.lt #[zero, negU]
    | .neq => some <$> mkEq u zero
    | .eq => return some (mkNot (← mkEq u zero))

/-- Whether two statements are one up to the identities of a ring. -/
private def sameStatement (a b : Expr) : MetaM Bool := return (← ringEq a b).isSome

/-- A proof of `False` from `facts` and nothing but linear arithmetic. -/
private def byLinarith (facts : Array Expr) : MetaM Expr := do
  let facts ← facts.mapM unfoldFact
  let proof ← mkFreshExprMVar (mkConst ``False)
  Mathlib.Tactic.Linarith.linarith true facts.toList {} proof.mvarId!
  instantiateMVars proof

/-- The `n` disjuncts of `c`, the last holding what is left. -/
private def disjuncts (c : Expr) (n : Nat) : Array Expr := Id.run do
  let mut out := #[]
  let mut rest := c
  for _ in [0:n - 1] do
    if rest.isAppOfArity ``Or 2 then
      out := out.push rest.appFn!.appArg!
      rest := rest.appArg!
  return out.push rest

/-- The disjuncts of `c`, a disjunction of `n` literals, and a proof of `False`
from it given a refutation of each. -/
private partial def elimOr (c : Expr) (n : Nat) (h : Expr)
    (refute : Nat → Expr → Expr → MetaM Expr) (i : Nat := 0) : MetaM Expr := do
  if n ≤ 1 then return ← refute i c h
  let some (a, b) := (do
      guard (c.isAppOfArity ``Or 2)
      pure (c.appFn!.appArg!, c.appArg!)) | throwError "expected a disjunction, got{indentExpr c}"
  let left ← withLocalDeclD `l a fun l => do mkLambdaFVars #[l] (← refute i a l)
  let right ← withLocalDeclD `r b fun r => do
    mkLambdaFVars #[r] (← elimOr b (n - 1) r refute (i + 1))
  return mkApp6 (mkConst ``Or.elim) a b (mkConst ``False) h left right

/--
`False`, from a premise `∀ x, C x` whose clause `C` has `n` literals, where the
conclusion vampire made of it by VIRAS fails: `images[i]` is what the premise's
`i`th literal became, and `denials[i]` a proof that it fails.
-/
def refute (clauseAt premise : Expr) (n : Nat) (images denials : Array Expr) :
    MetaM Expr := do
  let .lam xName τ _ _ := clauseAt
    | throwError "VIRAS: expected the premise as a function of the eliminated variable"
  -- A conclusion literal that holds outright -- `0 = 0`, which a complement
  -- that cannot hold leaves -- fails only if anything does.
  for (image, denial) in images.zip denials do
    if let some (_, a, b) := image.eq? then
      if a == b then return mkApp denial (← mkEqRefl a)
  withLocalDeclD xName τ fun x => do
    let literalsAt (e : Expr) : MetaM Expr := instantiateMVars (clauseAt.beta #[e])
    let clause ← literalsAt x
    let parts := disjuncts clause n
    -- Each literal's complement, where it has one.
    let complements ← parts.mapM (complement? x)
    -- The virtual terms, each literal's elimination set in turn.
    let mut candidates : Array Virtual := #[]
    for c? in complements do
      if let some c := c? then candidates := candidates ++ (← elimSet x c)
    -- The one that gives the conclusion vampire made.
    let fits (vt : Virtual) : MetaM (Option (Array Output)) := do
      let mut outputs := #[]
      for ((c?, image), part) in (complements.zip images).zip parts do
        let output ← match c? with
          | some c => vsubs x c vt
          | none => pure Output.same
        let expected ← match ← output.statement τ with
          | some e => pure e
          | none => pure part
        unless ← sameStatement expected image do return none
        outputs := outputs.push output
      return some outputs
    let mut found : Option (Virtual × Array Output) := none
    for vt in candidates do
      if let some outputs ← fits vt then
        found := some (vt, outputs)
        break
    let some (vt, _) := found
      | throwError "VIRAS made a conclusion no term of the elimination set gives"
    trace[vampire] "VIRAS took {match vt with
      | .minusInfinity => m!"-∞" | .term t => m!"{t}" | .plusEpsilon t => m!"{t} + ε"}"
    -- The point every complement holds at, and what shows each does.
    let (point, facts, splits) ← pointFor x τ complements denials vt
    let clauseAtPoint ← literalsAt point
    let premiseAtPoint := mkApp premise point
    let refuteLiteral (i : Nat) (literal h : Expr) : MetaM Expr := do
      let some denial := denials[i]? | throwError "VIRAS: no denial for literal {i}"
      let some image := images[i]? | throwError "VIRAS: no image for literal {i}"
      match complements[i]! with
      | none =>
        -- Left as it was: what vampire made is the literal itself, `x`-free.
        return mkApp denial (← mkExpectedTypeHint h image)
      | some c =>
        if c.slope == 0 || (match vt with | .term _ => true | _ => false) then
          -- The literal at the point is the conclusion's, up to a ring.
          let some same ← ringEq literal image
            | throwError "VIRAS: {literal} is not {image} up to the identities of a ring"
          return mkApp denial (← mkAppM ``Eq.mp #[same, h])
        -- A choice of distance made for this literal is split on.
        match splits.find? (·.1 == i) with
        | some (_, cond, e, half) =>
          let inst ← mkAppOptM ``Classical.propDecidable #[some cond]
          let one ← wholeOf τ 1
          byCasesOn cond (mkConst ``False)
            (fun hc => do
              let is ← mkAppOptM ``if_pos #[some cond, some inst, some hc, some τ, some half, some one]
              byLinarith (facts ++ #[h, denial, hc, is]))
            (fun hc => do
              let is ← mkAppOptM ``if_neg #[some cond, some inst, some hc, some τ, some half, some one]
              byLinarith (facts ++ #[h, denial, hc, is]))
        | none => byLinarith (facts ++ #[h, denial])
    let refuted ← withLocalDeclD `h clauseAtPoint fun h => do
      mkLambdaFVars #[h] (← elimOr clauseAtPoint n h refuteLiteral)
    return mkApp refuted premiseAtPoint
where
  /--
  The point the complements all hold at, and facts about it for linear
  arithmetic: `t` for a term; `t + δ` for `t + ε`, `δ` below every distance
  from `t` at which one of them stops holding; for `-∞` a point below every
  place one of them changes.
  -/
  pointFor (x τ : Expr) (complements : Array (Option Complement)) (denials : Array Expr)
      (vt : Virtual) : MetaM (Expr × Array Expr × Array (Nat × Expr × Expr × Expr)) := do
    let zero ← wholeOf τ 0
    let one ← wholeOf τ 1
    let add (a b : Expr) : MetaM Expr := mkAppM ``HAdd.hAdd #[a, b]
    let sub (a b : Expr) : MetaM Expr := mkAppM ``HSub.hSub #[a, b]
    let mul (a b : Expr) : MetaM Expr := mkAppM ``HMul.hMul #[a, b]
    let lt (a b : Expr) : MetaM Expr := mkAppM ``LT.lt #[a, b]
    -- `min b₁ (min b₂ … bottom)`, and the facts `min … ≤ bᵢ` linear
    -- arithmetic needs of it, and `lower < min …` from `lower < bᵢ`.
    let minOf (bounds : Array (Expr × Expr)) (bottom : Expr × Expr) :
        MetaM (Expr × Array Expr × Expr) := do
      let mut acc := bottom.1
      let mut accLower := bottom.2
      let mut facts : Array Expr := #[]
      for (b, lower) in bounds.reverse do
        let m ← mkAppM ``Min.min #[b, acc]
        facts := facts.push (← mkAppM ``min_le_left #[b, acc])
          |>.push (← mkAppM ``min_le_right #[b, acc])
        accLower ← mkAppM ``lt_min #[lower, accLower]
        acc := m
      return (acc, facts, accLower)
    match vt with
    | .term t => return (t, #[], #[])
    | .minusInfinity =>
      -- Below every zero of a complement that holds only below it.
      let mut zeros : Array Expr := #[]
      for c? in complements do
        let some c := c? | continue
        if c.slope == 0 then continue
        zeros := zeros.push (← zeroOf x c)
      if zeros.isEmpty then return (zero, #[], #[])
      -- `min z₁ (min z₂ … z_k) - 1`: below each.
      let mut m := zeros.back!
      let mut facts : Array Expr := #[]
      for z in (zeros.pop).reverse do
        let m' ← mkAppM ``Min.min #[z, m]
        facts := facts.push (← mkAppM ``min_le_left #[z, m]) |>.push (← mkAppM ``min_le_right #[z, m])
        m := m'
      let point ← sub m one
      return (point, facts.push (← mkAppM ``sub_one_lt #[m]), #[])
    | .plusEpsilon t =>
      -- `δ ≤ Eᵢ` for each complement that holds only near `t`, each `Eᵢ`
      -- half the distance to where it stops, and `1` below them all.
      let mut bounds : Array (Expr × Expr) := #[]
      let mut splits : Array (Nat × Expr × Expr × Expr) := #[]
      for ((c?, denial), i) in (complements.zip denials).zipIdx do
        let some c := c? | continue
        if c.slope == 0 then continue
        -- `r = -s(t)/a`, where the literal's term `s` has slope `a = -c`:
        -- how far above `t` the term vanishes.
        let st := at_ x c.term t
        let r ← mul (← numeralOf τ c.slope⁻¹) st
        let half ← mul (← numeralOf τ (1/2)) r
        match c.symbol with
        | .gt | .geq =>
          -- Holds only below `r` where the complement falls: `c < 0`.
          if c.slope > 0 then continue
          -- `0 < r/2`, from the conclusion literal failing.
          let positive ← byLinarithGoal (← lt zero half) #[denial]
          bounds := bounds.push (half, positive)
        | .neq =>
          -- `r/2` if `r` is above `t`, and anything otherwise; which of the
          -- two is settled where the literal is refuted.
          let cond ← lt zero r
          let inst ← mkAppOptM ``Classical.propDecidable #[some cond]
          let e ← mkAppOptM ``ite #[some τ, some cond, some inst, some half, some one]
          let positive ← byCasesOn cond (← lt zero e)
            (fun h => do
              let is ← mkAppOptM ``if_pos #[some cond, some inst, some h, some τ,
                some half, some one]
              byLinarithGoal (← lt zero e) #[h, is])
            (fun h => do
              let is ← mkAppOptM ``if_neg #[some cond, some inst, some h, some τ,
                some half, some one]
              byLinarithGoal (← lt zero e) #[is])
          splits := splits.push (i, cond, e, half)
          bounds := bounds.push (e, positive)
        | .eq => continue
      let onePositive ← mkAppOptM ``zero_lt_one #[some τ, none, none, none, none, none]
      let (δ, minFacts, positive) ← minOf bounds (one, onePositive)
      let point ← add t δ
      return (point, minFacts.push positive, splits)
  byLinarithGoal (goal : Expr) (facts : Array Expr) : MetaM Expr := do
    -- Unfolded as the facts are, so that the two speak of the same atoms.
    let proof ← mkFreshExprMVar (← unfoldDefinitions goal)
    let facts ← facts.mapM unfoldFact
    Mathlib.Tactic.Linarith.linarith true facts.toList {} proof.mvarId!
    mkExpectedTypeHint (← instantiateMVars proof) goal
  byCasesOn (cond goal : Expr) (yes no : Expr → MetaM Expr) : MetaM Expr := do
    let hYes ← withLocalDeclD `h cond fun h => do mkLambdaFVars #[h] (← yes h)
    let hNo ← withLocalDeclD `h (mkNot cond) fun h => do mkLambdaFVars #[h] (← no h)
    mkAppOptM ``Classical.byCases #[some cond, some goal, some hYes, some hNo]

end Vampire.LiteralRewrite.Viras
