/-
Ported from lean-smt (`Smt/Translate.lean`), Copyright (c) 2021-2022 by the authors
listed in that project's AUTHORS file. Released under Apache 2.0; see `NOTICE`.
Changes: the target is `Vampire.Term` and the attribute is `vampire_translate`;
`lam` is rejected with a message about first-order logic rather than SMT-LIB.
-/
import Lean
import Vampire.Attribute
import Vampire.Translate.Term

/-!
# Translating Lean expressions

A `Translator` handles some fragment of Lean. The traversal tries every registered
translator on the whole expression first; if none matches, it splits the expression and
recurses, so a translator only has to handle the constructs it knows about.

Along the way we record which constants and free variables the result depends on. Those
become the declarations Vampire needs, and their order is fixed by the dependency graph
in `Translate/Query.lean`.
-/

/-- Return true iff `e` contains a free variable satisfying `p`. -/
@[inline] private def Lean.Expr.hasAnyFVar' {m : Type → Type} [Monad m]
    (e : Expr) (p : FVarId → m Bool) : m Bool :=
  let rec @[specialize] visit (e : Expr) := do if !e.hasFVar then return false else
    match e with
    | Expr.forallE _ d b _ => return (← visit d) || (← visit b)
    | Expr.lam _ d b _     => return (← visit d) || (← visit b)
    | Expr.mdata _ e       => visit e
    | Expr.letE _ t v b _  => return (← visit t) || (← visit v) || (← visit b)
    | Expr.app f a         => return (← visit f) || (← visit a)
    | Expr.proj _ _ e      => visit e
    | Expr.fvar fvarId     => p fvarId
    | _                    => return false
  visit e

namespace Vampire

open Lean Meta Expr
open Attribute Term

structure TranslationM.State where
  /-- Constants the translated result depends on, propagated upwards so the caller can
  build a dependency graph. Reset at the `translateExpr` entry point. -/
  depConstants : NameSet := {}
  /-- Free variables the translated result depends on. Same purpose. -/
  depFVars : FVarIdSet := {}
  /-- Free variables introduced *by* the translation, from binders. These are bound in
  the result, so they are not dependencies. -/
  localFVars : FVarIdSet := {}
  /-- Memoises `applyTranslators?` along with what it contributed to the dependencies. -/
  cache : Std.HashMap Expr (Option (Term × NameSet × FVarIdSet)) := {}
  /-- Suffix counter making a scoped binder name unique. -/
  scopedNames : Std.HashMap Name Nat := {}
  /-- Names chosen for free variables, so the same fvar is spelled the same way in every
  formula it occurs in. -/
  uniqueFVarNames : Std.HashMap FVarId String := {}

abbrev TranslationM := StateT TranslationM.State MetaM

/--
A function translating some subset of Lean expressions into first-order `Term`s.
Register one with `@[vampire_translate]`.

The input is guaranteed well-typed in the ambient `MetaM` context. Return `some t` if
this translator handles the input, `none` if it does not.
-/
abbrev Translator := Expr → TranslationM (Option Term)

namespace Translator

private unsafe def getTranslatorsUnsafe : MetaM (List (Translator × Name)) := do
  let env ← getEnv
  let names := ((vampireExt.getState env).getD ``Translator {}).toList
  let mut translators := []
  for name in names do
    let fn ← IO.ofExcept <| Id.run <| ExceptT.run <|
      env.evalConst Translator Options.empty name
    translators := (fn, name) :: translators
  return translators

/-- The translators registered in the current environment. -/
@[implemented_by getTranslatorsUnsafe]
opaque getTranslators : MetaM (List (Translator × Name))

/-- Return a cached translation of `e`, or run `k e` and cache it. -/
def withCache (k : Translator) (e : Expr) : TranslationM (Option Term) := do
  match (← get).cache[e]? with
  | some (some (tm, depConsts, depFVars)) =>
    modify fun st => { st with
      depConstants := st.depConstants ∪ depConsts
      depFVars := st.depFVars.union depFVars }
    return some tm
  | some none => return none
  | none =>
    let depConstantsBefore := (← get).depConstants
    let depFVarsBefore := (← get).depFVars
    modify fun st => { st with depConstants := .empty, depFVars := .empty }
    let ret? ← k e
    modify fun st => { st with
      depConstants := st.depConstants ∪ depConstantsBefore
      depFVars := st.depFVars.union depFVarsBefore
      cache := st.cache.insert e <| ret?.map ((·, st.depConstants, st.depFVars)) }
    return ret?

/-- Run `k` with a variant of `n` that does not shadow anything free in `b`. -/
def withScopedName {α : Type} (n : Name) (b : Expr) (k : Name → TranslationM α) :
    TranslationM α := do
  let state ← get
  let mut n' := n
  let mut scopedNames := state.scopedNames
  while ← b.hasAnyFVar' (·.getUserName >>= (return · == n')) do
    let i := scopedNames.getD n 1
    n' := n.appendIndexAfter i
    scopedNames := scopedNames.insert n (i + 1)
  set { state with scopedNames := scopedNames }
  let k := k n'
  set state
  k

mutual

/-- `applyTranslators?`, but a failure to translate is an error. -/
partial def applyTranslators! (e : Expr) : TranslationM Term := do
  let some tm ← applyTranslators? e
    | throwError "vampire: no translator matched{indentD e}"
  return tm

/--
Compute the first-order translation of `e`.

Every registered translator is tried on the whole expression; if one succeeds its result
is used. Otherwise `e` is split and its parts translated, top-down and depth-first.
-/
partial def applyTranslators? : Translator := withCache fun e => do
  let ts ← getTranslators
  go ts e
where
  go (ts : List (Translator × Name)) : Translator := fun e => do
    for (t, nm) in ts do
      if let some tm ← t e then
        trace[vampire.translate.expr] "{e} =({nm})=> {tm}"
        return tm
    match e with
    | fvar fv =>
      if (← get).localFVars.contains fv then
        return symbolT (← fv.getUserName).toString
      else
        modify fun st => { st with depFVars := st.depFVars.insert fv }
        match (← get).uniqueFVarNames[fv]? with
        | some n => return symbolT n
        | none   => return symbolT (← fv.getUserName).toString
    | const nm _ =>
      modify fun st => { st with depConstants := st.depConstants.insert nm }
      return symbolT nm.toString
    | app f e => return appT (← applyTranslators! f) (← applyTranslators! e)
    | lam .. =>
      throwError "vampire: cannot translate{indentD e}\n\
        first-order logic has no lambdas; try instantiating or eta-expanding it"
    | forallE n t b bi => withScopedName n b fun n => do
      let tmB ← Meta.withLocalDecl n bi t (translateBody b)
      if !b.hasLooseBVars then
        -- A non-dependent arrow between non-propositions is a function sort; between
        -- propositions it is implication, which `Translate/Prop.lean` handles first.
        return arrowT (← applyTranslators! t) tmB
      else
        return forallT n.toString (← applyTranslators! t) tmB
    | letE n t v b true =>
      let tmB ← Meta.withLetDecl n t v (translateBody b)
      return letT n.toString (← applyTranslators! v) tmB
    | mdata _ e => go ts e
    | sort _ =>
      -- `Prop` is handled by a translator; anything else here is a type in term
      -- position, which is what a polymorphic constant looks like once applied.
      throwError "vampire: cannot translate{indentD e}\n\
        Vampire's logic is monomorphic, so a type cannot appear as an argument. \
        Instantiate the polymorphic constant at the types the goal uses."
    | e => throwError "vampire: cannot translate{indentD e}"
  translateBody (b : Expr) (x : Expr) : TranslationM Term := do
    modify fun s => { s with localFVars := s.localFVars.insert x.fvarId! }
    let tmB ← applyTranslators! (b.instantiate #[x])
    modify fun s => { s with localFVars := s.localFVars.erase x.fvarId! }
    return tmB

end

/-- Translate `e`, returning the term and everything it depends on. -/
def translateExpr (e : Expr) : TranslationM (Term × NameSet × FVarIdSet) := do
  modify fun st => { st with depConstants := .empty, depFVars := .empty }
  let tm ← applyTranslators! e
  trace[vampire.translate] "{e} ↦ {tm}"
  return (tm, (← get).depConstants, (← get).depFVars)

def translateExpr' (e : Expr) : TranslationM Term :=
  Prod.fst <$> translateExpr e

end Vampire.Translator

namespace Vampire

initialize Lean.registerTraceClass `vampire
initialize Lean.registerTraceClass `vampire.translate
initialize Lean.registerTraceClass `vampire.translate.expr
initialize Lean.registerTraceClass `vampire.translate.query
initialize Lean.registerTraceClass `vampire.preprocess
initialize Lean.registerTraceClass `vampire.replay
initialize Lean.registerTraceClass `vampire.timing
initialize Lean.registerTraceClass `vampire.prover

end Vampire
