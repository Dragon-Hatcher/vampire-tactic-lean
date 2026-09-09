import Vampire.Arith
import Vampire.Bridge.Poly

/-!
# The ALASCA rules, replayed as terms

Two of Vampire's arithmetic rules are *functions*, not searches, and this is those
functions read backwards.

**`alasca normalization`.** `InequalityNormalizer::tryNormalizeInterpreted`
(`Kernel/ALASCA/Normalization.hpp`) takes a literal and

1. orients it by predicate -- `l ≥ r` becomes `r ≤ l`, `l > r` becomes `r < l`;
2. for a negative inequality swaps the sides and flips `<`/`≤`, since `¬ (l ≥ r)` is
   `r < l`;
3. over `ℤ` strengthens `l ≤ r` to `l < r + 1`;
4. moves everything to one side as `t := r - l`;
5. divides `t`'s coefficients by their gcd (`normalizeFactors`);
6. for `=` and `≠` negates `t` if its leading coefficient is negative;
7. emits `t ⋈ 0` (`createLiteral`), normalising the *arguments* of every uninterpreted
   term on the way (`normalizeUninterpreted`).

Steps 1-6 make the conclusion a rational multiple of the premise. Step 7 is the only part
that is not ring reasoning, and it is exactly a congruence: `f (x + 2)` and `f (2 + x)` are
different atoms to `ring` and equal by `congrArg f (by ring1)`.

**`alasca superposition`.** `Inferences/ALASCA/Superposition.cpp` states the rule as

    C1 ∨ s1 ≈ t      C2 ∨ L[s2]
    ───────────────────────────      uwa(s1, s2) = ⟨σ, Cnst⟩
     (C1 ∨ C2 ∨ L[t])σ ∨ Cnst

and applies it as `EqHelper::replace(L2σ, s2σ, tσ)` -- a rewrite. But `s1 ≈ t` is a
*selected equality* of an ALASCA literal, so `s1 - t = 0` is the premise's own polynomial
divided by the selected atom's coefficient; and replacing `s2σ` by `tσ` inside `L[s2]σ`
adds a multiple of that polynomial to `L`'s. So the conclusion is again a linear
combination -- of two literals rather than one -- over the same atoms.

That is why both rules go through `certProof`. Given the literal to prove and a list of
equations, it computes the rational coefficients `kᵢ` with `Σ kᵢ · premiseᵢ = goal`, the
congruences that identify atoms step 7 rewrote, and then *builds* the proof: with

    F z₁ … zₙ w₁ … wₘ  :=  Σ kᵢ zᵢ + Σ mⱼ wⱼ + (gr - (Σ kᵢ hrᵢ + Σ mⱼ qⱼ))

`gl = F hl⃗ p⃗` and `F hr⃗ q⃗ = gr` are ring identities by construction, and
`F hl⃗ p⃗ = F hr⃗ q⃗` is `congrArg`/`congr` on the premises and the congruences. Three steps
composed by `Eq.trans`.

The clause structure -- the `∀` prefix, the disjunction, the `¬` on a negative literal --
is built as `Expr`s. The only tactic is `ring1`, and only on an equation between two
arithmetic expressions that `Vampire/Bridge/Poly.lean` has already decided are the same
polynomial: two per literal, one per congruence. No tactic is ever run to find out whether
a step has some shape.

What this does **not** cover, and hands back to `Vampire/Arith.lean`'s cascade by
returning `none`:

* an inequality. `F` is a *function*, so `congrArg` carries an equality through it;
  carrying `≤` through needs `F` monotone and `k` positive, which is an order lemma and
  not a congruence. That rules out `alasca fourier motzkin` and the negative-inequality
  normalisations along with it.
* the `ℤ` strengthening of step 3, which changes the relation and is not a scaling;
* an `ℤ` or `ℕ` goal whose coefficients are not integers -- `normalizeFactors` divides by
  the gcd, and recovering `t = 0` from `gcd * t = 0` is `mul_eq_zero`, not a ring identity;
* a step whose premises and conclusion disagree in the number of literals, which is what a
  superposition between two non-unit clauses does.
-/

set_option autoImplicit false

namespace Vampire.Alasca

open Lean Meta Elab Term Vampire.Bridge

/-- Run one tactic on a goal of type `ty` and return the proof, or `none` if it fails.

Failure has to be cheap and silent: the certificate is computed first and this only
*checks* it, so a `none` here means the shape was outside what the reasoning above
covers, and the caller falls back to the cascade. -/
private def byTactic (ty : Expr) (tac : TSyntax `tactic) : TermElabM (Option Expr) := do
  let mv ← mkFreshExprSyntheticOpaqueMVar ty
  try
    let remaining ← withoutErrToSorry <| Tactic.run mv.mvarId! <| Tactic.withoutRecover <|
      Tactic.evalTactic tac
    if !remaining.isEmpty then return none
    return some (← instantiateMVars mv)
  catch _ => return none

/-- `lhs = rhs`, by `ring1`. Used only where `polyOf` has already said the two sides are
the same polynomial, so this is a check and not an attempt.

Parsed rather than quoted: `ring1` is Mathlib's and this package does not import it,
exactly as `Vampire/Arith.lean` explains for the cascade. -/
private def ringEq (lhs rhs : Expr) : TermElabM (Option Expr) := do
  byTactic (← mkEq lhs rhs) (← Arith.parseTactic "ring1")

/-- Whether two terms are ALASCA's *same* term: the same head, with arguments equal as
polynomials. This is `normalizeUninterpreted` -- which normalises a term's arguments and
leaves its head alone -- read as a predicate. -/
partial def congrEq (a b : Expr) : Bool :=
  a == b ||
    (a.getAppFn == b.getAppFn && a.getAppNumArgs == b.getAppNumArgs &&
      (a.getAppArgs.zip b.getAppArgs).all fun (x, y) =>
        x == y || polyOf x == polyOf y || congrEq x y)

/-- A proof of `a = b` for a pair `congrEq` accepts.

Built from `congrArg`/`congr` on the arguments that differ, so the head and the arguments
that agree cost nothing. The differing arguments are where `ring1` runs, on a goal that is
one argument wide. -/
partial def congrProof (a b : Expr) : TermElabM (Option Expr) := do
  if a == b then return some (← mkEqRefl a)
  let fn := a.getAppFn
  unless fn == b.getAppFn do return none
  let as := a.getAppArgs
  let bs := b.getAppArgs
  unless as.size == bs.size do return none
  -- The arguments that agree stay part of the head. Implicit type and instance arguments
  -- live there, and `mkCongr` cannot take an `Eq` between those: `HAdd.hAdd`'s first
  -- three arguments are types.
  let mut split := as.size
  for i in [0:as.size] do
    if as[i]! != bs[i]! then
      split := i
      break
  try
    let mut proof ← mkEqRefl (mkAppN fn (as.extract 0 split))
    for i in [split:as.size] do
      let x := as[i]!
      let y := bs[i]!
      let hx ←
        if x == y then mkEqRefl x
        else if polyOf x == polyOf y then
          match ← ringEq x y with
          | some p => pure p
          | none => return none
        else
          match ← congrProof x y with
          | some p => pure p
          | none => return none
      proof ← mkCongr proof hx
    return some proof
  catch _ => return none

/-- A comparison as `rel`, the type it is at, and its two sides, with `≥`/`>` turned round.

No `Not`: the caller strips the negation, because the *proof* has to see it -- a negative
literal is discharged by applying the premise to a proof of its core, which is a term and
not a rewriting of the relation. -/
private def relOf (e : Expr) : Option (Rel × Expr × Expr × Expr) :=
  match e.consumeMData.getAppFnArgs with
  | (``Eq, #[α, l, r]) => if α.isProp then none else some (.eq, α, l, r)
  | (``LE.le, #[α, _, l, r]) => some (.le, α, l, r)
  | (``LT.lt, #[α, _, l, r]) => some (.lt, α, l, r)
  | (``GE.ge, #[α, _, l, r]) => some (.le, α, r, l)
  | (``GT.gt, #[α, _, l, r]) => some (.lt, α, r, l)
  | _ => none

/-- `¬ p` as `(true, p)`, anything else as `(false, ·)`.

`Ne` is deliberately not unfolded: the translation writes a disequality as `¬ (a = b)`,
and a shape nothing produces is one more thing to be wrong about. -/
private def stripNot (e0 : Expr) : Bool × Expr :=
  let e := e0.consumeMData
  if e.isAppOfArity ``Not 1 then (true, e.appArg!.consumeMData) else (false, e)

/-- The disjuncts of a right-nested `Or`. -/
private partial def orParts (e : Expr) : Array Expr :=
  match e.consumeMData.getAppFnArgs with
  | (``Or, #[a, b]) => #[a] ++ orParts b
  | _ => #[e]

/-- The atoms a polynomial mentions, in order of first appearance. -/
private def atomsOf (p : Poly) : Array Expr := Id.run do
  let mut out : Array Expr := #[]
  for (m, _) in p do
    for a in m do
      unless out.contains a do out := out.push a
  return out

/-- The atoms every comparison in a clause mentions. -/
private partial def clauseAtoms (e : Expr) : Array Expr :=
  let e := e.consumeMData
  if e.isAppOfArity ``Not 1 then clauseAtoms e.appArg!
  else match e.getAppFnArgs with
    | (``Or, #[a, b]) => clauseAtoms a ++ clauseAtoms b
    | _ => match relOf e with
      | some (_, _, l, r) => atomsOf ((polyOf l).sub (polyOf r))
      | none => #[]

/-- A rational as a numeral of `ty`. -/
private def ratExpr (ty : Expr) (r : Rat) : MetaM Expr := do
  let n ← mkNumeral ty r.num.natAbs
  let n ← if r.num < 0 then mkAppM ``Neg.neg #[n] else pure n
  if r.den == 1 then return n
  return ← mkAppM ``HDiv.hDiv #[n, ← mkNumeral ty r.den]

/-- A rational as the source `linear_combination` reads it back.

Parenthesised, and a quotient rather than a decimal: the numeral is elaborated at the
goal's type, so `(1/3)` is a genuine third at `ℝ` -- and at `ℤ` it would be integer
division, which is why `certProof` refuses a non-integral coefficient there. -/
private def ratStr (r : Rat) : String :=
  if r.den == 1 then s!"({r.num})" else s!"({r.num}/{r.den})"

/--
Rational `k⃗` with `Σ kᵢ · rowsᵢ = target`, by Gaussian elimination over the monomials.

For a normalisation there is one row and this is a ratio of leading coefficients; for a
superposition there are two, and the second is the rewriting equation. Free columns are
taken to be zero, and the answer is *verified* against `target` with exact `Poly`
arithmetic before it is returned -- so an under-determined or degenerate system costs a
`none` rather than a wrong certificate.
-/
private def solveCoeffs (target : Poly) (rows : Array Poly) (slack : Bool) :
    Option (Array Rat) := Id.run do
  -- With `slack`, the constant monomial is left out of both the system and the check.
  -- An inequality tolerates one: `Ring.proveLT` closes `-1 < 0`, which is what the `ℤ`
  -- strengthening `l ≤ r ⟹ l < r + 1` leaves behind. An equality tolerates none.
  let keep (m : Mono) : Bool := !slack || !m.isEmpty
  let mut monos : Array Mono := #[]
  for (m, _) in target do
    if keep m then unless monos.contains m do monos := monos.push m
  for r in rows do
    for (m, _) in r do
      if keep m then unless monos.contains m do monos := monos.push m
  let n := rows.size
  let coeff (p : Poly) (m : Mono) : Rat :=
    (p.find? (fun q => q.1 == m)).map (·.2) |>.getD 0
  let mut a : Array (Array Rat) :=
    monos.map fun m => (rows.map (fun r => coeff r m)).push (coeff target m)
  let mut pivotRow : Array Nat := (Array.range n).map fun _ => 0
  let mut isPivot : Array Bool := (Array.range n).map fun _ => false
  let mut r := 0
  for c in [0:n] do
    let mut piv : Option Nat := none
    for i in [r:a.size] do
      if piv.isNone && a[i]![c]! != 0 then piv := some i
    if let some i := piv then
      let tmp := a[i]!
      a := a.set! i a[r]!
      a := a.set! r tmp
      let pv := a[r]![c]!
      a := a.set! r (a[r]!.map (· / pv))
      for j in [0:a.size] do
        if j != r then
          let f := a[j]![c]!
          if f != 0 then
            a := a.set! j ((a[j]!.zip a[r]!).map fun (x, y) => x - f * y)
      pivotRow := pivotRow.set! c r
      isPivot := isPivot.set! c true
      r := r + 1
  let mut k : Array Rat := (Array.range n).map fun _ => 0
  for c in [0:n] do
    if isPivot[c]! then k := k.set! c a[pivotRow[c]!]![n]!
  let mut sum : Poly := Poly.zero
  for i in [0:n] do
    sum := sum.add (rows[i]!.scale k[i]!)
  if sum.filter (fun t => keep t.1) == target.filter (fun t => keep t.1) then some k
  else none

/--
A proof of `goal` from `hyps`, the negations already stripped and turned round.

`goal` may be any of `=`, `≤`, `<`, `≥`, `>`; the hypotheses likewise. The certificate is
the same either way -- rationals `kᵢ` with `Σ kᵢ · premiseᵢ = goal` over the monomials,
plus the congruences that identify atoms `normalizeUninterpreted` rewrote -- and only the
*proof* differs.

For an equality goal from equality hypotheses the proof is built, as the header describes:
`F`, two `ring1`s and a `congrArg`/`congr` chain composed by `Eq.trans`.

For an inequality the same term does not work, because `F` is a function and `congrArg`
carries an equality through a function, not an order. Carrying `≤` through needs `F`
monotone and `kᵢ` nonnegative, which is a stack of order lemmas rather than a congruence,
so the certificate goes to `linear_combination` instead -- one tactic call with the
coefficients already solved, checked by `Ring.proveLE`/`proveLT`, which is the same thing
`ring1` is in the equality branch: a checker handed an answer, not a search.

The hypotheses are bound as `a0 … aₙ` and the proof is applied to them afterwards, so the
tactic is a plain string over identifiers and numerals. That matters: `linear_combination`
is Mathlib's and this package does not import it, so there is no quotation to splice an
`Expr` into.
-/
partial def certProof (goal : Expr) (hyps : Array (Expr × Expr)) :
    TermElabM (Option Expr) := do
  let some (grel, gty, gl, gr) := relOf goal | return none
  let px := (polyOf gl).sub (polyOf gr)
  -- No premise enters the proof: the literal is an identity, which is what the step
  -- closing a refutation on `0 ≠ 0` needs.
  if grel == .eq && px.isEmpty && hyps.isEmpty then return ← ringEq gl gr
  let mut rels : Array Rel := #[]
  let mut sides : Array (Expr × Expr) := #[]
  let mut pys : Array Poly := #[]
  for (_, hty) in hyps do
    let some (hrel, hsort, hl, hr) := relOf hty | return none
    unless hsort == gty do return none
    -- An equality is not provable from inequalities, and this is where that is decided
    -- rather than discovered: `linear_combination` would refuse it one tactic call later.
    if grel == .eq && hrel != .eq then return none
    rels := rels.push hrel
    sides := sides.push (hl, hr)
    pys := pys.push ((polyOf hl).sub (polyOf hr))
  if pys.isEmpty then return none
  -- Congruence classes. The goal's atoms are representatives, then each premise's in
  -- turn: an atom that is not already one either joins a class or becomes a new
  -- representative itself, which is what lets two premises agree on an atom the goal
  -- never mentions.
  let mut reps : Array Expr := atomsOf px
  let mut pairs : Array (Expr × Expr) := #[]
  for py in pys do
    for q in atomsOf py do
      unless reps.contains q do
        match reps.find? (fun p => congrEq p q) with
        | some p => pairs := pairs.push (p, q)
        | none => reps := reps.push q
  -- The substitution has to be linear, so a rewritten atom may only occur on its own:
  -- `f (x+1)` becoming `f (1+x)` inside `f (x+1) * y` would need the product's coefficient
  -- split between two congruences, which the certificate cannot express.
  for (_, q) in pairs do
    for py in pys do
      for (m, _) in py do
        if m.contains q && m != #[q] then return none
  let rep (e : Expr) : Expr := (pairs.find? (fun (_, q) => q == e)).map (·.1) |>.getD e
  let substituted (p : Poly) : Poly :=
    p.foldl (init := Poly.zero) fun acc (m, c) =>
      acc.add ((m.foldl (init := Poly.const 1) fun t a => t.mul (Poly.atom (rep a))).scale c)
  let rows := pys.map substituted
  let slack := grel != .eq
  let mut ks? := solveCoeffs px rows slack
  -- A strict conclusion has to be *witnessed*: `Σ kᵢ · premiseᵢ = goal` is satisfied by
  -- taking every `kᵢ` to be zero whenever the system is degenerate or under-determined,
  -- and zero coefficients prove nothing. Fourier-Motzkin is exactly that case -- from
  -- `-12 + y > 0` and `12 - y ≥ 0` the two polynomials cancel, so the equation holds for
  -- any `k₁ = k₂`, and the one solution that is also a proof is the one that uses the
  -- strict premise. So pin a strict premise at 1 and solve for the rest.
  if grel == .lt then
    let witnessed := match ks? with
      | some ks => (Array.range rels.size).any fun i => rels[i]! == Rel.lt && ks[i]! > 0
      | none => false
    unless witnessed do
      ks? := none
      for i in [0:rels.size] do
        if ks?.isNone && rels[i]! == Rel.lt then
          -- A zero column is never a pivot, so the solver leaves `i` at zero and this
          -- puts the pinned 1 back.
          match solveCoeffs (px.sub rows[i]!) (rows.set! i Poly.zero) slack with
          | some k => ks? := some (k.set! i 1)
          | none => pure ()
  let some ks := ks? | return none
  -- Scaling an inequality by a negative number reverses it, so a negative coefficient on
  -- one is not a certificate at all. An equality takes either sign.
  for i in [0:ks.size] do
    if rels[i]! != .eq && ks[i]! < 0 then return none
  -- Everything with a zero coefficient dropped: an unused premise, or an atom whose
  -- contributions cancelled, costs a `ring1` otherwise.
  let mut used : Array (Expr × Expr × Rat) := #[]
  let mut lefts : Array Expr := #[]
  let mut rights : Array Expr := #[]
  for i in [0:hyps.size] do
    if ks[i]! != 0 then
      used := used.push (hyps[i]!.1, hyps[i]!.2, ks[i]!)
      lefts := lefts.push sides[i]!.1
      rights := rights.push sides[i]!.2
  for (p, q) in pairs do
    let mut m : Rat := 0
    for i in [0:pys.size] do
      m := m + ks[i]! * ((pys[i]!.find? (fun t => t.1 == #[q])).map (·.2) |>.getD 0)
    if m != 0 then
      let some cg ← congrProof p q | return none
      used := used.push (cg, ← mkEq p q, m)
      lefts := lefts.push p
      rights := rights.push q
  if used.isEmpty then
    return ← if grel == .eq then ringEq gl gr else pure none
  -- The conclusion *is* the premise: `¬ (t < 0)` normalises to `t ≥ 0`, and once
  -- `le_of_not_gt` has turned it round there is nothing left to prove. One `isDefEq`
  -- rather than a tactic, and it is the commonest normalisation of all.
  if used.size == 1 && used[0]!.2.2 == 1 then
    if ← isDefEq goal used[0]!.2.1 then return some used[0]!.1
  -- `normalizeFactors` divides by a gcd, which over `ℤ` and `ℕ` is a division and not a
  -- scaling: `t = 0` from `gcd * t = 0` is `mul_eq_zero`, not a ring identity, and `1/3`
  -- written as a coefficient there is integer division.
  if gty.isConstOf ``Int || gty.isConstOf ``Nat then
    if used.any (fun u => u.2.2.den != 1) then return none
  if grel != .eq then
    -- `linear_combination k₀ * a0 + k₁ * a1 + …`, over hypotheses bound as `a0 …`.
    let tac := "linear_combination " ++ String.intercalate " + "
      (used.toList.zipIdx.map fun ((_, _, k), j) => s!"{ratStr k} * a{j}")
    let decls := used.mapIdx fun j u => (Name.mkSimple s!"a{j}", fun _ => pure u.2.1)
    return ← withLocalDeclsD decls fun as => do
      let some pf ← byTactic goal (← Arith.parseTactic tac) | return none
      return some (mkAppN (← mkLambdaFVars as pf) (used.map (·.1)))
  -- The equality branch: `F`, two ring identities and a congruence chain.
  let coeffs ← used.mapM fun u => ratExpr gty u.2.2
  let sum (args : Array Expr) : MetaM Expr := do
    let mut e : Option Expr := none
    for (c, w) in coeffs.zip args do
      let t ← mkAppM ``HMul.hMul #[c, w]
      e := some (← match e with
        | none => pure t
        | some acc => mkAppM ``HAdd.hAdd #[acc, t])
    return e.getD (← mkNumeral gty 0)
  let const ← mkAppM ``HSub.hSub #[gr, ← sum rights]
  let full (args : Array Expr) : MetaM Expr := do mkAppM ``HAdd.hAdd #[← sum args, const]
  let some a ← ringEq gl (← full lefts) | return none
  let some c ← ringEq (← full rights) gr | return none
  let f ← withLocalDeclsD (used.mapIdx fun j _ => (Name.mkSimple s!"z{j}", fun _ => pure gty))
    fun zs => do mkLambdaFVars zs (← full zs)
  let mut b ← mkCongrArg f used[0]!.1
  for u in used.extract 1 used.size do
    b ← mkCongr b u.1
  return some (← mkEqTrans a (← mkEqTrans b c))

/-- A premise literal as a comparison a linear certificate can use.

ALASCA's step 2 takes the negation off an inequality -- `¬ (l ≥ r)` is `r < l` -- so a
premise and its normalisation routinely disagree in polarity, and this does on the Lean
side what `tryNormalizeInterpreted` does on Vampire's. `le_of_not_gt` and `lt_of_not_ge`
are `Mathlib/Order/Defs/LinearOrder.lean`'s, resolved in the environment the replay runs
in for the reason `Vampire/Arith.lean` resolves its tactics there.

A negated *equality* is not one: a disequality bounds nothing, so it can only be the thing
a contradiction contradicts, never a term in a combination. -/
def usable (h ty : Expr) : TermElabM (Option (Expr × Expr)) := do
  let (neg, core) := stripNot ty
  let some (rel, _, _, _) := relOf core | return none
  unless neg do return some (h, core)
  let name := match rel with
    | .eq => Name.anonymous
    | .lt => Name.mkSimple "le_of_not_gt"
    | _   => Name.mkSimple "lt_of_not_ge"
  if name.isAnonymous then return none
  try
    let p ← mkAppM name #[h]
    return some (p, ← inferType p)
  catch _ => return none

/-- `False` from comparisons that cannot all hold: a nonnegative combination of them
proving `0 < 0`, which `lt_irrefl` refutes.

This is what closes an ALASCA refutation whose last literal is an inequality -- the step
whose whole content is `-12 + 12 > 0 → False`. -/
def contradiction (hyps : Array (Expr × Expr)) : TermElabM (Option Expr) := do
  let some (_, ty, _, _) := hyps[0]?.bind (fun h => relOf h.2) | return none
  let zero ← mkNumeral ty 0
  let some pf ← certProof (← mkAppM ``LT.lt #[zero, zero]) hyps | return none
  try return some (mkApp (← mkAppM (Name.mkSimple "lt_irrefl") #[zero]) pf)
  catch _ => return none

/-- A proof of the conclusion's literal `tc` from `hp : tp`, with `eqs` available.

Three shapes, and the polarity decides which. A positive conclusion is proved from the
premise read as a comparison. A negated one is introduced and the premises made to
contradict it. The empty clause is the same with nothing to introduce -- either the
premise is a disequality whose core the rest prove, which is the equality case, or the
comparisons are jointly unsatisfiable, which is the inequality one. -/
def litProof (hp : Expr) (tp tc : Expr) (eqs : Array (Expr × Expr)) :
    TermElabM (Option Expr) := do
  let (np, cp) := stripNot tp
  let main ← usable hp tp
  let asArray : Option (Expr × Expr) → Array (Expr × Expr) := fun o => o.toArray
  -- `¬ (a = b)` in hand, and `extra` proving `a = b`.
  let byDisequality (extra : Array (Expr × Expr)) : TermElabM (Option Expr) := do
    unless np do return none
    match relOf cp with
    | some (.eq, _, _, _) =>
      match ← certProof cp extra with
      | some cert => return some (mkApp hp cert)
      | none => return none
    | _ => return none
  if tc.consumeMData.isConstOf ``False then
    if let some pr ← byDisequality eqs then return some pr
    return ← contradiction (asArray main ++ eqs)
  let (nc, cc) := stripNot tc
  if !nc then
    let some (mh, mt) := main | return none
    return ← certProof cc (#[(mh, mt)] ++ eqs)
  withLocalDeclD `hc cc fun hc => do
    let inner := #[(hc, cc)] ++ eqs
    let some pr ← (do
      if let some pr ← byDisequality inner then return some pr
      contradiction (asArray main ++ inner))
      | return none
    return some (← mkLambdaFVars #[hc] pr)

/-- `⋁ es`, right-nested, as a clause is built. -/
private def foldOr (es : Array Expr) : Expr := Id.run do
  if es.isEmpty then return .const ``False []
  let mut e := es.back!
  for j in [1:es.size] do
    e := mkApp2 (.const ``Or []) es[es.size - 1 - j]! e
  return e

/-- Map a clause to a clause, literal by literal: `Or.elim` down the premise, `Or.inl` /
`Or.inr` back up the conclusion. -/
private partial def orMap (h : Expr) (ps cs : Array Expr) (i : Nat)
    (eqs : Array (Expr × Expr)) : TermElabM (Option Expr) := do
  if i + 1 == ps.size then
    return ← litProof h ps[i]! cs[i]! eqs
  let restC := foldOr (cs.extract (i + 1) cs.size)
  let some left ← (do
    withLocalDeclD `hl ps[i]! fun hl => do
      let some pr ← litProof hl ps[i]! cs[i]! eqs | return none
      return some (← mkLambdaFVars #[hl] (← mkAppOptM ``Or.inl #[cs[i]!, restC, pr])))
    | return none
  let some right ← (do
    withLocalDeclD `hr (foldOr (ps.extract (i + 1) ps.size)) fun hr => do
      let some pr ← orMap hr ps cs (i + 1) eqs | return none
      return some (← mkLambdaFVars #[hr] (← mkAppOptM ``Or.inr #[cs[i]!, restC, pr])))
    | return none
  return some (← mkAppM ``Or.elim #[h, left, right])

/-- Peel a clause's `∀` prefix. A clause binds its variables at *sorts*, so a `Prop`
domain is a `¬` or an implication inside a literal and the prefix has ended -- which is
why this is a syntactic walk and not `forallTelescope`, whose `whnf` would unfold `Not`
and take the literal apart. -/
private partial def clauseBinders (e : Expr) (acc : Array Expr)
    (k : Array Expr → Expr → TermElabM (Option Expr)) : TermElabM (Option Expr) := do
  match e with
  | .forallE n d b _ =>
    -- `←` inside `&&` is hoisted out of it by the `do` elaborator, so the `Prop` test
    -- has to be its own statement.
    if ← isProp d then k acc e
    else withLocalDeclD n d fun x => do
      let some r ← clauseBinders (b.instantiate1 x) (acc.push x) k | return none
      return some r
  | _ => k acc e

/-- Open a premise's `∀` prefix with metavariables, for the unifier `σ`. -/
private partial def openPrefix (h ty : Expr) : MetaM (Expr × Expr × Array MVarId) := do
  match ty with
  | .forallE _ d b _ =>
    if ← isProp d then return (h, ty, #[])
    let m ← mkFreshExprMVar d
    let (h', t', ms) ← openPrefix (mkApp h m) (b.instantiate1 m)
    return (h', t', #[m.mvarId!] ++ ms)
  | _ => return (h, ty, #[])

/--
Recover the unifier by matching the premises' atoms against the conclusion's.

`σ` is not exported: `needsReplay` in `ffi/vampire_proof.cpp` lists the rules whose
substitution the inference replayer recovers, and the ALASCA rules are not among them, so
the script the cascade builds instantiates the premise with a hole and lets `grind` close
over it. Here the substitution is *determined* instead: the rewritten term `tσ` occurs in
the conclusion, so matching a premise atom against a conclusion atom fixes it.

The oracle is `k`, which returns `none` unless the resulting polynomials really do form
the certificate -- so a match that is merely well-typed is rejected by exact `Poly`
arithmetic, and `ring1` never runs on a guess. Candidates are tried in order with full
backtracking, and skipping an atom is allowed, since a premise may mention atoms the
conclusion does not.
-/
private partial def matchOpen (opens candidates : Array Expr) (i : Nat) (ms : Array MVarId)
    (k : TermElabM (Option Expr)) : TermElabM (Option Expr) := do
  let mut allAssigned := true
  for m in ms do
    unless ← m.isAssigned do allAssigned := false
  if allAssigned then return ← k
  if h : i < opens.size then
    for c in candidates do
      let st ← saveState
      if ← isDefEq opens[i] c then
        match ← matchOpen opens candidates (i + 1) ms k with
        | some e => return some e
        | none => st.restore
      else st.restore
    matchOpen opens candidates (i + 1) ms k
  else return none

/-- The step's term, or `none` where its shape is outside what the header describes; the
caller then falls back to `Vampire/Arith.lean`'s cascade. -/
private partial def stepProofCore (ty : Expr) (nPrem : Nat) : TermElabM (Option Expr) := do
  let rec intros (t : Expr) (k : Nat) (hs : Array Expr) : TermElabM (Option Expr) := do
    if k == 0 then return ← body hs t
    let .forallE n d b _ := t | return none
    if b.hasLooseBVars then return none
    withLocalDeclD n d fun h => do
      let some r ← intros b (k - 1) (hs.push h) | return none
      return some (← mkLambdaFVars #[h] r)
  intros ty nPrem #[]
where
  body (hs : Array Expr) (concl : Expr) : TermElabM (Option Expr) :=
    clauseBinders concl #[] fun vs bc => do
      -- Every premise is opened at metavariables, and `matchOpen` fixes them. The
      -- conclusion's own binders are in scope by now, so `σ` may send a premise variable
      -- to one of them, which is what a normalisation does.
      let mut opened : Array (Expr × Expr) := #[]
      let mut ms : Array MVarId := #[]
      for h in hs do
        let (h', t', ms') ← openPrefix h (← inferType h)
        opened := opened.push (h', t')
        ms := ms ++ ms'
      -- The rule names the premises it uses first and the clause it rewrites last:
      -- `GeneratingInference2(rule, lhs.clause(), rhs.clause())`.
      let some (mainH, mainT) := opened.back? | return none
      let eqPrems := opened.pop
      let candidates := clauseAtoms bc ++
        opened.foldl (init := #[]) fun acc (_, t) =>
          if t.hasExprMVar then acc else acc ++ clauseAtoms t
      let opens := opened.foldl (init := #[]) fun acc (_, t) =>
        if t.hasExprMVar then acc ++ (clauseAtoms t).filter (·.hasExprMVar) else acc
      matchOpen opens candidates 0 ms do
        let mainT ← instantiateMVars mainT
        let mut eqs : Array (Expr × Expr) := #[]
        for (h, t) in eqPrems do
          let t ← instantiateMVars t
          if t.hasExprMVar then return none
          -- A premise other than the last is one unit comparison the certificate may use:
          -- superposition's rewriting equality, or Fourier-Motzkin's second inequality.
          -- `usable` turns a negated one round and refuses a disequality. Anything else is
          -- a rule this does not know, and the cascade can have it.
          let #[lit] := orParts t | return none
          let some u ← usable (← instantiateMVars h) lit | return none
          eqs := eqs.push u
        if mainT.hasExprMVar then return none
        let ps := orParts mainT
        let cs := if bc.consumeMData.isConstOf ``False then #[] else orParts bc
        let mainH ← instantiateMVars mainH
        if cs.isEmpty then
          unless ps.size == 1 do return none
          let some pr ← litProof mainH ps[0]! bc eqs | return none
          return some (← mkLambdaFVars vs pr)
        unless ps.size == cs.size do return none
        let some pr ← orMap mainH ps cs 0 eqs | return none
        return some (← mkLambdaFVars vs pr)

/--
The step, as a term: `premise₁ → … → premiseₙ → conclusion` for `alasca normalization` or
`alasca superposition`.

Total, and that is not defensiveness. A step this *declines* is replayed by the cascade; a
step this *throws* on discards the whole refutation and sends the tactic back to the prover
for another one, which is how a faster replay becomes a slower tactic. `mkAppM`
synthesising an instance and `mkCongr` meeting a shape it does not accept both throw, and
neither is a reason to give a refutation up.
-/
def stepProof (ty : Expr) (nPrem : Nat) : TermElabM (Option Expr) := do
  try stepProofCore ty nPrem
  catch e =>
    trace[vampire.replay] "alasca certificate declined: {e.toMessageData}"
    return none

end Vampire.Alasca
