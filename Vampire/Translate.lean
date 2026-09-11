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

/--
The TPTP arithmetic type a Lean type stands for, for the three that TPTP has of
its own. Named rather than resolved, so that this file need not import the
library `Real` comes from.
-/
def arithmeticSort (τ : Expr) : Option String :=
  match τ with
  | .const name _ =>
    if name == ``Int then some "$int"
    else if name == `Rat then some "$rat"
    else if name == `Real then some "$real"
    else none
  | _ => none

/--
The integer a numeral stands for, whatever numeric type it is at.

A numeral is an `OfNat` application over a raw literal, and a negative one that
under a `Neg`; both are read here rather than evaluated, so that nothing but a
literal is taken for one.
-/
def numeral? (e : Expr) : Option Int :=
  match_expr e with
  | Neg.neg _ _ a => (numeralNat? a).map fun n => -(Int.ofNat n)
  | _ => (numeralNat? e).map Int.ofNat
where
  numeralNat? (e : Expr) : Option Nat :=
    match_expr e with
    | OfNat.ofNat _ n _ =>
      match n.consumeMData with
      | .lit (.natVal n) => some n
      | _ => none
    | _ => none

/-- How TPTP writes a whole number of each of its arithmetic types. -/
def renderNumeral (sort : String) (n : Int) : String :=
  if sort == "$rat" then s!"{n}/1"
  else if sort == "$real" then s!"{n}.0"
  else toString n

/-- Whether `e` is the type `Prop`. -/
def isPropType (e : Expr) : Bool := e matches .sort .zero

/--
Whether `e` is a type whose elements are TPTP individuals. `Prop` is not one,
and neither is a universe: an argument of type `Type` is a type argument, which
carries no first-order content.
-/
def isSortType (e : Expr) : MetaM Bool := do
  if isPropType e then return false
  if e matches .sort _ then return false
  return (← whnf (← inferType e)) matches .sort _

/-- Returns the TPTP type name for the Lean sort `e`, declaring it if new. -/
def sortName (e : Expr) : TranslateM String := do
  if let some name := (← get).sorts[e]? then
    return name
  if let some builtin := arithmeticSort e then
    -- Recorded so that reading the proof back knows the Lean type, but not
    -- declared: TPTP has these types already.
    modify fun s => { s with sorts := s.sorts.insert e builtin }
    return builtin
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
The TPTP signature of a symbol's Lean type: the sort names of its arguments and
of its result, or `none` when the type is not first-order over TPTP sorts.

The sorts are named inside the telescope, since naming them afterwards would
read expressions mentioning locals that no longer exist. A type that depends on
its own arguments is rejected outright, which is what keeps type class
instances and polymorphic constants out; `+mono` is the way to handle those.
-/
def signatureOf (type : Expr) : TranslateM (Option (Array String × String)) :=
  forallTelescopeReducing type fun args result => do
    let locals := args.map (·.fvarId!)
    let dependent (e : Expr) : Bool := e.hasAnyFVar locals.contains
    if dependent result then return none
    unless isPropType result || (← isSortType result) do return none
    let mut argTypes := #[]
    for arg in args do
      let argType ← inferType arg
      if dependent argType then return none
      unless ← isSortType argType do return none
      argTypes := argTypes.push argType
    let argNames ← argTypes.mapM sortName
    let resultName ← if isPropType result then pure "$o" else sortName result
    return some (argNames, resultName)

/-- Returns the TPTP name for a signature symbol, declaring it if new. -/
def symbolName (e : Expr) (type : Expr) : TranslateM (Option String) := do
  if let some name := (← get).symbols[e]? then
    return some name
  let some (argNames, resultName) ← signatureOf type | return none
  let hint ← match e with
    | .fvar fvarId => pure (← fvarId.getUserName).toString
    | .const name _ => pure name.toString
    | _ => pure "f"
  let name ← freshName (sanitize hint false)
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

/-- How TPTP names the cast into one of its arithmetic types. -/
def castInto (sort : String) : String :=
  if sort == "$real" then "$to_real"
  else if sort == "$rat" then "$to_rat"
  else "$to_int"

mutual

/--
The arguments of a nested conjunction or disjunction, flattened.

In the order they are written: vampire's parser flattens a junction however it
was nested and keeps its arguments in the order it read them, so its reading of
the formula agrees with the goal's. (Its *printing* reverses them, which is
only a thing to know when reading a proof by eye.) Were that to stop holding,
an `input` step would say so: it would no longer prove what the goal states.
-/
partial def junctionArgs (fn : Name) (e : Expr) : TranslateM (Array Fm) := do
  -- Both sides, not just the right: vampire's parser flattens a junction
  -- however it was nested, and what is emitted has to be what it flattens to
  -- or the reversal below lines the parts up against the wrong ones.
  let rec parts (e : Expr) : Array Expr :=
    if e.isAppOfArity fn 2 then
      parts e.appFn!.appArg! ++ parts e.appArg!
    else
      #[e]
  (parts e).mapM translateFormula

/--
A Lean arithmetic operation as TPTP writes it, or `none` if the expression is
not one.

Only at TPTP's own arithmetic types: `+` over a type it knows nothing of is an
ordinary symbol, and is translated as one. Lean's `/` and `%` over the integers
are `Int.ediv` and `Int.emod`, which round toward minus infinity for a positive
divisor -- Euclidean, which is what TPTP's `_e` forms are and what SMT-LIB's
`div` and `mod` are.
-/
partial def arithmeticTerm? (e : Expr) : TranslateM (Option Tm) := do
  let some sort := arithmeticSort (← whnf (← inferType e)) | return none
  if let some n := numeral? e then
    return some (.app (renderNumeral sort n) #[])
  let binary (fn : String) (a b : Expr) : TranslateM (Option Tm) := do
    return some (.app fn #[← translateTerm a, ← translateTerm b])
  match_expr e with
  | HAdd.hAdd _ _ _ _ a b => binary "$sum" a b
  | HSub.hSub _ _ _ _ a b => binary "$difference" a b
  | HMul.hMul _ _ _ _ a b => binary "$product" a b
  | Neg.neg _ _ a => return some (.app "$uminus" #[← translateTerm a])
  | HDiv.hDiv _ _ _ _ a b =>
    binary (if sort == "$int" then "$quotient_e" else "$quotient") a b
  | HMod.hMod _ _ _ _ a b => binary "$remainder_e" a b
  -- A cast into the type this term is at. Lean puts one in where a numeral was
  -- written at one type and used at another, and what it names is the number,
  -- so the integer division in `((16 : ℤ) / 5 : ℝ)` is integer division.
  | Int.cast _ _ a => return some (.app (castInto sort) #[← translateTerm a])
  | Nat.cast _ _ a => return some (.app (castInto sort) #[← translateTerm a])
  | _ => return none

/-- Translates a Lean expression of non-`Prop` type into a TPTP term. -/
partial def translateTerm (e : Expr) : TranslateM Tm := do
  let e ← instantiateMVars e
  if let some arithmetic ← arithmeticTerm? e then
    return arithmetic
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
    -- Type arguments carry no first-order content.
    let args ← args.filterM fun arg => return !(← isSortType arg)
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
      -- One block rather than a binder at a time: vampire's flattening merges
      -- adjacent quantifiers and does not keep their order while doing it, so
      -- what is emitted is what it would have flattened them into.
      withLocalDecl name binderInfo domain fun x => do
        let binder ← bindVar x.fvarId!
        match ← translateFormula (body.instantiate1 x) with
        | .all binders inner => return .all (#[binder] ++ binders) inner
        | inner => return .all #[binder] inner
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
    | And _ _ => return .and (← junctionArgs ``And e)
    | Or _ _ => return .or (← junctionArgs ``Or e)
    | Iff p q => return .iff (← translateFormula p) (← translateFormula q)
    | LT.lt _ _ a b => arithmeticAtom "$less" a b e
    | LE.le _ _ a b => arithmeticAtom "$lesseq" a b e
    | GT.gt _ _ a b => arithmeticAtom "$less" b a e
    | GE.ge _ _ a b => arithmeticAtom "$lesseq" b a e
    | Eq _ a b => return .eq (← translateTerm a) (← translateTerm b) true
    | Ne _ a b => return .eq (← translateTerm a) (← translateTerm b) false
    | Exists _ p =>
      lambdaTelescope p fun xs body => do
        let mut binders := #[]
        for x in xs do
          binders := binders.push (← bindVar x.fvarId!)
        match ← translateFormula body with
        | .ex inner rest => return .ex (binders ++ inner) rest
        | rest => return .ex binders rest
    | _ => return .atom (← translateTerm e)

/--
A comparison at one of TPTP's arithmetic types, or the atom it is otherwise:
`≤` over a type TPTP knows nothing of is an ordinary predicate.
-/
partial def arithmeticAtom (fn : String) (a b : Expr) (whole : Expr) :
    TranslateM Fm := do
  if (arithmeticSort (← whnf (← inferType a))).isSome then
    return .atom (.app fn #[← translateTerm a, ← translateTerm b])
  return .atom (← translateTerm whole)

end

/--
The TPTP role of a hypothesis. Vampire treats both as asserted, so this does
not affect whether a refutation exists, but it drives the goal-directed
heuristics (set of support, SInE selection, `nongoal_weight_coefficient`) and
is what makes `inputType` meaningful on the units of a proof.
-/
inductive Role where
  | «axiom»
  | negatedConjecture
deriving Inhabited, Repr, BEq

def Role.render : Role → String
  | .axiom => "axiom"
  | .negatedConjecture => "negated_conjecture"

/--
The Lean expressions the TPTP names stand for, so that a proof over those names
can be read back. Anything vampire introduces itself -- a skolem function, an
AVATAR predicate -- is absent, which is how such names are recognised.
-/
structure Symbols where
  sorts : Std.HashMap String Expr := {}
  symbols : Std.HashMap String Expr := {}
  /--
  The hypothesis each formula in the problem states, by the name it was given.
  An `input` step names the formula it restates, so this says which hypothesis
  proves it.
  -/
  hypotheses : Std.HashMap String Expr := {}
deriving Inhabited

/-- The TPTP problem for a set of hypotheses, to be refuted. -/
def problemOf (hypotheses : Array (Expr × Role)) : MetaM (String × Symbols) := do
  let go : TranslateM (Array String) := do
    let mut formulas := #[]
    for ((h, role), i) in hypotheses.zipIdx do
      let formula ← translateFormula (← inferType h)
      formulas := formulas.push s!"tff(h{i}, {role.render}, {formula})."
    return formulas
  let (formulas, state) ← go.run {}
  let lines := state.decls.types ++ state.decls.symbols ++ formulas
  let invert (m : Std.HashMap Expr String) : Std.HashMap String Expr :=
    m.fold (init := {}) fun acc e name => acc.insert name e
  let named := hypotheses.zipIdx.foldl (init := {}) fun acc ((h, _), i) =>
    Std.HashMap.insert acc s!"h{i}" h
  let symbols :=
    { sorts := invert state.sorts, symbols := invert state.symbols
      hypotheses := named }
  return (String.intercalate "\n" lines.toList ++ "\n", symbols)

end Vampire
