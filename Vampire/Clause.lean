import Vampire.Sat

/-!
# A derived inference is unit propagation, not a case split

`LeanChecker::genericInferenceWithSubstitution` states one lemma per derived inference —
`premise₁ → … → premiseₙ → conclusion`, every one of them a clause — instantiates the
premises at the substitution the prover recorded, and hands the rest to
`grind only [cases Or]`. This port followed it, and on the benchmark that switch is
where the replay's time is: over 195 problems, `forward subsumption resolution` costs
11.3s, `resolution` 9.0s, and neither is doing anything hard. Falsify the conclusion and
the instantiated premises are a conflict that *unit propagation* reaches — which is not a
coincidence, it is what the inference is. `grind` rediscovers by case analysis a
derivation the prover already committed to.

This is `Vampire/Sat.lean`'s construction over first-order literals instead of AVATAR's
split variables, and it reuses its lemmas: every node is a named lemma applied to its
arguments, nothing is abstracted, and no metavariable is made. The differences are the
three things a first-order literal has that a propositional one does not.

1. **An equation has two spellings.** `Literal::createEquality` orients by the term
   ordering, and two clauses of one inference need not have been oriented the same way,
   so `a = b` in one and `¬(b = a)` in another are the complementary pair. The
   assignment records the orientation it holds a decision in and `Decision.adapt` turns
   it round with `Eq.symm` or `Ne.symm`.

2. **A literal can be false on its own.** `¬(t = t)` is what equality resolution and
   trivial inequality removal delete, and `rfl` refutes it without the assignment
   deciding anything.

3. **A literal can be true on its own** — `t = t`, or `True`. Then the conclusion holds
   outright and the premises are not needed at all.

4. **Two literals can be the same modulo an equation the inference itself supplies.**
   Superposition and demodulation exist to rewrite: the premise holds `L[s]`, the
   conclusion `L[t]`, and `s = t` is the other premise. Propagation matches literals, and
   those two are not a match — so a literal that is not decided is looked for again
   modulo the equations decided so far. `motiveFor` walks the two literals together and
   abstracts exactly the positions where one has `s` and the other `t`, which is the
   motive `Eq.subst` wants; nothing is searched for and no rewriting engine is involved.
   That the equation is *available* is the part propagation contributes: on a
   superposition the equation is a literal of a premise clause whose other literals the
   conclusion falsifies, so it is propagated before the rewrite needs it.

`Vampire/Reconstruct.lean` keeps `grind only [cases Or]` behind all of this, so a step
the propagation does not close is slow rather than broken.
-/

set_option autoImplicit false

namespace Vampire.Clause

open Lean Meta

/-! ## Reading a clause -/

/-- The universe levels of a term's head constant. `@Eq α a b` carries one, and the
lemmas applied to it have to be given the same one. -/
private def headLevels (e : Expr) : List Level :=
  match e.consumeMData.getAppFn with
  | .const _ ls => ls
  | _ => []

/-- The literals of a right-nested disjunction, left to right.

`consumeMData` at every node: a goal the elaborator made carries an `mdata
noImplicitLambda` wrapper, which is invisible when the formula is printed and makes
`isAppOfArity` say no to a disjunction that plainly is one. -/
private partial def disjuncts (e : Expr) : Array Expr :=
  go e #[]
where
  go (e : Expr) (acc : Array Expr) : Array Expr :=
    let e := e.consumeMData
    if e.isAppOfArity ``Or 2 then go e.appArg! (acc.push e.appFn!.appArg!)
    else acc.push e

/-- The atom a literal is over, and whether the literal is that atom rather than its
negation. -/
private def polarity (e : Expr) : Expr × Bool :=
  let e := e.consumeMData
  if e.isAppOfArity ``Not 1 then (e.appArg!.consumeMData, false) else (e, true)

/-- `¬e`. -/
private def notE (e : Expr) : Expr := mkApp (.const ``Not []) e

/-- The literal an atom and a polarity spell. -/
private def litE (atom : Expr) (pos : Bool) : Expr :=
  if pos then atom else notE atom

/-- The type of every suffix of a clause: `tails[i]` is the disjunction of `lits[i:]`,
and `tails[lits.size]` is `False`. At literal `i` the walk down a clause is looking at
`lits[i] ∨ tails[i+1]`. -/
private def clauseTails (lits : Array Expr) : Array Expr := Id.run do
  let mut tails := Array.replicate (lits.size + 1) (.const ``False [])
  for k in [0:lits.size] do
    let i := lits.size - 1 - k
    tails := tails.set! i <|
      if i + 1 == lits.size then lits[i]!
      else mkApp2 (.const ``Or []) lits[i]! tails[i + 1]!
  return tails

/-! ## Literals that decide themselves -/

/-- A proof of `¬(the literal)`, where the literal is false whatever the premises say.

`¬(t = t)` is the case that matters: it is what equality resolution and trivial
inequality removal delete, and `rfl` refutes it. `False` is here because the empty
clause is written as it and a clause can hold it after simplification. -/
private def selfFalse (atom : Expr) (pos : Bool) : Option Expr :=
  if pos then
    if atom.isConstOf ``False then some (.const ``not_false [])
    else none
  else
    match atom.eq? with
    -- `¬¬(t = t)`, which is what falsifying `¬(t = t)` asks for.
    | some (α, l, r) =>
      if l == r then
        some (mkApp2 (.const ``Sat.notNotIntro [])
          atom (mkApp2 (.const ``rfl (headLevels atom)) α l))
      else none
    | none => none

/-- A proof of a literal that holds whatever the premises say — `t = t`, or `True`.

Where the conclusion has one, the step needs no premise at all: the disjunct is proved
and injected and that is the whole proof. Vampire does not usually record such a clause,
but a substitution can make one: two literals of the parent become the same term. -/
private def selfTrue (atom : Expr) (pos : Bool) : Option Expr :=
  if !pos then none
  else if atom.isConstOf ``True then some (.const ``True.intro [])
  else match atom.eq? with
    | some (α, l, r) =>
      if l == r then some (mkApp2 (.const ``rfl (headLevels atom)) α l) else none
    | none => none

/-! ## The assignment -/

/--
What the assignment holds for an atom: whether it is true, a proof of the literal that
makes true, and the atom as *that proof* states it.

The third field is what an equation needs. Two clauses of one inference can state the
same equation either way round, so the atom a decision is looked up by need not be the
atom the proof is about, and `adapt` is what reconciles the two.
-/
private structure Decision where
  value : Bool
  proof : Expr
  atom : Expr

/-- `d`'s proof, restated about `want` — `none` if it is not the same atom.

The only difference bridged is an equation's orientation. `Eq.symm` turns a proof round
and `Ne.symm` turns a refutation round; `Ne a b` is reducibly `¬(a = b)`, so the
`Ne.symm` result is accepted wherever the negated equation is wanted. -/
private def Decision.adapt (d : Decision) (want : Expr) : Option Expr := do
  if d.atom == want then return d.proof
  let (α, dl, dr) ← d.atom.eq?
  let (_, wl, wr) ← want.eq?
  guard (dl == wr && dr == wl)
  let lvls := headLevels d.atom
  if d.value then return mkApp4 (.const ``Eq.symm lvls) α dl dr d.proof
  else return mkApp4 (.const ``Ne.symm lvls) α dl dr d.proof

/-- The decisions made so far, by atom.

An equation is entered under both orientations, so that a lookup is one hash and the
`adapt` that follows it is the only place the orientation is thought about. -/
private abbrev Assign := Std.HashMap Expr Decision

/-- Enter a decision in the map, under both orientations if it is an equation.

Not `Assign.decide`: `Assign` abbreviates `Std.HashMap`, so dot notation on it resolves
in `Std.HashMap`'s namespace and not in this one. -/
private def decideAtom (asg : Assign) (atom : Expr) (value : Bool) (proof : Expr) :
    Assign :=
  let d : Decision := { value, proof, atom }
  let asg := asg.insert atom d
  match atom.eq? with
  | some (α, l, r) =>
    if l == r then asg
    else asg.insert (mkApp3 (.const ``Eq (headLevels atom)) α r l) d
  | none => asg

/-- What `asg` says about `atom`, as a proof about `atom` itself. -/
private def findAtom (asg : Assign) (atom : Expr) : Option (Bool × Expr) := do
  let d ← asg[atom]?
  return (d.value, ← d.adapt atom)

/--
Everything decided so far: the atoms, by atom, and the two views of them the equation
rule needs — the equations that are known to hold, and the decisions in the order they
were made.

The lists are redundant with the map and are kept because the map cannot be walked for
them: it holds an equation under both orientations, so iterating it would offer every
equation twice, and `Decision` does not say which key it was reached by.
-/
private structure Facts where
  asg : Assign := {}
  /-- `(α, s, t, proof, levels)` for each equation decided true. The levels are the
  equation's own: `Eq.symm` and `Eq.subst` are applied at them and there is nothing
  else to read them off. -/
  eqs : Array (Expr × Expr × Expr × Expr × List Level) := #[]
  /-- `(atom, value, proof)` for each decision, in the order made — an equation both
  ways round.

  `Decision.adapt` turns an equation round when it is *looked up*, and that is not
  enough here: the rewrite search compares two atoms structurally, so a decision about
  `a = b` is invisible to a literal about `b = a` however the equation between them is
  applied. Storing the flip is what makes `_e0 = _e3` provable from `_e0 = t` and
  `_e3 = t`, which is most of what demodulation produces. -/
  made : Array (Expr × Bool × Expr) := #[]

/-- Record that `atom` has value `value`, proved by `proof`, in all three views. -/
private def Facts.decide (f : Facts) (atom : Expr) (value : Bool) (proof : Expr) :
    Facts :=
  let asg := decideAtom f.asg atom value proof
  let eqs :=
    if value then
      match atom.eq? with
      | some (α, l, r) =>
        if l == r then f.eqs else f.eqs.push (α, l, r, proof, headLevels atom)
      | none => f.eqs
    else f.eqs
  let made := f.made.push (atom, value, proof)
  let made :=
    match atom.eq? with
    | some (α, l, r) =>
      if l == r then made else
        let lvls := headLevels atom
        let flip := if value then mkApp4 (.const ``Eq.symm lvls) α l r proof
                    else mkApp4 (.const ``Ne.symm lvls) α l r proof
        made.push (mkApp3 (.const ``Eq lvls) α r l, value, flip)
    | none => made
  { asg, eqs, made }

/--
A motive `M` with `M[s] = a` and `M[t] = b`, or `none` if the two differ anywhere else.

This is the abstraction `Eq.subst` needs, computed from the two terms rather than by
rewriting one into the other. Walking the pair is what makes it exact: demodulation
rewrites the occurrences it selected and not every occurrence of `s`, so replacing all
of them in `a` would give a term that is not `b`, and replacing one would be a guess
about which.

The walk goes through applications only and stops at a binder. A first-order literal is
an application spine over constants and variables, which is all these are; anything else
is left to `grind`.
-/
private partial def motiveFor (a b s t : Expr) : Option Expr :=
  if a == b then some a
  else if a == s && b == t then some (.bvar 0)
  else match a, b with
    | .app af aa, .app bf ba => do
      let f ← motiveFor af bf s t
      let x ← motiveFor aa ba s t
      return .app f x
    | .mdata _ a, b => motiveFor a b s t
    | a, .mdata _ b => motiveFor a b s t
    | _, _ => none

/--
`h`, which proves `motive[t]`, restated as a proof of `motive[s]` — the direction a
premise needs, since it holds the term the conclusion rewrote away.

`Eq.subst` carries a proof forward along an equation, so the equation is turned round
first. `motive` is a body with `.bvar 0` at the abstracted positions, which is what
`motiveFor` returns.
-/
private def substBack (α s t e motive h : Expr) (lvls : List Level) : Expr :=
  let m := Expr.lam `x α motive .default
  mkAppN (.const ``Eq.subst lvls)
    #[α, m, t, s, mkApp4 (.const ``Eq.symm lvls) α s t e, h]

/--
A proof of `¬(the literal)`, from the facts or from the literal alone.

Three ways, cheapest first: the literal refutes itself (`¬(t = t)`), the assignment
decided its atom, or the assignment decided an atom that is this one with an equation
applied. The last is only reached when the first two fail, which is what keeps the
search over equations off the path every other rule takes.
-/
private def negLit (f : Facts) (lit : Expr) : Option Expr := Id.run do
  let (atom, pos) := polarity lit
  if let some e := selfFalse atom pos then return some e
  if let some (value, proof) := findAtom f.asg atom then
    -- `proof : ¬atom` already negates a positive literal; a negative one wants `¬¬atom`.
    if value != pos then
      return if pos then proof else mkApp2 (.const ``Sat.notNotIntro []) atom proof
    -- And where the decision agrees with the literal, fall through rather than give up:
    -- `decisionConflict` asks about an atom the assignment has decided *true* and needs
    -- the equations to answer, which is exactly the case a `none` here would lose.
  Id.run do
    -- `atom` under an equation. What is wanted is a decided atom that `atom` becomes
    -- when the equation is applied, at whichever positions the two actually differ.
    for (α, s, t, e, lvls) in f.eqs do
      for (other, value, proof) in f.made do
        -- To falsify `atom` the decision has to go the other way from the literal.
        if value == pos then continue
        let some (motive, from', to') :=
            (motiveFor atom other s t).map (·, s, t) <|>
            (motiveFor atom other t s).map (·, t, s)
          | continue
        -- The equation as this direction needs it: `from' = to'`, so `e` or its symm.
        let eq := if from' == s then e else mkApp4 (.const ``Eq.symm lvls) α s t e
        if pos then
          -- `proof : ¬other`; carry it back to `¬atom` under `fun x => ¬(motive x)`.
          return some (substBack α from' to' eq (notE motive) proof lvls)
        else
          -- `proof : other`; carry it back to `atom`, then negate twice.
          let at' := substBack α from' to' eq motive proof lvls
          return some (mkApp2 (.const ``Sat.notNotIntro []) atom at')
    return none

/-! ## Propagation -/

/-- `¬(the clause)`, for a clause every literal of which is falsified. -/
private def negClause (lits : Array Expr) (tails : Array Expr) (f : Facts) :
    Option Expr := do
  let mut e ← negLit f lits[lits.size - 1]!
  for k in [1:lits.size] do
    let i := lits.size - 1 - k
    let nl ← negLit f lits[i]!
    e := mkApp4 (.const ``Sat.notOr []) lits[i]! tails[i + 1]! nl e
  return e

/-- `clause → target`, for a clause whose only unfalsified literal is `target`. One
step of unit propagation. -/
private def propagateFn (lits : Array Expr) (tails : Array Expr) (f : Facts)
    (target : Expr) : Option Expr := do
  let branch (l : Expr) : Option Expr :=
    if l == target then some (mkApp (.const ``Sat.selfFun []) target)
    else do return mkApp3 (.const ``Sat.absurdFun []) l target (← negLit f l)
  let mut e ← branch lits[lits.size - 1]!
  for k in [1:lits.size] do
    let i := lits.size - 1 - k
    let left ← branch lits[i]!
    e := mkApp5 (.const ``Sat.orCases []) lits[i]! tails[i + 1]! target left e
  return e

/-- What a clause is under an assignment. -/
private inductive Status
  /-- Some literal is already true, or true on its own: the clause says nothing new. -/
  | satisfied
  /-- Every literal is false: the clause is the conflict. -/
  | conflict
  /-- Exactly one literal is neither decided nor self-deciding. -/
  | unit (lit : Expr)
  | undecided

private def status (f : Facts) (lits : Array Expr) : Status := Id.run do
  -- The *distinct* undecided literals decide whether the clause propagates: a literal
  -- can occur twice, which is exactly what duplicate literal removal is about.
  let mut free : Array Expr := #[]
  for l in lits do
    let (atom, pos) := polarity l
    if (selfTrue atom pos).isSome then return .satisfied
    match findAtom f.asg atom with
    | some (value, _) => if value == pos then return .satisfied else continue
    | none => pure ()
    -- Not decided outright. `negLit` is asked in full, because the equation rule is
    -- what tells a demodulation's premise from an undecided clause, and a literal it
    -- can refute is falsified rather than free. The proof it builds is thrown away and
    -- rebuilt by `negClause`; a clause has a handful of literals and this happens a
    -- handful of times, and carrying it would mean invalidating it as the assignment
    -- grows.
    if (negLit f l).isSome then continue
    unless free.contains l do free := free.push l
  if free.isEmpty then .conflict
  else if free.size == 1 then .unit free[0]!
  else .undecided

/--
`False` from two decisions that cannot both hold, or `none` if they can.

Propagation looks for a conflict *inside a clause*, and once the equations are in hand
the conflict need not be there. A demodulation of `¬A` from `¬B` and `s = t` is the
case: its premise `¬B` is a unit clause, so propagation uses it to decide `B` false
rather than to refute anything, and after that the clause is satisfied by its own
decision and can never be the conflict. What contradicts is the decision `B` false
against the decision `A` true that falsifying the conclusion made, and only modulo the
equation the other premise supplied — which was not yet available when `B` was decided.

So this is the scan propagation ends with rather than a rule of its own: for each atom
decided true, ask whether the facts now refute it. `negLit` cannot answer with the
decision it is being asked about, since that one has the wrong polarity.
-/
private def decisionConflict (f : Facts) : Option Expr := Id.run do
  for (atom, value, proof) in f.made do
    if !value then continue
    if let some neg := negLit f atom then return some (mkApp neg proof)
  return none

/--
`False` from the premises under `asg`, by unit propagation. `none` where propagation
stalls with no clause in conflict — which is where the caller falls back to `grind`.

Propagation does not nest: each derived literal is a term in its own right, so it goes
into the assignment and the loop carries on rather than opening a scope.
-/
private partial def propagate (prems : Array (Array Expr)) (tails : Array (Array Expr))
    (hs : Array Expr) (facts0 : Facts) : Option Expr := Id.run do
  let mut facts := facts0
  -- One propagation decides one atom, so there are no more rounds than there are
  -- literals in the premises.
  let mut fuel := prems.foldl (fun n c => n + c.size) 1
  while fuel > 0 do
    fuel := fuel - 1
    let mut unit? : Option (Nat × Expr) := none
    let mut conflict? : Option Nat := none
    for k in [0:prems.size] do
      match status facts prems[k]! with
      | .conflict => conflict? := some k; break
      | .unit l => if unit?.isNone then unit? := some (k, l)
      | _ => pure ()
    if let some k := conflict? then
      -- The empty clause *is* `False`, so there is nothing to eliminate.
      if prems[k]!.isEmpty then return some hs[k]!
      let some nc := negClause prems[k]! tails[k]! facts | return none
      return some (mkApp nc hs[k]!)
    let some (k, l) := unit? | return decisionConflict facts
    let some fn := propagateFn prems[k]! tails[k]! facts l | return none
    let (atom, pos) := polarity l
    facts := facts.decide atom pos (mkApp fn hs[k]!)
  return none

/-! ## The step -/

/-- `pf` proves the `idx`th disjunct of `want`: place it with the `Or.inl`/`Or.inr`
chain that makes it a proof of the whole disjunction. -/
private partial def injectAt (want : Expr) (idx : Nat) (pf : Expr) : Expr :=
  let w := want.consumeMData
  if w.isAppOfArity ``Or 2 then
    let a := w.appFn!.appArg!
    let b := w.appArg!
    if idx == 0 then mkApp3 (.const ``Or.inl []) a b pf
    else mkApp3 (.const ``Or.inr []) a b (injectAt b (idx - 1) pf)
  else pf

/--
A proof of `goal` from the clauses `hyps` — each a `(statement, proof)` pair — or `none`
where the propagation does not reach the conflict.

`goal` is the conclusion clause with its binders already introduced, and `hyps` are the
premises with the recorded substitution already applied, which is the state the step's
script is in by the time it would call `grind`.
-/
def resolve (hyps : Array (Expr × Expr)) (goal : Expr) : Option Expr := Id.run do
  let concl := disjuncts goal
  -- A conclusion with a literal that is true on its own needs no premise.
  for i in [0:concl.size] do
    let (atom, pos) := polarity concl[i]!
    if let some pf := selfTrue atom pos then
      return some (injectAt goal i pf)
  let prems := hyps.map (fun (ty, _) => disjuncts ty)
  let tails := prems.map clauseTails
  let hs := hyps.map (fun (_, pf) => pf)
  -- `False` is the empty clause: there is nothing to falsify, so propagate from nothing.
  if goal.consumeMData.isConstOf ``False then
    return propagate prems tails hs {}
  -- Falsifying the conclusion decides one atom per literal of it, and propagation then
  -- finds the conflict the inference was found by.
  let conclTails := clauseTails concl
  let goalTy := conclTails[0]!
  -- `hn : ¬goal`, as a local so the finished proof can abstract it. This is the one
  -- binder the construction makes, and `Classical.byContradiction` is what discharges
  -- it; everything under it is an application.
  let mut facts : Facts := {}
  let mut direct? : Option Expr := none
  let mut nd := mkBVar 0
  for i in [0:concl.size] do
    let (atom, pos) := polarity concl[i]!
    let mut nl := nd
    if i + 1 != concl.size then
      let rest := conclTails[i + 1]!
      nl := mkApp3 (.const ``Sat.notOrLeft []) concl[i]! rest nd
      nd := mkApp3 (.const ``Sat.notOrRight []) concl[i]! rest nd
    -- `nl : ¬atom` decides the atom false; `nl : ¬¬atom` decides it true.
    let pf := if pos then nl else mkApp2 (.const ``Sat.ofNotNot []) atom nl
    match findAtom facts.asg atom with
    | some (value, proof) =>
      -- The conclusion holds one atom at both polarities: falsifying it decides the
      -- atom twice, and the two decisions are themselves the contradiction.
      if value == pos && direct?.isNone then
        direct? := some (if value then mkApp pf proof else mkApp proof pf)
    -- The *opposite* value: falsifying a positive literal is what makes its atom false.
    | none => facts := facts.decide atom (!pos) pf
  let body? :=
    match direct? with
    | some e => some e
    | none => propagate prems tails hs facts
  let some body := body? | return none
  return some (mkApp2 (.const ``Classical.byContradiction []) goalTy
    (.lam `hn (notE goalTy) body .default))

end Vampire.Clause

/-! ## The tactic -/

namespace Vampire.Clause

open Lean Elab Tactic Meta

/--
Close the goal by propagating from the named clause hypotheses.

The names are the instantiated premises the step's script has just bound — `i0 … iₖ`,
the `have`s `LeanChecker::instantiatePremiseVars` writes — and the goal is the
conclusion with its binders introduced. `Reconstruct.lean` puts
`grind only [cases Or]` behind this, so a step the propagation does not close still
replays.

The term is checked before it is assigned. It is built by construction rather than by
search and every implicit argument is filled in from the two formulas, so the check
establishes nothing the construction did not — but a mistake here would otherwise reach
the kernel as an error against the user's theorem, with nothing to say which of a
thousand steps produced it, and the term is one clause's worth of applications rather
than a whole refutation. That is the trade `Reconstruct.lean`'s `applyChecked` makes on
the spine, for the same reason.
-/
initialize registerTraceClass `vampire.clause

syntax (name := vampireResolve) "vampire_resolve" (ppSpace colGt ident)* : tactic

elab_rules : tactic
  | `(tactic| vampire_resolve $hs*) => do
    let g ← getMainGoal
    g.withContext do
      let mut hyps : Array (Expr × Expr) := #[]
      for h in hs do
        let fv ← getFVarId h
        hyps := hyps.push (← instantiateMVars (← fv.getType), .fvar fv)
      let target ← instantiateMVars (← g.getType)
      -- A hypothesis whose statement still has a hole in it would put that hole in the
      -- proof, which `check` accepts and the kernel does not. The instantiation lines
      -- give every argument explicitly, so this does not happen; it is one cached flag
      -- to be sure of it.
      if target.hasExprMVar || hyps.any (·.1.hasExprMVar) then
        throwError "vampire_resolve: the step's statement is not yet determined"
      let some pf := resolve hyps target
        | do
          trace[vampire.clause] "no propagation for{indentD target}\nfrom\
            {indentD (MessageData.joinSep (hyps.map (·.1)).toList Format.line)}"
          throwError "vampire_resolve: the premises do not propagate to a conflict"
      try check pf
      catch e =>
        throwError "vampire_resolve: built a proof that does not typecheck\
          {indentD (← e.toMessageData.toString)}"
      g.assign pf

end Vampire.Clause
