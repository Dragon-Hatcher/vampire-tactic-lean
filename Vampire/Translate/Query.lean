/-
Ported from lean-smt (`Smt/Translate/Query.lean`), Copyright (c) 2021-2022 by the
authors listed in that project's AUTHORS file. Released under Apache 2.0; see `NOTICE`.
Changes: the `Nat` special cases, the datatype declarations and the user-supplied
equational definitions are dropped, since the fragment we handle does not reach them.
-/
import Lean
import Vampire.Data.Graph
import Vampire.Translate
import Vampire.Translate.Commands

/-!
# Building the problem

Translating a hypothesis is not enough: every symbol it mentions has to be declared
first, and those declarations have their own dependencies. So each expression to process
becomes a vertex in a graph, its dependencies become edges, and a depth-first traversal
emits declarations before their uses.

The assertions come last in the order they were given, which keeps the correspondence
between a Lean hypothesis and the Vampire input unit it became.
-/

namespace Vampire.Query

open Lean Expr Meta
open Vampire Vampire.Term

structure QueryBuilderM.Config where
  /-- Expressions to process. -/
  toProcess : List Expr := []
  /-- Expressions to define rather than merely declare; their bodies are translated. -/
  toDefine : List Expr := []

structure QueryBuilderM.State where
  graph : Graph Expr Unit := {}
  commands : Std.HashMap Expr Command := {}

abbrev QueryBuilderM := ReaderT QueryBuilderM.Config <| StateT QueryBuilderM.State TranslationM

namespace QueryBuilderM

def addCommand (e : Expr) (cmd : Command) : QueryBuilderM Unit :=
  modify fun st => { st with
    graph := st.graph.addVertex e
    commands := st.commands.insert e cmd }

def addDependency (e e' : Expr) : QueryBuilderM Unit :=
  modify fun st => { st with graph := st.graph.addEdge e e' () }

/-- Translate `e` and collect the declarations it depends on. When `fvarDeps = false`,
free variables are not counted (they are binders of the enclosing telescope). -/
def translateAndFindDeps (e : Expr) (fvarDeps := true) : QueryBuilderM (Term × Array Expr) := do
  let (tm, depConsts, depFVars) ← Translator.translateExpr e
  let unknownConsts := depConsts.toArray.filterMap fun (nm, us) =>
    if builtins.contains nm.toString then none else some (mkConst nm us)
  if fvarDeps then
    return (tm, depFVars.toArray.map mkFVar ++ unknownConsts)
  else
    return (tm, unknownConsts)

/-- How often `c` occurs in `e`. Used to spot a recursive definition. -/
private def countConst (e : Expr) (c : Name) : Nat :=
  let rec visit : Expr → Nat
    | .forallE _ d b _ => visit d + visit b
    | .lam _ d b _     => visit d + visit b
    | .mdata _ e       => visit e
    | .letE _ t v b _  => visit t + visit v + visit b
    | .app f a         => visit f + visit a
    | .const c' _      => if c' == c then 1 else 0
    | _                => 0
  visit e

/-- The body of a constant, via its unfolding equation rather than delta reduction, so
that the encoding tricks used to prove termination stay hidden. -/
def getConstBodyFromEqnTheorem (nm : Name) : MetaM Expr := do
  let some eqnThm ← getUnfoldEqnFor? (nonRec := true) nm
    | throwError "vampire: no equation theorem for '{nm}'"
  let eqnInfo ← getConstInfo eqnThm
  forallTelescopeReducing eqnInfo.type fun args eqn => do
    let some (_, _, e) := eqn.eq? | throwError "vampire: unexpected equation theorem{indentD eqn}"
    mkLambdaFVars args e

/-- Apply the body `e` of a definition to `params`, reducing only its leading lambdas. -/
def makeFullyAppliedBody (e : Expr) (params : Array Expr) : MetaM Expr := do
  let numXs := countLams e
  let e ← instantiateLambda e (params.take numXs)
  mkAppOptM' e (params.toList.drop numXs |>.map some |>.toArray)
where
  countLams : Expr → Nat
    | .lam _ _ t _ => 1 + countLams t
    | _ => 0

/-- Translate the body of a local or global definition, applied to `params`. Returns the
body, its dependencies, and whether the definition is recursive. -/
def translateDefinitionBody (params : Array Expr) :
    Expr → QueryBuilderM (Term × Array Expr × Bool)
  | e@(fvar id ..) => do
    let decl ← id.getDecl
    let some val := decl.value?
      | throwError "vampire: trying to define {e}, which is not a let-declaration"
    let val ← makeFullyAppliedBody val params
    let (tmVal, deps) ← translateAndFindDeps val
    return (tmVal, deps, val.hasAnyFVar (· == id))
  | const nm .. => do
    let mutRecFuns := ConstantInfo.all (← getConstInfo nm)
    if mutRecFuns.length > 1 then
      throwError "vampire: {nm} is mutually recursive, which is not supported yet"
    let val ← getConstBodyFromEqnTheorem nm
    let val ← makeFullyAppliedBody val params
    let (tm, deps) ← translateAndFindDeps val
    return (tm, deps, countConst val nm > 0)
  | e => throwError "vampire: expected an fvar or const but got{indentD e}"

def addDefineCommandFor (nm : String) (e : Expr) (params : Array Expr) (cod : Expr) :
    QueryBuilderM (Array Expr) := do
  let (tmVal, deps, isRec) ← translateDefinitionBody params e
  let (tmParams, deps) ← params.foldrM (init := ([], deps)) fun param (tmParams, deps) => do
    let n := (← getFVarLocalDecl param).userName.toString
    let (tm, deps') ← translateAndFindDeps (← inferType param)
    return ((n, tm) :: tmParams, deps ++ deps')
  if cod.isSort && !cod.isProp then
    addCommand e <| .defineSort nm (tmParams.map (·.snd)) tmVal
    return deps
  else
    let (tmCod, deps') ← translateAndFindDeps cod
    addCommand e <| .defineFun nm tmParams tmCod tmVal isRec
    return deps ++ deps'

def addDeclareCommandFor (nm : String) (e tp : Expr) (params : Array Expr) (cod : Expr) :
    QueryBuilderM (Array Expr) := do
  if cod.isSort && !cod.isProp then
    addCommand e <| .declareSort nm params.size
    return #[]
  else
    let (tmTp, deps) ← translateAndFindDeps tp
    addCommand e <| .declare nm tmTp
    return deps

/-- Build the command for `e : tp` and add it to the graph; return its dependencies. -/
def addCommandFor (e tp : Expr) : QueryBuilderM (Array Expr) := do
  -- A proof: its type is what gets asserted.
  if (← Meta.inferType tp).isProp then
    let (tmTp, deps) ← translateAndFindDeps tp
    addCommand e <| .assert tmTp
    return deps

  trace[vampire.translate.query] "{tp} : {← Meta.inferType tp}"

  let nm ← match e with
    | fvar id .. =>
      match (← getThe TranslationM.State).uniqueFVarNames[id]? with
      | some nm => pure nm
      | none    => pure (← id.getUserName).toString
    | const n .. => pure n.toString
    | _ => throwError "vampire: expected an fvar or const but got{indentD e}"

  let deps ← Meta.forallTelescopeReducing tp fun params cod => do
    if (← read).toDefine.elem e then addDefineCommandFor nm e params cod
    else addDeclareCommandFor nm e tp params cod

  -- Drop the telescope's own binders; a genuine dependency on an enclosing local
  -- binding still has a declaration in the context and survives this.
  deps.filterM (fun | fvar id .. => Option.isSome <$> id.findDecl? | _ => pure true)

/-- Walk the expressions to process, recording a command for each and edges to whatever
it depends on. -/
partial def buildDependencyGraph : QueryBuilderM Unit := do
  for h in (← read).toProcess do
    go h
where
  go (e : Expr) : QueryBuilderM Unit := do
    if (← get).graph.contains e then
      return
    if !(e.isConst ∨ e.isFVar ∨ e.isMVar) then
      throwError "vampire: unexpected expression in the dependency graph{indentD e}"
    let et ← instantiateMVars (← inferType e)
    trace[vampire.translate.query] "processing {e} : {et}"
    let deps ← addCommandFor e et
    trace[vampire.translate.query] "deps: {deps}"
    for e' in deps do
      go e'
      addDependency e e'

end QueryBuilderM

def emitVertex (cmds : Std.HashMap Expr Command) (e : Expr) :
    StateT (List (Expr × Command)) MetaM Unit := do
  let some cmd := cmds[e]? | throwError "vampire: no command was computed for {e}"
  modify ((e, cmd) :: ·)

/-- The Lean term each declared symbol stands for, keyed by the name Vampire will know
it under. This is the correspondence the proof comes back through, so it is kept rather
than recovered by parsing names later. -/
def symbolTable (cmds : List Command) (commands : Std.HashMap Expr Command) :
    Std.HashMap String Expr :=
  let named : Command → Option String
    | .declareSort nm _ => some nm
    | .declare nm _ => some nm
    | .defineFun nm _ _ _ _ => some nm
    | .defineSort nm _ _ => some nm
    | .assert _ => none
  let emitted := cmds.filterMap named
  commands.fold (init := {}) fun m e c =>
    match named c with
    | some nm => if emitted.contains nm then m.insert nm e else m
    | none => m

/-- What `generateQuery` produces. -/
structure Query where
  /-- The declarations and assertions, in the order Vampire receives them. -/
  commands : List Command
  /-- What each declared symbol means in Lean, by the name Vampire knows it under. -/
  symbols : Std.HashMap String Expr
  /-- The proof of each assertion, in assertion order. Vampire numbers its input units
  in that same order, so this is how a step of the refutation finds the Lean hypothesis
  it came from. -/
  asserted : Array Expr

/-- Turn a list of hypotheses into the declarations and assertions Vampire is given,
together with what each declared symbol means in Lean. -/
def generateQuery (hs : List Expr) (fvNames : Std.HashMap FVarId String) :
    MetaM Query := do
  trace[vampire.translate.query] "hypotheses: {hs}"
  -- A constant that is not a theorem carries content in its body, so define it rather
  -- than leaving it uninterpreted; the same goes for a `let` bound to a non-proof.
  let dfns ← hs.filterM fun h => do
    if h.isFVar then
      let decl ← h.fvarId!.getDecl
      (pure decl.isLet) <&&> notM (Meta.inferType decl.type >>= pure ∘ Expr.isProp)
    else if h.isConst then
      return !(Lean.wasOriginallyTheorem (← getEnv) h.constName)
    else
      return false
  let ((_, st), _) ← QueryBuilderM.buildDependencyGraph
    |>.run { toProcess := hs, toDefine := dfns }
    |>.run {}
    |>.run { uniqueFVarNames := fvNames }
  trace[vampire.translate.query] "dependency graph: {st.graph}"
  let (_, emitted) ← StateT.run (st.graph.orderedDfs hs (emitVertex st.commands)) []
  let emitted := emitted.reverse
  let cmds := emitted.map (·.2)
  let asserted := emitted.filterMap fun (e, c) =>
    match c with | .assert _ => some e | _ => none
  return { commands := cmds, symbols := symbolTable cmds st.commands,
           asserted := asserted.toArray }

end Vampire.Query
