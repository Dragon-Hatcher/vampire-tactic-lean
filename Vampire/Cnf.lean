import Lean

/-!
# Clausifying a formula by construction, not by rewriting

`LeanChecker::clausify` transforms a parent into CNF and destructures the conjunction,
and this port followed it through VampLean's `cnfify`:

    simp only [cnf1, cnf2, and_assoc] at h
    simp only [cnf_prenex1, cnf_prenex2, cnf_prenex3] at h

Over `bench-tptp/` that is the single largest thing left in a replay — 10.4s across 843
parents, and on the five heaviest problems 2.96s of it in ten calls. A sample of one of
those runs is `Lean.Meta.Simp.simpLoop` and `simpAppUsingCongr` all the way down: the
cost is not deciding *what* to rewrite, it is the congruence proof simp builds from the
root of a several-hundred-atom formula to each of the several hundred sites.

The transformation itself is three rules and no search:

    (a ∧ b) ∨ c     ↦  (a ∨ c) ∧ (b ∨ c)       distribute
    c ∨ (a ∧ b)     ↦  (c ∨ a) ∧ (c ∨ b)
    ∀ x, a x ∧ b x  ↦  (∀ x, a x) ∧ (∀ x, b x) push the prefix into the conjuncts

so the CNF of a formula is determined by its shape, and so is the proof. `clauses` walks
the formula once and returns each clause of the CNF together with a *function* from the
formula to that clause — a function and not a proof, because distributing over a
disjunction is a case analysis and each case needs the whole of its own side.
`Vampire/Reconstruct.lean` applies them all to the parent's one proof at the end.

**Nothing is assembled that is only going to be taken apart.** The caller wants the
clauses, and the conjunction was only ever the shape simp had to leave them in;
`andLeaves` then walked back down it building an `And.left`/`And.right` chain per leaf.
Here each clause's function is built directly and the conjunction is never made.

**Every node is a named lemma applied to its arguments**, for the reason
`Vampire/Sat.lean` records: a chain of abstractions walks the accumulated term once per
binder and is quadratic in the formula. The one exception is a quantifier prefix, which
has to be abstracted — and that is done once per clause over that clause's own function,
whose size is the clause and not the formula.

This is a *weaker* procedure than `cnfify`, deliberately: anything that is not a
conjunction, a disjunction or a universal prefix is a literal, which is exactly where
simp's rules stop firing too. Where it declines — a formula whose CNF is wider than
`maxClauses`, which is the one thing distribution can do badly —
`Vampire/Reconstruct.lean` runs `cnfify` as before.
-/

set_option autoImplicit false

namespace Vampire.Cnf

open Lean Meta

/-- How wide a CNF this will build. Distribution multiplies, so a disjunction of
conjunctions of conjunctions can have a CNF exponentially wider than itself;
`SYN472+1`'s conjecture, the widest in the benchmark, clausifies 196 ways. Past this the
caller falls back to `cnfify`, which has its own `maxSteps` for the same reason. -/
def maxClauses : Nat := 4096

/-! ## The lemmas that stand in for lambdas -/

theorem andLeft {a b c : Prop} (f : a → c) (h : a ∧ b) : c := f h.1

theorem andRight {a b c : Prop} (f : b → c) (h : a ∧ b) : c := f h.2

/-- Distribution. The clause `ca ∨ cb` follows from `a ∨ b` by cases, and each case is
the clause its own side yields — which is why the walk returns functions. -/
theorem orDist {a b ca cb : Prop} (f : a → ca) (g : b → cb) (h : a ∨ b) : ca ∨ cb :=
  h.elim (fun x => .inl (f x)) (fun y => .inr (g y))

/-- A literal is its own clause. -/
theorem selfImp {a : Prop} : a → a := id

/-! ## The walk -/

/-- One clause of the CNF: its statement, and a function from the formula to it. -/
abbrev Producer := Expr × Expr

private def atom (ty : Expr) : Array Producer :=
  #[(ty, mkApp (.const ``selfImp []) ty)]

/-- How many leading universal binders `ty` has that the body actually uses.

A non-dependent arrow is an implication and not a quantifier, and a `∀` over a variable
the body never mentions is one `cnf_prenex1` would need `Nonempty` for. Both are
literals here, which is where simp's rules stop as well. -/
private partial def prefixOf (ty : Expr) : Nat :=
  match ty.consumeMData with
  | .forallE _ _ b _ => if b.hasLooseBVars then 1 + prefixOf b else 0
  | _ => 0

/--
The clauses of `ty`'s CNF, each with a function from `ty` to it. `none` where the CNF
would be wider than `maxClauses`.

The recursion is over the formula and every case is one of `cnfify`'s three rules; a
formula that is none of them is a literal and its own clause.

`witness` supplies an element of a sort, for the binders a clause turns out not to use —
see the quantifier case. It is `Reconstruct.inhabitant`, passed in rather than imported
so that this module depends on nothing.
-/
partial def clauses (witness : Expr → MetaM (Option Expr)) (ty0 : Expr) :
    MetaM (Option (Array Producer)) := do
  let ty := (← instantiateMVars ty0).consumeMData
  if ty.isAppOfArity ``And 2 then
    let a := ty.appFn!.appArg!
    let b := ty.appArg!
    let some ls ← clauses witness a | return none
    let some rs ← clauses witness b | return none
    if ls.size + rs.size > maxClauses then return none
    return some <|
      ls.map (fun (c, f) => (c, mkAppN (.const ``andLeft []) #[a, b, c, f])) ++
      rs.map (fun (c, f) => (c, mkAppN (.const ``andRight []) #[a, b, c, f]))
  if ty.isAppOfArity ``Or 2 then
    let a := ty.appFn!.appArg!
    let b := ty.appArg!
    let some ls ← clauses witness a | return none
    let some rs ← clauses witness b | return none
    if ls.size * rs.size > maxClauses then return none
    -- The product, in the order the two `cnf` rules reach it: the left factor
    -- outermost, so a formula that is already a clause comes back unchanged and with
    -- its literals in their own order.
    let mut out : Array Producer := #[]
    for (ca, f) in ls do
      for (cb, g) in rs do
        out := out.push (mkApp2 (.const ``Or []) ca cb,
          mkAppN (.const ``orDist []) #[a, b, ca, cb, f, g])
    return some out
  let n := prefixOf ty
  if n > 0 then
    -- `∀ xs, φ` where `φ`'s CNF is `⋀ᵢ Cᵢ`: one clause `∀ xs, Cᵢ` each. This is the one
    -- case that abstracts, and it abstracts each clause's own function rather than
    -- anything that accumulates — `mkLambdaFVars` walks a clause, not the formula.
    return ← forallBoundedTelescope ty n fun xs body => do
      let some ps ← clauses witness body | return none
      let mut out : Array Producer := #[]
      for (c, f) in ps do
        -- Only the binders this clause uses. That is `cnf_prenex1` — `(∀ x, a x ∧ b) ↔
        -- (∀ x, a x) ∧ b`, whose `b` has no binder at all — and it is not cosmetic: a
        -- clause Vampire recorded binds exactly its own variables, so a leaf carrying
        -- the parent's whole prefix has a different `Bridge.sig` and is not found.
        --
        -- It is also where `cnf_prenex1`'s `[Nonempty α]` comes in: dropping a binder
        -- means the parent has to be applied at *something*, and the something is the
        -- same witness the rest of the replay uses. Vampire assumes every sort is
        -- non-empty and its proofs use that, so this asserts nothing new — but where no
        -- witness can be had the binder is kept, which is sound and merely coarser.
        let used ← xs.filterM fun x => return c.containsFVar x.fvarId!
        -- The parent still has to be applied at every binder, so an unused one needs a
        -- term: `x` where the clause mentions it, a witness where it does not.
        let mut args : Array Expr := #[]
        let mut haveWitnesses := true
        if used.size != xs.size then
          for x in xs do
            if c.containsFVar x.fvarId! then args := args.push x
            else
              match ← witness (← inferType x) with
              | some w => args := args.push w
              | none => haveWitnesses := false; break
        let dropUnused := used.size != xs.size && haveWitnesses
        let binders := if dropUnused then used else xs
        let at_ := if dropUnused then args else xs
        let stmt ← mkForallFVars binders c
        -- The witnesses go through the clause's *function* as well, not only through the
        -- application. `f`'s implicit arguments are the subformulas it distributed over,
        -- and those mention binders this clause dropped; abstracting only the ones the
        -- clause kept would leave the rest free in the proof term, which the kernel
        -- reports as "declaration has free variables" a whole refutation later.
        let f := if dropUnused then f.replaceFVars xs at_ else f
        let fn ← withLocalDeclD `hc ty fun hc => do
          mkLambdaFVars #[hc] (← mkLambdaFVars binders (mkApp f (mkAppN hc at_)))
        out := out.push (stmt, fn)
      return some out
  return some (atom ty)

/--
The clauses as one conjunction, with its proof.

The leaf path never needs this — each clause's own function is the proof of it — but
`Reconstruct.clauseFrom`'s fallback states its lemma over the whole CNF and splits it
with `vampire_finish_clausify`, which wants a conjunction to split. Built here so that
the fallback is the same tactic over the same formula it was before, and cheap because
it is one node per clause over types that already exist.
-/
def conjoin (clauses : Array Producer) : Option (Expr × Expr) := do
  if clauses.isEmpty then none
  let mut (ty, pf) := clauses[clauses.size - 1]!
  for k in [1:clauses.size] do
    let (tyk, pfk) := clauses[clauses.size - 1 - k]!
    pf := mkApp4 (.const ``And.intro []) tyk ty pfk pf
    ty := mkApp2 (.const ``And []) tyk ty
  return (ty, pf)

end Vampire.Cnf
