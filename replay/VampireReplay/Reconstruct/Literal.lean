import VampireReplay.Reconstruct.Choice
import VampireReplay.Reconstruct.Junction

namespace Vampire.Reconstruct

open Lean Meta

/--
An equality literal taken apart: the sort it is at, its two sides, and whether
it is denied. `none` for any other literal.
-/
def equalityLiteral? (e : Expr) : Option (Expr × Expr × Expr × Bool) :=
  let (inner, negated) := match e.not? with
    | some inner => (inner, true)
    | none => (e, false)
  if inner.isAppOfArity ``Eq 3 then
    match inner.getAppArgs with
    | #[τ, lhs, rhs] => some (τ, lhs, rhs, negated)
    | _ => none
  else none

/--
A proof of an equality literal the other way round, from `h`, a proof of it as
`equalityLiteral?` took it apart: `Eq.symm` of an equation, `Ne.symm` of a
denied one.

Written out rather than found: this is asked of every literal of every clause
an inference carries, and what it is asked of says it already.
-/
def symmLiteral (τ lhs rhs : Expr) (negated : Bool) (h : Expr) : ReconstructM Expr := do
  let level ← getLevel τ
  unless negated do return mkApp4 (mkConst ``Eq.symm [level]) τ lhs rhs h
  -- Stated `¬rhs = lhs`, as a clause states a denied equation, not `rhs ≠ lhs`.
  let turned := mkNot (mkApp3 (mkConst ``Eq [level]) τ rhs lhs)
  return mkExpectedTypeHint' (mkApp4 (mkConst ``Ne.symm [level]) τ lhs rhs h) turned
where
  mkExpectedTypeHint' (e type : Expr) : Expr :=
    mkApp2 (mkConst ``id [Level.zero]) type e

/--
A proof of the same literal with an equality's arguments the other way round,
if it is an equality at all.

Vampire's equality literals are unordered: matching one against another tries
both orientations, so a literal carried into a conclusion or resolved against
can come back the other way round.
-/
def flipEquality (h : Expr) : ReconstructM (Option Expr) := do
  let some (τ, lhs, rhs, negated) := equalityLiteral? (← instantiateMVars (← inferType h))
    | return none
  return some (← symmLiteral τ lhs rhs negated h)

/-- `a` with its double negations stripped. -/
partial def stripped (a : Expr) : Expr :=
  match a.not? with
  | some inner =>
    match inner.not? with
    | some innermost => stripped innermost
    | none => a
  | none => a

/-- `a` with its double negations stripped, and that it says the same. -/
private partial def strippedOf (a : Expr) : ReconstructM (Expr × Expr) := do
  if let some inner := a.not? then
    if let some innermost := inner.not? then
      let (stripped, proof) ← strippedOf innermost
      return (stripped, ← mkAppM ``Iff.trans
        #[← mkAppOptM ``Classical.not_not #[some innermost], proof])
  return (a, ← mkAppOptM ``Iff.refl #[some a])

/--
`a ↔ b`, when the two differ only by double negations.

Clausification records what it put in a clause before its own normalisation
has unwrapped a negation into the sign it carries -- a negative literal under a
negative sign, which the clause states as the positive one -- so the two can
meet with a double negation between them. Which double negations is a matter
of their shape, so the two are compared stripped of them, as they stand.
-/
def sameUpToDoubleNegation (a b : Expr) : ReconstructM (Option Expr) := do
  unless stripped a == stripped b do return none
  let (_, saysA) ← strippedOf a
  let (_, saysB) ← strippedOf b
  return some (← mkAppM ``Iff.trans #[saysA, ← mkAppM ``Iff.symm #[saysB]])

/--
Whether ALASCA's unifier reads a term as arithmetic: a sum, a product, a
difference, a negation or a numeral, rather than an uninterpreted symbol
applied, which it unifies argument by argument.
-/
private def arithmetic (e : Expr) : Bool :=
  match e.getAppFn with
  | .const c _ =>
    c == ``HAdd.hAdd || c == ``HSub.hSub || c == ``HMul.hMul || c == ``HDiv.hDiv
      || c == ``Neg.neg || c == ``OfNat.ofNat || c == ``OfScientific.ofScientific
      || c == ``Nat.cast || c == ``Int.cast || c == `Rat.cast
  | _ => false

/--
`a = b`, for two terms ALASCA's unifier unified, where `equal` are the pairs it
deferred with what says each is equal; `none` where they are not.

Its unifier works up to arithmetic: `f(X + 1)` and `f(a)` unify by `X ↦ a - 1`,
which makes them equal as numbers rather than one term. So the two are compared
in ring normal form, with the deferred pairs, their atoms numbered alike -- a
unification it solved is then one term -- and descended as the unifier
descends them: two applications of one uninterpreted symbol argument by
argument, and anything it reads as arithmetic as a question about numbers,
which the deferred pairs are facts for.
-/
partial def equalModuloRing (equal : Array (Expr × Expr × Expr)) (a b : Expr) :
    ReconstructM (Option Expr) := do
  if a == b then return some (← mkEqRefl a)
  let normal ← (← read).ringNormalForms
    (#[a, b] ++ equal.flatMap fun (x, y, _) => #[x, y])
  -- What says each normal form is what it normalises.
  let normalEq (i : Nat) (h : Expr) : MetaM Expr := do
    mkEqTrans (← mkEqSymm normal[2 * i + 2]!.2) (← mkEqTrans h normal[2 * i + 3]!.2)
  let pairs ← equal.zipIdx.mapM fun ((_, _, h), i) => do
    return (normal[2 * i + 2]!.1, normal[2 * i + 3]!.1, ← normalEq i h)
  let rec go (a b : Expr) : ReconstructM (Option Expr) := do
    if a == b then return some (← mkEqRefl a)
    for (x, y, p) in pairs do
      if x == a && y == b then return some p
      if x == b && y == a then return some (← mkEqSymm p)
    if arithmetic a || arithmetic b then
      -- Their normal forms differ, so without deferred pairs to say they are
      -- equal they are not the same number.
      if pairs.isEmpty then return none
      return some (← (← read).contradiction (pairs.map (·.2.2)) (some (← mkEq a b)))
    unless a.isApp && b.isApp do return none
    let as := a.getAppArgs
    let bs := b.getAppArgs
    unless a.getAppFn == b.getAppFn && as.size == bs.size do return none
    let mut proof ← mkEqRefl a.getAppFn
    for (x, y) in as.zip bs do
      if x == y then
        proof ← mkCongrFun proof x
      else
        let some p ← go x y | return none
        proof ← mkCongr proof p
    return some proof
  let some same ← go normal[0]!.1 normal[1]!.1 | return none
  return some (← mkEqTrans normal[0]!.2 (← mkEqTrans same (← mkEqSymm normal[1]!.2)))

/--
`a = b` where the two are one up to the identities of a commutative ring, at
any depth; `none` where they are not. Nothing is decided about numbers: a
certificate that relates its terms to a step's by ring arithmetic alone asks
this, and a term that is not the one it looks for is not an error.
-/
def ringEqual (a b : Expr) : ReconstructM (Option Expr) := do
  if a == b then return some (← mkEqRefl a)
  let normal ← (← read).ringNormalForms #[a, b]
  unless normal[0]!.1 == normal[1]!.1 do return none
  return some (← mkEqTrans normal[0]!.2 (← mkEqSymm normal[1]!.2))

/--
`target` from two complementary literals: `negative`, which the step's
literal says is the negative one, and `positive`, its complement at the same
substitution. The two are one atom, but that vampire's equality literals are
unordered, so the positive one can state its equation the other way round,
which the two themselves say.
-/
def closeComplementary (target negative positive : Expr) : ReconstructM Expr := do
  let deny ← instantiateMVars (← inferType negative)
  let some refuted := asNegation deny
    | throwError "the literal{indentExpr deny}\nthe step resolved as negative is no negation"
  let stated ← instantiateMVars (← inferType positive)
  -- One atom, as terms or -- where ALASCA's unifier solved an equation, which
  -- makes them equal as numbers -- as numbers, a ring's normal forms deciding
  -- at each arithmetic subterm; an equation's sides either way round, which
  -- the normal forms say.
  if let some same ← equalModuloRing #[] stated refuted then
    return ← mkAppOptM ``absurd #[some refuted, some target, some (← mkEqMP same positive),
      some negative]
  if let some flipped ← flipEquality positive then
    if let some same ← equalModuloRing #[] (← instantiateMVars (← inferType flipped)) refuted then
      return ← mkAppOptM ``absurd #[some refuted, some target, some (← mkEqMP same flipped),
        some negative]
  throwError "the literals{indentExpr stated}\nand{indentExpr deny}\nare not complementary"

/--
`target` from two literals complementary up to the pairs an abstracting
unifier deferred, `equal`, with what says each is equal: a step that resolved
two literals it did not make one.
-/
def closeComplementaryModulo (target negative positive : Expr)
    (equal : Array (Expr × Expr × Expr)) : ReconstructM Expr := do
  let deny ← instantiateMVars (← inferType negative)
  let some refuted := asNegation deny
    | throwError "the literal{indentExpr deny}\nthe step resolved as negative is no negation"
  let stated ← instantiateMVars (← inferType positive)
  let some same ← equalModuloRing equal stated refuted
    | throwError "the literals{indentExpr stated}\nand{indentExpr deny}\nare not complementary \
        up to what the unifier deferred"
  mkAppOptM ``absurd #[some refuted, some target, some (← mkEqMP same positive), some negative]

/--
`target` from `h`, a literal a step dropped because nothing makes it hold:
`t ≠ t`, which removing trivial inequalities leaves, and `⊥` or `¬⊤`, which
simplifying away a truth value leaves. `none` for any other literal.
-/
def refuteDropped? (target h : Expr) : ReconstructM (Option Expr) := do
  let stated ← instantiateMVars (← inferType h)
  if stated.isConstOf ``False then
    return some (← mkAppOptM ``False.elim #[some target, some h])
  let some inner := asNegation stated | return none
  if inner.isConstOf ``True then
    return some (← mkAppOptM ``absurd
      #[some inner, some target, some (mkConst ``True.intro), some h])
  if let some (_, a, b) := inner.eq? then
    if ← sameFormula a b then
      return some (← mkAppOptM ``absurd #[some inner, some target, some (← mkEqRefl a), some h])
  return none

/--
`a` from `¬¬a`, with both written out.

`mkAppM` would find them again from the proof it is given, which for a proof
the size of a clausification's is the whole of it.
-/
def ofNotNot (a : Expr) (h : Expr) : Expr :=
  let negated := mkApp (mkConst ``Not) a
  mkApp4 (mkConst ``Iff.mp) (mkApp (mkConst ``Not) negated) a
    (mkApp (mkConst ``Classical.not_not) a) h

/--
What a fact says, with any double negation taken off it.

A clause's literal can be a negative one, so what says it fails says a double
negation, and a decision procedure does not see through that.
-/
partial def plainly (h : Expr) : ReconstructM Expr := do
  let stated ← instantiateMVars (← inferType h)
  if let some inner := stated.not? then
    if let some innermost := inner.not? then
      return ← plainly (ofNotNot innermost h)
  -- `a → False` is `¬a` too, and is what a refutation built here states; a
  -- decision procedure reads the one and not the other, so it is said again
  -- the way it reads it.
  if let some inner := asNegation stated then
    if let some innermost := inner.not? then
      return ← plainly (ofNotNot innermost h)
    unless stated.not?.isSome do
      return ← mkExpectedTypeHint h (mkApp (mkConst ``Not) inner)
  return h

/--
What proves `goal` from the facts given, where what settles it is arithmetic.

The propositional part is taken apart here -- a conjunction proved a conjunct
at a time, a case made for each disjunct of a fact -- so that what is left for
a decision procedure is what it is good at: a comparison, or facts that cannot
all hold of any numbers.
-/
partial def byArithmetic (facts : Array Expr) (goal : Expr)
    (fuel : Nat := 2) : ReconstructM Expr := do
  let contradiction := (← read).contradiction
  -- A fact that says two things says each of them, and one that says either of
  -- two is two cases; both are the caller's to take apart, so they are taken
  -- apart here before anything is asked of the numbers.
  for (fact, i) in facts.zipIdx do
    let stated ← instantiateMVars (← inferType fact)
    if stated.isAppOfArity ``And 2 then
      let rest := facts.eraseIdx! i
      let parts := spineParts ``And stated
      let suffix := suffixJunctions ``And ``True parts
      let mut extended := rest
      for j in [0 : parts.size] do
        extended := extended.push (← projectGiven parts j fact (suffix? := some suffix))
      return ← byArithmetic extended goal fuel
    if stated.isAppOfArity ``Or 2 then
      let rest := facts.eraseIdx! i
      return ← elimGiven (spineParts ``Or stated)
        (fun _ h => do byArithmetic (rest.push (← plainly h)) goal fuel) fact
  -- What is asked for says two things, or either of two, or that something
  -- cannot be: each is a step away from something the numbers settle.
  if goal.isAppOfArity ``And 2 then
    let parts := spineParts ``And goal
    return ← introGiven parts fun i => byArithmetic facts parts[i]! fuel
  if let some inner := goal.not? then
    return ← withLocalDeclD `h inner fun h => do
      mkLambdaFVars #[h] (← byArithmetic (facts.push (← plainly h))
        (mkConst ``False) fuel)
  if let some (p, q) := goal.iff? then
    let forward ← withLocalDeclD `h p fun h => do
      mkLambdaFVars #[h] (← byArithmetic (facts.push (← plainly h)) q fuel)
    let backward ← withLocalDeclD `h q fun h => do
      mkLambdaFVars #[h] (← byArithmetic (facts.push (← plainly h)) p fuel)
    return ← mkAppM ``Iff.intro #[forward, backward]
  if goal.isAppOfArity ``Or 2 then
    let parts := spineParts ``Or goal
    -- A step of this kind acts on one literal and carries the rest, so most of
    -- what is asked for is a fact already in hand. Looking for it costs a
    -- comparison, where asking the numbers costs a decision procedure a
    -- question it answers the same way.
    let suffix := suffixJunctions ``Or ``False parts
    for (part, i) in parts.zipIdx do
      for fact in facts do
        if ← isDefEq part (← instantiateMVars (← inferType fact)) then
          return ← injectGiven parts i fact (suffix? := some suffix)
    -- Otherwise suppose none of them holds. That covers whichever disjunct the
    -- numbers would have given, so asking for each in turn first is asking a
    -- decision procedure, once per disjunct, what this asks it once.
    let refuted ← withLocalDeclD `h (mkApp (mkConst ``Not) goal) fun h => do
      let mut extended := facts
      for refuting in refutationsOf parts h do
        extended := extended.push (← plainly refuting)
      mkLambdaFVars #[h] (← byArithmetic extended (mkConst ``False) fuel)
    return ofNotNot goal refuted
  if goal.isConstOf ``False then
    -- Two of the facts may be a thing and its denial, which is no question
    -- about numbers: a procedure reads a fact as a linear constraint, and a
    -- denied equality between two long sums is not one, so it passes over the
    -- very fact that settles it.
    for (fact, i) in facts.zipIdx do
      if let some denied := (← instantiateMVars (← inferType fact)).not? then
        for other in facts.eraseIdx! i do
          if ← isDefEq denied (← instantiateMVars (← inferType other)) then
            return ← mkAppOptM ``absurd
              #[some denied, some (mkConst ``False), some other, some fact]
    -- A step's variable can stand for a term -- flattening names a subterm by
    -- one, Gaussian elimination solves for one -- and a fact about the variable
    -- and one about the term are then one fact only once the equation between
    -- them is substituted, which no procedure over the facts as given does.
    if fuel > 0 then
      let types ← facts.mapM fun f => do instantiateMVars (← inferType f)
      let namesVariable (t : Expr) : Bool := match t.eq? with
        | some (_, l, r) =>
          (l.isFVar && !r.containsFVar l.fvarId!) || (r.isFVar && !l.containsFVar r.fvarId!)
        | none => false
      if types.any namesVariable then
        try
          return ← rollingBack do
            let decls := types.mapIdx fun i t => (Name.mkSimple s!"fact{i}", fun _ => pure t)
            withLocalDeclsD decls fun hs => do
              let before := (← getLCtx)
              let goal ← mkFreshExprSyntheticOpaqueMVar (mkConst ``False)
              let substituted ← Lean.Meta.substVars goal.mvarId!
              let proof ← substituted.withContext do
                let mut remaining := #[]
                for decl in ← getLCtx do
                  if decl.isImplementationDetail then continue
                  -- What was in scope before, and still is, is no fact of these.
                  if (before.find? decl.fvarId).isSome && !hs.contains decl.toExpr then continue
                  if ← isProp decl.type then remaining := remaining.push decl.toExpr
                byArithmetic remaining (mkConst ``False) (fuel - 1)
              substituted.assign proof
              return mkAppN (← mkLambdaFVars hs (← instantiateMVars goal)) facts
        catch _ => pure ()
    -- A fact that denies an equality is used by making the equality: `linarith`
    -- reads `¬(a < b)` as `b ≤ a` but takes nothing from `a ≠ b`, so what it
    -- denies is proved from the rest instead. A denied comparison needs none
    -- of this, being a comparison the other way round.
    if fuel > 0 then
      for (fact, i) in facts.zipIdx do
        if let some denied := (← instantiateMVars (← inferType fact)).not? then
          -- Through what vampire defined, as an equality proxy is.
          unless (← unfoldDefinitions denied).isAppOfArity ``Eq 3 do continue
          -- Rolled back if it fails, as every attempt that may not succeed is.
          try
            return ← rollingBack do
              let held ← byArithmetic (facts.eraseIdx! i) denied (fuel - 1)
              mkAppOptM ``absurd
                #[some denied, some (mkConst ``False), some held, some fact]
          catch _ => pure ()
    return ← contradiction facts none
  -- A comparison, which is what the numbers settle.
  try
    rollingBack (contradiction facts (some goal))
  catch _ =>
    -- Supposing it fails is another set of facts, and they are taken apart
    -- the same way anything else is: a denied comparison among them says
    -- nothing to a procedure until what it denies has been proved.
    let refuted ← withLocalDeclD `h (mkApp (mkConst ``Not) goal) fun h => do
      mkLambdaFVars #[h]
        (← byArithmetic (facts.push (← plainly h)) (mkConst ``False) fuel)
    return ofNotNot goal refuted

end Vampire.Reconstruct
