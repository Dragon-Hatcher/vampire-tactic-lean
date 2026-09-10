import Lean

namespace Vampire

open Lean Meta

/-- A TPTP term. -/
inductive Tm where
  | var (name : String)
  | app (fn : String) (args : Array Tm)
deriving Inhabited

/-- A TPTP TFF formula. -/
inductive Fm where
  | top
  | bot
  | atom (tm : Tm)
  | eq (lhs rhs : Tm) (positive : Bool)
  | neg (arg : Fm)
  | and (args : Array Fm)
  | or (args : Array Fm)
  | imp (lhs rhs : Fm)
  | iff (lhs rhs : Fm)
  | all (vars : Array (String × String)) (body : Fm)
  | ex (vars : Array (String × String)) (body : Fm)
deriving Inhabited

namespace Tm

protected partial def render : Tm → String
  | .var name => name
  | .app fn args =>
    if args.isEmpty then fn
    else s!"{fn}({String.intercalate ", " (args.toList.map Tm.render)})"

instance : ToString Tm := ⟨Tm.render⟩

end Tm

namespace Fm

private def renderVars (vars : Array (String × String)) : String :=
  String.intercalate ", " (vars.toList.map fun (v, ty) => s!"{v}: {ty}")

protected partial def render : Fm → String
  | .top => "$true"
  | .bot => "$false"
  | .atom tm => toString tm
  | .eq lhs rhs positive => s!"({lhs} {if positive then "=" else "!="} {rhs})"
  | .neg arg => s!"~{Fm.render arg}"
  | .and args => junction "&" args
  | .or args => junction "|" args
  | .imp lhs rhs => s!"({Fm.render lhs} => {Fm.render rhs})"
  | .iff lhs rhs => s!"({Fm.render lhs} <=> {Fm.render rhs})"
  | .all vars body => s!"(! [{renderVars vars}] : {Fm.render body})"
  | .ex vars body => s!"(? [{renderVars vars}] : {Fm.render body})"
where
  junction (op : String) (args : Array Fm) : String :=
    if args.isEmpty then (if op == "&" then "$true" else "$false")
    else if args.size == 1 then Fm.render args[0]!
    else s!"({String.intercalate s!" {op} " (args.toList.map Fm.render)})"

instance : ToString Fm := ⟨Fm.render⟩

end Fm

/-- A `$tType` declaration and the symbols declared over it. -/
structure Declarations where
  types : Array String := #[]
  symbols : Array String := #[]
deriving Inhabited

structure State where
  /-- TPTP type name for each Lean sort. -/
  sorts : Std.HashMap Expr String := {}
  /-- TPTP symbol name for each signature constant, keyed by its `Expr`. -/
  symbols : Std.HashMap Expr String := {}
  /-- TPTP variable name for each local introduced under a binder. -/
  vars : Std.HashMap FVarId String := {}
  decls : Declarations := {}
  /-- Every TPTP identifier handed out, to keep them distinct. -/
  taken : Std.HashSet String := {}
  varCount : Nat := 0
deriving Inhabited

abbrev TranslateM := StateRefT State MetaM

/--
Turns a Lean name into a TPTP identifier: alphanumerics and underscores, with a
leading character of the required case. TPTP wants lower case for symbols and
upper case for variables.
-/
def sanitize (name : String) (upper : Bool) : String :=
  let cs := name.toList.map fun c => if c.isAlphanum || c == '_' then c else '_'
  let cs := match cs with
    | c :: rest => if c.isAlpha then c :: rest else 'x' :: c :: rest
    | [] => ['x']
  -- A name of entirely non-ASCII characters would become all underscores.
  let cs := (cs.reverse.dropWhile (· == '_')).reverse
  match cs with
  | c :: rest => String.ofList ((if upper then c.toUpper else c.toLower) :: rest)
  | [] => "x"

/-- Hands out `name`, or `name_1`, `name_2`, … if it is already in use. -/
def freshName (name : String) : TranslateM String := do
  let taken := (← get).taken
  let name :=
    if !taken.contains name then name
    else
      let rec attempt (i : Nat) : String :=
        match i with
        | 0 => name
        | i + 1 =>
          let candidate := s!"{name}_{taken.size - i}"
          if taken.contains candidate then attempt i else candidate
      attempt (taken.size + 1)
  modify fun s => { s with taken := s.taken.insert name }
  return name

/-- Whether `e` is the type `Prop`. -/
def isPropType (e : Expr) : Bool := e matches .sort .zero

/-- Whether `e` is a type usable as a TPTP sort, i.e. a `Type _` that is not `Prop`. -/
def isSortType (e : Expr) : MetaM Bool := do
  if isPropType e then return false
  return (← whnf (← inferType e)) matches .sort _

/-- Returns the TPTP type name for the Lean sort `e`, declaring it if new. -/
def sortName (e : Expr) : TranslateM String := do
  if let some name := (← get).sorts[e]? then
    return name
  let hint ← match e with
    | .fvar fvarId => pure (← fvarId.getUserName).toString
    | .const name _ => pure name.getString!
    | _ => pure "sort"
  let name ← freshName (sanitize hint false)
  modify fun s => { s with
    sorts := s.sorts.insert e name
    decls.types := s.decls.types.push s!"tff({name}_type, type, {name}: $tType)."
  }
  return name

/--
Splits a signature symbol's Lean type into argument sorts and a result. Returns
`none` when the type is not first-order over TPTP sorts, e.g. a type class
instance or a higher-order function.
-/
def firstOrderType (type : Expr) : TranslateM (Option (Array Expr × Expr)) := do
  forallTelescopeReducing type fun args result => do
    if args.isEmpty then
      if isPropType result || (← isSortType result) then return some (#[], result)
      else return none
    let mut argTypes := #[]
    for arg in args do
      let argType ← inferType arg
      unless ← isSortType argType do return none
      argTypes := argTypes.push argType
    unless isPropType result || (← isSortType result) do return none
    return some (argTypes, result)

/-- Returns the TPTP name for a signature symbol, declaring it if new. -/
def symbolName (e : Expr) (type : Expr) : TranslateM (Option String) := do
  if let some name := (← get).symbols[e]? then
    return some name
  let some (args, result) ← firstOrderType type | return none
  let hint ← match e with
    | .fvar fvarId => pure (← fvarId.getUserName).toString
    | .const name _ => pure name.toString
    | _ => pure "f"
  let name ← freshName (sanitize hint false)
  let resultName ← if isPropType result then pure "$o" else sortName result
  let argNames ← args.mapM sortName
  let signature :=
    if argNames.isEmpty then resultName
    else if argNames.size == 1 then s!"{argNames[0]!} > {resultName}"
    else s!"({String.intercalate " * " argNames.toList}) > {resultName}"
  modify fun s => { s with
    symbols := s.symbols.insert e name
    decls.symbols := s.decls.symbols.push
      s!"tff({name}_decl, type, {name}: {signature})."
  }
  return some name

/-- Hands out a fresh TPTP variable name for a bound local. -/
def bindVar (fvarId : FVarId) : TranslateM (String × String) := do
  let hint := (← fvarId.getUserName).toString
  let name ← freshName (sanitize hint true)
  let type ← sortName (← fvarId.getType)
  modify fun s => { s with vars := s.vars.insert fvarId name }
  return (name, type)

mutual

/-- Translates a Lean expression of non-`Prop` type into a TPTP term. -/
partial def translateTerm (e : Expr) : TranslateM Tm := do
  let e ← instantiateMVars e
  match e with
  | .fvar fvarId =>
    if let some name := (← get).vars[fvarId]? then
      return .var name
    let some name ← symbolName e (← fvarId.getType)
      | throwError "cannot translate {e} of type {← inferType e} to TPTP"
    return .app name #[]
  | .const .. =>
    let some name ← symbolName e (← inferType e)
      | throwError "cannot translate {e} of type {← inferType e} to TPTP"
    return .app name #[]
  | .app .. =>
    let fn := e.getAppFn
    let args := e.getAppArgs
    -- Implicit type arguments carry no first-order content.
    let args ← args.filterM fun arg => do
      return !(← isSortType (← inferType arg)) || !(← isSortType arg)
    let head ← match fn with
      | .fvar fvarId => symbolName fn (← fvarId.getType)
      | .const .. => symbolName fn (← inferType fn)
      | _ => pure none
    let some head := head
      | throwError "cannot translate application of {fn} to TPTP"
    return .app head (← args.mapM translateTerm)
  | .mdata _ e => translateTerm e
  | _ => throwError "cannot translate {e} to TPTP"

/-- Translates a Lean proposition into a TPTP formula. -/
partial def translateFormula (e : Expr) : TranslateM Fm := do
  let e ← instantiateMVars e
  match e with
  | .mdata _ e => translateFormula e
  | .forallE name domain body binderInfo =>
    if (← isProp domain) && !body.hasLooseBVars then
      return .imp (← translateFormula domain) (← translateFormula body)
    else if ← isSortType domain then
      withLocalDecl name binderInfo domain fun x => do
        let binder ← bindVar x.fvarId!
        return .all #[binder] (← translateFormula (body.instantiate1 x))
    else
      -- A dependent or higher-order binder, e.g. an instance argument. Assume
      -- it is inhabited and translate the body; TPTP domains are non-empty.
      withLocalDecl name binderInfo domain fun x =>
        translateFormula (body.instantiate1 x)
  | _ =>
    match_expr e with
    | True => return .top
    | False => return .bot
    | Not p => return .neg (← translateFormula p)
    | And p q => return .and #[← translateFormula p, ← translateFormula q]
    | Or p q => return .or #[← translateFormula p, ← translateFormula q]
    | Iff p q => return .iff (← translateFormula p) (← translateFormula q)
    | Eq _ a b => return .eq (← translateTerm a) (← translateTerm b) true
    | Ne _ a b => return .eq (← translateTerm a) (← translateTerm b) false
    | Exists _ p =>
      lambdaTelescope p fun xs body => do
        let mut binders := #[]
        for x in xs do
          binders := binders.push (← bindVar x.fvarId!)
        return .ex binders (← translateFormula body)
    | _ => return .atom (← translateTerm e)

end

/-- The TPTP problem for a set of hypotheses, to be refuted. -/
def problemOf (hypotheses : Array Expr) : MetaM String := do
  let go : TranslateM (Array String) := do
    let mut axioms := #[]
    for (h, i) in hypotheses.zipIdx do
      let formula ← translateFormula (← inferType h)
      axioms := axioms.push s!"tff(h{i}, axiom, {formula})."
    return axioms
  let (axioms, state) ← go.run {}
  let lines := state.decls.types ++ state.decls.symbols ++ axioms
  return String.intercalate "\n" lines.toList ++ "\n"

end Vampire
