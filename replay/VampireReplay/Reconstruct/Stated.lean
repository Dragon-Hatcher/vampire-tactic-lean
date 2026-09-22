import VampireReplay.Reconstruct.Monad

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
TPTP's roundings and integer divisions, at the type their arguments are at.

The integers round to themselves and have Lean's own divisions: `Int.tdiv` and
`Int.tmod` truncate, `Int.fdiv` and `Int.fmod` floor, and `/` and `%` are
Euclidean. The rationals and the reals round to an integer cast back, and their
divisions are the rounding of the quotient, the remainder being what is left:
the Euclidean quotient is the floor of `a / b` for a positive `b` and the
ceiling for a negative one.

Stated with Mathlib's `Int.floor`, `Int.ceil` and `round` by name: the goal
that speaks of them has Mathlib, and this library does not import it.
-/
private def rounding (name : String) (args : Array Expr) :
    ReconstructM (Option Expr) := do
  let some a := args[0]? | return none
  let τ ← whnf (← inferType a)
  let integral := τ.isConstOf ``Int
  let cast (z : Expr) : ReconstructM Expr :=
    mkAppOptM ``Int.cast #[some τ, none, some z]
  let floor (x : Expr) : ReconstructM Expr := do cast (← mkAppM `Int.floor #[x])
  let ceil (x : Expr) : ReconstructM Expr := do cast (← mkAppM `Int.ceil #[x])
  let byCases (c yes no : Expr) : ReconstructM Expr := do
    mkAppOptM ``ite #[some τ, some c, some (← mkAppOptM ``Classical.propDecidable #[some c]),
      some yes, some no]
  let zero ← mkAppOptM ``OfNat.ofNat #[some τ, some (mkRawNatLit 0), none]
  -- Toward zero: the floor of what is not negative, the ceiling of the rest.
  let truncate (x : Expr) : ReconstructM Expr := do
    byCases (← mkAppM ``LE.le #[zero, x]) (← floor x) (← ceil x)
  let unary (f : Expr → ReconstructM Expr) : ReconstructM (Option Expr) := do
    let #[x] := args | return none
    if integral then return some x
    return some (← f x)
  let quotient (roundQ : Expr → Expr → ReconstructM Expr) : ReconstructM (Option Expr) := do
    let #[x, y] := args | return none
    return some (← roundQ x y)
  let remainder (roundQ : Expr → Expr → ReconstructM Expr) : ReconstructM (Option Expr) := do
    let #[x, y] := args | return none
    return some (← mkAppM ``HSub.hSub #[x, ← mkAppM ``HMul.hMul #[y, ← roundQ x y]])
  let divided (x y : Expr) : ReconstructM Expr := do mkAppM ``HDiv.hDiv #[x, y]
  let truncated (x y : Expr) : ReconstructM Expr := do
    if integral then return ← mkAppM ``Int.tdiv #[x, y]
    truncate (← divided x y)
  let floored (x y : Expr) : ReconstructM Expr := do
    if integral then return ← mkAppM ``Int.fdiv #[x, y]
    floor (← divided x y)
  let euclidean (x y : Expr) : ReconstructM Expr := do
    if integral then return ← mkAppM ``HDiv.hDiv #[x, y]
    let q ← divided x y
    byCases (← mkAppM ``LT.lt #[zero, y]) (← floor q) (← ceil q)
  match name with
  | "$floor" => unary floor
  | "$ceiling" => unary ceil
  | "$truncate" => unary truncate
  | "$round" => unary fun x => do cast (← mkAppM `round #[x])
  | "$quotient_e" => quotient euclidean
  | "$quotient_t" => quotient truncated
  | "$quotient_f" => quotient floored
  | "$remainder_e" =>
    if integral then quotient fun x y => mkAppM ``HMod.hMod #[x, y]
    else remainder euclidean
  | "$remainder_t" =>
    if integral then quotient fun x y => mkAppM ``Int.tmod #[x, y]
    else remainder truncated
  | "$remainder_f" =>
    if integral then quotient fun x y => mkAppM ``Int.fmod #[x, y]
    else remainder floored
  -- Whether a number is an integer, or a rational: whether it is one cast.
  | "$is_int" | "$is_rat" =>
    let #[x] := args | return none
    -- An integer is both, and there is no casting a rational into one.
    if integral then return some (mkConst ``True)
    let from_ := if name == "$is_int" then mkConst ``Int else mkConst `Rat
    let witness ← withLocalDeclD `n from_ fun n => do
      mkLambdaFVars #[n] (← mkEq (← mkAppOptM
        (if name == "$is_int" then ``Int.cast else `Rat.cast)
        #[some τ, none, some n]) x)
    return some (← mkAppM ``Exists #[witness])
  | _ => return none

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
  | "$quotient" => binary ``HDiv.hDiv
  | "$floor" | "$ceiling" | "$truncate" | "$round" | "$quotient_e"
  | "$quotient_t" | "$quotient_f" | "$remainder_e" | "$remainder_t"
  | "$remainder_f" | "$is_int" | "$is_rat" => rounding name args
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

/--
A symbol applied to arguments, as a term or a literal over it is rebuilt: what
TPTP interprets itself as Lean writes it, and anything else as what the goal or
a definition gave it.
-/
def applySymbol (name : String) (args : Array Expr) : ReconstructM Expr := do
  match ← interpreted name args with
  | some e => return e
  | none => return mkAppN (← symbolExpr name) args

/--
`sym before = sym after`, from a proof that each argument of the one is the
same argument of the other, `none` where they are the same term.

One argument at a time, through what `applySymbol` makes of the symbol: an
interpreted symbol is not a head applied to its arguments -- `$sum` of three
terms is two additions, a cast to the sort a term is at already is the term,
and `$greater` swaps its arguments -- so the congruence has to be taken where
each argument actually stands rather than off a head.
-/
def congrApplied (name : String) (before after : Array Expr)
    (equal : Array (Option Expr)) : ReconstructM Expr := do
  let mut current := before
  let mut proof ← mkEqRefl (← applySymbol name before)
  for i in [0:before.size] do
    let some (some p) := equal[i]? | continue
    let some x := before[i]? | continue
    let some y := after[i]? | continue
    let motive ← withLocalDeclD `x (← inferType x) fun v => do
      mkLambdaFVars #[v] (← applySymbol name (current.set! i v))
    proof ← mkEqTrans proof (← mkCongrArg motive p)
    current := current.set! i y
  return proof

/-- A term, and whether it is ground -- which is what makes it worth keeping. -/
private partial def termGround (vars : Vars) (t : Term) :
    ReconstructM (Expr × Bool) := do
  if t.isVar then
    let some x := vars[t.var]?
      | throwError "variable X{t.var} has no recorded sort"
    return (x, false)
  if let some e := (← get).groundTerms[t.index]? then
    return (e, true)
  let some symbol := t.symbol?
    | throwError "term has unknown functor {t.functor}"
  let mut args := #[]
  let mut ground := true
  for arg in t.args do
    let (e, argGround) ← termGround vars arg
    args := args.push e
    ground := ground && argGround
  let built ← shared (← applySymbol symbol.name args)
  if ground then
    modify fun s => { s with groundTerms := s.groundTerms.insert t.index built }
  return (built, ground)

/-- Rebuilds a vampire term as a Lean expression. -/
partial def term (vars : Vars) (t : Term) : ReconstructM Expr :=
  (·.1) <$> termGround vars t

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

/-- A literal, and whether it speaks of no variable. -/
private def literalGround (vars : Vars) (l : Literal) :
    ReconstructM (Expr × Bool) := do
  let mut args := #[]
  let mut ground := true
  for arg in l.args do
    let (e, argGround) ← termGround vars arg
    args := args.push e
    ground := ground && argGround
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
      applySymbol symbol.name args
  return (← shared (if polarity then atom else mkApp (mkConst ``Not) atom), ground)

/-- Rebuilds a vampire literal as a Lean proposition. -/
def literal (vars : Vars) (l : Literal) : ReconstructM Expr :=
  (·.1) <$> literalGround vars l

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

/--
A formula, and whether it speaks of no variable -- which, with polarity
flipping out of play, is what makes it worth keeping.
-/
private partial def formulaGround (sorts : Array (UInt32 × String)) (vars : Vars)
    (f : Formula) : ReconstructM (Expr × Bool) := do
  let keeping := !(← read).flipping
  if keeping then
    if let some e := (← get).groundFormulas[f.index]? then
      return (e, true)
  let sub (i : Nat) : ReconstructM (Expr × Bool) := do
    let some g := f.subformulas[i]? | throwError "formula is missing a subformula"
    formulaGround sorts vars g
  let all : ReconstructM (Array Expr × Bool) := do
    let mut built := #[]
    let mut ground := true
    for g in f.subformulas do
      let (e, subGround) ← formulaGround sorts vars g
      built := built.push e
      ground := ground && subGround
    return (built, ground)
  let binary (fn : Name) : ReconstructM (Expr × Bool) := do
    let (left, leftGround) ← sub 0
    let (right, rightGround) ← sub 1
    return (mkApp2 (mkConst fn) left right, leftGround && rightGround)
  -- A quantifier says nothing this could keep: what it binds is a local whose
  -- type comes from the sorts the step recorded, and two steps can record
  -- different sorts for the same variable.
  let quantified (bind : Array Expr → Expr → ReconstructM Expr) :
      ReconstructM (Expr × Bool) := do
    let bound := f.boundVars.filterMap fun v =>
      (sorts.find? (·.1 == v)).map fun (_, s) => (v, s)
    let built ← withVars bound vars fun vars locals => do
      let (body, _) ← formulaGround sorts vars (← do
        let some g := f.subformulas[0]? | throwError "quantifier without a body"
        pure g)
      bind locals body
    return (built, false)
  let (built, ground) ← do
    match ← connectiveOf f with
    | .literal =>
      let some l := f.literal? | throwError "atom without a literal"
      literalGround vars l
    | .«true» => pure (mkConst ``True, true)
    | .«false» => pure (mkConst ``False, true)
    | .not =>
      let (inner, innerGround) ← sub 0
      pure (mkApp (mkConst ``Not) inner, innerGround)
    | .and =>
      let (parts, partsGround) ← all
      pure (junction ``And ``True parts, partsGround)
    | .or =>
      let (parts, partsGround) ← all
      pure (junction ``Or ``False parts, partsGround)
    | .imp =>
      let (left, leftGround) ← sub 0
      let (right, rightGround) ← sub 1
      pure (← mkArrow left right, leftGround && rightGround)
    | .iff => binary ``Iff
    | .xor =>
      let (stated, statedGround) ← binary ``Iff
      pure (mkApp (mkConst ``Not) stated, statedGround)
    | .«forall» => quantified fun locals body => mkForallFVars locals body
    | .«exists» => quantified fun locals body => do
      locals.foldrM (fun x body => do mkAppM ``Exists #[← mkLambdaFVars #[x] body]) body
    | .name =>
      -- A name stands for whatever the proof has bound it to, which is not
      -- settled by which formula this is.
      let some raw := f.name? | throwError "named formula without a name"
      pure (← namedFormula raw, false)
    | c => throwError "cannot rebuild a formula with connective {repr c}"
  let e ← shared built
  if ground && keeping then
    modify fun s => { s with groundFormulas := s.groundFormulas.insert f.index e }
  return (e, ground)

/-- Rebuilds a formula, binding quantified variables as it descends. -/
partial def formula (sorts : Array (UInt32 × String)) (vars : Vars) (f : Formula) :
    ReconstructM Expr :=
  (·.1) <$> formulaGround sorts vars f

/--
The arguments of an n-ary junction, however it was nested.

Both sides are descended into, not just the right: flattening is what merges a
nested junction into a wider one, so the two sides of such a step differ in
exactly that.
-/
partial def junctionParts (fn : Name) (e : Expr) : Array Expr :=
  let rec go (e : Expr) (acc : Array Expr) : Array Expr :=
    if e.isAppOfArity fn 2 then
      go e.appArg! (go e.appFn!.appArg! acc)
    else
      acc.push e
  go e #[]

end Vampire.Reconstruct
