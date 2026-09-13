import Vampire.Reconstruct.Monad

namespace Vampire.Reconstruct

open Lean Meta

/-- A formula's top-level connective. -/
def connectiveOf (f : Formula) : ReconstructM Connective :=
  match f.connective with
  | .ok c => return c
  | .error e => throwError "{e}"

/-- The local standing for each of a step's variables. -/
abbrev Vars := Std.HashMap UInt32 Expr

/-- What a name of the form `f(x)` has inside the parentheses. -/
private def inside (name : String) : String :=
  ((name.dropWhile (· != '(')).drop 1).dropEnd 1 |>.toString

/--
The arithmetic type a numeral of TPTP's is at, read off how it is written: a
whole number is an integer, `p/q` a rational and one with a point a real. What
a cast says it is at comes first, `p/q` being how a whole real is written too.
-/
private def numeralSort (name : String) : Option (String × Int × Nat) :=
  let (negative, digits) :=
    if name.startsWith "-" then (true, (name.drop 1).toString) else (false, name)
  let signed (n : Int) : Int := if negative then -n else n
  let whole (s : String) : Option Nat :=
    if !s.isEmpty && s.all Char.isDigit then s.toNat? else none
  match digits.splitOn "/" with
  | [n, d] => do
    let n ← whole n
    let d ← whole d
    guard (d != 0)
    return ("$rat", signed n, d)
  | [n] =>
    match n.splitOn "." with
    | [n] => do return ("$int", signed (← whole n), 1)
    | [n, fraction] => do
      -- A real as TPTP writes it: the digits after the point over that power
      -- of ten, which is the quotient the goal itself would have written.
      let n ← whole n
      let f ← whole fraction
      let scale := 10 ^ fraction.length
      return ("$real", signed (Int.ofNat (n * scale + f)), scale)
    | _ => none
  | _ => none

/-- The Lean numeral for a whole number at a type. -/
partial def wholeNumeral (τ : Expr) (n : Int) : ReconstructM Expr := do
  if n < 0 then
    mkAppOptM ``Neg.neg #[some τ, none, some (← wholeNumeral τ (-n))]
  else
    mkAppOptM ``OfNat.ofNat #[some τ, some (mkRawNatLit n.toNat), none]

/-- The term at one of TPTP's arithmetic types, cast into it if need be. -/
def castTo (τ : Expr) (args : Array Expr) : ReconstructM (Option Expr) := do
  let #[a] := args | return none
  let σ ← inferType a
  if ← isDefEq σ τ then return some a
  if σ.isConstOf ``Int then
    return some (← mkAppOptM ``Int.cast #[some τ, none, some a])
  if σ.isConstOf `Rat then
    return some (← mkAppOptM `Rat.cast #[some τ, none, some a])
  if σ.isConstOf ``Nat then
    return some (← mkAppOptM ``Nat.cast #[some τ, none, some a])
  return none

/--
What a symbol TPTP interprets itself stands for in Lean, or `none` for one the
goal gave a meaning to.

The type is taken from the arguments rather than recorded: `$sum` is one symbol
for each of TPTP's arithmetic types, and which one a term is over is settled by
what it is applied to. A numeral has no arguments to go by, so its type comes
from how it is written.
-/
def interpreted (name : String) (args : Array Expr) :
    ReconstructM (Option Expr) := do
  let binary (fn : Name) : ReconstructM (Option Expr) := do
    let #[a, b] := args | return none
    return some (← mkAppM fn #[a, b])
  -- Vampire adds and multiplies any number of things at once, and Lean two at
  -- a time, to the left as it writes them.
  let folded (fn : Name) : ReconstructM (Option Expr) := do
    let some first := args[0]? | return none
    let mut out := first
    for a in args.extract 1 args.size do
      out ← mkAppM fn #[out, a]
    return some out
  match name with
  | "$sum" => folded ``HAdd.hAdd
  | "$difference" => binary ``HSub.hSub
  | "$product" => folded ``HMul.hMul
  | "$quotient" | "$quotient_e" => binary ``HDiv.hDiv
  | "$remainder_e" => binary ``HMod.hMod
  | "$less" => binary ``LT.lt
  | "$lesseq" => binary ``LE.le
  | "$greater" =>
    let #[a, b] := args | return none
    return some (← mkAppM ``LT.lt #[b, a])
  | "$greatereq" =>
    let #[a, b] := args | return none
    return some (← mkAppM ``LE.le #[b, a])
  | "$uminus" =>
    let #[a] := args | return none
    return some (← mkAppM ``Neg.neg #[a])
  -- A cast between TPTP's arithmetic types. What Lean writes with `↑`, and
  -- nothing at all where the term is already at that type: the rationals of an
  -- `$int` problem are its integers cast, and vampire says so where the goal
  -- had no need to.
  | "$to_real" => castTo (mkConst `Real) args
  | "$to_rat" => castTo (mkConst `Rat) args
  | "$to_int" =>
    -- `$to_int` is the floor, which is what makes it not a cast.
    let #[a] := args | return none
    if (← inferType a).isConstOf ``Int then return some a
    return some (← mkAppM `Int.floor #[a])
  | _ =>
    -- A numeral is written as it reads, and vampire names a cast of one after
    -- the whole application: `$to_real(3/1)` is the real three. Which type a
    -- numeral is at is the cast's to say -- `3/1` is how vampire writes a
    -- whole real as much as a rational -- and otherwise how it is written.
    let (name, cast) :=
      if name.startsWith "$to_real(" then (inside name, some `Real)
      else if name.startsWith "$to_rat(" then (inside name, some `Rat)
      else if name.startsWith "$to_int(" then (inside name, some ``Int)
      else (name, none)
    let some (sort, n, d) := numeralSort name | return none
    -- A numeral of arity one is what it multiplies: ALASCA writes a term's
    -- coefficient as the numeral applied to it.
    if let #[a] := args then
      let τ ← inferType a
      let numeral ←
        if d == 1 then wholeNumeral τ n
        else do
          let top ← wholeNumeral τ n
          let bottom ← wholeNumeral τ (Int.ofNat d)
          mkAppM ``HDiv.hDiv #[top, bottom]
      return some (← mkAppM ``HMul.hMul #[numeral, a])
    unless args.isEmpty do return none
    let τ ←
      match cast with
      | some name => pure (mkConst name)
      | none =>
        try sortType sort
        catch _ => pure (mkConst (if sort == "$int" then ``Int
          else if sort == "$rat" then `Rat else `Real))
    if d == 1 then
      return some (← wholeNumeral τ n)
    return some (← mkAppM ``HDiv.hDiv
      #[← wholeNumeral τ n, ← wholeNumeral τ (Int.ofNat d)])

/-- Rebuilds a vampire term as a Lean expression. -/
partial def term (vars : Vars) (t : Term) : ReconstructM Expr := do
  if t.isVar then
    let some x := vars[t.var]?
      | throwError "variable X{t.var} has no recorded sort"
    return x
  let some symbol := t.symbol?
    | throwError "term has unknown functor {t.functor}"
  let args ← t.args.mapM (term vars)
  if let some e ← interpreted symbol.name args then
    return ← shared e
  shared (mkAppN (← symbolExpr symbol.name) args)

/--
Whether a literal occurs positively, as the step it belongs to means it.

Polarity flipping leaves a flipped predicate meaning the opposite of what it
did, so a literal over one occurs the other way round in the steps after it.
-/
def literalPolarity (l : Literal) : ReconstructM Bool := do
  if (← read).flipping then
    if let some symbol := l.symbol? then
      if symbol.flipped then
        return !l.polarity
  return l.polarity

/-- Rebuilds a vampire literal as a Lean proposition. -/
def literal (vars : Vars) (l : Literal) : ReconstructM Expr := do
  let args ← l.args.mapM (term vars)
  let polarity ← literalPolarity l
  let atom ←
    if l.isEquality then
      let some sortName := l.sort?
        | throwError "equality literal without a recorded argument sort"
      let #[lhs, rhs] := args
        | throwError "equality literal with {args.size} arguments"
      mkAppOptM ``Eq #[some (← sortType sortName), some lhs, some rhs]
    else
      let some symbol := l.symbol?
        | throwError "literal has unknown predicate {l.predicate}"
      match ← interpreted symbol.name args with
      | some atom => pure atom
      | none => pure (mkAppN (← symbolExpr symbol.name) args)
  shared (if polarity then atom else mkApp (mkConst ``Not) atom)

/--
Folds an n-ary junction, right-associated as Lean writes them. Vampire's
conjunctions and disjunctions take any number of arguments, and an empty one is
the connective's unit.
-/
def junction (fn unit : Name) (args : Array Expr) : Expr :=
  if args.isEmpty then
    mkConst unit
  else
    args.pop.foldr (fun a acc => mkApp2 (mkConst fn) a acc) args.back!

/--
A clause with each of its literals the one term of its shape.

Instantiating a clause at a substitution builds its literals afresh, so they
are no longer the terms the conclusion was built from, and every literal
carried across the inference is then compared by its shape rather than by its
address.
-/
partial def sharedClause (e : Expr) : ReconstructM Expr := do
  if e.isAppOfArity ``Or 2 then
    let left ← sharedClause e.appFn!.appArg!
    let right ← sharedClause e.appArg!
    return ← shared (mkApp2 (mkConst ``Or) left right)
  shared e

/-- Rebuilds a clause as the disjunction of its literals. -/
def clause (vars : Vars) (c : Clause) : ReconstructM Expr := do
  sharedClause (junction ``Or ``False (← c.literals.mapM (literal vars)))

/-- Introduces a local for each variable in `sorts`, in order. -/
def withVars (sorts : Array (UInt32 × String)) (vars : Vars)
    (k : Vars → Array Expr → ReconstructM α) : ReconstructM α := do
  let rec go (i : Nat) (vars : Vars) (locals : Array Expr) : ReconstructM α := do
    if h : i < sorts.size then
      let (v, sortName) := sorts[i]
      withLocalDeclD (Name.mkSimple s!"X{v}") (← sortType sortName) fun x =>
        go (i + 1) (vars.insert v x) (locals.push x)
    else
      k vars locals
  go 0 vars #[]

/-- Rebuilds a formula, binding quantified variables as it descends. -/
partial def formula (sorts : Array (UInt32 × String)) (vars : Vars) (f : Formula) :
    ReconstructM Expr := do
  let sub (i : Nat) : ReconstructM Expr := do
    let some g := f.subformulas[i]? | throwError "formula is missing a subformula"
    formula sorts vars g
  let all : ReconstructM (Array Expr) := f.subformulas.mapM (formula sorts vars)
  let binary (fn : Name) : ReconstructM Expr :=
    return mkApp2 (mkConst fn) (← sub 0) (← sub 1)
  let quantified (bind : Array Expr → Expr → ReconstructM Expr) : ReconstructM Expr := do
    let bound := f.boundVars.filterMap fun v =>
      (sorts.find? (·.1 == v)).map fun (_, s) => (v, s)
    withVars bound vars fun vars locals => do
      let body ← formula sorts vars (← do
        let some g := f.subformulas[0]? | throwError "quantifier without a body"
        pure g)
      bind locals body
  shared (← do
    match ← connectiveOf f with
    | .literal =>
      let some l := f.literal? | throwError "atom without a literal"
      literal vars l
    | .«true» => return mkConst ``True
    | .«false» => return mkConst ``False
    | .not => return mkApp (mkConst ``Not) (← sub 0)
    | .and => return junction ``And ``True (← all)
    | .or => return junction ``Or ``False (← all)
    | .imp => mkArrow (← sub 0) (← sub 1)
    | .iff => binary ``Iff
    | .xor => return mkApp (mkConst ``Not) (← binary ``Iff)
    | .«forall» => quantified fun locals body => mkForallFVars locals body
    | .«exists» => quantified fun locals body => do
      locals.foldrM (fun x body => do mkAppM ``Exists #[← mkLambdaFVars #[x] body]) body
    | .name =>
      let some raw := f.name? | throwError "named formula without a name"
      namedFormula raw
    | c => throwError "cannot rebuild a formula with connective {repr c}")

/--
The arguments of an n-ary junction, however it was nested.

Both sides are descended into, not just the right: flattening is what merges a
nested junction into a wider one, so the two sides of such a step differ in
exactly that.
-/
partial def junctionParts (fn : Name) (e : Expr) : Array Expr :=
  if e.isAppOfArity fn 2 then
    junctionParts fn e.appFn!.appArg! ++ junctionParts fn e.appArg!
  else
    #[e]

end Vampire.Reconstruct
