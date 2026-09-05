/-
Ported from lean-smt (`Smt/Preprocess/Mono.lean`), Copyright (c) 2021-2024 by the
authors listed in that project's AUTHORS file. Released under Apache 2.0; see `NOTICE`.
-/
import Auto.Tactic
import Vampire.Preprocess.Basic

/-!
# Monomorphisation, by way of lean-auto

Vampire's logic is monomorphic first-order logic. A Lean goal need not be either, and
the gap is what `auto`'s monomorphisation procedure closes: it instantiates polymorphic
lemmas at the types the problem actually uses, resolves the instances, and replaces what
is left with fresh free variables. What comes back is a local context of uninterpreted
sorts and symbols with a `False` target — which is exactly the shape the rest of this
pipeline expects, so `mono` stands in for `pushHintsToCtx`, `intros` and `negateGoal`
together rather than running alongside them.

    variable [Group G]
    theorem inverse : ∀ (a : G), a * a⁻¹ = 1 := by
      vampire +mono [mul_assoc, one_mul, inv_mul_cancel]

becomes

    _exTy_0 : Type u
    e!_0 : _exTy_0 → _exTy_0 → _exTy_0        -- `*`
    e!_1 : _exTy_0                            -- the goal's `a`
    e!_2 : _exTy_0 → _exTy_0                  -- `⁻¹`
    e!_3 : _exTy_0                            -- `1`
    … : ¬e!_0 e!_1 (e!_2 e!_1) = e!_3
    … : ∀ x y z, e!_0 (e!_0 x y) z = e!_0 x (e!_0 y z)
    … : ∀ x, e!_0 e!_3 x = x
    … : ∀ x, e!_0 (e!_2 x) x = e!_3
    inst : Nonempty _exTy_0
    ⊢ False

This file is a port of lean-smt's, which is itself a variant of auto's own entry point:
`Auto.runAuto` collects the lemmas and then calls a solver, where what is wanted here is
the monomorphised *goal*, so the collection is repeated and `runMono` called in place of
the solver. The `'`-suffixed names are lean-smt's, kept so the two can be diffed.
-/

/-
These are lean-smt's declarations, and for a while they were in lean-smt's namespace too
-- `Auto`, which is neither library's. Two ports of the same file then declare the same
names in the same namespace, and the second import loses:

    import Vampire.Preprocess.Mono failed, environment already contains
    'Auto.InputHints'.lemmas' from Smt.Preprocess.Mono

which is at the import, so no file could have both this tactic and `smt` at all. They
live here now instead. The identifiers are unchanged, including the `'` suffixes that
are lean-smt's own, so the two files still diff cleanly; only the namespace differs, and
`open Auto` below keeps every genuine `Auto.*` name resolving as before.
-/
namespace Vampire.Preprocess.Mono

-- `Auto.Prep` as well as `Auto`: inside `namespace Auto` the `Prep.elabDefEq'` below got
-- `Auto.Prep.addRecAsLemma` from the enclosing namespace, and opening only `Auto` leaves
-- it unresolved.
open Auto Auto.Prep
open Lean Elab Embedding.Lam

/-- Not dot notation at the call sites, as it would be inside `Auto`: generalised field
notation on an `Auto.DTr` looks for `Auto.DTr.contains` and nothing else, so this has to
be applied by name. -/
def DTr.contains (self : DTr) (other : DTr) : Bool :=
  if self == other then true
  else match self with
    | .leaf _ => false
    | .node _ dtrs => dtrs.attach.any fun ⟨dtr, _⟩ => DTr.contains dtr other

structure InputHints' where
  lemmas   : Array Lemma := #[]
  lemdbs   : Array Name  := #[]
  lctxhyps : Bool        := false
deriving Inhabited, BEq

/-- From a term, produce a lemma. -/
def Prep.elabLemma' (e : Expr) (deriv : DTr) : MetaM Lemma := do
  -- abstract any remaining mvars:
  let e ← instantiateMVars e
  let abstres ← Auto.abstractMVars e
  let e := abstres.expr
  let paramNames := abstres.paramNames
  return Lemma.mk ⟨e, ← Meta.inferType e, deriv⟩ paramNames

def Prep.elabDefEq' (name : Name) : MetaM (Array Lemma) := do
  match (← getEnv).find? name with
  | some (.recInfo val) =>
    -- Generate definitional equation for recursor
    addRecAsLemma val
  | some (.defnInfo val) =>
    -- Generate definitional equation for (possibly recursive) declaration
    match ← Meta.getEqnsFor? name with
    | some eqns => eqns.mapIdxM fun i eq => do
      let us ← Meta.mkFreshLevelMVarsFor (.defnInfo val)
      elabLemma' (.const eq us) (.leaf s!"defeq {i} {name}")
    | none => return #[]
  | some (.axiomInfo _)  => return #[]
  | some (.thmInfo _)    => return #[]
  | some (.ctorInfo _)   => return #[]
  | some (.opaqueInfo _) => throwError "{decl_name%} :: Opaque constants cannot be provided as lemmas"
  | some (.quotInfo _)   => throwError "{decl_name%} :: Quotient constants cannot be provided as lemmas"
  | some (.inductInfo _) => throwError "{decl_name%} :: Inductive types cannot be provided as lemmas"
  | none => throwError "{decl_name%} :: Unknown constant {name}"

def collectHintDBLemmas' (names : Array Name) : MetaM (Array Lemma) := do
  let mut hs : Std.HashSet Name := Std.HashSet.emptyWithCapacity
  let mut ret : Array Lemma := #[]
  for name in names do
    let .some db ← findLemDB name
      | throwError "unknown lemma database {name}"
    let lemNames ← db.toHashSet
    for lname in lemNames do
      if !hs.contains lname then
        hs := hs.insert lname
        ret := ret.push (← Lemma.ofConst lname (.leaf s!"lemdb {name} {lname}"))
  return ret

def collectDefeqLemmas' (names : Array Name) : MetaM (Array Lemma) :=
  Meta.withNewMCtxDepth do
    let lemmas ← names.flatMapM Prep.elabDefEq'
    lemmas.mapM (fun (⟨⟨proof, type, deriv⟩, params⟩ : Lemma) => do
      let type ← instantiateMVars type
      return ⟨⟨proof, type, deriv⟩, params⟩)

def checkDuplicatedFact' (exprs : Array Lemma) : MetaM Unit :=
  let n := exprs.size
  for i in [0:n] do
    for j in [i+1:n] do
      if exprs[i]? == exprs[j]? then
        throwError "Auto does not accept duplicated input terms"

def checkDuplicatedLemmaDB' (names : Array Name) : MetaM Unit :=
  let n := names.size
  for i in [0:n] do
    for j in [i+1:n] do
      if names[i]? == names[j]? then
        throwError "Auto does not accept duplicated lemma databases"

/-- The `Prop` lemmas, and the inhabitation facts. -/
def collectAllLemmas' (inputHints : InputHints') (unfoldInfos : Array Prep.ConstUnfoldInfo)
    (defeqNames : Array Name) (ngoalAndBinders : Array FVarId) :
    MetaM (Array Lemma × Array Lemma) := do
  let unfoldInfos ← Prep.topoSortUnfolds unfoldInfos
  let startTime ← IO.monoMsNow
  let lctxLemmas ← collectLctxLemmas inputHints.lctxhyps ngoalAndBinders
  let lctxLemmas ← lctxLemmas.mapM (unfoldConstAndPreprocessLemma unfoldInfos)
  traceLemmas `auto.printLemmas "Lemmas collected from local context:" lctxLemmas
  checkDuplicatedFact' inputHints.lemmas
  checkDuplicatedLemmaDB' inputHints.lemdbs
  let userLemmas := inputHints.lemmas ++ (← collectHintDBLemmas' inputHints.lemdbs)
  let userLemmas ← userLemmas.mapM (unfoldConstAndPreprocessLemma unfoldInfos)
  traceLemmas `auto.printLemmas "Lemmas collected from user-provided terms:" userLemmas
  let defeqLemmas ← collectDefeqLemmas' defeqNames
  let defeqLemmas ← defeqLemmas.mapM (unfoldConstAndprepReduceDefeq unfoldInfos)
  traceLemmas `auto.printLemmas "Lemmas collected from user-provided defeq hints:" defeqLemmas
  trace[auto.tactic] "Preprocessing took {(← IO.monoMsNow) - startTime}ms"
  let inhFacts ← Inhabitation.getInhFactsFromLCtx
  let inhFacts ← inhFacts.mapM (unfoldConstAndPreprocessLemma unfoldInfos)
  traceLemmas `auto.printLemmas "Inhabitation lemmas :" inhFacts
  return (lctxLemmas ++ userLemmas ++ defeqLemmas, inhFacts)

/-- Monomorphisation introduces a sort as a bare variable, and the refutation may need
an element of it. Auto records which of the variables it introduced are the inhabitation
witnesses; this turns each into the `Nonempty` instance the replay asks for. -/
def createInhHyps : FVarId × DTr → MetaM (Option Meta.Hypothesis) := fun (fv, dtr) => do
  let s := match dtr with
    | .leaf s => s
    | .node s _ => s
  if s.startsWith "nonemptyOfAtom" || s.startsWith "lctxInh" then
    let userName ← mkFreshUserName `inst
    let type ← Meta.mkAppM ``Nonempty #[← fv.getType]
    let value ← Meta.mkAppOptM ``Nonempty.intro #[← fv.getType, Expr.fvar fv]
    return some { userName, type, value }
  return none

/-- Intro, negate, collect, monomorphise. The goal comes back as `False` under a context
of monomorphic hypotheses. -/
def mono' (declName? : Option Name) (mv : MVarId) (hints : InputHints')
    (unfoldInfos : Array Prep.ConstUnfoldInfo) (defeqNames : Array Name) := do
  let (goalBinders, newGoal) ← mv.intros
  let [nngoal] ← newGoal.apply (.const ``Classical.byContradiction [])
    | throwError "{declName?} :: Unexpected result after applying Classical.byContradiction"
  let (ngoal, absurd) ← MVarId.intro1 nngoal
  absurd.withContext do
    let (lemmas, inhFacts) ← collectAllLemmas' hints unfoldInfos defeqNames (goalBinders.push ngoal)
    let (proof, (mvarId, fvs, dtrs)) ← runMono declName? lemmas inhFacts
    mvarId.withContext do
      let hs ← dtrs.filterMapM createInhHyps
      let (_, mv) ← mvarId.assertHypotheses hs
      absurd.assign proof
      return (mv, fvs, dtrs)

end Vampire.Preprocess.Mono

namespace Vampire.Preprocess

open Lean Auto
open Vampire.Preprocess.Mono

/-- The hints, as auto's `Lemma`s, with a map back from each one's derivation tag to the
proof it came from — which is what lets a hypothesis be traced to the hint that produced
it. -/
def hintsToAutoHints (hs : Array Expr) :
    MetaM (Std.HashMap DTr Expr × InputHints' × Array Prep.ConstUnfoldInfo × Array Name) := do
  let lemmas ← hs.mapM inferLemma
  let map := .ofList (lemmas.map (fun l => (l.deriv, l.proof))).toList
  return (map, ⟨lemmas, #[], false⟩, #[], #[])
where
  inferLemma (e : Expr) : MetaM Lemma := do
    let paramNames ← getLevelParamNames e
    return Lemma.mk ⟨e, ← Meta.inferType e, (.node "vampireHint" #[.leaf s!"{e}"])⟩ paramNames
  getLevelParamNames {ω : Type} {m} [STWorld ω m] [MonadLiftT (ST ω) m] [Monad m]
      (e : Expr) : m (Array Name) := do
    let ((), names) ← (e.forEach getLevelParamName).run (m := m) {}
    return names.toArray
  getLevelParamName {m} [Monad m] (e : Expr) : StateT (Std.HashSet Name) m Unit := do
    match e with
    | .const _ lvls =>
      let names := lvls.filterMap fun lvl => do
        let .param name := lvl | none
        some name
      modify fun s => s.insertMany names
    | _ => return

/--
Monomorphise the goal and its hints.

Stands in for `pushHintsToCtx`, `intros` and `negateGoal`: auto's procedure introduces
the goal's binders, negates it, and pushes every hint into the context itself, so
running those alongside would do the work twice. What comes back is a `False` goal over
a monomorphic context. -/
def mono (mv : MVarId) (hs : Array Expr) : MetaM Result := do
  let (invMap, hints, unfoldInfos, defeqNames) ← hintsToAutoHints hs
  let (mv, fvs, dtrs) ← Mono.mono' `vampire mv hints unfoldInfos defeqNames
  let map := fvs.foldl (init := {}) fun map (fv, e) =>
    map.insert (.fvar fv) #[e]
  let map := dtrs.foldl (init := map) fun map (fv, dtr) =>
    let usedHints := invMap.filter (fun k _ => Mono.DTr.contains dtr k)
    map.insert (.fvar fv) usedHints.valuesArray
  let hs ← mv.withContext (return (← getPropHyps).map Expr.fvar)
  trace[vampire.preprocess] "monomorphised goal: {mv}"
  return { map, hs, mv }

end Vampire.Preprocess
