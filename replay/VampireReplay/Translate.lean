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
  /--
  TPTP symbol name for each symbol of the signature: a constant or local, applied
  to its type and instance arguments where it takes any (`symbolOf`).
  -/
  symbols : Std.HashMap Expr String := {}
  /-- How many arguments each symbol was declared to take. -/
  arities : Std.HashMap String Nat := {}
  /-- TPTP variable name for each local introduced under a binder. -/
  vars : Std.HashMap FVarId String := {}
  decls : Declarations := {}
  /-- Every TPTP identifier handed out, to keep them distinct. -/
  taken : Std.HashSet String := {}
  /--
  The arithmetic type each type a term has been met at reduces to, if any.
  Every subterm is asked, and they are at a handful of types.
  -/
  typeSorts : Std.HashMap Expr (Option String) := {}
  /-- Which arguments of each function are its parameters (`parameters`), by the function. -/
  parameterPositions : Std.HashMap Expr (Array Bool) := {}
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

/-- Hands out `name`, or the first of `name_1`, `name_2`, … not already in use. -/
def freshName (name : String) : TranslateM String := do
  let taken := (← get).taken
  let mut fresh := name
  if taken.contains name then
    -- At most `taken.size` of the `taken.size + 1` candidates tried here are
    -- in use, so the loop stops at a free one.
    for k in [1:taken.size + 2] do
      fresh := s!"{name}_{k}"
      unless taken.contains fresh do break
  modify fun s => { s with taken := s.taken.insert fresh }
  return fresh

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
Whether `τ`, the type of something, is a universe of types rather than `Prop`:
whether that something is a type.
-/
private def isUniverseOfTypes (τ : Expr) : MetaM Bool := do
  match ← whnf τ with
  | .sort u => return (← instantiateLevelMVars u).isNeverZero
  | _ => return false

/--
Whether `e` is a type whose elements are TPTP individuals. `Prop` is not one,
and neither is a universe: an argument of type `Type` is a type argument, which
carries no first-order content. Nor is a proposition, whose elements are its
proofs: its type is a sort too, but `Prop`, and a quantifier over the proofs of
`P` is no quantifier over a sort named after `P`.
-/
def isSortType (e : Expr) : MetaM Bool := do
  if isPropType e || e matches .sort _ then return false
  isUniverseOfTypes (← inferType e)

/--
The name already given to an expression definitionally equal to `e` with the
same head, if one has been: the same type or instance reached by another path,
`Real.instLE` and `Preorder.toLE` of the reals' order say, is the same thing,
and has to be the same TPTP symbol or sort.
-/
def sameAs (named : Std.HashMap Expr String) (e : Expr) : MetaM (Option String) := do
  let fn := e.getAppFn
  unless fn.isConst || fn.isFVar do return none
  -- Only ways that differ by instance arguments alone can be the same thing.
  let instanceFree (x : Expr) : MetaM (Array (Option Expr)) := x.getAppArgs.mapM fun a => do
    return if (← isClass? (← inferType a)).isSome then none else some a
  let mine ← instanceFree e
  for (e', name) in named do
    if e'.getAppFn == fn && e'.getAppNumArgs == e.getAppNumArgs then
      unless (← instanceFree e') == mine do continue
      if ← withNewMCtxDepth <| withTransparency .instances <| isDefEq e e' then
        return some name
  return none

/--
Which arguments of a function of type `type` are its parameters: its type and
instance arguments, and any argument a later argument's type, or its result,
depends on. They say which function it is -- `+` at `ℝ`, `abs` at a lattice --
rather than what it is applied to, so a function together with its parameters
is one TPTP symbol, and only the rest are its TPTP arguments.
-/
def parameters (type : Expr) : MetaM (Array Bool) :=
  withReducible <| forallTelescopeReducing type fun xs result => do
    let mut out := #[]
    for i in [:xs.size] do
      let x := xs[i]!
      let decl ← x.fvarId!.getDecl
      let laterTypes ← (xs.extract (i + 1) xs.size).mapM inferType
      let dependent := result.containsFVar x.fvarId! ||
        laterTypes.any (·.containsFVar x.fvarId!)
      out := out.push (decl.binderInfo.isInstImplicit || dependent ||
        (← isClass? decl.type).isSome)
    return out

/-- Returns the TPTP type name for the Lean sort `e`, declaring it if new. -/
def sortName (e : Expr) : TranslateM String := do
  -- Annotations say nothing of which type it is.
  let e := (← instantiateMVars e).consumeMData
  if let some name := (← get).sorts[e]? then
    return name
  if let some name ← sameAs (← get).sorts e then
    modify fun s => { s with sorts := s.sorts.insert e name }
    return name
  if let some builtin := arithmeticSort e then
    -- Recorded so that reading the proof back knows the Lean type, but not
    -- declared: TPTP has these types already.
    modify fun s => { s with sorts := s.sorts.insert e builtin }
    return builtin
  let hint ← match e.getAppFn with
    | .fvar fvarId => pure (← fvarId.getUserName).toString
    | .const name _ => pure (name.componentsRev.head?.map toString |>.getD name.toString)
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
its own arguments is rejected outright: a symbol is given with its parameters
(`symbolOf`), after which nothing it takes is a type or an instance.
-/
def signatureOf (type : Expr) : TranslateM (Option (Array String × String)) :=
  -- Its arity as written, up to what is reducible: a definition that is a
  -- function type, `Set α` say, is a sort of its own. Unfolded at a result and
  -- not at an argument, one type would be a sort in one place and an arity in
  -- another.
  withReducible <| forallTelescopeReducing type fun args result => do
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
  if let some name ← sameAs (← get).symbols e then
    modify fun s => { s with symbols := s.symbols.insert e name }
    return some name
  let some (argNames, resultName) ← signatureOf type | return none
  let hint ← match e.getAppFn with
    | .fvar fvarId => pure (← fvarId.getUserName).toString
    | .const name _ => pure (name.componentsRev.head?.map toString |>.getD name.toString)
    | _ => pure "f"
  let name ← freshName (sanitize hint false)
  let signature :=
    if argNames.isEmpty then resultName
    else if argNames.size == 1 then s!"{argNames[0]!} > {resultName}"
    else s!"({String.intercalate " * " argNames.toList}) > {resultName}"
  modify fun s => { s with
    symbols := s.symbols.insert e name
    arities := s.arities.insert name argNames.size
    decls.symbols := s.decls.symbols.push
      s!"tff({name}_decl, type, {name}: {signature})."
  }
  return some name

/--
Whether a quantifier over `domain` is one over TPTP individuals.

A type class is a type, but what it quantifies over is instances, which
monomorphization settles and a first-order prover has no reading of.
-/
def isIndividualDomain (domain : Expr) : MetaM Bool := do
  if (← isClass? domain).isSome then return false
  isSortType domain

/--
Rejects a quantifier over something that is not a sort of individuals: a
proposition the body depends on the proof of, a type class, a universe.

Translating the body alone would state something other than the goal, and the
prover would then refute that instead -- which replay finds out only once it
tries to relate the two.
-/
def throwNotFirstOrder (e domain : Expr) : MetaM α :=
  throwError "cannot translate{indentExpr e}\nto TPTP: it quantifies over\
    {indentExpr domain}\nwhich is not a type of individuals"

/-- Rejects a symbol whose type is not first-order over TPTP sorts. -/
def throwNotFirstOrderSymbol (e symbol : Expr) : MetaM α := do
  throwError "cannot translate{indentExpr e}\nto TPTP: {symbol} has type\
    {indentExpr (← inferType symbol)}\nwhich is not first-order over types of \
    individuals"

/-- Hands out a fresh TPTP variable name for a bound local. -/
def bindVar (fvarId : FVarId) : TranslateM (String × String) := do
  let hint := (← fvarId.getUserName).toString
  let name ← freshName (sanitize hint true)
  let type ← sortName (← fvarId.getType)
  modify fun s => { s with vars := s.vars.insert fvarId name }
  return (name, type)

/-- The TPTP arithmetic type the type of `e` stands for, if any. -/
def arithmeticSortOf (e : Expr) : TranslateM (Option String) := do
  let τ ← inferType e
  if let some sort := (← get).typeSorts[τ]? then
    return sort
  let sort := arithmeticSort (← whnf τ)
  modify fun s => { s with typeSorts := s.typeSorts.insert τ sort }
  return sort

/--
A function applied to arguments, taken apart into the TPTP symbol it is -- the
function with its parameters (`parameters`) -- and its TPTP arguments.
Parameters come first in every function this meets; one after an ordinary
argument has no TPTP reading.
-/
def symbolOf (e : Expr) : TranslateM (Expr × Array Expr) := do
  let fn := e.getAppFn
  let args := e.getAppArgs
  let positions ← match (← get).parameterPositions[fn]? with
    | some p => pure p
    | none => do
      let p ← parameters (← inferType fn)
      modify fun s => { s with parameterPositions := s.parameterPositions.insert fn p }
      pure p
  let isParameter (i : Nat) := positions[i]?.getD false
  let mut k := 0
  while k < args.size && isParameter k do k := k + 1
  for i in [k:args.size] do
    if isParameter i then
      throwError "cannot translate{indentExpr e}\nto TPTP: its argument {i + 1} is a \
        type or instance argument coming after an ordinary one"
  return (mkAppN fn (args.extract 0 k), args.extract k args.size)

/-- How TPTP names the cast into one of its arithmetic types. -/
def castInto (sort : String) : String :=
  if sort == "$real" then "$to_real"
  else if sort == "$rat" then "$to_rat"
  else "$to_int"

mutual

/--
The arguments of a nested conjunction or disjunction, flattened on both sides,
not just the right.

In the order they are written: vampire's parser flattens a junction however it
was nested and keeps its arguments in the order it read them, so its reading of
the formula agrees with the goal's, and replay pairs up the parts correctly.
(Its *printing* reverses them, which is only a thing to know when reading a
proof by eye.) Were that to stop holding, an `input` step would say so: it
would no longer prove what the goal states.
-/
partial def junctionArgs (fn : Name) (e : Expr) : TranslateM (Array Fm) := do
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
  let some sort ← arithmeticSortOf e | return none
  if let some n := numeral? e then
    return some (.app (renderNumeral sort n) #[])
  let binary (fn : String) (a b : Expr) : TranslateM (Option Tm) := do
    return some (.app fn #[← translateTerm a, ← translateTerm b])
  -- `$to_int` is the floor, and the ceiling is the floor of the negation,
  -- negated. Named rather than matched: the two are Mathlib's, and take five
  -- arguments -- the type, its `Ring`, `LinearOrder` and `FloorRing`
  -- instances, and the number.
  if e.getAppFn.isConstOf `Int.floor && e.getAppNumArgs == 5 then
    return some (.app "$to_int" #[← translateTerm e.appArg!])
  if e.getAppFn.isConstOf `Int.ceil && e.getAppNumArgs == 5 then
    return some (.app "$uminus"
      #[.app "$to_int" #[.app "$uminus" #[← translateTerm e.appArg!]]])
  -- A floor or a ceiling cast back to the type it was taken at is TPTP's
  -- own `$floor` or `$ceiling` there, which is what vampire's axioms for them
  -- are stated of.
  if let some inner := (match_expr e with | Int.cast _ _ a => some a | _ => none) then
    for (fn, name) in [(`Int.floor, "$floor"), (`Int.ceil, "$ceiling")] do
      if inner.getAppFn.isConstOf fn && inner.getAppNumArgs == 5 then
        let a := inner.appArg!
        if (← arithmeticSortOf a) == some sort then
          return some (.app name #[← translateTerm a])
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

  -- TPTP has no natural numbers, so what is cast from one has no sort to be
  -- cast from: a natural number variable becomes an individual of a sort of
  -- its own, which `$to_int` and the rest do not take. A numeral is the one
  -- natural number that can be written, as the number it is at this sort.
  | Nat.cast _ _ a =>
    match (numeral? a).orElse fun _ => a.rawNatLit?.map Int.ofNat with
    | some n => return some (.app (renderNumeral sort n) #[])
    | none =>
      throwError "cannot translate{indentExpr e}\nto TPTP: TPTP has no natural \
        numbers, so only a numeral can be cast from ℕ"
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
      | throwNotFirstOrderSymbol e e
    constant e name
  | .const .. =>
    let some name ← symbolName e (← inferType e)
      | throwNotFirstOrderSymbol e e
    constant e name
  | .app .. =>
    let fn := e.getAppFn
    unless fn.isConst || fn.isFVar do
      throwError "cannot translate{indentExpr e}\nto TPTP: it applies\
        {indentExpr fn}\nwhich is not a constant or a local"
    if let .fvar fvarId := fn then
      if (← get).vars.contains fvarId then
        throwError "cannot translate{indentExpr e}\nto TPTP: it applies the bound \
          variable{indentExpr fn}\nwhich is not first-order"
    let (symbol, args) ← symbolOf e
    let some head ← symbolName symbol (← inferType symbol)
      | throwNotFirstOrderSymbol e symbol
    -- Applied to more arguments than its type takes as written: a term of a
    -- sort used as a function -- a set applied to an element once membership
    -- is unfolded -- which TPTP cannot say.
    unless (← get).arities[head]? == some args.size do
      throwError "cannot translate{indentExpr e}\nto TPTP: {fn} takes \
        {((← get).arities[head]?).getD 0} arguments as a TPTP symbol, and is \
        applied to {args.size}"
    return .app head (← args.mapM translateTerm)
  | .mdata _ e => translateTerm e
  | _ => throwError "cannot translate{indentExpr e}\nto TPTP: it is not a constant, \
      a local or an application of one"
where
  /--
  A symbol standing on its own, which a first-order term can only be if it
  takes no arguments: a function used as a value -- `Function.Injective f` --
  is higher-order.
  -/
  constant (e : Expr) (name : String) : TranslateM Tm := do
    unless (← get).arities[name]? == some 0 do
      throwError "cannot translate{indentExpr e}\nto TPTP: it takes \
        {((← get).arities[name]?).getD 0} arguments as a TPTP symbol, and is applied to none"
    return .app name #[]

/-- Translates a Lean proposition into a TPTP formula. -/
partial def translateFormula (e : Expr) : TranslateM Fm := do
  let e ← instantiateMVars e
  match e with
  | .mdata _ e => translateFormula e
  | .forallE name domain body binderInfo =>
    if (← isProp domain) && !body.hasLooseBVars then
      return .imp (← translateFormula domain) (← translateFormula body)
    else
      unless ← isIndividualDomain domain do
        throwNotFirstOrder e domain
      -- One block rather than a binder at a time: vampire's flattening merges
      -- adjacent quantifiers and does not keep their order while doing it, so
      -- what is emitted is what it would have flattened them into.
      withLocalDecl name binderInfo domain fun x => do
        let binder ← bindVar x.fvarId!
        match ← translateFormula (body.instantiate1 x) with
        | .all binders inner => return .all (#[binder] ++ binders) inner
        | inner => return .all #[binder] inner
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
    | Eq α a b =>
      -- Two propositions are equal when each follows from the other, which is
      -- what TPTP has `<=>` for; it has no equality between formulas.
      if isPropType α then
        return .iff (← translateFormula a) (← translateFormula b)
      return .eq (← translateTerm a) (← translateTerm b) true
    | Ne α a b =>
      if isPropType α then
        return .neg (.iff (← translateFormula a) (← translateFormula b))
      return .eq (← translateTerm a) (← translateTerm b) false
    | Exists _ p =>
      -- `∃ x, q x` can reach here as `Exists q`, with no binder to open: it is
      -- given one, or there would be no variable to quantify over.
      let p ← if p.isLambda then pure p else etaExpand p
      lambdaTelescope p fun xs body => do
        let mut binders := #[]
        for x in xs do
          let domain ← inferType x
          unless ← isIndividualDomain domain do
            throwNotFirstOrder e domain
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
  if (← arithmeticSortOf a).isSome then
    return .atom (.app fn #[← translateTerm a, ← translateTerm b])
  return .atom (← translateTerm whole)

end

/--
The TPTP role of a hypothesis. Vampire treats both as asserted, so this does
not affect whether a refutation exists, but it drives the goal-directed
heuristics (set of support, SInE selection, `nongoal_weight_coefficient`).
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

/-- A hypothesis of the problem: what proves it, its role, and whether it may be left out. -/
structure Hypothesis where
  proof : Expr
  role : Role
  /--
  Whether a hypothesis that cannot be stated in TPTP is left out rather than
  failing the problem: one the caller did not state themselves -- an instance of
  a lemma, a hypothesis gathered by `*`, a suggested premise -- of which only
  those that can be stated are of use.
  -/
  droppable : Bool := false
deriving Inhabited

/--
The TPTP problem for a set of hypotheses, to be refuted, each named for its
position, and the positions of those left out.

A droppable hypothesis that cannot be stated is left out, with the translation's
state as if it had never been tried; any other is the error.
-/
def problemOf (hypotheses : Array Hypothesis) : MetaM (String × Symbols × Std.HashSet Nat) := do
  let go : TranslateM (Array String × Std.HashSet Nat) := do
    let mut formulas := #[]
    let mut skipped := {}
    for (h, i) in hypotheses.zipIdx do
      let saved ← get
      try
        let formula ← translateFormula (← inferType h.proof)
        formulas := formulas.push s!"tff(h{i}, {h.role.render}, {formula})."
      catch e =>
        unless h.droppable do throw e
        set saved
        skipped := skipped.insert i
        trace[vampire] "left out hypothesis {i}, which cannot be stated in TPTP: \
          {e.toMessageData}"
    return (formulas, skipped)
  let ((formulas, skipped), state) ← go.run {}
  let lines := state.decls.types ++ state.decls.symbols ++ formulas
  let invert (m : Std.HashMap Expr String) : Std.HashMap String Expr :=
    m.fold (init := {}) fun acc e name => if acc.contains name then acc else acc.insert name e
  let named := hypotheses.zipIdx.foldl (init := {}) fun acc (h, i) =>
    if skipped.contains i then acc else Std.HashMap.insert acc s!"h{i}" h.proof
  let symbols :=
    { sorts := invert state.sorts, symbols := invert state.symbols
      hypotheses := named }
  return (String.intercalate "\n" lines.toList ++ "\n", symbols, skipped)

end Vampire
