import VampireReplay.Fact
import VampireReplay.Translate

/-!
Monomorphization: the instances of polymorphic facts a first-order problem can use.

A fact stated over types and instances -- `mul_assoc`, a hypothesis
`∀ {α} (x : α), f x = x` -- says nothing to a first-order prover until those
are chosen. They are chosen from the problem: a constant the problem applies at
a type (`@HMul.hMul ℝ ℝ ℝ _`, `@f ℕ`) is a *constant instance*, and a
polymorphic fact applying the same constant at its own type parameters is
instantiated so that the two agree. Instance parameters are then found by type
class synthesis rather than matched, so they come out as Lean would choose them;
where they differ from the problem's by the path taken, the translation names
the two alike (`Vampire.sameAs`). Each new instance can apply constants at new
types, which can instantiate further facts, until nothing new comes or a bound
is reached.

A monomorphic problem has nothing to instantiate, and costs nothing here.
-/

namespace Vampire.Monomorphize

open Lean Meta

/--
How many instances monomorphization makes before it stops. Facts that keep
making instances at ever larger types -- one about `List α` instantiated at
`List ℕ`, then at `List (List ℕ)` -- would otherwise never stop. Instances are
made breadth first, nearest the problem first, so what this leaves out is the
farthest from it; reaching it is traced, not silent.
-/
private def maxInstances : Nat := 1000

/--
How many pairings of a pattern with a constant instance monomorphization tries
before it stops, whatever they make: most make nothing, and a fact with several
type parameters can be paired without end without making a full instance.
Pairings are tried breadth first too, so this leaves out the farthest.
-/
private def maxPairings : Nat := 20000

/--
Whether a type parameter may be instantiated at `τ`: only at a type of
individuals, since an instance at a proposition, a function type, a universe
or a class says nothing a first-order problem can state, and would only make
further instances that say nothing either.
-/
private def isIndividualType (τ : Expr) : MetaM Bool := do
  if (← whnfR τ).isForall then return false
  isIndividualDomain τ

/--
Whether a binder of a fact's leading telescope is one of its parameters: a type
or an instance it is stated over, which monomorphization chooses, rather than an
individual, which the instance still quantifies over. A proposition quantified
over is no parameter: it is instantiated at `True` and at `False` later.
-/
private def isParameter (x : Expr) : MetaM Bool := do
  let decl ← x.mvarId!.getDecl
  let domain ← instantiateMVars decl.type
  if (← isClass? domain).isSome then return true
  match ← whnfR domain with
  | .sort u => return !(← instantiateLevelMVars u).isZero
  | _ => return false

/--
The constants of logic: applied at a type, they say nothing of which types a
fact is for -- every type has equality and quantifiers -- so they are neither
constant instances nor patterns. Were they, a fact quantifying over `α` and
`List α` would instantiate itself at `List ℕ`, `List (List ℕ)` and on without
end, each instance's quantifier matching the next. A fact whose only patterns
would be these is a fact of logic, which the prover has already.
-/
private def logical : List Name :=
  [``Eq, ``Ne, ``HEq, ``Exists, ``Iff, ``And, ``Or, ``Not, ``ite, ``dite, ``Decidable]

/-- The parameters of each function met (`Vampire.parameters`), by the function, for a whole run. -/
private abbrev Positions := IO.Ref (Std.HashMap Expr (Array Bool))

/-- What is collected of an expression: each constant applied at parameters, with them. -/
private abbrev Collect := ReaderT Positions (StateRefT (Array (Expr × Array Expr)) MetaM)

/--
The constants `e` applies at parameters (`Vampire.parameters`), each with the
parameters it is applied at, where those mention no variable bound inside `e`.
-/
private partial def collect (e : Expr) : Collect Unit := do
  match e with
  | .app .. =>
    let fn := e.getAppFn
    let args := e.getAppArgs
    if (fn.isConst && !logical.contains fn.constName!) || fn.isFVar then
      let cache ← read
      let positions ← match (← cache.get)[fn]? with
        | some p => pure p
        | none => do
          let p ← try parameters (← inferType fn) catch _ => pure #[]
          cache.modify (·.insert fn p)
          pure p
      let mut k := 0
      while k < args.size && (positions[k]?.getD false) do k := k + 1
      let params := args.extract 0 k
      if k > 0 && !params.any (·.hasLooseBVars) then
        modify (·.push (fn, params))
    else
      collect fn
    for a in args do collect a
  | .lam _ d b _ | .forallE _ d b _ => collect d; collect b
  | .letE _ t v b _ => collect t; collect v; collect b
  | .mdata _ b | .proj _ _ b => collect b
  | _ => return

/-- `collect`, run on each expression. -/
private def collectAll (cache : Positions) (es : Array Expr) : MetaM (Array (Expr × Array Expr)) := do
  let ((), out) ← ((es.forM collect).run cache).run #[]
  return out

/--
A fact with some of its leading binders given values: `values[i]` for the
`i`th, where it has one, the rest still bound. Values never mention the binders
left bound, which is what lets them be given in place.
-/
private partial def specialize (proof type : Expr) : List (Option Expr) → MetaM (Expr × Expr)
  | [] => return (proof, type)
  | v :: rest => do
    let type ← if type.isForall then pure type else whnfR type
    let .forallE n d b bi := type
      | throwError "monomorphization expected a binder in{indentExpr type}"
    match v with
    | some x => specialize (mkApp proof x) (b.instantiate1 x) rest
    | none =>
      withLocalDecl n bi d fun y => do
        let (p, t) ← specialize (mkApp proof y) (b.instantiate1 y) rest
        return (← mkLambdaFVars #[y] p, ← mkForallFVars #[y] t)

/--
A fact opened for matching, once: its universe levels and leading binders as
metavariables, which binders are parameters, and its patterns -- the constants
it applies at parameters, with those -- which `instanceOf` numbers.
-/
private structure Opened where
  fact : Fact
  levels : List Level
  type : Expr
  binders : Array Expr
  parameter : Array Bool
  patterns : Array (Expr × Array Expr)
deriving Inhabited

/-- `f` opened for matching (`Opened`). -/
private def openFact (cache : Positions) (f : Fact) : MetaM Opened := do
  let levels ← f.levelParams.mapM fun _ => mkFreshLevelMVar
  let type := f.type.instantiateLevelParams f.levelParams levels
  let (binders, _, body) ← withReducible <| forallMetaTelescopeReducing type
  let parameter ← binders.mapM isParameter
  let patterns ← collectAll cache (#[body] ++ (← binders.mapM fun x => do inferType x))
  return { fact := f, levels, type, binders, parameter, patterns }

/-- Whether an opened fact is polymorphic: over universe levels, or over types or instances. -/
private def Opened.polymorphic (o : Opened) : Bool :=
  !o.fact.levelParams.isEmpty || o.parameter.any id

/--
Whether an opened fact quantifies over functions. Where the problem has no
function sorts (`Vampire.functionSortsOf`), none of its instances could be
stated in first-order logic, so it is not instantiated at all, and leaves the
instances that can be stated their place under `maxInstances`.
-/
private def Opened.quantifiesOverFunctions (o : Opened) : MetaM Bool :=
  (o.binders.zip o.parameter).anyM fun (x, isParam) => do
    if isParam then return false
    let domain ← instantiateMVars (← inferType x)
    -- A hypothesis is a proposition, implication or not; a function is no proposition.
    return (← whnfR domain).isForall && !(← isProp domain)

/--
The instance of an opened polymorphic fact its pattern `pattern` makes, matched
against the constant instance `(head', params')`; `none` where they do not
match, or the match chooses nothing.

The pattern is unified with the constant instance at its type arguments, not its
instances, and instance parameters whose types are then settled are
synthesized; all of it undone afterwards, so the fact stays open for the next
pairing. Universe levels nothing settles are left as levels the instance is
stated over, or, where nothing else is left polymorphic, taken at `0`.
-/
private def instanceOf (o : Opened) (pattern : Nat) (ci : Expr × Array Expr) :
    MetaM (Option Fact) := do
  let saved ← saveState
  try go finally saved.restore
where
  go : MetaM (Option Fact) := do
    let individuals := (o.binders.zip o.parameter).filterMap fun (x, p) =>
      if p then none else some x.mvarId!
    let some (head, params) := o.patterns[pattern]? | return none
    let (head', params') := ci
    unless params.size == params'.size do return none
    unless ← isDefEq head head' do return none
    for (p, p') in params.zip params' do
      if (← isClass? (← inferType p)).isSome then continue
      -- A parameter that depends on an individual (`Fin n` over `n`) has no
      -- value the instance can be given in place.
      if ((← instantiateMVars p).find? fun x => x.isMVar && individuals.contains x.mvarId!).isSome then
        return none
      unless ← isDefEq p p' do return none
    -- What the match chose, and the instances that settles.
    let mut values := #[]
    let mut chose := false
    for (x, isParam) in o.binders.zip o.parameter do
      let v ← instantiateMVars x
      if !isParam then
        values := values.push none
      else if !v.hasExprMVar then
        -- A type parameter at what is no type of individuals: see `isIndividualType`.
        if (← isClass? (← inferType x)).isNone && !(← isIndividualType v) then return none
        values := values.push (some v)
        chose := true
      else
        let domain ← instantiateMVars (← inferType x)
        if !domain.hasExprMVar && (← isClass? domain).isSome then
          match ← (synthInstance? domain : MetaM (Option Expr)) with
          | some inst =>
            x.mvarId!.assign inst
            values := values.push (some inst)
          | none => return none
        else
          values := values.push none
    unless chose do return none
    let chosen ← values.mapM fun v => v.mapM (instantiateMVars ·)
    let f := o.fact
    let (proof, type) ← specialize (f.proof.instantiateLevelParams f.levelParams o.levels)
      o.type chosen.toList
    let proof ← instantiateMVars proof
    let type ← instantiateMVars type
    if proof.hasExprMVar || type.hasExprMVar then return none
    -- Universe levels the match did not settle: still levels the instance is
    -- stated over where it is still polymorphic, and otherwise any level will do.
    let open_ := ((collectLevelMVars {} type).result ++ (collectLevelMVars {} proof).result).toList.eraseDups
    let stillPolymorphic := chosen.zip o.parameter |>.any fun (v, p) => p && v.isNone
    let names := (List.range open_.length).map fun i => Name.mkSimple s!"u_mono{i}"
    for (m, n) in open_.zip names do
      assignLevelMVar m (if stillPolymorphic then .param n else Level.zero)
    return some { proof := ← instantiateMVars proof, type := ← instantiateMVars type
                  levelParams := if stillPolymorphic then names else []
                  source := f.source, derived := true }

/--
What a constant instance or a pattern can only match one with the same of: its
head, levels left out, and how many parameters it is applied at.
-/
private def headKey (head : Expr) (params : Array Expr) : Expr × Nat :=
  (match head with | .const n _ => mkConst n | e => e, params.size)

/--
What tells constant instances apart for monomorphization: the constant and its
parameters, but for its instance arguments, which matching does not read. The
same `+` at `ℝ` reached through several instances is then one constant
instance, matched once, rather than one per path, each making the same instances.
-/
private def ciKey (head : Expr) (params : Array Expr) : MetaM Expr := do
  return mkAppN head (← params.mapM fun p => do
    if (← isClass? (← inferType p)).isSome then pure (mkSort .zero) else pure p)

/-- `todo` with a pairing to try in generation `g`. -/
private def schedule (todo : Array (Array (Nat × Nat × Nat))) (g : Nat) (pair : Nat × Nat × Nat) :
    Array (Array (Nat × Nat × Nat)) :=
  let todo := if todo.size ≤ g then todo ++ Array.replicate (g + 1 - todo.size) #[] else todo
  todo.modify g (·.push pair)

/--
The facts with each polymorphic one replaced by its instances: the monomorphic
facts as they were, then the instances, in the order they were found.
-/
def monomorphize (facts : Array Fact) (functions : Bool := false) : MetaM (Array Fact) :=
    withNewMCtxDepth do
  let cache : Positions ← IO.mkRef {}
  let mut mono := #[]
  let mut poly : Array Opened := #[]
  for f in facts do
    if f.levelParams.isEmpty && !(← withNewMCtxDepth (do
        let (xs, _, _) ← withReducible <| forallMetaTelescopeReducing f.type
        xs.anyM isParameter)) then
      mono := mono.push f
      continue
    let o ← openFact cache f
    if !o.parameter.any id then
      -- Polymorphic in its universe levels alone: any levels will do.
      let zeros := f.levelParams.map fun _ => Level.zero
      mono := mono.push { f with proof := f.proof.instantiateLevelParams f.levelParams zeros
                                 type := f.type.instantiateLevelParams f.levelParams zeros
                                 levelParams := [] }
    else if !functions && (← o.quantifiesOverFunctions) then
      trace[vampire.monomorphize] "not instantiated, as it quantifies over functions: {f.type}"
    else poly := poly.push o
  if poly.isEmpty then return mono
  let polymorphic := poly.size
  -- The constant instances, keyed by what they are so as to be met once.
  let mut cis : Array (Expr × Array Expr) := #[]
  -- How deep each constant instance, and each polymorphic fact, comes from.
  let mut ciDepth : Array Nat := #[]
  let mut known : Std.HashSet Expr := {}
  -- The constant instances, and the patterns of the polymorphic facts, by
  -- `headKey`: only those with the same are tried against each other.
  let mut cisByKey : Std.HashMap (Expr × Nat) (Array Nat) := {}
  let mut patternsByKey : Std.HashMap (Expr × Nat) (Array (Nat × Nat)) := {}
  let mut polyDepth : Array Nat := poly.map fun _ => 0
  -- Every pairing of a polymorphic fact's pattern with a constant instance of
  -- the same key is tried once: those of a new fact with the instances so far,
  -- and those of a new instance with the facts so far. Each is tried in the
  -- generation of the instance it would make -- one more than the deeper of
  -- the two it pairs -- and generations in order, breadth first.
  let mut todo : Array (Array (Nat × Nat × Nat)) := #[]
  for (head, params) in ← collectAll cache (mono.map (·.type)) do
    let key ← ciKey head params
    unless known.contains key do
      known := known.insert key
      cis := cis.push (head, params)
      ciDepth := ciDepth.push 0
      cisByKey := cisByKey.alter (headKey head params) fun js => some ((js.getD #[]).push (cis.size - 1))
  for (o, i) in poly.zipIdx do
    for ((head, params), k) in o.patterns.zipIdx do
      let key := headKey head params
      patternsByKey := patternsByKey.alter key fun ps => some ((ps.getD #[]).push (i, k))
      for j in cisByKey.getD key #[] do todo := schedule todo 1 (i, k, j)
  let mut seen : Std.HashSet Expr := (facts.map (·.type)).foldl (·.insert ·) {}
  let mut made := 0
  let mut tried := 0
  let mut out := #[]
  let mut generation := 0
  let mut next := 0
  while generation < todo.size do
    let some (i, k, j) := todo[generation]![next]?
      | generation := generation + 1; next := 0; continue
    next := next + 1
    let depth := max polyDepth[i]! ciDepth[j]! + 1
    tried := tried + 1
    if tried > maxPairings then
      trace[vampire] "monomorphization stopped after trying {maxPairings} pairings, having \
        made {out.size} instances"
      return mono ++ out
    let some inst ← instanceOf poly[i]! k cis[j]! | continue
    if seen.contains inst.type then continue
    seen := seen.insert inst.type
    made := made + 1
    trace[vampire.monomorphize] "generation {depth}: {inst.type}"
    if made > maxInstances then
      trace[vampire] "monomorphization stopped after {maxInstances} instances"
      return mono ++ out
    let o ← openFact cache inst
    if o.polymorphic then
      poly := poly.push o
      polyDepth := polyDepth.push depth
      for ((head, params), k') in o.patterns.zipIdx do
        let key := headKey head params
        patternsByKey := patternsByKey.alter key fun ps => some ((ps.getD #[]).push (poly.size - 1, k'))
        for j' in cisByKey.getD key #[] do
          todo := schedule todo (max depth ciDepth[j']! + 1) (poly.size - 1, k', j')
    else
      out := out.push inst
      for (head, params) in ← collectAll cache #[inst.type] do
        let distinct ← ciKey head params
        unless known.contains distinct do
          known := known.insert distinct
          cis := cis.push (head, params)
          ciDepth := ciDepth.push depth
          let key := headKey head params
          cisByKey := cisByKey.alter key fun js => some ((js.getD #[]).push (cis.size - 1))
          for (i', k') in patternsByKey.getD key #[] do
            todo := schedule todo (max polyDepth[i']! depth + 1) (i', k', cis.size - 1)
  trace[vampire] "monomorphization made {out.size} instances of {polymorphic} polymorphic \
    facts, from {tried} pairings of a pattern with a constant instance tried, over \
    {todo.size} generations"
  return mono ++ out

initialize registerTraceClass `vampire.monomorphize

end Vampire.Monomorphize
