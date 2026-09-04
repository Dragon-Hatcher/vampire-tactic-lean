import Lean

/-!
# AVATAR's SAT refutation, by unit propagation

The last step of a refutation AVATAR contributed to is a propositional derivation over
the split variables: the solver's own resolution chain, exported step by step.
`LeanChecker::avatarRefutationByResolution` states one lemma per step of it and proves
each with `grind only [cases Or]`, and this port followed the reference in that.

On a problem where AVATAR does most of the work, that is where the whole replay's time
goes. `ALG165+1`'s derivation is 1506 steps over 116k literals and cost 15.3s of a 24s
replay; `ALG190+1`'s 21s of 34s. Not because any one step is hard — each is a resolution
over a few dozen atoms — but because `grind` rediscovers by case splitting a proof whose
shape the solver already recorded, and pays for a goal, a metavariable and a search to
do it.

A resolution step needs no search. Falsify its conclusion and its premises are a
conflict that *unit propagation* reaches: conflict analysis is what produced them, so
propagation is what closes them. This builds that proof as a term — one application per
literal, one propagation per resolved variable, no metavariables, no rewriting and no
case splitting. `Vampire/Reconstruct.lean` keeps the reference's `grind` script behind
it for a step the propagation does not close, so a derivation of another shape is slow
rather than broken.

**Every node is a named lemma applied to its arguments, never a lambda.** The lemmas
below are each one line, and each stands in for a `fun` the construction would otherwise
have to build with `withLocalDeclD` and abstract with `mkLambdaFVars`. That is the same
lesson `Vampire/Bridge.lean` records about `mkAppM`, in a different key: abstracting a
binder walks the term under it, so a chain of `k` of them walks the accumulated proof
`k` times and is quadratic in the clause. Written flatly the construction is linear, and
the term it produces is smaller — which matters twice over, because the kernel and
`mkLetFVars` both walk it afterwards.
-/

set_option autoImplicit false

namespace Vampire.Sat

open Lean Meta

/-! ## The lemmas that stand in for lambdas -/

theorem notOr {a b : Prop} (ha : ¬a) (hb : ¬b) : ¬(a ∨ b) := fun h => h.elim ha hb

theorem notOrLeft {a b : Prop} (h : ¬(a ∨ b)) : ¬a := fun x => h (.inl x)

theorem notOrRight {a b : Prop} (h : ¬(a ∨ b)) : ¬b := fun y => h (.inr y)

theorem notNotIntro {a : Prop} (h : a) : ¬¬a := fun hn => hn h

theorem ofNotNot {a : Prop} (h : ¬¬a) : a := Classical.byContradiction h

theorem absurdFun {a c : Prop} (ha : ¬a) : a → c := fun x => absurd x ha

theorem orCases {a b c : Prop} (f : a → c) (g : b → c) : a ∨ b → c := fun h => h.elim f g

theorem selfFun {a : Prop} : a → a := id

/-! ## Clauses -/

/-- A literal over an AVATAR split variable: the variable, and whether it occurs
positively. This is what `ffi/vampire_proof.cpp` exports for a SAT clause. -/
abbrev Lit := Nat × Bool

private def falseE : Expr := .const ``False []

private def notE (a : Expr) : Expr := mkApp (.const ``Not []) a

/--
The `Prop` behind each split variable a derivation mentions, and its negation.

Built once for the whole derivation rather than per step, so that two occurrences of a
literal are the *same* `Expr` and not merely equal ones. Everything downstream — the
sharing in the assembled term, `Expr.abstract`'s cache, the kernel's — is keyed on
pointers.
-/
structure Atoms where
  pos : Std.HashMap Nat Expr
  neg : Std.HashMap Nat Expr

/-- The atom table for every variable in `clauses`, or `none` if one has no `Prop`
behind it — an AVATAR split that has not been defined, which is a bug elsewhere and
which the caller reports rather than guesses at. -/
def Atoms.of (atomOf : Nat → Option Expr) (clauses : Array (Array Lit)) : Option Atoms :=
  Id.run do
    let mut pos : Std.HashMap Nat Expr := {}
    let mut neg : Std.HashMap Nat Expr := {}
    for ls in clauses do
      for (v, _) in ls do
        unless pos.contains v do
          let some a := atomOf v | return none
          pos := pos.insert v a
          neg := neg.insert v (notE a)
    return some { pos, neg }

/-- The `Prop` a literal denotes. -/
def Atoms.lit (as : Atoms) (l : Lit) : Expr :=
  (if l.2 then as.pos[l.1]? else as.neg[l.1]?).getD falseE

/-- The atom a literal is over. -/
def Atoms.atom (as : Atoms) (v : Nat) : Expr := as.pos[v]?.getD falseE

/--
The type of every suffix of a clause: `tails[i]` is the disjunction of `ls[i:]`, and
`tails[ls.size]` is `False`.

Right-nested, and `False` when the clause is empty — which is what `satClauseExpr`
builds and what `LeanChecker::outputSatClause` prints. Every suffix is what the walk
down a clause needs: at literal `i` it is looking at `ls[i] ∨ tails[i+1]`.
-/
def clauseTails (as : Atoms) (ls : Array Lit) : Array Expr := Id.run do
  let mut tails := Array.replicate (ls.size + 1) falseE
  for k in [0:ls.size] do
    let i := ls.size - 1 - k
    let l := as.lit ls[i]!
    tails := tails.set! i <|
      if i + 1 == ls.size then l else mkApp2 (.const ``Or []) l tails[i + 1]!
  return tails

/-! ## The assignment -/

/-- What an assignment holds for a variable it has decided: the value, and a proof of
the literal that value makes true — `sA` where it is true, `¬sA` where it is false. -/
abbrev Assign := Std.HashMap Nat (Bool × Expr)

/-- `¬(the literal)`, for a literal the assignment falsifies. -/
private def negLit (as : Atoms) (asg : Assign) (l : Lit) : MetaM Expr := do
  let some (b, hb) := asg[l.1]?
    | throwError "vampire: the SAT refutation's assignment does not decide sA{l.1}"
  if b == l.2 then
    throwError "vampire: the SAT refutation's assignment does not falsify \
      {if l.2 then "" else "¬"}sA{l.1}"
  -- `hb : ¬sA` already negates a positive literal; a negative one wants `¬¬sA`.
  if l.2 then return hb
  else return mkAppN (.const ``notNotIntro []) #[as.atom l.1, hb]

/-- `¬(the clause)`, for a clause every literal of which the assignment falsifies. -/
private def negClause (as : Atoms) (asg : Assign) (ls : Array Lit) (tails : Array Expr) :
    MetaM Expr := do
  let mut e ← negLit as asg ls[ls.size - 1]!
  for k in [1:ls.size] do
    let i := ls.size - 1 - k
    let nl ← negLit as asg ls[i]!
    e := mkAppN (.const ``notOr []) #[as.lit ls[i]!, tails[i + 1]!, nl, e]
  return e

/--
`clause → (the literal `target`)`, for a clause whose only literal the assignment does
not falsify is `target`. This is one step of unit propagation.
-/
private def propagateFn (as : Atoms) (asg : Assign) (ls : Array Lit)
    (tails : Array Expr) (target : Lit) : MetaM Expr := do
  let motive := as.lit target
  -- Every literal but the propagated one is falsified, so its branch is absurd.
  let branch (l : Lit) : MetaM Expr := do
    if l == target then return mkAppN (.const ``selfFun []) #[motive]
    return mkAppN (.const ``absurdFun []) #[as.lit l, motive, ← negLit as asg l]
  let mut e ← branch ls[ls.size - 1]!
  for k in [1:ls.size] do
    let i := ls.size - 1 - k
    let left ← branch ls[i]!
    e := mkAppN (.const ``orCases []) #[as.lit ls[i]!, tails[i + 1]!, motive, left, e]
  return e

/-- What a clause is under an assignment. -/
private inductive Status
  /-- Some literal is already true: the clause says nothing new. -/
  | satisfied
  /-- Every literal is false: the clause is the conflict. -/
  | conflict
  /-- Exactly one literal is undecided, and the rest are false. -/
  | unit (l : Lit)
  /-- More than one literal is undecided. -/
  | undecided

private def status (asg : Assign) (ls : Array Lit) : Status := Id.run do
  -- A variable can occur twice in a clause, so it is the *distinct* undecided literals
  -- that decide whether the clause propagates.
  let mut free : Array Lit := #[]
  for l in ls do
    match asg[l.1]? with
    | some (b, _) => if b == l.2 then return .satisfied
    | none => unless free.contains l do free := free.push l
  if free.isEmpty then .conflict
  else if free.size == 1 then .unit free[0]!
  else .undecided

/--
`False` from the premises under `asg`, by unit propagation. `none` if propagation stalls
with no clause in conflict — which for a recorded resolution step does not happen, and
where it did the caller falls back to the reference's script.

Propagation does not nest: each derived literal is a term in its own right, so it goes
into the assignment and the loop carries on rather than opening a scope.
-/
private partial def propagate (as : Atoms) (prems : Array (Array Lit))
    (tails : Array (Array Expr)) (hs : Array Expr) (asg0 : Assign) :
    MetaM (Option Expr) := do
  let mut asg := asg0
  -- One propagation decides one variable, so there are no more rounds than there are
  -- literals in the premises.
  let mut fuel := prems.foldl (fun n c => n + c.size) 1
  while fuel > 0 do
    fuel := fuel - 1
    let mut unit? : Option (Nat × Lit) := none
    let mut conflict? : Option Nat := none
    for k in [0:prems.size] do
      match status asg prems[k]! with
      | .conflict => conflict? := some k; break
      | .unit l => if unit?.isNone then unit? := some (k, l)
      | _ => pure ()
    if let some k := conflict? then
      -- The empty clause *is* `False`, so there is nothing to eliminate.
      if prems[k]!.isEmpty then return some hs[k]!
      let nc ← negClause as asg prems[k]! tails[k]!
      return some (mkApp nc hs[k]!)
    let some (k, l) := unit? | return none
    let f ← propagateFn as asg prems[k]! tails[k]! l
    asg := asg.insert l.1 (l.2, mkApp f hs[k]!)
  return none

/--
The lemma for one step of the solver's derivation: `C₁ → … → Cₙ → D`, where every `Cᵢ`
and `D` is a clause over the split variables. `none` where propagation does not reach
the conflict.

The result is closed, so nothing about the local context reaches it — which is the other
half of why the reference's script was expensive here, since `grind` reads the context
and a replay's context carries every definition bound so far.
-/
def resolveStep (as : Atoms) (prems : Array (Array Lit)) (concl : Array Lit) :
    MetaM (Option Expr) := do
  let tails := prems.map (clauseTails as)
  let conclTails := clauseTails as concl
  let decls := tails.mapIdx fun k t => (Name.mkSimple s!"h{k}", fun _ => pure t[0]!)
  withLocalDeclsD decls fun hs => do
    let body? ←
      if concl.isEmpty then
        propagate as prems tails hs {}
      else
        let goal := conclTails[0]!
        -- Falsifying the conclusion decides one variable per literal of it, and
        -- propagation then finds the conflict the solver found.
        let inner ← withLocalDeclD `hn (notE goal) fun hn => do
          let mut asg : Assign := {}
          let mut direct? : Option Expr := none
          let mut nd := hn
          for i in [0:concl.size] do
            let (v, pol) := concl[i]!
            let lt := as.lit concl[i]!
            -- `nd : ¬(lt ∨ tails[i+1])` splits into `¬lt` and `¬tails[i+1]`; at the
            -- last literal there is no tail and `nd` is already its negation.
            let mut nl := nd
            if i + 1 != concl.size then
              let rest := conclTails[i + 1]!
              nl := mkAppN (.const ``notOrLeft []) #[lt, rest, nd]
              nd := mkAppN (.const ``notOrRight []) #[lt, rest, nd]
            -- `nl : ¬sA` decides the variable false; `nl : ¬¬sA` decides it true.
            let pf := if pol then nl else mkAppN (.const ``ofNotNot []) #[as.atom v, nl]
            match asg[v]? with
            | some (b, hb) =>
              -- The conclusion holds one variable at both polarities: falsifying it
              -- decides the variable twice, and the two decisions are themselves the
              -- contradiction.
              if b != !pol && direct?.isNone then
                direct? := some (if b then mkApp pf hb else mkApp hb pf)
            | none => asg := asg.insert v (!pol, pf)
          match direct? with
          | some e => return some (← mkLambdaFVars #[hn] e)
          | none =>
            match ← propagate as prems tails hs asg with
            | none => return none
            | some e => return some (← mkLambdaFVars #[hn] e)
        pure <| inner.map fun f =>
          mkAppN (.const ``Classical.byContradiction []) #[goal, f]
    match body? with
    | none => return none
    | some body => return some (← mkLambdaFVars hs body)

end Vampire.Sat
