import Vampire.LiteralRewrite.Polynomial
import Vampire.Lemmas

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

/-- `goal`, by cases on `cond`. -/
private def byCasesOn (cond goal : Expr) (yes no : Expr → MetaM Expr) : MetaM Expr := do
  let hYes ← withLocalDeclD `h cond fun h => do mkLambdaFVars #[h] (← yes h)
  let hNo ← withLocalDeclD `h (mkNot cond) fun h => do mkLambdaFVars #[h] (← no h)
  mkAppOptM ``Classical.byCases #[some cond, some goal, some hYes, some hNo]

/-- How a literal states its term at the point: `0 ≤ s`, `0 < s`, or `s = 0`. -/
inductive LiteralKind
  | le | lt | eq

/--
What is known at the point of a literal whose term has a slope, the lemma that
refutes it being chosen by which: below every zero; or just above the virtual
term's term `t`, at `t + δ`, the term rising, falling (`δ` at most half the
distance to where it vanishes), or a disequality's term, split on whether it
vanishes above `t`. `st` is the term at `t` as the lemma takes it.
-/
inductive PointFact
  | below (p z hp : Expr)
  | rising (δ st hδ : Expr)
  | falling (δ st hδ hle : Expr)
  | apart (δ st hδ cond hle half : Expr)

/-- `s` and how the literal `h` states it, an equation turned to `s = 0`. -/
private def literalTerm (literal h : Expr) : MetaM (Expr × LiteralKind × Expr) := do
  if literal.isAppOfArity ``LE.le 4 then return (literal.appArg!, .le, h)
  if literal.isAppOfArity ``LT.lt 4 then return (literal.appArg!, .lt, h)
  if let some (_, a, b) := literal.eq? then
    if isZero b then return (a, .eq, h)
    if isZero a then return (b, .eq, ← mkEqSymm h)
  throwError "VIRAS: the literal{indentExpr literal}\nis no comparison of a term with zero"

/-- `min b₀ (min b₁ … bottom)`. -/
private def minOf (bounds : Array Expr) (bottom : Expr) : MetaM Expr := do
  let mut acc := bottom
  for b in bounds.reverse do
    acc ← mkAppM ``Min.min #[b, acc]
  return acc

/--
`m ≤ bᵢ` for `m = min b₀ (min b₁ … bottom)`: the `i`th of the chain, and the
bottom itself for `i` past the bounds.
-/
private partial def minLe (bounds : Array Expr) (bottom : Expr) (i : Nat) : MetaM Expr := do
  if bounds.isEmpty then return ← mkAppM ``le_refl #[bottom]
  let rest ← minOf (bounds.extract 1 bounds.size) bottom
  if i == 0 then return ← mkAppM ``min_le_left #[bounds[0]!, rest]
  mkAppM ``le_trans #[← mkAppM ``min_le_right #[bounds[0]!, rest],
    ← minLe (bounds.extract 1 bounds.size) bottom (i - 1)]

/-- `lower < min b₀ (min b₁ … bottom)` from `lower < bᵢ` for each, and `lower < bottom`. -/
private def ltMin (positives : Array Expr) (bottomPositive : Expr) : MetaM Expr := do
  let mut acc := bottomPositive
  for p in positives.reverse do
    acc ← mkAppM ``lt_min #[p, acc]
  return acc

/--
The point the complements all hold at, with what is known there of each
literal: `t` for a term; below every zero for minus infinity; `t + δ` for
`t + ε`, `δ` below every distance from `t` at which a complement stops holding.
-/
private def pointFor (x τ : Expr) (complements : Array (Option Complement))
    (images denials : Array Expr) (vt : Virtual) :
    MetaM (Expr × Array (Option PointFact)) := do
  let zero ← wholeOf τ 0
  let one ← wholeOf τ 1
  let none' : Array (Option PointFact) := complements.map fun _ => none
  match vt with
  | .term t => return (t, none')
  | .minusInfinity =>
    let mut zeros : Array Expr := #[]
    let mut owners : Array Nat := #[]
    for (c?, i) in complements.zipIdx do
      let some c := c? | continue
      if c.slope == 0 then continue
      zeros := zeros.push (← zeroOf x c)
      owners := owners.push i
    if zeros.isEmpty then return (zero, none')
    let m ← minOf zeros.pop zeros.back!
    let p ← mkAppM ``HSub.hSub #[m, one]
    let pm ← mkAppM ``sub_one_lt #[m]
    let mut facts := none'
    for (i, j) in owners.zipIdx do
      let le ← minLe zeros.pop zeros.back! j
      let hp ← mkAppM ``lt_of_lt_of_le #[pm, le]
      facts := facts.set! i (some (.below p zeros[j]! hp))
    return (p, facts)
  | .plusEpsilon t =>
    let mut bounds : Array Expr := #[]
    let mut positives : Array Expr := #[]
    -- Per literal: what it becomes once `δ` is known.
    let mut pending : Array (Nat × Nat × (Expr → Expr → Expr → MetaM PointFact)) := #[]
    let mut rising : Array (Nat × Expr) := #[]
    for (c?, i) in complements.zipIdx do
      let some c := c? | continue
      if c.slope == 0 then continue
      let cE ← numeralOf τ c.slope
      match c.symbol with
      | .gt | .geq =>
        let st := images[i]!.appArg!
        if c.slope > 0 then
          rising := rising.push (i, st)
        else
          let half ← mkAppM ``HMul.hMul #[← numeralOf τ (1/2),
            ← mkAppM ``HMul.hMul #[← mkAppM ``Inv.inv #[cE], st]]
          let hc ← byNumerals (← mkAppM ``LT.lt #[cE, zero])
          let positive ← mkAppM ``Vampire.Lemmas.viras_half_pos #[hc, denials[i]!]
          pending := pending.push (i, bounds.size, fun δ hδ hle => pure (.falling δ st hδ hle))
          bounds := bounds.push half
          positives := positives.push positive
      | .neq =>
        let st := at_ x c.term t
        let r ← mkAppM ``HMul.hMul #[← mkAppM ``Inv.inv #[cE], st]
        let half ← mkAppM ``HMul.hMul #[← numeralOf τ (1/2), r]
        let cond ← mkAppM ``LT.lt #[zero, r]
        let inst ← mkAppOptM ``Classical.propDecidable #[some cond]
        let e ← mkAppOptM ``ite #[some τ, some cond, some inst, some half, some one]
        let positive ← byCasesOn cond (← mkAppM ``LT.lt #[zero, e])
          (fun hr => do
            let is ← mkAppOptM ``if_pos #[some cond, some inst, some hr, some τ, some half, some one]
            mkAppM ``lt_of_lt_of_eq #[← mkAppM ``Vampire.Lemmas.viras_half_of_pos #[hr],
              ← mkEqSymm is])
          (fun hr => do
            let is ← mkAppOptM ``if_neg #[some cond, some inst, some hr, some τ, some half, some one]
            mkAppM ``lt_of_lt_of_eq #[← mkAppOptM ``zero_lt_one #[some τ, none, none, none, none, none],
              ← mkEqSymm is])
        pending := pending.push (i, bounds.size, fun δ hδ hle => pure (.apart δ st hδ cond hle half))
        bounds := bounds.push e
        positives := positives.push positive
      | .eq => continue
    let onePositive ← mkAppOptM ``zero_lt_one #[some τ, none, none, none, none, none]
    let δ ← minOf bounds one
    let hδ ← ltMin positives onePositive
    let mut facts := none'
    for (i, j, make) in pending do
      facts := facts.set! i (some (← make δ hδ (← minLe bounds one j)))
    for (i, st) in rising do
      facts := facts.set! i (some (.rising δ st hδ))
    return (← mkAppM ``HAdd.hAdd #[t, δ], facts)

/--
`False`, from a premise `∀ x, C x` whose clause `C` has `n` literals, where the
conclusion vampire made of it by VIRAS fails: `images[i]` is what the premise's
`i`th literal became, and `denials[i]` a proof that it fails.
-/
def refute (clauseAt premise : Expr) (n : Nat) (images denials : Array Expr)
    (term : Option Expr) (epsilon : Bool) (infinity : Option Bool) :
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
    -- The virtual term vampire substituted: the port's are the aperiodic
    -- ones of linear arithmetic, a term, a term plus an infinitesimal, and
    -- minus infinity.
    let vt ← match term, epsilon, infinity with
      | some t, false, none => pure (Virtual.term t)
      | some t, true, none => pure (Virtual.plusEpsilon t)
      | none, false, some false => pure Virtual.minusInfinity
      | _, _, _ => throwError "VIRAS substituted a virtual term the port has none of: \
          {if term.isSome then "a term" else "no term"}\
          {if epsilon then " plus an infinitesimal" else ""}\
          {match infinity with | some true => " plus infinity" | some false => " minus infinity" | none => ""}"
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
    let some _ ← fits vt
      | throwError "VIRAS made a conclusion its virtual term does not give"
    trace[vampire] "VIRAS took {match vt with
      | .minusInfinity => m!"-∞" | .term t => m!"{t}" | .plusEpsilon t => m!"{t} + ε"}"
    -- The point every complement holds at, and what is known of each literal there.
    let (pt, facts) ← pointFor x τ complements images denials vt
    let clauseAtPoint ← literalsAt pt
    let premiseAtPoint := mkApp premise pt
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
        let some fact := facts[i]?.join
          | throwError "VIRAS: nothing was worked out of the point for literal {i}"
        -- The literal's term at the point, and how the literal states it.
        let (sp, kind, h) ← literalTerm literal h
        let cE ← numeralOf τ c.slope
        match fact, vt with
        | .below p z hp, _ =>
          let hs ← ringEq! sp (← mkAppM ``Neg.neg #[← mkAppM ``HMul.hMul #[cE, ← mkAppM ``HSub.hSub #[p, z]]])
          match kind with
          | .le => mkAppM ``Vampire.Lemmas.viras_below_le #[← byNumerals (← mkAppM ``LT.lt #[cE, ← wholeOf τ 0]), hp, hs, h]
          | .lt => mkAppM ``Vampire.Lemmas.viras_below_lt #[← byNumerals (← mkAppM ``LT.lt #[cE, ← wholeOf τ 0]), hp, hs, h]
          | .eq => mkAppM ``Vampire.Lemmas.viras_below_eq #[← byNumerals (mkNot (← mkEq cE (← wholeOf τ 0))), hp, hs, h]
        | .rising δ st hδ, _ =>
          let hs ← ringEq! sp (← mkAppM ``HSub.hSub #[st, ← mkAppM ``HMul.hMul #[cE, δ]])
          let hc ← byNumerals (← mkAppM ``LT.lt #[← wholeOf τ 0, cE])
          match kind with
          | .le => mkAppM ``Vampire.Lemmas.viras_above_rising_le #[hc, hδ, hs, denial, h]
          | .lt => mkAppM ``Vampire.Lemmas.viras_above_rising_lt #[hc, hδ, hs, denial, h]
          | .eq => throwError "VIRAS: an equation's complement rising just above its term"
        | .falling δ st hδ hle, _ =>
          let hs ← ringEq! sp (← mkAppM ``HSub.hSub #[st, ← mkAppM ``HMul.hMul #[cE, δ]])
          let hc ← byNumerals (← mkAppM ``LT.lt #[cE, ← wholeOf τ 0])
          match kind with
          | .le => mkAppM ``Vampire.Lemmas.viras_above_falling_le #[hc, hδ, hle, hs, denial, h]
          | .lt => mkAppM ``Vampire.Lemmas.viras_above_falling_lt #[hc, hδ, hle, hs, denial, h]
          | .eq => throwError "VIRAS: an equation's complement falling just above its term"
        | .apart δ st hδ cond e half, _ =>
          let hs ← ringEq! sp (← mkAppM ``HSub.hSub #[st, ← mkAppM ``HMul.hMul #[cE, δ]])
          let hc ← byNumerals (mkNot (← mkEq cE (← wholeOf τ 0)))
          let inst ← mkAppOptM ``Classical.propDecidable #[some cond]
          let one ← wholeOf τ 1
          let .eq := kind | throwError "VIRAS: a disequality's complement that is no equation"
          byCasesOn cond (mkConst ``False)
            (fun hr => do
              let is ← mkAppOptM ``if_pos #[some cond, some inst, some hr, some τ, some half, some one]
              let hle ← mkAppM ``le_of_le_of_eq #[e, is]
              mkAppM ``Vampire.Lemmas.viras_above_eq_far #[hc, hδ, hle, hr, hs, h])
            (fun hr => mkAppM ``Vampire.Lemmas.viras_above_eq_near #[hc, hδ, hr, hs, h])
    let refuted ← withLocalDeclD `h clauseAtPoint fun h => do
      mkLambdaFVars #[h] (← elimOr clauseAtPoint n h refuteLiteral)
    return mkApp refuted premiseAtPoint

end Vampire.LiteralRewrite.Viras
