import Lean
import Mathlib.Tactic.Linarith
import Mathlib.Tactic.Ring
import VampireReplay.Abstract

/-!
What proves an arithmetic step of vampire's.

Kept apart from the replay because the replay is precompiled and imports no
Mathlib, while these steps are proved with Mathlib's `linarith`, `ring` and
lemmas. Replay is handed `contradiction`, `rearranged` and `cancelling` rather
than importing them.
-/

namespace Vampire.Arith

open Lean Meta Mathlib.Tactic

/--
A lemma applied to whatever makes it true here: its leading implicit and
instance arguments, settled by `accepts`, which is given the rest of the
lemma's statement and unifies it with what is wanted. This finds the arguments
by unification rather than by counting the lemma's binders.
-/
private def instantiated (name : Name) (accepts : Expr → MetaM Bool) :
    MetaM (Option Expr) := do
  let e ← mkConstWithFreshMVarLevels name
  let type ← inferType e
  -- The binders up to the first explicit one, which is where the lemma's own
  -- hypotheses start.
  let rec leading : Expr → Nat
    | .forallE _ _ body bi => if bi.isExplicit then 0 else leading body + 1
    | _ => 0
  let (mvars, binders, stated) ← forallMetaBoundedTelescope type (leading type)
  unless ← accepts stated do return none
  -- Unifying settles what the lemma is stated of but not what it is stated
  -- over: an instance argument is found rather than matched.
  for (mvar, binder) in mvars.zip binders do
    if binder == .instImplicit && !(← mvar.mvarId!.isAssigned) then
      match ← trySynthInstance (← mvar.mvarId!.getType) with
      | .some inst => unless ← isDefEq mvar inst do return none
      | _ => return none
  let stated ← instantiateMVars (mkAppN e mvars)
  -- Nothing left unsettled. A term with a hole in it is one the kernel will
  -- not take, and the slow way round is there to be taken instead.
  if stated.hasExprMVar then return none
  return some stated

/--
`a ↔ b`, where the two are one comparison with its terms moved across it.

What theory normalisation does to a literal is to gather its terms on one side:
`-14 x + -77 y < 64` for `0 < 64 + 14 x + 77 y`. The two say the same because
the difference between the sides is the same, which is a fact about a ring and
not about an order, so `ring` settles it -- where asking a decision procedure
asks twice, once for each way round the equivalence goes, and asks it to search
for a combination when there is nothing to search for.
-/
def rearranged (a b : Expr) : MetaM (Option Expr) := do
  -- The lemma whose statement, once its implicit arguments are settled, is
  -- `want` itself.
  let stating (name : Name) (want : Expr) : MetaM (Option Expr) :=
    instantiated name (isDefEq · want)
  -- A comparison read as `0 ≤ d` or `0 < d`, with what says the two are the
  -- same. A denied comparison is a comparison the other way round, which is
  -- the shape normalisation leaves and is a lemma rather than a question.
  let below (e : Expr) : MetaM (Option (Bool × Expr × Expr × Expr)) := do
    let parsed : Option (Bool × Expr × Expr × Option Name) :=
      match e.getAppFnArgs with
      | (``LE.le, #[_, _, x, y]) => some (true, y, x, none)
      | (``LT.lt, #[_, _, x, y]) => some (false, y, x, none)
      | (``Not, #[p]) =>
        match p.getAppFnArgs with
        | (``LT.lt, #[_, _, x, y]) => some (true, x, y, some ``not_lt)
        | (``LE.le, #[_, _, x, y]) => some (false, x, y, some ``not_le)
        | _ => none
      | _ => none
    let some (nonneg, greater, lesser, denied) := parsed | return none
    let difference ← mkAppM ``HSub.hSub #[greater, lesser]
    let α ← inferType difference
    let zero ← mkAppOptM ``OfNat.ofNat #[some α, some (mkRawNatLit 0), none]
    let named (l r : Expr) : MetaM Expr :=
      mkAppM (if nonneg then ``LE.le else ``LT.lt) #[l, r]
    let stated ← named zero difference
    let some core ← stating (if nonneg then ``sub_nonneg else ``sub_pos)
        (← mkAppM ``Iff #[stated, ← named lesser greater])
      | return none
    match denied with
    | none => return some (nonneg, difference, stated, core)
    | some name =>
      let some bridge ← stating name
          (← mkAppM ``Iff #[e, ← named lesser greater])
        | return none
      return some (nonneg, difference, stated,
        ← mkAppM ``Iff.trans #[core, ← mkAppM ``Iff.symm #[bridge]])
  let some (nonnegA, dA, statedA, saysA) ← below a | return none
  let some (nonnegB, dB, _, saysB) ← below b | return none
  unless nonnegA == nonnegB do return none
  let same ← mkFreshExprMVar (← mkEq dA dB)
  -- A failed attempt is rolled back, so that what it assigned on the way does
  -- not outlive it.
  try
    commitIfNoEx (AtomM.run .reducible (Mathlib.Tactic.Ring.proveEq same.mvarId!))
  catch _ => return none
  -- The two differ only where the difference stands, so one is the other with
  -- it replaced, and `same` says the replacement holds.
  let α ← inferType dA
  let motive := Expr.lam `t α (statedA.abstract #[dA]) .default
  let between ← mkAppM ``iff_of_eq #[← mkAppM ``congrArg #[motive, same]]
  let answer ← instantiateMVars (← mkAppM ``Iff.trans
    #[← mkAppM ``Iff.symm #[saysA], ← mkAppM ``Iff.trans #[between, saysB]])
  if answer.hasExprMVar then return none
  return some answer

/--
`goal` by `linarith` from `facts`, each disequality among them taken as the two
cases it is first.

`linarith` reads no disequality: of `a ≠ b` it makes nothing, and a fact like
`¬1 = 1 / 1` that evaluating a literal leaves behind is a contradiction it
does not see. Over numbers that are ordered, `a ≠ b` is `a < b` or `b < a`,
each of which it reads.
-/
private partial def linarithSplitting (facts : List Expr) (goal : Expr)
    (cfg : Mathlib.Tactic.Linarith.LinarithConfig := {}) : MetaM Expr := do
  let disequality (fact : Expr) : MetaM (Option (Expr × Expr × Expr)) := do
    let stated ← instantiateMVars (← inferType fact)
    let some (τ, a, b) := stated.not? >>= Expr.eq? | return none
    unless (τ.isConstOf ``Int || τ.isConstOf ``Rat || τ.isConstOf `Real) do
      return none
    return some (τ, a, b)
  let found ← facts.findSomeM? fun fact => do
    return (← disequality fact).map (fact, ·)
  let some (fact, _, a, b) := found
    | let proof ← mkFreshExprMVar goal
      Mathlib.Tactic.Linarith.linarith true facts cfg proof.mvarId!
      return ← instantiateMVars proof
  let rest := facts.erase fact
  let below ← mkAppM ``LT.lt #[a, b]
  let above ← mkAppM ``LT.lt #[b, a]
  let whenBelow ← withLocalDeclD `h below fun h => do
    mkLambdaFVars #[h] (← linarithSplitting (rest ++ [h]) goal cfg)
  let whenAbove ← withLocalDeclD `h above fun h => do
    mkLambdaFVars #[h] (← linarithSplitting (rest ++ [h]) goal cfg)
  mkAppOptM ``Or.elim #[some below, some above, some goal,
    some (← mkAppM ``lt_or_gt_of_ne #[fact]), some whenBelow, some whenAbove]

/-- `False` or `claim`, asked of the facts as they stand. -/
private def askAbout (facts : Array Expr) (claim : Option Expr) : MetaM Expr := do
  -- `omega` decides the integers and the naturals and nothing else, so asking
  -- it about the rationals or the reals is asking a question whose answer is
  -- known: it cannot say. What is asked here is asked once per literal of
  -- every clause of every arithmetic step, so a procedure that cannot answer
  -- is not asked.
  let integral (e : Expr) : Bool :=
    (e.find? fun s => s.isConstOf ``Int || s.isConstOf ``Nat).isSome
  let discrete := claim.any integral
    || (← facts.anyM fun f => return integral (← instantiateMVars (← inferType f)))
  -- `omega` proves `False` and nothing else. Asked for anything else it
  -- proves `False` anyway and assigns that -- a proof of `False` standing
  -- where the claim should be, which nothing but the kernel would catch -- so
  -- a claim is turned into a fact here and refuted instead.
  let byOmega : MetaM Expr := do
    let refute (facts : Array Expr) : MetaM Expr := do
      let goal ← mkFreshExprMVar (mkConst ``False)
      Lean.Elab.Tactic.Omega.omega facts.toList goal.mvarId!
      instantiateMVars goal
    match claim with
    | none => refute facts
    | some c =>
      let refuted ← withLocalDeclD `h (mkApp (mkConst ``Not) c) fun h => do
        mkLambdaFVars #[h] (← refute (facts.push h))
      mkAppM ``Classical.byContradiction #[refuted]
  -- `linarith` proves a comparison outright, which is what a theory axiom
  -- like commutativity states.
  let byLinarith : MetaM Expr :=
    linarithSplitting facts.toList (claim.getD (mkConst ``False))
  -- `nlinarith` also multiplies facts together, which is what a fact about
  -- products needs -- a theory axiom saying two negatives multiply to a
  -- positive -- and costs far more; so it is asked only where some product is
  -- of two terms neither of which is a number, and after `linarith`.
  let product (e : Expr) : Bool := (e.find? fun t =>
    match t.getAppFnArgs with
    | (``HMul.hMul, #[_, _, _, _, a, b]) =>
      a.int?.isNone && b.int?.isNone
    | _ => false).isSome
  let nonlinear := claim.any product
    || (← facts.anyM fun f => return product (← instantiateMVars (← inferType f)))
  let byNlinarith : MetaM Expr :=
    linarithSplitting facts.toList (claim.getD (mkConst ``False))
      { preprocessors := ({} : Mathlib.Tactic.Linarith.LinarithConfig).preprocessors.concat
          Mathlib.Tactic.Linarith.nlinarithExtras }
  -- Which procedures to ask, in order. `linarith` goes first where there is
  -- a claim, which it proves outright, or where the numbers are not integers,
  -- which is all it is asked about then; `omega` is the second opinion only
  -- where they are.
  let procedures : List (String × MetaM Expr) :=
    (if !discrete then [("linarith", byLinarith)]
      else if claim.isSome then [("linarith", byLinarith), ("omega", byOmega)]
      else [("omega", byOmega), ("linarith", byLinarith)])
    ++ (if nonlinear then [("nlinarith", byNlinarith)] else [])
  let rec firstAnswer (rest : List (String × MetaM Expr))
      (failures : Array (String × Exception)) : MetaM Expr := do
    match rest with
    | [] =>
      let stated ← facts.mapM fun f => do
        return indentExpr (← instantiateMVars (← inferType f))
      let said := failures.toList.map fun (name, e) =>
        m!"\n{name} said: {e.toMessageData}"
      let tried := " and ".intercalate (failures.toList.map (·.1))
      let failed := match claim with
        | some c => m!"{tried} could not prove{indentExpr c}\nfrom:"
        | none => m!"{tried} could not derive a contradiction from:"
      throwError "{failed}{MessageData.joinSep stated.toList ""}\
        {MessageData.joinSep said ""}"
    | (name, ask) :: rest =>
      -- A procedure that fails is rolled back before the next is asked:
      -- what it assigned on the way would otherwise be left for the next.
      try commitIfNoEx ask
      catch e => firstAnswer rest (failures.push (name, e))
  let answer ← firstAnswer procedures #[]
  -- What a procedure assigned is checked against what it was asked, because
  -- a procedure that answers the wrong question answers it convincingly.
  let stated ← instantiateMVars (← inferType answer)
  unless ← isDefEq stated (claim.getD (mkConst ``False)) do
    throwError "a decision procedure was asked for{indentExpr
      (claim.getD (mkConst ``False))}\nand gave something proving{indentExpr stated}"
  return answer

/--
`x ≠ 0 → x * z = x * w → z = w`, where the numbers cancel.

`mul_left_cancel₀` says it of any ring without zero divisors, which the
integers, the rationals and the reals are; a sort that does not cancel has no
instance and gets nothing.
-/
def cancelling (x z w : Expr) : MetaM (Option Expr) := do
  try commitIfNoEx do
    let product ← mkEq (← mkAppM ``HMul.hMul #[x, z]) (← mkAppM ``HMul.hMul #[x, w])
    -- What is left of the lemma once its implicit arguments are taken is
    -- `a ≠ 0 → a * b = a * c → b = c`. Unifying the second hypothesis with
    -- `x * z = x * w` settles `a`, `b`, `c` and the multiplication; the zero
    -- and the cancellation instance are then synthesized, and a sort that
    -- does not cancel has none.
    instantiated ``mul_left_cancel₀ fun stated => do
      let .forallE _ _ (.forallE _ hypothesis _ _) _ := stated | return false
      if hypothesis.hasLooseBVars then return false
      isDefEq hypothesis product
  catch _ => return none

/--
`e` with every subtraction written as adding the negation, and the proof that
the two are equal, or `none` where there is no subtraction in it.

Vampire's normalisation writes `a - b` as `a + -b`, inside the arguments of an
uninterpreted symbol as anywhere else, and a decision procedure takes such an
application whole: `f (x - y)` and `f (x + -y)` are two things it knows nothing
relating. Written the one way, they are the one thing.
-/
private def subtractionsAsNegations (e : Expr) : MetaM (Option Simp.Result) := do
  unless (e.find? (·.isAppOfArity ``HSub.hSub 6)).isSome do return none
  let thms ← ({} : SimpTheorems).addConst ``sub_eq_add_neg
  let ctx ← Simp.mkContext (simpTheorems := #[thms])
    (congrTheorems := ← getSimpCongrTheorems)
  let (r, _) ← simp e ctx
  if r.expr == e then return none
  return some r

/--
`a = b` for two numbers `ring` can show equal, or `none`.
-/
private def equalNumbers (a b : Expr) : MetaM (Option Expr) := do
  let τ ← inferType a
  unless (← isDefEq τ (← inferType b)) do return none
  unless (τ.isConstOf ``Int || τ.isConstOf ``Rat || τ.isConstOf `Real) do return none
  let goal ← mkFreshExprMVar (← mkEq a b)
  try
    commitIfNoEx (AtomM.run .reducible (Mathlib.Tactic.Ring.proveEq goal.mvarId!))
    return some (← instantiateMVars goal)
  catch _ => return none

/--
`s = t` where the two are one symbol applied to arguments that are each the
same, equal as numbers, or equal in the same way themselves.
-/
private partial def congruent (s t : Expr) : MetaM (Option Expr) := do
  if s == t then return some (← mkEqRefl s)
  if let some h ← equalNumbers s t then return some h
  unless s.getAppFn == t.getAppFn && s.getAppNumArgs == t.getAppNumArgs
      && s.getAppNumArgs > 0 && !s.getAppFn.isLambda do return none
  let mut proof ← mkEqRefl s.getAppFn
  for (a, b) in s.getAppArgs.zip t.getAppArgs do
    if a == b then
      proof ← mkCongrFun proof a
    else
      let some h ← congruent a b | return none
      proof ← mkCongr proof h
  return some proof

/--
`s = t` for two of the terms a decision procedure takes whole that are one
symbol applied to arguments equal as numbers, by congruence -- looking through
further such applications on the way down.

Vampire evaluates and normalises arithmetic inside the arguments of an
uninterpreted symbol as anywhere else, so a step can relate `f (2 + 3)` to
`f 5`, or `g (h (x + - -y))` to `g (h (x + y))`, which a procedure taking each
application whole knows nothing relating. Each pair so related is told it, as
a fact.
-/
private def congruences (facts : Array Expr) (claim : Option Expr) :
    MetaM (Array Expr) := do
  let types ← facts.mapM fun f => do instantiateMVars (← inferType f)
  let atoms ← VampireReplay.Abstract.opaqueTerms (types ++ claim.toArray)
  let mut out := #[]
  for i in [0 : atoms.size] do
    for j in [i + 1 : atoms.size] do
      let s := atoms[i]!
      let t := atoms[j]!
      unless s.getAppFn == t.getAppFn && s.getAppNumArgs == t.getAppNumArgs do continue
      if let some h ← congruent s t then out := out.push h
  return out

/--
The facts and the claim with each local a fact equates to something without it
replaced by that something, and what turns a proof of the claim so rewritten
into one of the claim.

A step of vampire's can use `x = 0` inside `x * y`, which a procedure reading
`x * y` as a nonlinear term it can only take whole knows nothing about: what
the step did was substitute, so that is what is done here.
-/
private def substituted (facts : Array Expr) (claim : Option Expr) :
    MetaM (Array Expr × Option Expr × (Expr → MetaM Expr)) := do
  let mut facts := facts
  let mut claim := claim
  let mut back : Expr → MetaM Expr := pure
  let mut i := 0
  while i < facts.size do
    let fact := facts[i]!
    let stated ← instantiateMVars (← inferType fact)
    let some (_, lhs, rhs) := stated.eq? | i := i + 1; continue
    let some (x, t, h) ←
        (if lhs.isFVar && !rhs.containsFVar lhs.fvarId! then pure (some (lhs, rhs, fact))
         else if rhs.isFVar && !lhs.containsFVar rhs.fvarId! then
           return some (rhs, lhs, ← mkEqSymm fact)
         else pure none)
      | i := i + 1; continue
    let rewrite (e : Expr) : MetaM (Option (Expr × Expr)) := do
      unless e.containsFVar x.fvarId! do return none
      let motive := Expr.lam `y (← inferType x) (e.abstract #[x]) .default
      return some (e.instantiate1 t, ← mkCongrArg motive h)
    let mut next := #[]
    for (other, j) in facts.zipIdx do
      if j == i then next := next.push other; continue
      match ← rewrite (← instantiateMVars (← inferType other)) with
      | some (_, eq) => next := next.push (← mkEqMP eq other)
      | none => next := next.push other
    facts := next
    if let some c := claim then
      if let some (c', eq) ← rewrite c then
        claim := some c'
        let outer := back
        back := fun proof => do outer (← mkEqMPR eq proof)
    i := i + 1
  return (facts, claim, back)

/--
`False` from facts that cannot all hold of any numbers, or `claim` from facts
that make it hold.

The terms the procedure cannot read are put aside by
`VampireReplay.Abstract.abstracting`, which is precompiled; what is handed to
it here is the asking.
-/
def contradiction (facts : Array Expr) (claim : Option Expr) : MetaM Expr := do
  -- What a fact says, with any name applied to its arguments read as what it
  -- stands for: a named formula is a function applied to them, and under the
  -- application no procedure sees the equation or comparison it is.
  let facts ← facts.mapM fun fact => do
    let stated ← instantiateMVars (← inferType fact)
    let reduced ← Core.betaReduce stated
    if reduced == stated then return fact
    mkExpectedTypeHint fact reduced
  let claim ← claim.mapM fun c => do Core.betaReduce (← instantiateMVars c)
  let facts ← facts.mapM fun fact => do
    let stated ← instantiateMVars (← inferType fact)
    match ← subtractionsAsNegations stated with
    | some r => r.mkEqMP fact
    | none => pure fact
  let (facts, claim, back) ← substituted facts claim
  let facts := facts ++ (← congruences facts claim)
  -- Two facts that deny each other settle anything, and over a sort that is
  -- not numbers no procedure could be asked to see it.
  if let some absurdity ← denying facts then
    return ← back (← match claim with
      | none => pure absurdity
      | some c => pure (mkApp2 (mkConst ``False.elim [.zero]) c absurdity))
  back <| ← match claim with
  | none => VampireReplay.Abstract.abstracting askAbout facts none
  | some c => do
    let c' ← match ← subtractionsAsNegations (← instantiateMVars c) with
      | some r => pure r.expr
      | none => pure c
    if let some fact ← stating facts c' then
      if c' == c then return fact
      let some r ← subtractionsAsNegations (← instantiateMVars c) | return fact
      return ← mkEqMPR (← r.getProof) fact
    match ← subtractionsAsNegations (← instantiateMVars c) with
    | none => VampireReplay.Abstract.abstracting askAbout facts claim
    | some r =>
      let proof ← VampireReplay.Abstract.abstracting askAbout facts (some r.expr)
      mkEqMPR (← r.getProof) proof
where
  /-- `False` from a fact and one that denies it, or `none`. -/
  denying (facts : Array Expr) : MetaM (Option Expr) := do
    for negative in facts do
      let some denied := (← instantiateMVars (← inferType negative)).not? | continue
      if let some positive ← stating facts denied then
        return some (mkApp negative positive)
    return none
  /-- A fact that states the claim, once both are written the one way: then
  there is nothing to ask, and over a sort that is not numbers no procedure
  could be asked. An equation states it either way round, since vampire
  orients equations by its term order rather than as they were written. -/
  stating (facts : Array Expr) (claim : Expr) : MetaM (Option Expr) := do
    for fact in facts do
      let stated ← instantiateMVars (← inferType fact)
      if ← withTransparency .instances (isDefEq stated claim) then
        return some fact
      if let (some (_, x, y), some (_, x', y')) := (claim.eq?, stated.eq?) then
        if ← withTransparency .instances (isDefEq x y' <&&> isDefEq y x') then
          return some (← mkEqSymm fact)
    return none

end Vampire.Arith
