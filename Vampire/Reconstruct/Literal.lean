import Vampire.Reconstruct.Choice
import Vampire.Reconstruct.Junction

namespace Vampire.Reconstruct

open Lean Meta

/--
A proof of the same literal with an equality's arguments the other way round,
if it is an equality at all.

Vampire's equality literals are unordered: matching one against another tries
both orientations, so a literal carried into a conclusion or resolved against
can come back the other way round.
-/
def flipEquality (h : Expr) : ReconstructM (Option Expr) := do
  let stated ← instantiateMVars (← inferType h)
  -- Written out rather than found: this is asked of every literal of every
  -- clause an inference carries, and what it is asked of says it already.
  if stated.isAppOfArity ``Eq 3 then
    let #[τ, lhs, rhs] := stated.getAppArgs | return none
    return some (mkApp4 (mkConst ``Eq.symm [← getLevel τ]) τ lhs rhs h)
  if let some inner := stated.not? then
    if inner.isAppOfArity ``Eq 3 then
      let #[τ, lhs, rhs] := inner.getAppArgs | return none
      return some (mkApp4 (mkConst ``Ne.symm [← getLevel τ]) τ lhs rhs h)
  return none

/--
The same literal with a double negation taken off, or put on.

A name and its negation are two names, and polarity flipping leaves a literal
meaning the opposite of what it did, so the two can meet with one negation
between them either way round.
-/
def doubleNegations (h : Expr) : ReconstructM (Array Expr) := do
  let stated ← instantiateMVars (← inferType h)
  let mut out := #[]
  if let some inner := stated.not? then
    if let some innermost := inner.not? then
      out := out.push (← mkAppM ``Iff.mp
        #[← mkAppOptM ``Classical.not_not #[some innermost], h])
  out := out.push (← mkAppM ``Iff.mpr
    #[← mkAppOptM ``Classical.not_not #[some stated], h])
  return out

/-- `a` with its double negations stripped. -/
private partial def stripped (a : Expr) : Expr :=
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
has unwrapped a negation into the sign it carries, so the two can meet with a
double negation between them.
-/
def sameUpToDoubleNegation (a b : Expr) : ReconstructM (Option Expr) := do
  -- Asked of every literal of a clause against every literal of the clause it
  -- was reached from, so what says the two are the same is built only once one
  -- knows they are.
  unless ← isDefEq (stripped a) (stripped b) do return none
  let (_, saysA) ← strippedOf a
  let (_, saysB) ← strippedOf b
  return some (← mkAppM ``Iff.trans #[saysA, ← mkAppM ``Iff.symm #[saysB]])

/--
`target` from two complementary literals.

Which of the two is the negation of the other is settled by comparing them, and
an equality can be stated either way round, so one of them may have to be
turned about first.
-/
def closeComplementary (target h₁ h₂ : Expr) : ReconstructM Expr := do
  let (positive, negative) ←
    if (asNegation (← instantiateMVars (← inferType h₁))).isSome then pure (h₂, h₁)
    else pure (h₁, h₂)
  let stated ← instantiateMVars (← inferType positive)
  let some refuted := asNegation (← instantiateMVars (← inferType negative))
    | throwError "the literals resolved on are not complementary"
  let positive ←
    if ← isDefEq refuted stated then pure positive
    else
      let some flipped ← flipEquality positive
        | throwError "the literals{indentExpr stated}\nand{indentExpr refuted}\n\
          are not complementary"
      pure flipped
  mkAppOptM ``absurd
    #[some (← inferType positive), some target, some positive, some negative]

/--
A proof of `target` from one of its literals, found by lookup.

A simplifying or generating inference carries every literal it did not act on
into the conclusion unchanged, so where the literal lands is not searched for.
-/
def placeLiteral (target : Expr) (h : Expr) : ReconstructM Expr := do
  let parts := junctionParts ``Or target
  -- The literal is usually the very one the conclusion was built from, so it
  -- is looked for as it stands before anything is made of it: a clause of a
  -- few hundred literals is placed a literal at a time, and building the ways
  -- a literal can be stated differently for each of them costs more than the
  -- inferences do.
  let place (candidate : Expr) : ReconstructM (Option Expr) := do
    let stated ← instantiateMVars (← inferType candidate)
    if let some i := parts.findIdx? (· == stated) then
      return some (← injectPart ``Or target i candidate)
    for (part, i) in parts.zipIdx do
      if ← isDefEq part stated then
        return some (← injectPart ``Or target i candidate)
    return none
  if let some placed ← place h then
    return placed
  if let some flipped ← flipEquality h then
    if let some placed ← place flipped then
      return placed
  for candidate in ← doubleNegations h do
    if let some placed ← place candidate then
      return placed
  throwError "the literal{indentExpr (← instantiateMVars (← inferType h))}\
    \nis not among{indentExpr target}"

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
      let parts := junctionParts ``And stated
      let mut extended := rest
      for j in [0 : parts.size] do
        extended := extended.push (← projectGiven parts j fact)
      return ← byArithmetic extended goal fuel
    if stated.isAppOfArity ``Or 2 then
      let rest := facts.eraseIdx! i
      return ← elimGiven (junctionParts ``Or stated)
        (fun _ h => do byArithmetic (rest.push (← plainly h)) goal fuel) fact
  -- What is asked for says two things, or either of two, or that something
  -- cannot be: each is a step away from something the numbers settle.
  if goal.isAppOfArity ``And 2 then
    let parts := junctionParts ``And goal
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
    let parts := junctionParts ``Or goal
    -- A step of this kind acts on one literal and carries the rest, so most of
    -- what is asked for is a fact already in hand. Looking for it costs a
    -- comparison, where asking the numbers costs a decision procedure a
    -- question it answers the same way.
    for (part, i) in parts.zipIdx do
      for fact in facts do
        if ← isDefEq part (← instantiateMVars (← inferType fact)) then
          return ← injectGiven parts i fact
    -- Whichever disjunct the numbers give; failing that, suppose none of them.
    for (part, i) in parts.zipIdx do
      try
        return ← injectGiven parts i (← byArithmetic facts part fuel)
      catch _ => pure ()
    let refuted ← withLocalDeclD `h (mkApp (mkConst ``Not) goal) fun h => do
      let mut extended := facts
      for (part, i) in parts.zipIdx do
        let refuting ← withLocalDeclD `l part fun l => do
          mkLambdaFVars #[l] (mkApp h (← injectGiven parts i l))
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
    -- A fact that denies a comparison is used by making the comparison: what
    -- the procedures read are facts of the form `a ≤ b`, and a denial of one
    -- says nothing to them. What it denies is proved from the rest instead.
    if fuel > 0 then
      for (fact, i) in facts.zipIdx do
        if let some denied := (← instantiateMVars (← inferType fact)).not? then
          try
            let held ← byArithmetic (facts.eraseIdx! i) denied (fuel - 1)
            return ← mkAppOptM ``absurd
              #[some denied, some (mkConst ``False), some held, some fact]
          catch _ => pure ()
    return ← contradiction facts none
  -- A comparison, which is what the numbers settle.
  try
    contradiction facts (some goal)
  catch _ =>
    let refuted ← withLocalDeclD `h (mkApp (mkConst ``Not) goal) fun h => do
      mkLambdaFVars #[h] (← contradiction (facts.push (← plainly h)) none)
    return ofNotNot goal refuted

/--
`a ↔ b`, when the two say the same of the same numbers.

What vampire's normalisation does to a literal -- `a ≤ b` for `¬(b < a)`, an
equality for the two inequalities it stands between, a sum moved to one side of
a comparison -- is no congruence, so nothing relates the two but arithmetic.
-/
def arithmeticIff (a b : Expr) : ReconstructM Expr := do
  -- Normalising a literal moves its terms across the comparison and nothing
  -- else, which is settled by the difference between the sides being the same;
  -- what is left over is for the numbers.
  if let some moved ← (← read).rearranged a b then
    return moved
  byArithmetic #[] (mkApp2 (mkConst ``Iff) a b)

end Vampire.Reconstruct
