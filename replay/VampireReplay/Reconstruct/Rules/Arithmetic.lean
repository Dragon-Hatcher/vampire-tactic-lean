import VampireReplay.Reconstruct.Basic

/-!
The steps that hold by arithmetic.

Vampire's own arithmetic rules record nothing of why each is sound, so these
are the steps whose conclusion replay has to prove for itself. Two kinds:

* The literal-wise simplifications -- evaluation, theory normalization, ALASCA
  normalization, cancellation -- rewrite each literal into one literal, or find
  it false. The worker records which literal each became, and each rewrite is
  proved by exactly the rewrites its rule makes (`Context.literalIff`).
* The rest -- theory axioms, ALASCA's inferences adding inequalities together --
  hold by the arithmetic of their literals, which the decision procedure
  `Context.contradiction` settles.
-/

namespace Vampire.Reconstruct.Arithmetic

open Lean Meta

/--
What a step's premises say, each instantiated as the step used it.

A premise is a clause, so what it says is a disjunction; it is taken apart by
the caller, since which of its literals holds is a case to be made rather than
a fact to be had.
-/
private def premisesOf (step : Step) (vars : Vars) :
    ReconstructM (Array (Expr × Expr)) := do
  let mut out := #[]
  for ((proof, stated), i) in step.premises.zipIdx do
    let some parent := step.unit.parents[i]?
      | throwError "no premise in position {i}"
    -- A step that bound the premise's variables recorded what to; one that
    -- took the premise as it stands recorded nothing, and then it is taken so.
    match step.useAt? i with
    | some use =>
      out := out.push (← instantiateAt parent use (← coverVars vars step.unit.boundVarSorts) proof stated)
    | none =>
      -- Nothing recorded: a simplifying inference that applies no substitution
      -- states its premise of the very variables its conclusion speaks of, so
      -- that is what it is instantiated at. A variable the conclusion does not
      -- have is one the step evaluated or dropped the literal of, and the
      -- premise is a fact of every element of its sort, so which element is
      -- taken for it cannot matter.
      let args ← argsFor parent vars
      out := out.push (mkAppN proof args,
        ← sharedClause (← instantiateForall stated args))
  return out

/--
`e` with each of its atoms replaced by what `rewrite` makes of it, and `e ↔`
that: its connectives and quantifiers kept, each atom rewritten where it
stands.
-/
private partial def rewriteAtoms (rewrite : Expr → ReconstructM (Expr × Expr)) (e : Expr) :
    ReconstructM (Expr × Expr) := do
  -- Whether a formula is built by a connective or a quantifier, rather than
  -- an atom.
  let compound (a : Expr) : ReconstructM Bool := do
    let a ← instantiateMVars a
    if a.isForall then return true
    return a.isAppOfArity ``Not 1 || a.isAppOfArity ``And 2 || a.isAppOfArity ``Or 2 ||
      a.isAppOfArity ``Iff 2 || a.isAppOfArity ``Exists 2 || a.isConstOf ``True ||
      a.isConstOf ``False
  let e ← instantiateMVars e
  let go := rewriteAtoms rewrite
  let both (lemma_ : Name) (a b : Expr) (fn : Expr → Expr → Expr) :
      ReconstructM (Expr × Expr) := do
    let (a', ha) ← go a
    let (b', hb) ← go b
    return (fn a' b', ← mkAppM lemma_ #[ha, hb])
  if let .forallE n d b bi := e then
    if (← isProp d) && !b.hasLooseBVars then
      return ← both ``imp_congr d b fun d' b' => .forallE n d' b' bi
    return ← withLocalDecl n bi d fun x => do
      let (b', hb) ← go (b.instantiate1 x)
      return (← mkForallFVars #[x] b', ← mkAppM ``forall_congr' #[← mkLambdaFVars #[x] hb])
  match_expr e with
  | True => return (e, ← mkAppM ``Iff.refl #[e])
  | False => return (e, ← mkAppM ``Iff.refl #[e])
  | Not a => do
    -- A negated atom is a literal, as vampire has one, and is rewritten
    -- whole: `¬(a ≤ b)` becomes `b < a`, not `¬¬(b < a)`.
    unless ← compound a do return ← rewrite e
    let (a', h) ← go a
    return (mkApp (mkConst ``Not) a', ← mkAppM ``not_congr #[h])
  | And a b => both ``and_congr a b (mkApp2 (mkConst ``And))
  | Or a b => both ``or_congr a b (mkApp2 (mkConst ``Or))
  | Iff a b => both ``iff_congr a b (mkApp2 (mkConst ``Iff))
  | Exists τ p => do
    let .lam n _ body bi := p | rewrite e
    withLocalDecl n bi τ fun x => do
      let (b', hb) ← go (body.instantiate1 x)
      return (← mkAppM ``Exists #[← mkLambdaFVars #[x] b'],
        ← mkAppM ``exists_congr #[← mkLambdaFVars #[x] hb])
  | _ => rewrite e

/-- The worker's number for ALASCA's strong normalization of comparisons. -/
private def inequalityPredicateNormalization : Nat := 9

/--
ALASCA's strong normalization of comparisons: `s ≥ t` as `s > t ∨ s = t`, and
`s ≠ t` as `s > t ∨ t > s`, every other literal carried. The two literals each
rewritten one became are recorded with the literal they were made of, and are
`lt_or_eq_of_le` and `Ne.lt_or_lt` of it, each disjunct at its literal, an
equation turned round where vampire shares it so.
-/
def strongNormalization (step : Step) : ReconstructM Expr := do
  let ⟨parent, proof, stated⟩ ← step.onlyPremise
  let introduced := step.unit.introduced
  let sources := step.unit.introducedSources
  step.underVars fun kept target => do
    let (_, args) ← premiseVars parent (← coverVars kept step.unit.boundVarSorts)
    let premiseType ← instantiateForall stated args
    let some placement := step.placedAt 0
      | throwError "step {step.unit.number} recorded no placement of its premise"
    let place (into : Into) (k : Nat) (h : Expr) : ReconstructM Expr := do
      let some part := into.parts[k]?
        | throwError "step {step.unit.number}'s clause has no literal {k}"
      -- One up to instances: the lemmas state their comparisons over classes.
      let same (a b : Expr) : ReconstructM Bool := do
        if a == b then return true
        withNewMCtxDepth <| withTransparency .instances <| isDefEq a b
      let said ← instantiateMVars (← inferType h)
      if ← same said part then return into.inject k (← mkExpectedTypeHint h part)
      let some turned ← flipEquality h
        | throwError "step {step.unit.number}:{indentExpr said}\nis not literal {k},{indentExpr part}"
      unless ← same (← instantiateMVars (← inferType turned)) part do
        throwError "step {step.unit.number}:{indentExpr said}\nis not literal {k},{indentExpr part}"
      return into.inject k (← mkExpectedTypeHint turned part)
    step.withInto target fun into =>
      carryPast premiseType target (mkAppN proof args) into
        (fun i => (placement[i]?.join).isNone) (placed := some placement)
        (sourceCount := parent.clauseSize?) (fun i h => do
          let built := (List.range introduced.size).filter (sources[·]? == some (some i))
          let [a, b] := built
            | throwError "step {step.unit.number} made {built.length} literals of its literal {i}"
          let said ← instantiateMVars (← inferType h)
          -- `y ≤ x`, which is `x ≥ y`, as `y < x ∨ y = x`; `¬x = y` as `y < x ∨ x < y`.
          let split ← if said.isAppOfArity ``LE.le 4 then mkAppM `lt_or_eq_of_le #[h]
            else if said.not?.any (·.isAppOfArity ``Eq 3) then
              mkAppM `Ne.lt_or_lt #[← mkAppM ``Ne.symm #[h]]
            else throwError "step {step.unit.number} rewrote{indentExpr said}\n\
              which is neither a comparison nor a disequality"
          let splitType ← whnfR (← instantiateMVars (← inferType split))
          let onLeft ← withLocalDeclD `h splitType.appFn!.appArg! fun h => do
            mkLambdaFVars #[h] (← place into (introduced[a]!) h)
          let onRight ← withLocalDeclD `h splitType.appArg! fun h => do
            mkLambdaFVars #[h] (← place into (introduced[b]!) h)
          mkAppOptM ``Or.elim #[none, none, some target, some split, some onLeft, some onRight])

/--
A literal-wise simplification: each literal of the premise became the literal
of the conclusion the worker recorded, by the rewrites of the procedure it
recorded, or was found false and dropped.

A literal the procedure gave back as it was is the conclusion's as it stands,
whatever the procedure would make of it: a rule applies its procedure only
where it changes something (`tryCancel` passes over what compares no numbers,
polynomial evaluation over a literal nothing in which evaluates). Vampire's
test is that the result is the literal itself; the worker writes each literal
once, so the premise's literal and its image being one literal on the wire is
that test.

Before clausification the step states a formula, and its atoms are rewritten
where they stand, which is a congruence down to them; only theory
normalization rewrites formulas.
-/
def literalwise (step : Step) : ReconstructM Expr := do
  let ⟨parent, proof, stated⟩ ← step.onlyPremise
  if step.unit.clause?.isNone then
    unless step.rule == .theoryNormalization do
      throwError "{step.rule.name} rewrote a formula, which only theory normalization does"
    -- The formula's atoms each rewritten where they stand, and what that
    -- makes is the formula vampire stated, up to how it writes one.
    let (rewritten, h) ← rewriteAtoms
      (fun a => do (← read).literalRewritten .theoryNormalization a) stated
    return ← restate (← mkAppM ``Iff.mp #[h, proof]) rewritten (← step.conclusion)
  -- ALASCA's strong normalization of comparisons shares the rule and can make
  -- two literals of one, so it records no images: its conclusion follows from
  -- its premise by the arithmetic, a literal at a time.
  if step.unit.literalProcedure? == some inequalityPredicateNormalization then
    return ← strongNormalization step
  let some procedure := step.unit.literalProcedure?.bind LiteralRewrite.ofRecorded?
    | throwError "step {step.unit.number} ({step.rule.name}) recorded no procedure"
  let some images := step.placedAt 0
    | throwError "step {step.unit.number} ({step.rule.name}) recorded nothing of \
      what its literals became"
  let factors := step.unit.literalFactors?
  let premiseLiterals := (parent.clause?.map (·.literals)).getD #[]
  let literals := (step.unit.clause?.map (·.literals)).getD #[]
  step.underVars fun vars target => do
    let #[(premise, premiseStated)] ← premisesOf step vars
      | throwError "{step.rule.name} should have one premise"
    let parts ← clauseLiterals premiseStated parent.clauseSize?
    unless images.size == parts.size do
      throwError "step {step.unit.number} recorded {images.size} literals' \
        images for a premise of {parts.size}"
    step.withInto target fun into =>
    elimGiven parts (motive? := some target) (fun i h => do
      let factor := (factors.bind (·[i]?)).getD (1, 1)
      match images[i]? with
      | some (some (j, _)) =>
        let some goal := into.parts[j]?
          | throwError "step {step.unit.number} has no literal {j}"
        let kept := premiseLiterals[i]?.isSome && premiseLiterals[i]? == literals[j]?
        let proof ← if kept then
            unless ← isDefEq parts[i]! goal do
              throwError "step {step.unit.number} kept its premise's literal {i} as its \
                literal {j}, but they are stated{indentExpr parts[i]!}\nand{indentExpr goal}"
            pure h
          else
            let iff ← (← read).literalIff procedure parts[i]! goal factor
            pure (mkApp4 (mkConst ``Iff.mp) parts[i]! goal iff h)
        return into.inject j proof
      | _ =>
        let refuted ← (← read).literalFalse procedure parts[i]! factor
        return mkApp2 (mkConst ``False.elim [.zero]) target (mkApp refuted h)) premise

/--
`alasca_viras_qe`: VIRAS eliminated a variable `x` from the premise, taking a
virtual term for it -- a term, a term and an infinitesimal, or the order's
bottom -- in each literal it reads. The worker records the variable (as a
term the step acted on) and what each premise literal became.

Suppose the conclusion fails: each of its literals does. `virasRefute` finds
which virtual term gave it and a point every premise literal fails at, which
the premise, holding for every `x`, denies.
-/
def viras (step : Step) : ReconstructM Expr := do
  let ⟨parent, proof, stated⟩ ← step.onlyPremise
  let some images := step.placedAt 0
    | throwError "step {step.unit.number} (alasca_viras_qe) recorded nothing of what \
      its literals became"
  let some use := step.useAt? 0
    | throwError "step {step.unit.number} (alasca_viras_qe) recorded no eliminated variable"
  let some eliminated := use.term
    | throwError "step {step.unit.number} (alasca_viras_qe) recorded no eliminated variable"
  unless eliminated.isVar do
    throwError "step {step.unit.number} (alasca_viras_qe) eliminated {eliminated}, not a variable"
  let x := eliminated.var
  let some (_, sortName) := parent.varSorts.find? (·.1 == x)
    | throwError "the eliminated variable X{x} has no recorded sort"
  let n := (parent.clauseSize?).getD 0
  step.underVars fun kept target => step.withInto target fun into => do
    -- The virtual term can mention a variable of the premise the conclusion
    -- does not keep, which stands for the same element in both.
    let vars ← coverVars kept step.unit.boundVarSorts
    let τ ← sortType sortName
    -- The premise with `x` left free, its other variables the conclusion's.
    let (clauseAt, premiseAll) ← withLocalDeclD (Name.mkSimple s!"X{x}") τ fun xv => do
      let args ← argsFor parent (vars.insert x xv)
      let statedAt ← instantiateForall stated args
      return (← mkLambdaFVars #[xv] statedAt, ← mkLambdaFVars #[xv] (mkAppN proof args))
    -- The conclusion failing, each of its literals failing.
    let refuted ← withLocalDeclD `h (mkNot target) fun h => do
      let denials ← into.parts.mapIdxM fun j part => do
        let placed := into.inject j (.bvar 0)
        -- Stated as `¬part`, the shape linear arithmetic reads a denial in.
        mkExpectedTypeHint (.lam `l part (mkApp h placed) .default) (mkNot part)
      let mut imagesOf := #[]
      let mut denialsOf := #[]
      for image in images do
        let some (j, _) := image
          | throwError "step {step.unit.number}: VIRAS dropped a literal, which it never does"
        imagesOf := imagesOf.push into.parts[j]!
        denialsOf := denialsOf.push denials[j]!
      -- The virtual term vampire substituted, in the conclusion's variables.
      let term ← use.other.mapM (termAt parent use vars ·)
      let falsity ← (← read).virasRefute clauseAt premiseAll n imagesOf denialsOf
        term use.virtualEpsilon use.virtualInfinity
      mkLambdaFVars #[h] falsity
    mkAppOptM ``Classical.byContradiction #[some target, some refuted]

/-- `a * b`, whichever numbers those are. -/
private def asProduct (e : Expr) : Option (Expr × Expr) :=
  match e.getAppFnArgs with
  | (``HMul.hMul, #[_, _, _, _, a, b]) => some (a, b)
  | _ => none

/-- Whether a term is the number zero. -/
private def isZero (e : Expr) : Bool := e.nat? == some 0

/-!
### Steps certified by a lemma

ALASCA's rules about integers -- that a term is one, and what a floor does --
hold by facts about the integers that no procedure over an ordered field
knows. Each is certified by a lemma of `Vampire.Lemmas`, stated the way the
rule writes its conclusion, instantiated at the terms the worker recorded, and
related to the step's literals by ring arithmetic (`ringEqual`) and the
evaluation of closed facts about numerals (`Context.numerically`) alone: no
decision procedure runs. Replay is precompiled and does not import the lemmas;
it names them.
-/

/-- The number `e` is, for a numeral as replay writes one (`wholeNumeral`, `n / d`). -/
private partial def numeralValue? (e : Expr) : Option Rat :=
  if e.isAppOfArity ``OfNat.ofNat 3 then
    match e.appFn!.appArg! with
    | .lit (.natVal n) => some (n : Rat)
    | _ => none
  else if e.isAppOfArity ``Neg.neg 3 then (numeralValue? e.appArg!).map (- ·)
  else if e.isAppOfArity ``HDiv.hDiv 6 then do
    let a ← numeralValue? e.appFn!.appArg!
    let b ← numeralValue? e.appArg!
    if b == 0 then none else some (a / b)
  else if e.isAppOfArity ``HMul.hMul 6 then do
    return (← numeralValue? e.appFn!.appArg!) * (← numeralValue? e.appArg!)
  else if e.isAppOfArity ``Int.cast 3 then numeralValue? e.appArg!
  else none

/-- The numeral for `q` at `τ`, written as replay writes one. -/
private def ratNumeral (τ : Expr) (q : Rat) : ReconstructM Expr := do
  if q.den == 1 then return ← wholeNumeral τ q.num
  mkAppM ``HDiv.hDiv #[← wholeNumeral τ q.num, ← wholeNumeral τ (Int.ofNat q.den)]

/-- `0 < c`, for a numeral `c`. -/
private def positive (c : Expr) : ReconstructM Expr := do
  (← read).numerically (← mkAppM ``LT.lt #[← wholeNumeral (← inferType c) 0, c])

private partial def summands (e : Expr) : Array Expr :=
  if e.isAppOfArity ``HAdd.hAdd 6 then summands e.appFn!.appArg! ++ summands e.appArg! else #[e]

/-- Whether `e` is a floor, cast back to the type it is the floor of. -/
private def isFloorCast (e : Expr) : Bool :=
  e.isAppOfArity ``Int.cast 3 && e.appArg!.isAppOfArity `Int.floor 5

/-- A summand that is a numeral times a floor: the numeral's value, and the floor. -/
private def floorSummand? (t : Expr) : Option (Rat × Expr) :=
  if isFloorCast t then some (1, t)
  else if (t.isAppOfArity ``Vampire.Reconstruct.linMul 4 || t.isAppOfArity ``HMul.hMul 6)
      && isFloorCast t.appArg! then
    (numeralValue? t.appFn!.appArg!).map (·, t.appArg!)
  else if t.isAppOfArity ``Neg.neg 3 && isFloorCast t.appArg! then some (-1, t.appArg!)
  else none

/--
`∃ n : ℤ, ↑n = w`, from `fact : a = b` saying that a floor is `w`: ALASCA's
`isInt(w)`, which it states with the floor the summand it orders biggest and
`w` the rest over the floor's coefficient. `none` where no floor of the
equation is `w` so.
-/
private def integerOf (fact w : Expr) : ReconstructM (Option Expr) := do
  let stated ← instantiateMVars (← inferType fact)
  let some (τ, a, b) := stated.eq? | return none
  let difference ← mkAppM ``HSub.hSub #[b, a]
  for (side, sign) in [(a, (-1 : Rat)), (b, 1)] do
    for t in summands side do
      let some (c, floor) := floorSummand? t | continue
      let net := sign * c
      if net.num == 0 then continue
      let c ← ratNumeral τ (if 0 < net.num then net else -net)
      let (inner, lemma_) ← if 0 < net.num then
          pure (← mkAppM ``HSub.hSub #[floor, w], `Vampire.Lemmas.int_of_eq)
        else pure (← mkAppM ``HSub.hSub #[w, floor], `Vampire.Lemmas.int_of_eq')
      let some he ← ringEqual difference (← mkAppM ``HMul.hMul #[c, inner]) | continue
      return some (← mkAppM lemma_ #[fact, ← positive c, he])
  return none

/--
`integerOf`, for a term the step may state negated: `j s + u` of a premise in
which vampire's coefficient of `s` was negative, `j` being its absolute value.
-/
private def integerUpToSign (fact w : Expr) : ReconstructM (Option Expr) := do
  if let some h ← integerOf fact w then return some h
  let some h ← integerOf fact (← mkAppM ``Neg.neg #[w]) | return none
  return some (← mkAppM `Vampire.Lemmas.ifm_int_neg #[h])

/--
`leaf` in each case of the step's premises: each premise holds, so one of its
literals does. A literal the worker recorded as carried is placed where it
went, and `leaf` is given the others, one of each premise, in their order.
-/
private partial def premiseCases (step : Step) (premises : Array (Expr × Expr)) (target : Expr)
    (into : Into) (leaf : Array Expr → ReconstructM Expr) : ReconstructM Expr := do
  let premiseParts ← premises.zipIdx.mapM fun ((_, stated), i) =>
    clauseLiterals stated ((step.unit.parents[i]?).bind (·.clauseSize?))
  let rec go (facts : Array Expr) (i : Nat) : ReconstructM Expr := do
    let some (proof, _) := premises[i]? | return ← leaf facts
    let placed := step.placedAt i
    elimGiven premiseParts[i]! (motive? := some target)
      (fun k h => do
        if let some (some _) := placed.bind (·[k]?) then
          return ← into.placeAt placed k h
        go (facts.push (← plainly h)) (i + 1)) proof
  go #[] 0

/-- The terms the worker recorded of the step's `i`th premise, as the step used it. -/
private def recordedTerms (step : Step) (vars : Vars) (i : Nat) :
    ReconstructM (Option Expr × Option Expr) := do
  let some parent := step.unit.parents[i]?
    | throwError "step {step.unit.number}: no premise {i}"
  let some use := step.useAt? i
    | throwError "step {step.unit.number}: premise {i} recorded no use"
  return (← use.term.mapM (termAt parent use vars ·), ← use.other.mapM (termAt parent use vars ·))

/--
ALASCA's integer Fourier-Motzkin, and floor Fourier-Motzkin, which is the same
rule with `isInt(⌊x⌋)` for its third premise:

    k₀ s + r₀ > 0    -k₁ s + r₁ > 0    isInt(j s + u)
    ─────────────────────────────────────────────────
    t₀' + t₁' > 0  ∨  s + t₀' = 0

`Vampire.Lemmas.ifm_*` instantiated at the terms the worker recorded -- `k₀ s`
and `t₀`, `-k₁ s` and `t₁`, `u` and `j`. Each floor the lemmas state is the
conclusion's own, found in it, so that the relation is one of terms over the
same atoms.
-/
partial def integerFourierMotzkin (step : Step) : ReconstructM Expr := do
  step.underVars fun vars target => do
    let premises ← premisesOf step vars
    let covered ← coverVars vars step.unit.boundVarSorts
    let termsOf (i : Nat) : ReconstructM (Expr × Expr) := do
      let (some t, some o) ← recordedTerms step covered i
        | throwError "step {step.unit.number}: premise {i} recorded no terms"
      return (t, o)
    -- Which premise is which: vampire lists the three of integer
    -- Fourier-Motzkin through `List::fromIterator`, which pushes each in
    -- front, so they come last first; floor Fourier-Motzkin's two in order.
    let three := premises.size == 3
    let (first, integer) := if three then (2, 0) else (0, 0)
    let (m₀, t₀) ← termsOf first
    let (m₁, t₁) ← termsOf 1
    -- `k s`, read as the product it is, or `s` itself at coefficient one.
    let split (m : Expr) : ReconstructM (Expr × Expr) := do
      if m.isAppOfArity ``HMul.hMul 6 then return (m.appFn!.appArg!, m.appArg!)
      return (← wholeNumeral (← inferType m) 1, m)
    let (c₀, s) ← split m₀
    let (c₁, s₁) ← split m₁
    unless s == s₁ do
      throwError "step {step.unit.number}: its premises' atoms{indentExpr s}\nand{indentExpr s₁}\n\
        are not one term"
    let α ← inferType s
    let num (n : Int) : ReconstructM Expr := wholeNumeral α n
    let (u, j) ← if three then termsOf integer else pure (← num 0, ← num 1)
    let k₁ ← mkAppM ``Neg.neg #[c₁]
    let hk₀ ← positive c₀
    let hk₁ ← positive k₁
    let hj ← positive j
    let ring (a b : Expr) : ReconstructM Expr := do
      let some h ← ringEqual a b
        | throwError "step {step.unit.number}:{indentExpr a}\nand{indentExpr b}\n\
            are not one up to the identities of a ring"
      return h
    -- `h`, a comparison with `0` of `e`, restated as one of `e'`, equal to it.
    let restated (h e e' : Expr) (strict : Bool) : ReconstructM Expr := do
      let eq ← ring e e'
      let op := if strict then ``LT.lt else ``LE.le
      let motive ← withLocalDeclD `x α fun x => do
        mkLambdaFVars #[x] (← mkAppM op #[← num 0, x])
      mkEqMP (← mkCongrArg motive eq) h
    let comparison (h : Expr) : ReconstructM (Bool × Expr) := do
      let stated ← instantiateMVars (← inferType h)
      if stated.isAppOfArity ``LT.lt 4 then return (true, stated.appArg!)
      if stated.isAppOfArity ``LE.le 4 then return (false, stated.appArg!)
      throwError "step {step.unit.number}: a premise's literal{indentExpr stated}\n\
        is no comparison with zero"
    -- The floors the conclusion states, to find the lemmas' own among.
    let floors ← do
      let found ← IO.mkRef (#[] : Array Expr)
      forEachExpr target fun e => do
        if isFloorCast e then found.modify (·.push e.appArg!.appArg!)
      found.get
    let floorOf (wanted : Expr) : ReconstructM Expr := do
      for a in floors do
        if let some h ← ringEqual a wanted then return h
      throwError "step {step.unit.number}: its conclusion has no floor of{indentExpr wanted}"
    withInto target step.unit.clauseSize? fun into => do
      premiseCases step premises target into fun facts => do
        let (strict₀, e₀) ← comparison facts[first]!
        let (strict₁, e₁) ← comparison facts[1]!
        let r₀ ← mkAppM ``HSub.hSub #[e₀, ← mkAppM ``HMul.hMul #[c₀, s]]
        let r₁ ← mkAppM ``HAdd.hAdd #[e₁, ← mkAppM ``HMul.hMul #[k₁, s]]
        let h₀ ← restated facts[first]! e₀ (← mkAppM ``HAdd.hAdd #[← mkAppM ``HMul.hMul #[c₀, s], r₀]) strict₀
        let h₁ ← restated facts[1]! e₁ (← mkAppM ``HAdd.hAdd
          #[← mkAppM ``Neg.neg #[← mkAppM ``HMul.hMul #[k₁, s]], r₁]) strict₁
        let ht₀ ← ring (← mkAppM ``HMul.hMul #[t₀, c₀]) r₀
        let ht₁ ← ring (← mkAppM ``HMul.hMul #[t₁, k₁]) r₁
        let integral ← if three then do
            let jsu ← mkAppM ``HAdd.hAdd #[← mkAppM ``HMul.hMul #[j, s], u]
            let some h ← integerUpToSign facts[integer]! jsu
              | throwError "step {step.unit.number}: its integrality premise\
                  {indentExpr (← inferType facts[integer]!)}\nsays of no floor that it is\
                  {indentExpr jsu}\nup to a numeral and the ring"
            pure h
          else do
            unless isFloorCast s do
              throwError "step {step.unit.number}: floor Fourier-Motzkin on{indentExpr s}\n\
                which is no floor"
            mkAppM `Vampire.Lemmas.ifm_floor_int #[s.appArg!.appArg!]
        let lower ← if strict₀ then do
            let wanted ← mkAppM ``Neg.neg #[← mkAppM ``HSub.hSub #[← mkAppM ``HMul.hMul #[j, t₀], u]]
            mkAppM `Vampire.Lemmas.ifm_lower #[hk₀, hj, ht₀, h₀, integral, ← floorOf wanted]
          else mkAppM `Vampire.Lemmas.ifm_lower_le #[hk₀, ht₀, h₀]
        let upper ← if strict₁ then do
            let wanted ← mkAppM ``Neg.neg #[← mkAppM ``HAdd.hAdd #[← mkAppM ``HMul.hMul #[j, t₁], u]]
            mkAppM `Vampire.Lemmas.ifm_upper #[hk₁, hj, ht₁, h₁, integral, ← floorOf wanted]
          else mkAppM `Vampire.Lemmas.ifm_upper_le #[hk₁, ht₁, h₁]
        let joined ← mkAppM `Vampire.Lemmas.ifm_join #[lower, upper]
        let joinedType ← whnfR (← instantiateMVars (← inferType joined))
        unless joinedType.isAppOfArity ``Or 2 do
          throwError "step {step.unit.number}: the lemmas joined to no disjunction"
        let sum := joinedType.appFn!.appArg!.appArg!
        let lhs := joinedType.appArg!.appFn!.appArg!
        -- Each disjunct is one of the conclusion's literals, up to the ring.
        let place (i : Nat) (h : Expr) : ReconstructM (Option Expr) := do
          let part := into.parts[i]!
          if part.isAppOfArity ``LT.lt 4 then
            let some eq ← ringEqual sum part.appArg! | return none
            let motive ← withLocalDeclD `x α fun x => do
              mkLambdaFVars #[x] (← mkAppM ``LT.lt #[← num 0, x])
            return some (into.inject i (← mkEqMP (← mkCongrArg motive eq) h))
          if let some (_, a, b) := part.eq? then
            for (side, flipped) in [(a, false), (b, true)] do
              let some eq ← ringEqual lhs side | continue
              let motive ← withLocalDeclD `x α fun x => do
                mkLambdaFVars #[x] (← if flipped then mkEq (← num 0) x else mkEq x (← num 0))
              let h ← if flipped then mkEqSymm h else pure h
              return some (into.inject i (← mkEqMP (← mkCongrArg motive eq) h))
          return none
        let placed (h : Expr) (wantEq : Bool) : ReconstructM Expr := do
          for i in [0 : into.parts.size] do
            if wantEq != into.parts[i]!.eq?.isSome then continue
            if let some p ← place i h then return p
          throwError "step {step.unit.number}: its conclusion has no literal{indentExpr (← inferType h)}"
        let onSum ← withLocalDeclD `h (← mkAppM ``LT.lt #[← num 0, sum]) fun h => do
          mkLambdaFVars #[h] (← placed h false)
        let onEq ← withLocalDeclD `h (← mkEq lhs (← num 0)) fun h => do
          mkLambdaFVars #[h] (← placed h true)
        mkAppOptM ``Or.elim #[none, none, some target, some joined, some onSum, some onEq]

/--
ALASCA's floor elimination: a literal `k ⌊s⌋ + r = 0` dropped where `-r / k` is
no integer, which makes it false. `Vampire.Lemmas.floor_elim`, at the integer
below `-r / k`, with that `-r / k` lies between it and the next evaluated.
-/
partial def floorElimination (step : Step) : ReconstructM Expr := do
  step.underVars fun vars target => do
    let premises ← premisesOf step vars
    withInto target step.unit.clauseSize? fun into => do
      premiseCases step premises target into fun facts => do
        let h := facts[0]!
        let stated ← instantiateMVars (← inferType h)
        let some (τ, a, b) := stated.eq?
          | throwError "step {step.unit.number}: the literal it dropped{indentExpr stated}\n\
              is no equation"
        -- `b - a` as `r + k ⌊s⌋`.
        let mut floor? : Option Expr := none
        let mut k : Rat := 0
        let mut r : Rat := 0
        for (side, sign) in [(a, (-1 : Rat)), (b, 1)] do
          for t in summands side do
            if let some (c, f) := floorSummand? t then
              if floor?.any (· != f) then
                throwError "step {step.unit.number}: the literal it dropped{indentExpr stated}\n\
                  has more than one floor"
              floor? := some f
              k := k + sign * c
            else if let some v := numeralValue? t then
              r := r + sign * v
            else
              throwError "step {step.unit.number}: the literal it dropped{indentExpr stated}\n\
                is not a number and a multiple of a floor"
        let some floor := floor?
          | throwError "step {step.unit.number}: the literal it dropped{indentExpr stated}\n\
              has no floor"
        let q := -r / k
        let m := q.floor
        if k.num == 0 || (m : Rat) == q then
          throwError "step {step.unit.number}: the literal it dropped{indentExpr stated}\n\
            is not false: {-r} over {k} is an integer"
        let kE ← ratNumeral τ k
        let rE ← ratNumeral τ r
        let some he ← ringEqual (← mkAppM ``HSub.hSub #[b, a])
            (← mkAppM ``HAdd.hAdd #[rE, ← mkAppM ``HMul.hMul #[kE, floor]])
          | throwError "step {step.unit.number}: the literal it dropped{indentExpr stated}\n\
              is not {rE} + {kE} * {floor} up to the ring"
        let mE ← wholeNumeral (mkConst ``Int) m
        let mCast ← mkAppOptM ``Int.cast #[some τ, none, some mE]
        let v ← mkAppM ``HDiv.hDiv #[← mkAppM ``Neg.neg #[rE], kE]
        let numerically := (← read).numerically
        let hk ← numerically (← mkAppM ``Ne #[kE, ← wholeNumeral τ 0])
        let hlo ← numerically (← mkAppM ``LT.lt #[mCast, v])
        let hhi ← numerically (← mkAppM ``LT.lt #[v, ← mkAppM ``HAdd.hAdd #[mCast, ← wholeNumeral τ 1]])
        mkFalseElim target (← mkAppM `Vampire.Lemmas.floor_elim #[mE, h, he, hk, hlo, hhi])

/--
ALASCA's coherence normalization:

    C ∨ ⌊s⌋ = t
    ───────────
    C ∨ t = ⌊t⌋

`t` is an integer, being a floor (`integerOf`), and so its own floor:
`Vampire.Lemmas.coherence_normalization`.
-/
partial def coherenceNormalization (step : Step) : ReconstructM Expr := do
  step.underVars fun vars target => do
    let premises ← premisesOf step vars
    withInto target step.unit.clauseSize? fun into => do
      premiseCases step premises target into fun facts => do
        let h := facts[0]!
        for i in [0 : into.parts.size] do
          let some (_, l, r) := into.parts[i]!.eq? | continue
          for (t, fl, flipped) in [(l, r, false), (r, l, true)] do
            unless isFloorCast fl && fl.appArg!.appArg! == t do continue
            let some isInt ← integerOf h t | continue
            let p ← mkAppM `Vampire.Lemmas.coherence_normalization #[isInt]
            return into.inject i (← if flipped then mkEqSymm p else pure p)
        throwError "step {step.unit.number}: its conclusion has no `t = ⌊t⌋` of a `t` its \
          premise's literal{indentExpr (← inferType h)}\nsays is an integer"

/--
ALASCA's coherence:

    C ∨ isInt(j s + u)    D ∨ L[⌊k s + t⌋]
    ──────────────────────────────────────
    C ∨ D ∨ L[⌊k s + t - i (j s + u)⌋ + i (j s + u)]

for an integer `i`. `Vampire.Lemmas.coherence` at the terms the worker
recorded -- `j s + u` and `i` of the first premise, the floor rewritten of the
second -- and the literal rewritten by it where it stands.
-/
partial def coherence (step : Step) : ReconstructM Expr := do
  step.underVars fun vars target => do
    let premises ← premisesOf step vars
    let covered ← coverVars vars step.unit.boundVarSorts
    let (some w, some I) ← recordedTerms step covered 0
      | throwError "step {step.unit.number}: its first premise recorded no terms"
    let (some F, _) ← recordedTerms step covered 1
      | throwError "step {step.unit.number}: its second premise recorded no floor"
    unless isFloorCast F do
      throwError "step {step.unit.number}: what it rewrote,{indentExpr F}\nis no floor"
    let X := F.appArg!.appArg!
    let some i := (numeralValue? I).bind fun q => if q.den == 1 then some q.num else none
      | throwError "step {step.unit.number}: its multiple{indentExpr I}\nis no integer"
    let α ← inferType w
    let iE ← wholeNumeral (mkConst ``Int) i
    let hI ← (← read).numerically (← mkEq (← mkAppOptM ``Int.cast #[some α, none, some iE]) I)
    let Iw ← mkAppM ``HMul.hMul #[I, w]
    withInto target step.unit.clauseSize? fun into => do
      premiseCases step premises target into fun facts => do
        let some hw ← integerUpToSign facts[0]! w
          | throwError "step {step.unit.number}: its first premise's literal\
              {indentExpr (← inferType facts[0]!)}\nsays of no floor that it is{indentExpr w}"
        let L ← instantiateMVars (← inferType facts[1]!)
        let body ← kabstract L F
        unless body.hasLooseBVars do
          throwError "step {step.unit.number}: its second premise's literal{indentExpr L}\n\
            has no{indentExpr F}"
        let motive := Expr.lam `z α body .default
        -- The conclusion's literal is `L` with the floor rewritten: `⌊Y⌋ + i w`.
        for k in [0 : into.parts.size] do
          let z ← mkFreshExprMVar α
          unless ← withReducible (isDefEq (body.instantiate1 z) into.parts[k]!) do continue
          let new ← instantiateMVars z
          let some fl := (summands new).find? isFloorCast | continue
          let some hY ← ringEqual fl.appArg!.appArg! (← mkAppM ``HSub.hSub #[X, Iw]) | continue
          let some same ← ringEqual (← mkAppM ``HAdd.hAdd #[fl, Iw]) new | continue
          let eq ← mkEqTrans (← mkAppM `Vampire.Lemmas.coherence #[iE, hI, hw, hY]) same
          return into.inject k (← mkEqMP (← mkCongrArg motive eq) facts[1]!)
        throwError "step {step.unit.number}: its conclusion has no literal that is{indentExpr L}\n\
          with{indentExpr F}\nrewritten"


/--
The lemma of `Vampire.Lemmas` a theory axiom is, and the vampire variables its
arguments are, in order: `TheoryAxioms.cpp` numbers them itself. A rule that
adds one clause for each of several operations is told apart by the operation
its equation is of, and ALASCA's by the variant recorded.
-/
private def axiomLemma (step : Step) : ReconstructM (Name × Array UInt32) := do
  let operation : ReconstructM String := do
    let some clause := step.unit.clause?
      | throwError "a theory axiom that is no clause"
    let some l := clause.literals[0]?
      | throwError "a theory axiom with no literals"
    let some lhs := l.args[0]?
      | throwError "a theory axiom's equation with no sides"
    let some symbol := lhs.symbol?
      | throwError "a theory axiom's equation of no operation"
    return symbol.name
  let byOperation (add mul : String) : ReconstructM Name := do
    match ← operation with
    | "$sum" => return (`Vampire.Lemmas).str add
    | "$product" => return (`Vampire.Lemmas).str mul
    | op => throwError "{step.rule.name} of the operation {op}"
  let l (s : String) : Name := (`Vampire.Lemmas).str s
  match step.rule with
  | .thaCommutativity => return (← byOperation "tha_add_commutativity" "tha_mul_commutativity", #[0, 1])
  | .thaAssociativity => return (← byOperation "tha_add_associativity" "tha_mul_associativity", #[0, 1, 2])
  | .thaRightIdentity => return (← byOperation "tha_add_right_identity" "tha_mul_right_identity", #[0])
  | .thaInverseOpOpInverses => return (l "tha_inverse_op_op_inverses", #[0, 1])
  | .thaInverseOpUnit => return (l "tha_inverse_op_unit", #[0])
  | .thaNonreflex => return (l "tha_nonreflex", #[0])
  | .thaTransitivity => return (l "tha_transitivity", #[0, 1, 2])
  | .thaOrderTotality => return (l "tha_order_totality", #[0, 1])
  | .thaOrderMonotonicity => return (l "tha_order_monotonicity", #[0, 1, 2])
  | .thaOrderPlusOneDichotomy => return (l "tha_order_plus_one_dichotomy", #[0, 1])
  | .thaMinusMinusX => return (l "tha_minus_minus_x", #[0])
  | .thaTimesZero => return (l "tha_times_zero", #[0])
  | .thaDistributivity => return (l "tha_distributivity", #[0, 1, 2])
  | .thaModuloMultiply => return (l "tha_modulo_multiply", #[1, 2])
  | .thaModuloPositive => return (l "tha_modulo_positive", #[1, 2])
  | .thaModuloSmall => return (l "tha_modulo_small", #[1, 2])
  | .thaAbsEquals => return (l "tha_abs_equals", #[1])
  | .thaAbsMinusEquals => return (l "tha_abs_minus_equals", #[1])
  | .thaQuotientNonZero => return (l "tha_quotient_non_zero", #[1])
  | .thaQuotientMultiply => return (l "tha_quotient_multiply", #[1, 2])
  | .thaExtraIntegerOrdering => return (l "tha_extra_integer_ordering", #[0, 1])
  | .thaDivisibility => return (l "tha_divisibility", #[0, 1, 2, 3])
  | .thaFloorSmall => return (l "tha_floor_small", #[0])
  | .thaFloorBig => return (l "tha_floor_big", #[0])
  | .thaCeilingBig => return (l "tha_ceiling_big", #[0])
  | .thaCeilingSmall => return (l "tha_ceiling_small", #[0])
  | .thaAlasca =>
    match step.unit.variant with
    | 0 => return (l "tha_alasca_0", #[0, 1, 2])
    | 1 => return (l "tha_alasca_1", #[0, 1])
    | 2 => return (l "tha_alasca_2", #[0, 1, 2])
    | 3 => return (l "tha_alasca_3", #[0, 1, 2])
    | 4 => return (l "tha_alasca_4", #[0, 1, 2])
    | v => throwError "tha_alasca has no variant {v}"
  | rule => throwError "{rule.name} is no theory axiom of vampire's arithmetic"

/--
A theory axiom: its lemma at the clause's variables, each disjunct the literal
the axiom built it as, where the worker recorded that literal went. Vampire
shares an equation with its sides either way round, so a disjunct is the
conclusion's literal or it turned round, which the two say; the lemma is
stated over the classes the numbers are instances of, and the literal with the
instances replay reads it with, so the two are one up to those instances.
-/
def theoryAxiom (step : Step) : ReconstructM Expr := do
  let (lemma_, variables) ← axiomLemma step
  let introduced := step.unit.introduced
  step.underVars fun vars target => do
    let args ← variables.mapM fun v => do
      let some x := vars[v]?
        | throwError "{step.rule.name}'s clause does not bind X{v}"
      return x
    let proof ← mkAppM lemma_ args
    let stated ← instantiateMVars (← inferType proof)
    let disjuncts ← countedParts ``Or stated introduced.size
    let sameUpToInstances (a b : Expr) : ReconstructM Bool :=
      withTransparency .instances (isDefEq a b)
    step.withInto target fun into =>
      elimGiven disjuncts (motive? := some target) (fun i h => do
        let some k := introduced[i]?
          | throwError "{step.rule.name} built no literal {i}"
        let some part := into.parts[k]?
          | throwError "{step.rule.name}'s clause has no literal {k}"
        let said ← instantiateMVars (← inferType h)
        if ← sameUpToInstances said part then
          return into.inject k (← mkExpectedTypeHint h part)
        let some turned ← flipEquality h
          | throwError "{step.rule.name}'s literal{indentExpr said}\nis not{indentExpr part}"
        unless ← sameUpToInstances (← instantiateMVars (← inferType turned)) part do
          throwError "{step.rule.name}'s literal{indentExpr said}\nis not{indentExpr part}"
        return into.inject k (← mkExpectedTypeHint turned part)) proof

/--
ALASCA's Fourier-Motzkin:

    j s₁ + t₁ >₁ 0    -k s₂ + t₂ >₂ 0
    ─────────────────────────────────
    k t₁ + j t₂ > 0    (∨ -k s₂ + t₂ = 0 where both are ≥)

at the unifier, which makes `s₁` and `s₂` one up to arithmetic; at the
integers the resolvent is `k t₁ + j t₂ - 1 > 0`. `Vampire.Lemmas.fm_*` at the
recorded `j` and `k`, with `t₁` and `t₂` what is left of each premise's term
once its atom is taken out, related to the premises and the literals the
inference built by ring arithmetic alone.
-/
partial def fourierMotzkin (step : Step) : ReconstructM Expr := do
  step.underVars fun vars target => do
    let premises ← premisesOf step vars
    let covered ← coverVars vars step.unit.boundVarSorts
    let (some s₁, some j) ← recordedTerms step covered 0
      | throwError "step {step.unit.number}: its first premise recorded no atom and coefficient"
    let (some s₂, some k) ← recordedTerms step covered 1
      | throwError "step {step.unit.number}: its second premise recorded no atom and coefficient"
    let α ← inferType s₁
    let integral := α.isConstOf ``Int
    let introduced := step.unit.introduced
    let ring (a b : Expr) : ReconstructM Expr := do
      let some h ← ringEqual a b
        | throwError "step {step.unit.number}:{indentExpr a}\nand{indentExpr b}\n\
            are not one up to the identities of a ring"
      return h
    let zero ← wholeNumeral α 0
    let comparison (h : Expr) : ReconstructM (Bool × Expr) := do
      let stated ← instantiateMVars (← inferType h)
      if stated.isAppOfArity ``LT.lt 4 then return (true, stated.appArg!)
      if stated.isAppOfArity ``LE.le 4 then return (false, stated.appArg!)
      throwError "step {step.unit.number}: a premise's literal{indentExpr stated}\n\
        is no comparison with zero"
    -- `h`, a comparison with `0` of `e`, restated as one of `e'`, equal to it.
    let restated (h e e' : Expr) (strict : Bool) : ReconstructM Expr := do
      let eq ← ring e e'
      let op := if strict then ``LT.lt else ``LE.le
      let motive ← withLocalDeclD `x α fun x => do mkLambdaFVars #[x] (← mkAppM op #[zero, x])
      mkEqMP (← mkCongrArg motive eq) h
    -- `h : 0 < e` as the literal `part` states it, `0 < e'` for `e'` equal to `e`.
    let asPart (h part : Expr) : ReconstructM Expr := do
      let stated ← instantiateMVars (← inferType h)
      if part.isAppOfArity ``LT.lt 4 && stated.isAppOfArity ``LT.lt 4 then
        let motive ← withLocalDeclD `x α fun x => do mkLambdaFVars #[x] (← mkAppM ``LT.lt #[zero, x])
        return ← mkEqMP (← mkCongrArg motive (← ring stated.appArg! part.appArg!)) h
      -- `e = 0`, either way round as vampire shares it.
      let some (_, l, _) := stated.eq?
        | throwError "step {step.unit.number}: {indentExpr stated}\nis not{indentExpr part}"
      let some (_, pl, pr) := part.eq?
        | throwError "step {step.unit.number}: {indentExpr stated}\nis not{indentExpr part}"
      let (side, flipped) := if pr == zero then (pl, false) else (pr, true)
      let motive ← withLocalDeclD `x α fun x => do
        mkLambdaFVars #[x] (← if flipped then mkEq zero x else mkEq x zero)
      let h ← if flipped then mkEqSymm h else pure h
      mkEqMP (← mkCongrArg motive (← ring l side)) h
    let place (i : Nat) (into : Into) (h : Expr) : ReconstructM Expr := do
      let some k := introduced[i]?
        | throwError "step {step.unit.number} built no literal {i}"
      let some part := into.parts[k]?
        | throwError "step {step.unit.number}'s clause has no literal {k}"
      return into.inject k (← asPart h part)
    withInto target step.unit.clauseSize? fun into => do
      premiseCases step premises target into fun facts => do
        let (strict₁, e₁) ← comparison facts[0]!
        let (strict₂, e₂) ← comparison facts[1]!
        let js ← mkAppM ``HMul.hMul #[j, s₁]
        let ks ← mkAppM ``HMul.hMul #[k, s₂]
        let a ← mkAppM ``HSub.hSub #[e₁, js]
        let b ← mkAppM ``HAdd.hAdd #[e₂, ks]
        -- The second premise's term with the first's atom: one up to the unifier.
        let ks₁ ← mkAppM ``HMul.hMul #[k, s₁]
        let h₁ ← restated facts[0]! e₁ (← mkAppM ``HAdd.hAdd #[js, a]) strict₁
        let h₂ ← restated facts[1]! e₂ (← mkAppM ``HAdd.hAdd #[← mkAppM ``Neg.neg #[ks₁], b]) strict₂
        let hj ← positive j
        let hk ← positive k
        let l (n : String) : Name := (`Vampire.Lemmas).str n
        if integral then
          unless strict₁ && strict₂ do
            throwError "step {step.unit.number}: integer Fourier-Motzkin of a comparison not strict"
          return ← place 0 into (← mkAppM (l "fm_int") #[hj, hk, h₁, h₂])
        match strict₁, strict₂ with
        | true, true => place 0 into (← mkAppM (l "fm_gt_gt") #[hj, hk, h₁, h₂])
        | true, false => place 0 into (← mkAppM (l "fm_gt_ge") #[hj, hk, h₁, h₂])
        | false, true => place 0 into (← mkAppM (l "fm_ge_gt") #[hj, hk, h₁, h₂])
        | false, false =>
          let joined ← mkAppM (l "fm_ge_ge") #[hj, hk, h₁, h₂]
          let joinedType ← whnfR (← instantiateMVars (← inferType joined))
          let onSum ← withLocalDeclD `h joinedType.appFn!.appArg! fun h => do
            mkLambdaFVars #[h] (← place 0 into h)
          let onEq ← withLocalDeclD `h joinedType.appArg! fun h => do
            mkLambdaFVars #[h] (← place 1 into h)
          mkAppOptM ``Or.elim #[none, none, some target, some joined, some onSum, some onEq]

/--
ALASCA's term factoring: `k₁ s₁ + k₂ s₂ + t ⋈ 0` at the unifier, which makes
`s₁` and `s₂` one up to arithmetic, as `(k₁ + k₂) s₁ + t ⋈ 0` -- the literal
rewritten where it stands, which the worker recorded, and one with the
premise's up to the identities of a ring; every other literal carried.
-/
def termFactoring (step : Step) : ReconstructM Expr := do
  let ⟨parent, proof, stated⟩ ← step.onlyPremise
  let use ← step.useAt 0
  step.underVars fun kept target => do
    let vars ← coverVars kept step.unit.boundVarSorts
    let (premiseAt, premiseType) ← instantiateAt parent use vars proof stated
    let (some placement, some rewritten) := (step.placedAt 0, step.rewrittenAt 0)
      | throwError "step {step.unit.number} recorded no placement of its premise"
    let byRing (equal : Array (Expr × Expr × Expr)) (h wanted : Expr) : ReconstructM Expr := do
      let said ← instantiateMVars (← inferType h)
      let some same ← equalModuloRing equal said wanted
        | throwError "step {step.unit.number}:{indentExpr said}\nis not{indentExpr wanted}\n\
            up to the identities of a ring"
      mkEqMP same h
    step.withInto target fun into => do
      -- What the unifier deferred is a literal of the conclusion, or equal.
      if step.unit.constraints.isEmpty then
        return ← carryRewritten premiseType target premiseAt into placement rewritten
          parent.clauseSize? (byRing #[])
      underConstraints step into fun equal =>
        carryRewritten premiseType target premiseAt into placement rewritten
          parent.clauseSize? (byRing equal)

/--
Gaussian variable elimination: a clause with a disequality `l ≠ r` that can be
solved for a variable `x`, as `x = t` with `t` free of `x`, is the clause at
`x := t` without it. At that instance `l` and `r` are one up to the identities
of a ring -- `t` is `l = r` solved, dividing by nothing but numerals -- so the
disequality is false, and every other literal is carried.
-/
def gaussianElimination (step : Step) : ReconstructM Expr := do
  let ⟨parent, proof, stated⟩ ← step.onlyPremise
  let use ← step.useAt 0
  let some solved := use.literal
    | throwError "step {step.unit.number}: Gaussian elimination recorded no literal it solved"
  step.underVars fun kept target => do
    let vars ← coverVars kept step.unit.boundVarSorts
    let (premiseAt, premiseType) ← instantiateAt parent use vars proof stated
    step.withInto target fun into =>
      carryPast premiseType target premiseAt into (· == solved.toNat)
        (placed := step.placedAt 0) (sourceCount := parent.clauseSize?)
        (fun _ h => do
          let denied ← instantiateMVars (← inferType h)
          let some equation := denied.not?
            | throwError "step {step.unit.number}: the literal it solved,{indentExpr denied}\n\
                is no disequality"
          let some (_, l, r) := equation.eq?
            | throwError "step {step.unit.number}: the literal it solved,{indentExpr denied}\n\
                is no disequality"
          let some same ← equalModuloRing #[] l r
            | throwError "step {step.unit.number}: at the instance it made,{indentExpr l}\n\
                and{indentExpr r}\nare not one up to the identities of a ring"
          mkAppOptM ``absurd #[some equation, some target, some same, some h])

/--
`h`, one of the literals a lemma concludes, at the literal `k` of `into` the
worker recorded the inference built it as: the two one up to congruence and
the identities of a ring, an equation's sides either way round, which the two
say.
-/
private def placeByRing (step : Step) (into : Into) (k : Nat) (h : Expr) : ReconstructM Expr := do
  let some part := into.parts[k]?
    | throwError "step {step.unit.number}'s clause has no literal {k}"
  let said ← instantiateMVars (← inferType h)
  if let some same ← equalModuloRing #[] said part then
    return into.inject k (← mkEqMP same h)
  if let some turned ← flipEquality h then
    if let some same ← equalModuloRing #[] (← instantiateMVars (← inferType turned)) part then
      return into.inject k (← mkEqMP same turned)
  throwError "step {step.unit.number}:{indentExpr said}\nis not literal {k},{indentExpr part}\n\
    up to the identities of a ring"

/--
ALASCA's floor bounds: from a literal whose selected atom is a floor, the
bounds a floor has, in one of six shapes (`FloorBounds.hpp`), which the worker
recorded with the floor `⌊s⌋`, the premise's other term `t`, the floor's
coefficient `k`, and the literals built. Each shape is `Vampire.Lemmas.fb_*`,
its premise related to the premise's literal by ring arithmetic.
-/
def floorBounds (step : Step) : ReconstructM Expr := do
  let ⟨parent, proof, stated⟩ ← step.onlyPremise
  let use ← step.useAt 0
  let some acted := use.literal
    | throwError "step {step.unit.number}: floor bounds recorded no literal it acted on"
  let variant := step.unit.variant
  let introduced := step.unit.introduced
  step.underVars fun kept target => do
    let vars ← coverVars kept step.unit.boundVarSorts
    let (premiseAt, premiseType) ← instantiateAt parent use vars proof stated
    let (some floor, some t) ← recordedTerms step vars 0
      | throwError "step {step.unit.number}: floor bounds recorded no floor and term"
    let some factor := use.factor
      | throwError "step {step.unit.number}: floor bounds recorded no coefficient"
    let k ← termAt parent use vars factor
    unless floor.isAppOfArity ``Int.cast 3 && floor.appArg!.isAppOfArity `Int.floor 5 do
      throwError "step {step.unit.number}: the atom{indentExpr floor}\nis no floor"
    let α ← inferType floor
    let zero ← wholeNumeral α 0
    let ring (a b : Expr) : ReconstructM Expr := do
      let some h ← ringEqual a b
        | throwError "step {step.unit.number}:{indentExpr a}\nand{indentExpr b}\n\
            are not one up to the identities of a ring"
      return h
    let l (n : String) : Name := (`Vampire.Lemmas).str n
    let neg (e : Expr) : ReconstructM Expr := mkAppM ``Neg.neg #[e]
    step.withInto target fun into =>
      carryPast premiseType target premiseAt into (· == acted.toNat)
        (placed := step.placedAt 0) (sourceCount := parent.clauseSize?)
        (fun _ h => do
          let said ← instantiateMVars (← inferType h)
          let concluded ← match variant with
            | 0 | 1 =>
              -- `⌊s⌋ = t` from `k (⌊s⌋ - t) = 0`, as the clause states it.
              let some (_, a, b) := said.eq?
                | throwError "step {step.unit.number}: its premise{indentExpr said}\nis no equation"
              let (e, h) ← if a == zero then pure (b, ← mkEqSymm h) else pure (a, h)
              let he ← ring e (← mkAppM ``HMul.hMul #[k, ← mkAppM ``HSub.hSub #[floor, t]])
              let hk ← (← read).numerically (← mkAppM ``Ne #[k, zero])
              let equal ← mkAppM `Vampire.Lemmas.eq_of_scaled #[hk, h, he]
              mkAppM (l (if variant == 0 then "fb_0" else "fb_1")) #[equal]
            | 2 | 3 | 4 | 5 =>
              let e := said.appArg!
              let atom ← if variant ≤ 3 then pure floor else neg floor
              let he ← ring e (← mkAppM ``HMul.hMul #[k, ← mkAppM ``HAdd.hAdd #[atom, t]])
              let hk ← positive k
              mkAppM (l s!"fb_{variant}") #[hk, h, he]
            | v => throwError "floor bounds has no shape {v}"
          let concludedType ← whnfR (← instantiateMVars (← inferType concluded))
          let some first := introduced[0]?
            | throwError "step {step.unit.number}: floor bounds recorded no literal it built"
          if introduced.size == 1 then
            return ← placeByRing step into first concluded
          let some second := introduced[1]?
            | throwError "step {step.unit.number}: floor bounds recorded one literal of two"
          let onLeft ← withLocalDeclD `h concludedType.appFn!.appArg! fun h => do
            mkLambdaFVars #[h] (← placeByRing step into first h)
          let onRight ← withLocalDeclD `h concludedType.appArg! fun h => do
            mkLambdaFVars #[h] (← placeByRing step into second h)
          mkAppOptM ``Or.elim #[none, none, some target, some concluded, some onLeft, some onRight])

/--
ALASCA's equality factoring:

    C ∨ s₁ ≈ t₁ ∨ s₂ ≈ t₂
    ─────────────────────────
    (C ∨ s₁ ≈ t₁ ∨ t₁ ≉ t₂)σ

at the unifier, which makes `s₁` and `s₂` one up to arithmetic. Where `s₂ ≈ t₂`
holds, either `t₁` and `t₂` differ, which is the literal the step put in its
place, or `s₁ = s₂ = t₂ = t₁`, which is the first equation, carried. An
arithmetic equation `k s + … = 0` is `s = t` by `eq_of_scaled` at the
recorded coefficient, and back by `eq_zero_of_scaled`.
-/
def eqFactoring (step : Step) : ReconstructM Expr := do
  let ⟨parent, proof, stated⟩ ← step.onlyPremise
  let uses := step.unit.premiseUses.filter (·.premise == parent.number)
  let #[first, second] := uses
    | throwError "step {step.unit.number}: equality factoring recorded {uses.size} uses, \
        expected both equations"
  let (some carried, some replaced) := (first.literal, second.literal)
    | throwError "step {step.unit.number}: equality factoring recorded no equations"
  let some built := step.unit.introduced[0]?
    | throwError "step {step.unit.number}: equality factoring recorded no literal it built"
  step.underVars fun kept target => do
    let vars ← coverVars kept step.unit.boundVarSorts
    let (premiseAt, premiseType) ← instantiateAt parent first vars proof stated
    let sides (use : PremiseUse) : ReconstructM (Expr × Expr × Option Expr) := do
      let (some s, some t) := (use.term, use.other)
        | throwError "step {step.unit.number}: an equation factored recorded no sides"
      return (← termAt parent use vars s, ← termAt parent use vars t,
        ← use.factor.mapM (termAt parent use vars ·))
    let (s₁, t₁, k₁) ← sides first
    let (s₂, t₂, k₂) ← sides second
    let α ← inferType s₁
    let zero ← wholeNumeral α 0
    let ring (a b : Expr) : ReconstructM Expr := do
      let some h ← ringEqual a b
        | throwError "step {step.unit.number}:{indentExpr a}\nand{indentExpr b}\n\
            are not one up to the identities of a ring"
      return h
    -- `s = t` from the equation's literal, and the literal from `s = t`.
    let solved (h : Expr) (s t : Expr) (k? : Option Expr) : ReconstructM Expr := do
      let said ← instantiateMVars (← inferType h)
      let some (_, a, b) := said.eq?
        | throwError "step {step.unit.number}: an equation factored{indentExpr said}\nis none"
      match k? with
      | some k =>
        let (e, h) ← if a == zero then pure (b, ← mkEqSymm h) else pure (a, h)
        let he ← ring e (← mkAppM ``HMul.hMul #[k, ← mkAppM ``HSub.hSub #[s, t]])
        let hk ← (← read).numerically (← mkAppM ``Ne #[k, zero])
        mkAppM `Vampire.Lemmas.eq_of_scaled #[hk, h, he]
      | none =>
        if a == s && b == t then pure h
        else if a == t && b == s then mkEqSymm h
        else throwError "step {step.unit.number}:{indentExpr said}\nis not{indentExpr s}\n= {t}"
    let asLiteral (statement : Expr) (eq : Expr) (s t : Expr) (k? : Option Expr) :
        ReconstructM Expr := do
      let some (_, a, b) := statement.eq?
        | throwError "step {step.unit.number}:{indentExpr statement}\nis no equation"
      match k? with
      | some k =>
        let (e, flipped) := if a == zero then (b, true) else (a, false)
        let he ← ring e (← mkAppM ``HMul.hMul #[k, ← mkAppM ``HSub.hSub #[s, t]])
        let h ← mkAppM `Vampire.Lemmas.eq_zero_of_scaled #[he, eq]
        let h ← if flipped then mkEqSymm h else pure h
        -- The lemma's zero is its own class's; the literal's is the type's.
        unless ← withNewMCtxDepth <| withTransparency .instances <|
            isDefEq (← instantiateMVars (← inferType h)) statement do
          throwError "step {step.unit.number}:{indentExpr (← inferType h)}\nis not\
            {indentExpr statement}"
        mkExpectedTypeHint h statement
      | none => if a == s then pure eq else mkEqSymm eq
    let some placement := step.placedAt 0
      | throwError "step {step.unit.number} recorded no placement of its premise"
    let premiseParts ← clauseLiterals premiseType parent.clauseSize?
    step.withInto target fun into =>
      carryPast premiseType target premiseAt into (· == replaced.toNat)
        (placed := some placement) (sourceCount := parent.clauseSize?) (fun _ h₂ => do
          let e₂ ← solved h₂ s₂ t₂ k₂
          let apart ← mkEq t₁ t₂
          let differ ← withLocalDeclD `h (mkNot apart) fun hne => do
            let some part := into.parts[built]?
              | throwError "step {step.unit.number}'s clause has no literal {built}"
            let hne ← if (← instantiateMVars (← inferType hne)) == part then pure hne else
              let some turned ← flipEquality hne
                | throwError "step {step.unit.number}: its disequality is not{indentExpr part}"
              pure turned
            unless (← instantiateMVars (← inferType hne)) == part do
              throwError "step {step.unit.number}: its disequality is not{indentExpr part}"
            mkLambdaFVars #[hne] (into.inject built hne)
          let agree ← withLocalDeclD `h apart fun he => do
            -- `s₁ = s₂ = t₂ = t₁`.
            let e₁ ← mkEqTrans (← ring s₁ s₂) (← mkEqTrans e₂ (← mkEqSymm he))
            let some statement := premiseParts[carried.toNat]?
              | throwError "step {step.unit.number}: its premise has no literal {carried}"
            let literal ← asLiteral statement e₁ s₁ t₁ k₁
            mkLambdaFVars #[he] (← into.placeAt (some placement) carried.toNat literal)
          mkAppM ``Classical.byCases #[agree, differ])

/--
ALASCA's literal factoring:

    C ∨ j s₁ + t₁ >₁ 0 ∨ k s₂ + t₂ >₂ 0
    ─────────────────────────────────────────────
    (C ∨ k s₂ + t₂ >₂ 0 ∨ k t₁ - j t₂ >₃ 0)σ

at the unifier, which makes `s₁` and `s₂` one up to arithmetic. Where the
first holds, the second either does, and is carried, or does not, and the pivot
is `Vampire.Lemmas.lf_*` at the recorded coefficients, equal to it by ring
arithmetic.
-/
def literalFactoring (step : Step) : ReconstructM Expr := do
  let ⟨parent, proof, stated⟩ ← step.onlyPremise
  let uses := step.unit.premiseUses.filter (·.premise == parent.number)
  let #[first, second] := uses
    | throwError "step {step.unit.number}: literal factoring recorded {uses.size} uses, \
        expected both comparisons"
  let (some pivoted, some other) := (first.literal, second.literal)
    | throwError "step {step.unit.number}: literal factoring recorded no comparisons"
  let (some jTerm, some kTerm) := (first.factor, second.factor)
    | throwError "step {step.unit.number}: literal factoring recorded no coefficients"
  let some built := step.unit.introduced[0]?
    | throwError "step {step.unit.number}: literal factoring recorded no pivot"
  step.underVars fun kept target => do
    let vars ← coverVars kept step.unit.boundVarSorts
    let (premiseAt, premiseType) ← instantiateAt parent first vars proof stated
    let j ← termAt parent first vars jTerm
    let k ← termAt parent second vars kTerm
    let some placement := step.placedAt 0
      | throwError "step {step.unit.number} recorded no placement of its premise"
    let premiseParts ← clauseLiterals premiseType parent.clauseSize?
    let some otherStatement := premiseParts[other.toNat]?
      | throwError "step {step.unit.number}: its premise has no literal {other}"
    let comparison (e : Expr) : ReconstructM (Bool × Expr) := do
      if e.isAppOfArity ``LT.lt 4 then return (true, e.appArg!)
      if e.isAppOfArity ``LE.le 4 then return (false, e.appArg!)
      throwError "step {step.unit.number}: {indentExpr e}\nis no comparison with zero"
    step.withInto target fun into =>
      carryPast premiseType target premiseAt into (· == pivoted.toNat)
        (placed := some placement) (sourceCount := parent.clauseSize?) (fun _ h₁ => do
          let (strict₁, _) ← comparison (← instantiateMVars (← inferType h₁))
          let (strict₂, _) ← comparison otherStatement
          let holds ← withLocalDeclD `h otherStatement fun h₂ => do
            mkLambdaFVars #[h₂] (← into.placeAt (some placement) other.toNat h₂)
          let fails ← withLocalDeclD `h (mkNot otherStatement) fun h₂ => do
            let lemma_ := match strict₁, strict₂ with
              | true, true => "lf_gt_gt" | true, false => "lf_gt_ge"
              | false, true => "lf_ge_gt" | false, false => "lf_ge_ge"
            let pivot ← mkAppM ((`Vampire.Lemmas).str lemma_)
              #[← positive j, ← positive k, h₁, h₂]
            mkLambdaFVars #[h₂] (← placeByRing step into built pivot)
          mkAppM ``Classical.byCases #[holds, fails])

/--
A premise with terms abstracted into fresh variables, `x ≠ t ∨ C[x]` of `C[t]`:
theory flattening, and ALASCA's abstraction. Either some `x` is not its `t`,
and that disequality is a literal of the conclusion, or each is, and then each
literal the step rewrote is the premise's with `x := t` -- the disequalities
taken in the order of their variables, a term mentioning only variables made
after it -- which the equations rewrite back; every other literal is carried.
-/
partial def abstraction (step : Step) : ReconstructM Expr := do
  let ⟨parent, proof, stated⟩ ← step.onlyPremise
  let introduced := step.unit.introduced
  step.underVars fun kept target => do
    let (_, args) ← premiseVars parent (← coverVars kept step.unit.boundVarSorts)
    let premiseType ← instantiateForall stated args
    let (some placement, some rewritten) := (step.placedAt 0, step.rewrittenAt 0)
      | throwError "step {step.unit.number} recorded no placement of its premise"
    let bound := kept.toList.map (·.2)
    step.withInto target fun into => do
      -- Each disequality, as the variable and the term it abstracts.
      let abstractions ← introduced.mapM fun k => do
        let some part := into.parts[k]?
          | throwError "step {step.unit.number}'s clause has no literal {k}"
        let some equation := part.not?
          | throwError "step {step.unit.number}: its abstraction{indentExpr part}\nis no disequality"
        let some (_, a, b) := equation.eq?
          | throwError "step {step.unit.number}: its abstraction{indentExpr part}\nis no disequality"
        let isVariable (e : Expr) : Bool := e.isFVar && bound.contains e
        if isVariable a && !isVariable b then return (k, a, b, equation, false)
        if isVariable b && !isVariable a then return (k, b, a, equation, true)
        throwError "step {step.unit.number}: its abstraction{indentExpr part}\n\
          abstracts no term into one of its variables"
      -- `wanted` from `h`, what it is at `x := t` for each abstraction in turn.
      let undone (equations : Array (Expr × Expr × Expr)) (h wanted : Expr) :
          ReconstructM Expr := do
        let mut stages := #[← instantiateMVars wanted]
        for (x, t, _) in equations do
          stages := stages.push (stages.back!.replaceFVar x t)
        let said ← instantiateMVars (← inferType h)
        unless stages.back! == said do
          throwError "step {step.unit.number}:{indentExpr wanted}\nis not{indentExpr said}\n\
            with its abstractions undone, but{indentExpr stages.back!}"
        let mut proof := h
        for i in (List.range equations.size).reverse do
          let (x, _, e) := equations[i]!
          let motive ← withLocalDeclD `z (← inferType x) fun z => do
            mkLambdaFVars #[z] (stages[i]!.replaceFVar x z)
          proof ← mkEqMPR (← mkCongrArg motive e) proof
        return proof
      let rec cases (i : Nat) (equations : Array (Expr × Expr × Expr)) : ReconstructM Expr := do
        let some (k, x, t, equation, flipped) := abstractions[i]?
          | return ← carryRewritten premiseType target (mkAppN proof args) into placement
              rewritten parent.clauseSize? (undone equations)
        let holds ← withLocalDeclD `h equation fun h => do
          let e ← if flipped then mkEqSymm h else pure h
          mkLambdaFVars #[h] (← cases (i + 1) (equations.push (x, t, e)))
        let fails ← withLocalDeclD `h (mkNot equation) fun h => do
          mkLambdaFVars #[h] (into.inject k h)
        mkAppM ``Classical.byCases #[holds, fails]
      cases 0 #[]

end Vampire.Reconstruct.Arithmetic
