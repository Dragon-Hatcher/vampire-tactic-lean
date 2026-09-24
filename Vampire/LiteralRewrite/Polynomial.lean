import Vampire.LiteralRewrite.Interpreted

/-!
A port of vampire's polynomial normal form (`Kernel/Polynomial.hpp`), of the
normalizer that puts a term into it (`Kernel/PolynomialNormalizer.cpp`), of
the evaluation that simplifies it (`Inferences/PolynomialEvaluation.cpp`,
`Inferences/FunctionEvaluation.hpp`), and of the three simplifications built
on them: polynomial evaluation itself, ALASCA normalization
(`Kernel/ALASCA/Normalization.hpp`) and cancellation
(`Inferences/Cancellation.cpp`).

The port decides what each makes of a literal, which is then checked against
what vampire made. The one thing it cannot reproduce is the order vampire
keeps a polynomial's monomials and a monomial's factors in, which is by when
each term was first built; nothing a procedure computes depends on that order
but how it writes the result down, and the one place it does -- which way
ALASCA turns an equation round -- vampire records. So results are compared as
what they write down up to the order of sums and products.

What decides a rewrite is the port; what proves it is the rewrite's own
lemmas where it is not an identity of a ring -- taking a floor's integer part
out of it, an integer division of numerals -- and `ring_nf` for the identities
of a ring the rest of the normal form is.
-/

namespace Vampire.LiteralRewrite

open Lean Meta

/-- A function of vampire's that polynomial evaluation evaluates, or any other. -/
inductive Head
  /-- `$floor` at the rationals or the reals, which replay states as `↑⌊x⌋`. -/
  | floor
  /-- `$quotient` at the rationals or the reals. -/
  | div
  /-- An integer quotient, rounded as it says. -/
  | quot (r : Rounding)
  /-- An integer remainder. -/
  | rem (r : Rounding)
  /-- Any other function, `fn` applied to the arguments. -/
  | app (fn : Expr)
  deriving BEq, Inhabited

/--
`PolyNf`: a term in polynomial normal form. A term of a sort of numbers is a
polynomial, a sum of monomials, each a numeral times a product of factors
raised to powers; a factor is itself a term in normal form. Anything else is
a function applied to terms in normal form, or a leaf -- which is what a
variable is, and what a constant is too, since polynomial evaluation treats
the two alike.

Each term carries its sort, which decides what counts as an integer.
-/
inductive Nf
  | leaf (α : Expr) (e : Expr)
  | func (α : Expr) (h : Head) (args : Array Nf)
  | poly (α : Expr) (monoms : Array (ℚ × Array (Nf × Nat)))
  deriving Inhabited

/-- A monomial: its numeral, and its factors with their powers. -/
abbrev Monom := ℚ × Array (Nf × Nat)

namespace Nf

partial def beq : Nf → Nf → Bool
  | .leaf α e, .leaf β f => α == β && e == f
  | .func α h xs, .func β g ys =>
    α == β && h == g && xs.size == ys.size && (xs.zip ys).all fun (x, y) => x.beq y
  | .poly α ms, .poly β ns =>
    α == β && ms.size == ns.size && (ms.zip ns).all fun ((k, fs), (l, gs)) =>
      k == l && fs.size == gs.size && (fs.zip gs).all fun ((x, p), (y, q)) => p == q && x.beq y
  | _, _ => false

instance : BEq Nf := ⟨beq⟩

/-- A total order on expressions. -/
private def exprCmp (a b : Expr) : Ordering :=
  if a == b then .eq else if a.lt b then .lt else .gt

/-- Arrays compared an element at a time, a prefix first. -/
private def arrayCmp {α} (cmp : α → α → Ordering) (xs ys : Array α) : Ordering := Id.run do
  for (x, y) in xs.zip ys do
    let o := cmp x y
    if o != .eq then return o
  return compare xs.size ys.size

private def headCmp : Head → Head → Ordering
  | .app f, .app g => exprCmp f g
  | h, g =>
    let index : Head → Nat
      | .floor => 0 | .div => 1 | .quot .euclidean => 2 | .quot .truncating => 3
      | .quot .flooring => 4 | .rem .euclidean => 5 | .rem .truncating => 6
      | .rem .flooring => 7 | .app _ => 8
    compare (index h) (index g)

/--
A total order on terms in normal form, standing in for vampire's order by when
a term was built: all that is asked of it is that equal terms come together.
-/
partial def cmp : Nf → Nf → Ordering
  | .leaf α e, .leaf β f => (exprCmp α β).then (exprCmp e f)
  | .func α h xs, .func β g ys =>
    (exprCmp α β).then ((headCmp h g).then (arrayCmp cmp xs ys))
  | .poly α ms, .poly β ns => (exprCmp α β).then (arrayCmp monomCmp ms ns)
  | .leaf .., _ => .lt
  | _, .leaf .. => .gt
  | .func .., _ => .lt
  | _, .func .. => .gt
where
  factorCmp (a b : Nf × Nat) : Ordering := (cmp a.1 b.1).then (compare a.2 b.2)
  /-- Monomials by their factors, and then by their numerals, as `Monom::operator<`. -/
  monomCmp (a b : Monom) : Ordering :=
    (arrayCmp factorCmp a.2 b.2).then (compare a.1 b.1)

end Nf

/-- Factors in order. -/
def sortFactors (fs : Array (Nf × Nat)) : Array (Nf × Nat) :=
  fs.qsort fun a b => Nf.cmp.factorCmp a b == .lt

/-- Monomials in order, by their factors and then their numerals. -/
def sortMonoms (ms : Array Monom) : Array Monom :=
  ms.qsort fun a b => Nf.cmp.monomCmp a b == .lt

/-- Factors in order, each term once with the powers it had summed. -/
def groupFactors (fs : Array (Nf × Nat)) : Array (Nf × Nat) := Id.run do
  let mut out : Array (Nf × Nat) := #[]
  for (t, p) in sortFactors fs do
    match out.back? with
    | some (u, q) => if u == t then out := out.pop.push (u, q + p) else out := out.push (t, p)
    | none => out := out.push (t, p)
  return out

/-- The numeral `q` at `α`. -/
def numeralNf (α : Expr) (q : ℚ) : Nf := .poly α #[(q, #[])]

/-- The numeral a term is, if it is one: `Polynom::toNumber`. -/
def Nf.numeral? : Nf → Option ℚ
  | .poly _ ms =>
    if ms.size == 0 then some 0
    else if ms.size == 1 && ms[0]!.2.isEmpty then some ms[0]!.1
    else none
  | _ => none

/-- A term as a polynomial: `PolyNf::wrapPoly`. -/
def Nf.wrap : Nf → Array Monom
  | .poly _ ms => ms
  | t => #[(1, #[(t, 1)])]

/-! ### The normalizer -/

/-- `NormalizationResult`: what the normalizer makes of a term before it is rendered. -/
inductive Normalized
  /-- A term not of a sort of numbers. -/
  | nf (n : Nf)
  /-- A sum of monomials. -/
  | poly (ms : Array Monom)
  /-- `PreMonom`: a numeral times factors, not yet grouped into powers. -/
  | pre (k : ℚ) (fs : Array Nf)

/-- `RenderMonom`: factors sorted, and a factor that recurs as a power. -/
def renderMonom (k : ℚ) (fs : Array Nf) : Monom := (k, groupFactors (fs.map (·, 1)))

/-- `RenderPolyNf`. -/
def Normalized.render (α : Expr) : Normalized → Nf
  | .nf n => n
  | .poly ms => .poly α (sortMonoms ms)
  | .pre k fs => .poly α #[renderMonom k fs]

/-- `normalizeAdd`: the monomials of both, not merged. -/
private def normalizeAdd : Normalized → Normalized → MetaM Normalized
  | .pre k fs, .poly ms => return .poly (ms.push (renderMonom k fs))
  | .poly ms, .pre k fs => return .poly (ms.push (renderMonom k fs))
  | .pre k fs, .pre l gs => return .poly #[renderMonom k fs, renderMonom l gs]
  | .poly ms, .poly ns => return .poly (ms ++ ns)
  | _, _ => throwError "normalizing a sum of something that is not a number"

/-- `normalizeMul`: a product is distributed over nothing; a sum it multiplies
is a factor. -/
private def normalizeMul (α : Expr) : Normalized → Normalized → MetaM Normalized
  | .pre k fs, p@(.poly _) => return .pre k (fs.push (p.render α))
  | p@(.poly _), .pre k fs => return .pre k (fs.push (p.render α))
  | .pre k fs, .pre l gs => return .pre (k * l) (fs ++ gs)
  | p@(.poly _), q@(.poly _) => return .pre 1 #[p.render α, q.render α]
  | _, _ => throwError "normalizing a product of something that is not a number"

/-- `normalizeMinus`: a product with minus one. -/
private def normalizeMinus (α : Expr) (x : Normalized) : MetaM Normalized :=
  normalizeMul α (.pre (-1) #[]) x

/-- Whether `e` is how replay states `$floor` at the rationals or the reals: `↑⌊x⌋`. -/
def floorArg? (e : Expr) : Option Expr :=
  if e.isAppOf ``Int.cast && e.appArg!.isAppOf ``Int.floor then some e.appArg!.appArg!
  else none

/--
`PolyNf::normalize`: `e` in normal form, before it is rendered. Bottom-up, as
vampire's normalizer is, which only matters to where it looks.
-/
partial def normalize (e : Expr) : MetaM (Expr × Normalized) := do
  let α ← instantiateMVars (← inferType e)
  let rendered (t : Expr) : MetaM Nf := do
    let (β, n) ← normalize t
    return n.render β
  let func (h : Head) (args : Array Expr) : MetaM Nf := do
    return .func α h (← args.mapM rendered)
  unless numeric α do
    if !e.isApp then return (α, .nf (.leaf α e))
    return (α, .nf (← func (.app e.getAppFn) e.getAppArgs))
  if let some c := numeral? e then return (α, .pre c #[])
  let result ← match e.getAppFnArgs with
    | (``HAdd.hAdd, #[_, _, _, _, a, b]) => do
      normalizeAdd (← normalize a).2 (← normalize b).2
    | (``HSub.hSub, #[_, _, _, _, a, b]) => do
      normalizeAdd (← normalize a).2 (← normalizeMinus α (← normalize b).2)
    | (``HMul.hMul, #[_, _, _, _, a, b]) => do
      normalizeMul α (← normalize a).2 (← normalize b).2
    | (``Neg.neg, #[_, _, a]) => do normalizeMinus α (← normalize a).2
    | (``HDiv.hDiv, #[_, _, _, _, a, b]) =>
      if integral α then do pure (.pre 1 #[← func (.quot .euclidean) #[a, b]])
      else do
        -- `normalizeDiv`: dividing by a nonzero numeral is multiplying by
        -- its inverse; by anything else it is a function.
        let na := (← normalize a).2
        let nb := (← normalize b).2
        match nb with
        | .pre k fs =>
          if fs.isEmpty && k != 0 then normalizeMul α (.pre k⁻¹ #[]) na
          else pure (.pre 1 #[.func α .div #[na.render α, nb.render α]])
        | _ => pure (.pre 1 #[.func α .div #[na.render α, nb.render α]])
    | _ => do
      if let some x := floorArg? e then
        return (α, .pre 1 #[← func .floor #[x]])
      if let some (op, a, b) := binary? e then
        match op with
        | .quot r => return (α, .pre 1 #[← func (.quot r) #[a, b]])
        | .rem r => return (α, .pre 1 #[← func (.rem r) #[a, b]])
        | _ => pure ()
      if !e.isApp then return (α, .pre 1 #[.leaf α e])
      pure (.pre 1 #[← func (.app e.getAppFn) e.getAppArgs])
  return (α, result)

/-- `e` in normal form. -/
def normalizeNf (e : Expr) : MetaM Nf := do
  let (α, n) ← normalize e
  return n.render α

/-! ### Evaluation -/

/-- `isInteger`: whether a term of sort `α` is sure to be an integer. -/
partial def isInteger (α : Expr) (t : Nf) : Bool :=
  match t.numeral? with
  | some c => c.den == 1
  | none => match t with
    | .func _ h _ => integral α || h == .floor
    | .leaf .. => integral α
    | .poly _ ms => ms.all fun (k, fs) => k.den == 1 && integerFactors fs
where
  integerFactors (fs : Array (Nf × Nat)) : Bool :=
    fs.all fun (u, p) => p == 0 || isInteger α u

/--
`simplFloor`, split in two: the monomials whose integer part it takes out,
and what it leaves inside the floor; `none` where it takes nothing out.
-/
def floorSplit (α : Expr) (arg : Nf) : Option (Array Monom × Array Monom) := Id.run do
  let mut pulled : Array Monom := #[]
  let mut kept : Array Monom := #[]
  for (k, t) in arg.wrap do
    if isInteger.integerFactors α t then
      let i : ℚ := k.floor
      if i != 0 then pulled := pulled.push (i, t)
      if k - i != 0 then kept := kept.push (k - i, t)
    else
      kept := kept.push (k, t)
  if pulled.isEmpty then return none
  return some (pulled, kept)

/-- `simplFloor`: a numeral's floor, or the integer monomials taken out. -/
def simplFloor (α : Expr) (arg : Nf) : Option Nf := do
  if let some c := arg.numeral? then return numeralNf α c.floor
  let (pulled, kept) ← floorSplit α arg
  let mut pulled := pulled
  if kept.isEmpty then
    pure ()
  else if kept.size == 1 && kept[0]!.2.isEmpty then
    let n : ℚ := kept[0]!.1.floor
    if n != 0 then pulled := pulled.push (n, #[])
  else
    pulled := pulled.push (1, #[(.func α .floor #[.poly α kept], 1)])
  return .poly α (sortMonoms pulled)

/-- `trySimplify`: what evaluation makes of an interpreted function whose
arguments it has evaluated, `none` where nothing. -/
def simplifyFunc (α : Expr) (h : Head) (args : Array Nf) : Option Nf :=
  match h with
  | .floor => simplFloor α args[0]!
  | .div =>
    match args[1]!.numeral?, args[0]!.numeral? with
    | some 1, _ => some args[0]!
    | some r, some l => if r != 0 then some (numeralNf α (l / r)) else none
    | _, _ => none
  | .quot r =>
    match args[1]!.numeral?, args[0]!.numeral? with
    | some 0, _ => none
    | some 1, _ => some args[0]!
    | some y, some x => some (numeralNf α (quotient r x.num y.num))
    | _, _ => none
  | .rem r =>
    match args[1]!.numeral?, args[0]!.numeral? with
    | some 0, _ => none
    | some 1, _ => some (numeralNf α 0)
    | some y, some x => some (numeralNf α (remainder r x.num y.num))
    | _, _ => none
  | .app _ => none

/--
`simplifyMonom`: a factor that is a polynomial of one monomial is flattened
into this one, numerals multiplied into the numeral, and a factor that recurs
has its powers summed; zero if the numeral is.
-/
def simplifyMonom (m : Monom) : Monom := Id.run do
  let (k, fs) := m
  let mut numeral := k
  let mut args : Array (Nf × Nat) := #[]
  for (t, p) in fs do
    if let .poly _ ms := t then
      if ms.size == 1 then
        numeral := numeral * ms[0]!.1 ^ p
        args := args ++ ms[0]!.2.map fun (u, q) => (u, q * p)
        continue
    args := args.push (t, p)
  args := sortFactors args
  let mut out : Array (Nf × Nat) := #[]
  let mut i := 0
  while i < args.size do
    let (t, p) := args[i]!
    if let some c := t.numeral? then
      numeral := numeral * c ^ p
    else
      let mut power := p
      while i + 1 < args.size && args[i + 1]!.1 == t do
        power := power + args[i + 1]!.2
        i := i + 1
      if power != 0 then out := out.push (t, power)
    i := i + 1
  if numeral == 0 then return (0, #[])
  return (numeral, out)

/-- `simplifySummation`: monomials of the same factors merged, zeros dropped,
and a sum of the one term once that term. -/
def simplifySummation (α : Expr) (summands : Array Monom) : Nf := Id.run do
  let mut out : Array Monom := #[]
  for (k, fs) in sortMonoms summands do
    match out.back? with
    | some (l, gs) =>
      if gs == fs then out := out.pop.push (l + k, gs) else out := out.push (k, fs)
    | none => out := out.push (k, fs)
  let merged := out.filter (·.1 != 0)
  if h : merged.size = 1 then
    let (k, fs) := merged[0]
    if k == 1 && fs.size == 1 && fs[0]!.2 == 1 then return fs[0]!.1
  return .poly α merged

/-- `simplifyPoly`: each monomial simplified, a numeral times a sum
distributed, and the result summed. -/
def simplifyPoly (α : Expr) (ms : Array Monom) : Nf := Id.run do
  let mut sum : Array Monom := #[]
  for m in ms do
    let (k, fs) := simplifyMonom m
    if k == 0 then continue
    if fs.size == 1 && fs[0]!.2 == 1 then
      if let .poly _ ns := fs[0]!.1 then
        for (l, gs) in ns do sum := sum.push (l * k, gs)
        continue
    sum := sum.push (k, fs)
  return simplifySummation α sum

/-- `PolynomialEvaluation::evaluate`, bottom-up. -/
partial def evaluate : Nf → Nf
  | .leaf α e => .leaf α e
  | .func α h args =>
    let args := args.map evaluate
    (simplifyFunc α h args).getD (.func α h args)
  | .poly α ms =>
    simplifyPoly α (ms.map fun (k, fs) => (k, fs.map fun (t, p) => (evaluate t, p)))

/-- What `InequalityNormalizer::normalize` makes of a term: its normal form, evaluated. -/
def evaluated (e : Expr) : MetaM Nf := return evaluate (← normalizeNf e)

/-! ### What vampire wrote -/

/--
A term as vampire writes it down, up to the order of sums and products: a
polynomial of the one term once is that term, no monomials is the numeral
zero, and a factor that recurs is a power.
-/
partial def canon : Nf → Nf
  | .leaf α e => .leaf α e
  | .func α h args => .func α h (args.map canon)
  | .poly α ms =>
    let ms := sortMonoms (ms.map fun (k, fs) => (k, groupFactors (fs.map fun (t, p) => (canon t, p))))
    if ms.size == 0 then numeralNf α 0
    else if ms.size == 1 && ms[0]!.1 == 1 && ms[0]!.2.size == 1 && ms[0]!.2[0]!.2 == 1 then
      ms[0]!.2[0]!.1
    else .poly α ms

/--
A term vampire wrote down from a normal form, read back into one:
`Polynom::denormalize` writes a sum of monomials to the right, a monomial as
its numeral times its factors (`$lin_mul`, which replay states as a product
with the numeral), and the factors as a product to the right, a power as the
factor that many times.
-/
partial def parse (e : Expr) : MetaM Nf := do
  let α ← instantiateMVars (← inferType e)
  if numeric α then
    if let some c := numeral? e then return numeralNf α c
    if e.isAppOfArity ``HAdd.hAdd 6 then return .poly α (← summands e)
    if e.isAppOfArity ``HMul.hMul 6 then return .poly α #[← monom e]
  if let some x := floorArg? e then return .func α .floor #[← parse x]
  if let some (op, a, b) := binary? e then
    match op with
    | .div => return .func α .div #[← parse a, ← parse b]
    | .quot r => return .func α (.quot r) #[← parse a, ← parse b]
    | .rem r => return .func α (.rem r) #[← parse a, ← parse b]
    | _ => pure ()
  if !e.isApp then return .leaf α e
  return .func α (.app e.getAppFn) (← e.getAppArgs.mapM parse)
where
  summands (e : Expr) : MetaM (Array Monom) := do
    let (``HAdd.hAdd, #[_, _, _, _, a, b]) := e.getAppFnArgs | return #[← monom e]
    return #[← monom a] ++ (← summands b)
  monom (m : Expr) : MetaM Monom := do
    if let some c := numeral? m then return (c, #[])
    -- A sum at a monomial's place is a monomial whose one factor it is.
    if m.isAppOfArity ``HAdd.hAdd 6 then return (1, #[(← parse m, 1)])
    if let (``HMul.hMul, #[_, _, _, _, k, t]) := m.getAppFnArgs then
      if let some c := numeral? k then return (c, groupFactors (← factors t))
    return (1, groupFactors (← factors m))
  factors (f : Expr) : MetaM (Array (Nf × Nat)) := do
    let (``HMul.hMul, #[_, _, _, _, a, b]) := f.getAppFnArgs | return #[(← parse f, 1)]
    return #[(← parse a, 1)] ++ (← factors b)

/-- Whether `e`, as vampire wrote it, is the term in normal form `n`. -/
def writes (n : Nf) (e : Expr) : MetaM Bool := return canon n == canon (← parse e)

/-! ### Back into terms -/

/-- A term in normal form as a term: what `PolyNf::denormalize` writes, in some order. -/
partial def Nf.toExpr : Nf → MetaM Expr
  | .leaf _ e => pure e
  | .func α h args => do
    let args ← args.mapM toExpr
    match h with
    | .floor => mkAppOptM ``Int.cast #[some α, none, some (← mkAppM ``Int.floor #[args[0]!])]
    | .div => mkAppM ``HDiv.hDiv #[args[0]!, args[1]!]
    | .quot .euclidean => mkAppM ``HDiv.hDiv #[args[0]!, args[1]!]
    | .quot .truncating => mkAppM ``Int.tdiv #[args[0]!, args[1]!]
    | .quot .flooring => mkAppM ``Int.fdiv #[args[0]!, args[1]!]
    | .rem .euclidean => mkAppM ``HMod.hMod #[args[0]!, args[1]!]
    | .rem .truncating => mkAppM ``Int.tmod #[args[0]!, args[1]!]
    | .rem .flooring => mkAppM ``Int.fmod #[args[0]!, args[1]!]
    | .app fn => pure (mkAppN fn args)
  | .poly α ms => do
    let some last := ms.back? | wholeOf α 0
    let mut out ← monomExpr α last
    for m in (ms.pop).reverse do
      out ← mkAppM ``HAdd.hAdd #[← monomExpr α m, out]
    return out
where
  monomExpr (α : Expr) (m : Monom) : MetaM Expr := do
    let (k, fs) := m
    let mut factors : Array Expr := #[]
    for (t, p) in fs do
      let e ← toExpr t
      for _ in [0:p] do factors := factors.push e
    let some last := factors.back? | numeralOf α k
    let mut product := last
    for f in (factors.pop).reverse do
      product ← mkAppM ``HMul.hMul #[f, product]
    if k == 1 then return product
    mkAppM ``HMul.hMul #[← numeralOf α k, product]

/--
An integer-valued polynomial at the rationals or the reals, as the integer it
is: each factor `isInteger` passed is a floor `↑⌊x⌋`, standing for `⌊x⌋`, or a
polynomial of such.
-/
partial def integerExpr (ms : Array Monom) : MetaM Expr := do
  let int := mkConst ``Int
  let factor (t : Nf) : MetaM Expr := do
    match t with
    | .func _ .floor args => mkAppM ``Int.floor #[← args[0]!.toExpr]
    | .poly _ ns => integerExpr ns
    | _ => throwError "a factor polynomial evaluation counts as an integer that is \
      not a floor"
  let monom (m : Monom) : MetaM Expr := do
    let (k, fs) := m
    let mut out ← wholeOf int k.num
    for (t, p) in fs do
      let f ← factor t
      for _ in [0:p] do out ← mkAppM ``HMul.hMul #[out, f]
    return out
  let some first := ms[0]? | wholeOf int 0
  let mut out ← monom first
  for m in ms.extract 1 ms.size do out ← mkAppM ``HAdd.hAdd #[out, ← monom m]
  return out

/-! ### Proving evaluation -/

/--
`↑⌊s⌋ = out`, where evaluation takes the integer monomials `pulled` out of
the floor and leaves `kept` in it. `s` is `↑z + k` up to the identities of a
ring, `z` the integer `pulled` is and `k` what `kept` is, so the floor is
`z + ⌊k⌋` by `Int.floor_intCast_add`, or `z` by `Int.floor_intCast` where
nothing is kept; a numeral kept has its floor evaluated.
-/
private def floorOut (α e s : Expr) (pulled kept : Array Monom) :
    MetaM (Expr × Expr) := do
  let z ← integerExpr pulled
  let zCast ← mkAppOptM ``Int.cast #[some α, none, some z]
  let zα ← (Nf.poly α pulled).toExpr
  let castZ ← castEq zCast zα
  let floorOf (x : Expr) : MetaM Expr := mkAppM ``Int.floor #[x]
  let castOf (x : Expr) : MetaM Expr := mkAppOptM ``Int.cast #[some α, none, some x]
  let motive ← withLocalDeclD `x α fun x => do mkLambdaFVars #[x] (← castOf (← floorOf x))
  let castFn := (← castOf z).appFn!
  if kept.isEmpty then
    -- `s = ↑z`, `↑⌊↑z⌋ = ↑z = zα`.
    let split ← mkEqTrans (← ringEq! s zα) (← mkEqSymm castZ)
    let floored ← mkCongrArg castFn
      (← lemmaAt ``Int.floor_intCast (← mkEq (← floorOf zCast) z))
    let h ← mkEqTrans (← mkCongrArg motive split) (← mkEqTrans floored castZ)
    return (zα, ← mkExpectedTypeHint h (← mkEq e zα))
  let k ← (Nf.poly α kept).toExpr
  -- `s = zα + k = ↑z + k`.
  let addK ← withLocalDeclD `x α fun v => do mkLambdaFVars #[v] (← mkAppM ``HAdd.hAdd #[v, k])
  let split ← mkEqTrans (← ringEq! s (← mkAppM ``HAdd.hAdd #[zα, k]))
    (← mkCongrArg addK (← mkEqSymm castZ))
  -- `↑⌊↑z + k⌋ = ↑(z + ⌊k⌋) = ↑z + ↑⌊k⌋ = zα + ↑⌊k⌋`.
  let floorK ← floorOf k
  let added ← lemmaAt ``Int.floor_intCast_add
    (← mkEq (← floorOf (← mkAppM ``HAdd.hAdd #[zCast, k])) (← mkAppM ``HAdd.hAdd #[z, floorK]))
  let h₁ ← mkCongrArg motive split
  let h₂ ← mkCongrArg castFn added
  let castK ← castOf floorK
  let h₃ ← lemmaAt ``Int.cast_add
    (← mkEq (← castOf (← mkAppM ``HAdd.hAdd #[z, floorK])) (← mkAppM ``HAdd.hAdd #[zCast, castK]))
  let addK ← withLocalDeclD `x α fun v => do mkLambdaFVars #[v] (← mkAppM ``HAdd.hAdd #[v, castK])
  let h₄ ← mkCongrArg addK castZ
  let out ← mkAppM ``HAdd.hAdd #[zα, castK]
  let h ← mkEqTrans h₁ (← mkEqTrans h₂ (← mkEqTrans h₃ h₄))
  -- A numeral kept has its floor evaluated.
  if kept.size == 1 && kept[0]!.2.isEmpty then
    let n ← numeralOf α (kept[0]!.1.floor : ℚ)
    let evaluatedK ← byNumerals (← mkEq castK n)
    let addTo ← withLocalDeclD `x α fun v => do mkLambdaFVars #[v] (← mkAppM ``HAdd.hAdd #[zα, v])
    let out' ← mkAppM ``HAdd.hAdd #[zα, n]
    let h ← mkEqTrans h (← mkCongrArg addTo evaluatedK)
    return (out', ← mkExpectedTypeHint h (← mkEq e out'))
  return (out, ← mkExpectedTypeHint h (← mkEq e out))

/--
The steps of evaluation that are not identities of a ring, each where
evaluation makes it: a floor's integer part taken out, and an integer
division or remainder of numerals, or by one, evaluated. The arguments are
asked about as evaluation sees them, evaluated.
-/
private def polynomialStep (e : Expr) : MetaM (Option (Expr × Expr)) := do
  let some α ← sortOf? e | return none
  if let some s := floorArg? e then
    let arg ← evaluated s
    if let some c := arg.numeral? then
      -- `s = c`, and `↑⌊c⌋` is a numeral.
      let cExpr ← numeralOf α c
      let out ← numeralOf α (c.floor : ℚ)
      let motive ← withLocalDeclD `x α fun x => do
        mkLambdaFVars #[x] (← mkAppOptM ``Int.cast #[some α, none, some (← mkAppM ``Int.floor #[x])])
      let atC ← mkCongrArg motive (← ringEq! s cExpr)
      let h ← mkEqTrans atC (← byNumerals (← mkEq (motive.beta #[cExpr]) out))
      return some (out, h)
    let some (pulled, kept) := floorSplit α arg | return none
    return some (← floorOut α e s pulled kept)
  let some (op, a, b) := binary? e | return none
  let head ← match op with
    | .quot r => pure (Head.quot r)
    | .rem r => pure (Head.rem r)
    | _ => return none
  let na ← evaluated a
  let nb ← evaluated b
  let some out := simplifyFunc α head #[na, nb] | return none
  -- The arguments as the numerals evaluation found them, then the operation.
  let atNumerals (x y : Expr) : MetaM Expr := do
    let fn := e.appFn!.appFn!
    let hx ← if x == a then mkEqRefl a else ringEq! a x
    let hy ← if y == b then mkEqRefl b else ringEq! b y
    mkCongr (← mkCongrArg fn hx) hy
  if nb.numeral? == some 1 then
    let one ← wholeOf α 1
    let at1 ← atNumerals a one
    let (lemma_, result) ← match op with
      | .quot .euclidean => pure (``Int.ediv_one, a)
      | .quot .truncating => pure (``Int.tdiv_one, a)
      | .quot .flooring => pure (``Int.fdiv_one, a)
      | .rem .euclidean => pure (``Int.emod_one, ← wholeOf α 0)
      | .rem .truncating => pure (``Int.tmod_one, ← wholeOf α 0)
      | _ => pure (``Int.fmod_one, ← wholeOf α 0)
    let h ← mkEqTrans at1 (← mkAppM lemma_ #[a])
    return some (result, ← mkExpectedTypeHint h (← mkEq e result))
  let (some x, some y) := (na.numeral?, nb.numeral?) | return none
  let some q := out.numeral? | return none
  let xExpr ← numeralOf α x
  let yExpr ← numeralOf α y
  let atN ← atNumerals xExpr yExpr
  let result ← numeralOf α q
  let h ← mkEqTrans atN (← byEvaluating (← mkEq (mkApp2 e.appFn!.appFn! xExpr yExpr) result))
  return some (result, ← mkExpectedTypeHint h (← mkEq e result))

/-- `e = e'`, where `e'` is `e` with the steps of evaluation that are not
identities of a ring made. -/
def evaluationSteps (e : Expr) : MetaM Simp.Result := bottomUp polynomialStep e

/-- `p ↔ q` for a literal `p` and one `q` that is `p` evaluated, up to the
identities of a ring. -/
def evaluatesInto (p q : Expr) : MetaM (Option Expr) := do
  let r ← evaluationSteps p
  let some same ← ringEq r.expr q | return none
  return some (← trans (← resultIff p r) (← iffOfEq same))

/-! ### Polynomial evaluation -/

/-- What a literal is to a procedure: a comparison, or anything else. -/
private inductive Shape
  | comparison (c : Comparison)
  /-- An equation between terms of a sort that is not one of numbers. -/
  | equation (positive : Bool) (lhs rhs : Expr)
  /-- Any other atom, its arguments rewritten where they stand. -/
  | other

private def shapeOf (p : Expr) : Shape :=
  match comparison? p with
  | some c => .comparison c
  | none =>
    let (positive, atom) := atomOf p
    match atom.eq? with
    | some (_, a, b) => .equation positive a b
    | none => .other

/-- What a procedure made of a literal, as the port found it. -/
private inductive Made
  | constant (value : Bool)
  | literal

/--
Whether the arguments of `q` are what the port made of `p`'s: `args` for each
argument of `p`'s atom. An equation's sides can come either way round, as
vampire shares it; which way they did is the answer.
-/
private def argumentsMade (p q : Expr) (args : Array Nf) : MetaM (Option Bool) := do
  let (_, pAtom) := atomOf p
  let (_, qAtom) := atomOf q
  unless pAtom.getAppFn == qAtom.getAppFn || (comparison? p).isSome do return none
  let qArgs := qAtom.getAppArgs
  unless qArgs.size == args.size do return none
  let all (xs : Array Nf) : MetaM Bool := do
    for (n, e) in xs.zip qArgs do
      unless ← writes n e do return false
    return true
  if ← all args then return some false
  if pAtom.isAppOfArity ``Eq 3 && args.size == 3 then
    if ← all #[args[0]!, args[2]!, args[1]!] then return some true
  return none

/--
`evaluation` by `PolynomialEvaluationRule`: each argument of the literal put
into normal form and evaluated, and then the predicate: an equation of one
term both sides is true, and a comparison of two numerals decided.
-/
private def polynomialPort (p : Expr) : MetaM (Made × Array Nf) := do
  let (positive, atom) := atomOf p
  let args ← atom.getAppArgs.mapM evaluated
  let equalSides (a b : Nf) := canon a == canon b
  match shapeOf p with
  | .comparison c =>
    let a ← evaluated c.lhs
    let b ← evaluated c.rhs
    match a.numeral?, b.numeral?, c.rel with
    | some x, some y, .eq => return (.constant (positive == (x == y)), args)
    | some x, some y, .lt => return (.constant (positive == decide (x < y)), args)
    | some x, some y, .le => return (.constant (positive == decide (x ≤ y)), args)
    | _, _, rel =>
      if equalSides a b then
        return (.constant (if rel == .lt then !positive else positive), args)
      return (.literal, args)
  | .equation positive' a b =>
    if equalSides (← evaluated a) (← evaluated b) then return (.constant positive', args)
    return (.literal, args)
  | .other => return (.literal, args)

/-- `p ↔ q`, for a literal `p` polynomial evaluation made into `q`. -/
def polynomialEvaluation (p q : Expr) : MetaM Expr := do
  let (made, args) ← polynomialPort p
  let .literal := made
    | throwError "polynomial evaluation decides{indentExpr p}\nbut vampire made \
        it{indentExpr q}"
  let some turned ← argumentsMade p q args
    | throwError "polynomial evaluation does not make{indentExpr q}\nof{indentExpr p}"
  let (q', back) ← turnedRound q turned
  let some h ← evaluatesInto p q'
    | throwError "polynomial evaluation makes{indentExpr q}\nof{indentExpr p}, \
        but the two are not one up to evaluating it"
  trans h back
where
  /-- `q` with its equation turned round, if it was, and `q' ↔ q`. -/
  turnedRound (q : Expr) (turned : Bool) : MetaM (Expr × Expr) := do
    unless turned do return (q, ← iffRefl q)
    let (positive, atom) := atomOf q
    let some (_, a, b) := atom.eq? | return (q, ← iffRefl q)
    let q' := signed positive (← mkEq b a)
    let h ← mkAppOptM ``eq_comm #[none, some b, some a]
    return (q', ← if positive then pure h else negated h)

/-- `¬p`, for a literal polynomial evaluation finds false. -/
def polynomialFalse (p : Expr) : MetaM Expr := do
  let (made, _) ← polynomialPort p
  let .constant false := made
    | throwError "polynomial evaluation does not find{indentExpr p}\nfalse"
  let r ← evaluationSteps p
  let normal ← ringNormal (← IO.mkRef {}) r.expr
  -- `p = p₁ = nf`, so `¬nf → ¬p`.
  let toNormal ← mkEqTrans (← match r.proof? with | some h => pure h | none => mkEqRefl p)
    (← normal.getProof)
  let refuted ← refute normal.expr
  mkExpectedTypeHint (← mkAppM ``mt #[← mkAppM ``Eq.mp #[toNormal], refuted]) (mkNot p)
where
  /-- `¬nf`: sides that are one term, or numerals. -/
  refute (nf : Expr) : MetaM Expr := do
    let (positive, atom) := atomOf nf
    if !positive then
      if let some (_, a, b) := atom.eq? then
        if a == b then
          return ← mkAppM ``not_not_intro #[← mkEqRefl a]
    if positive then
      if let some c := comparison? nf then
        if c.lhs == c.rhs && c.rel == .lt then
          return ← mkAppM ``lt_irrefl #[c.lhs]
    if !positive then
      if let some c := comparison? nf then
        if c.lhs == c.rhs && c.rel == .le then
          return ← mkAppM ``not_not_intro #[← mkAppM ``le_refl #[c.lhs]]
    byNumerals (mkNot nf)

/-! ### Cancellation -/

/-- `Numeral::comparePrecedence`: a numeral of smaller denominator, then of
smaller magnitude, then the positive one, comes first. -/
def precedence (a b : ℚ) : Ordering :=
  let int (x y : Int) : Ordering :=
    if x.natAbs != y.natAbs then compare x.natAbs y.natAbs else compare y x
  (int a.den b.den).then (int a.num b.num)

/--
`cancelAdd`: the monomials two sorted polynomials have the same factors in
cancelled, what is left of each kept on the side where its numeral comes first
by precedence.
-/
def cancelAdd (ls rs : Array Monom) : Array Monom × Array Monom := Id.run do
  let before (x y : ℚ) := precedence x y == .lt
  let mut newl : Array Monom := #[]
  let mut newr : Array Monom := #[]
  let mut i := 0
  let mut j := 0
  while i < ls.size && j < rs.size do
    let (k, fs) := ls[i]!
    let (l, gs) := rs[j]!
    if fs == gs then
      let lMinusR := k - l
      let rMinusL := l - k
      let left := newl.push (lMinusR, fs)
      let right := newr.push (rMinusL, fs)
      let smaller := if before rMinusL lMinusR then (newl, right) else (left, newr)
      if k == l then pure ()
      else if before lMinusR k && before rMinusL l then (newl, newr) := smaller
      else if before lMinusR k then newl := left
      else if before rMinusL l then newr := right
      else (newl, newr) := smaller
      i := i + 1
      j := j + 1
    else if Nf.cmp.monomCmp (1, fs) (1, gs) == .lt then
      newl := newl.push ls[i]!
      i := i + 1
    else
      newr := newr.push rs[j]!
      j := j + 1
  return (newl ++ ls.extract i ls.size, newr ++ rs.extract j rs.size)

/-- `p ↔ q`, for a comparison `p` cancellation made into `q`. -/
def cancellation (p q : Expr) : MetaM Expr := do
  let some c := comparison? p
    | throwError "cancellation rewrote{indentExpr p}\nwhich compares no numbers"
  let some d := comparison? q
    | throwError "cancellation rewrote{indentExpr p}\ninto{indentExpr q}, which \
        compares no numbers"
  unless c.rel == d.rel && c.positive == d.positive do
    throwError "cancellation rewrote{indentExpr p}\ninto{indentExpr q}, which is \
      another comparison"
  let (_, na) ← normalize c.lhs
  let (_, nb) ← normalize c.rhs
  let (l, r) := cancelAdd (na.render c.sort).wrap (nb.render c.sort).wrap
  let madeAs (x y : Expr) : MetaM Bool := do
    return (← writes (.poly c.sort l) x) && (← writes (.poly c.sort r) y)
  -- An equation vampire shares either way round.
  let turned ← if ← madeAs d.lhs d.rhs then pure false
    else if c.rel == .eq && (← madeAs d.rhs d.lhs) then pure true
    else throwError "cancellation does not make{indentExpr q}\nof{indentExpr p}"
  let (q', back) ← polynomialEvaluation.turnedRound q turned
  let some d := comparison? q' | throwError "cancellation: {q'} compares no numbers"
  -- `a R b ↔ 0 R b - a` for both, and the differences are one up to the
  -- identities of a ring: what cancelling took off, it took off both sides.
  let toDifference (c : Comparison) : MetaM (Expr × Expr) := do
    let zero ← wholeOf c.sort 0
    let (atom, h) ← match c.rel with
      | .lt | .le => do
        let dif ← mkAppM ``HSub.hSub #[c.rhs, c.lhs]
        let lemma_ := if c.rel == .lt then ``sub_pos else ``sub_nonneg
        let stated ← if c.rel == .lt then mkAppM ``LT.lt #[zero, dif]
          else mkAppM ``LE.le #[zero, dif]
        pure (stated, ← mkAppM ``Iff.symm
          #[← mkAppOptM lemma_ #[some c.sort, none, none, none, some c.rhs, some c.lhs]])
      | .eq => do
        let dif ← mkAppM ``HSub.hSub #[c.lhs, c.rhs]
        pure (← mkEq dif zero, ← mkAppM ``Iff.symm
          #[← mkAppOptM ``sub_eq_zero #[some c.sort, none, some c.lhs, some c.rhs]])
    if c.positive then return (atom, h)
    return (mkNot atom, ← negated h)
  let (pd, hp) ← toDifference c
  let (qd, hq) ← toDifference d
  let hq ← mkExpectedTypeHint hq (← mkAppM ``Iff #[q', qd])
  let some same ← ringEq pd qd
    | throwError "cancellation makes{indentExpr q}\nof{indentExpr p}, but the \
        differences of their sides are not one up to the identities of a ring"
  trans hp (← trans (← iffOfEq same) (← trans (← mkAppM ``Iff.symm #[hq]) back))

/-! ### ALASCA normalization -/

/-- `AlascaPredicate`. -/
inductive AlascaPredicate
  | eq | neq | greater | greaterEq
  deriving BEq

/-- `qGcd`: the gcd of two numbers, over the rationals the gcd of the numerators
over the lcm of the denominators. -/
def qGcd (int : Bool) (a b : ℚ) : ℚ :=
  if int then (Int.gcd a.num b.num : ℚ)
  else mkRat (Int.gcd a.num b.num) (Nat.lcm a.den b.den)

/--
What `InequalityNormalizer::tryNormalizeInterpreted` makes of a comparison:
the predicate, the term `t` it compares with zero before it is scaled (built
as vampire builds it), and `p ↔ t R 0`.
-/
private def alascaDifference (c : Comparison) :
    MetaM (AlascaPredicate × Expr × Expr) := do
  let α := c.sort
  let zero ← wholeOf α 0
  let isZero (e : Expr) := natLit? e == some 0
  -- `l < r` or `l ≤ r`, or `l = r` with `l` the zero side if there is one.
  let (pred, l, r, h₀) ← match c.rel with
    | .eq =>
      let (l, r) := if isZero c.lhs then (c.lhs, c.rhs) else (c.rhs, c.lhs)
      pure (if c.positive then AlascaPredicate.eq else .neq, l, r, ← iffRefl (← c.statement))
    | rel =>
      if c.positive then
        pure (if rel == .lt then .greater else .greaterEq, c.lhs, c.rhs,
          ← iffRefl (← c.statement))
      else if rel == .le then
        -- `¬(a ≤ b) ↔ b < a`.
        pure (.greater, c.rhs, c.lhs,
          ← mkAppOptM ``not_le #[some α, none, some c.lhs, some c.rhs])
      else
        -- `¬(a < b) ↔ b ≤ a`.
        pure (.greaterEq, c.rhs, c.lhs,
          ← mkAppOptM ``not_lt #[some α, none, some c.lhs, some c.rhs])
  -- Over the integers `l ≤ r ↔ l < r + 1`.
  let (pred, r, h₁) ← if integral α && pred == .greaterEq then do
      let r1 ← mkAppM ``HAdd.hAdd #[r, ← wholeOf α 1]
      let h ← mkAppM ``Iff.symm #[← mkAppOptM ``Int.lt_add_one_iff #[some l, some r]]
      pure (AlascaPredicate.greater, r1, ← trans h₀ h)
    else pure (pred, r, h₀)
  -- `t`: `r - l`, written as vampire writes it.
  let t ← if isZero l then pure r
    else if isZero r then mkAppM ``Neg.neg #[l]
    else mkAppM ``HAdd.hAdd #[r, ← mkAppM ``Neg.neg #[l]]
  let tIsDiff ← ringEq! t (← mkAppM ``HSub.hSub #[r, l])
  let atT (atom : Expr → MetaM Expr) : MetaM Expr := do
    let motive ← withLocalDeclD `x α fun x => do mkLambdaFVars #[x] (← atom x)
    iffOfEq (← mkCongrArg motive (← mkEqSymm tIsDiff))
  -- `l R r ↔ t R 0`, stated as `0 < t`, `0 ≤ t`, `t = 0`.
  let h ← match pred with
    | .greater => do
      let h ← mkAppM ``Iff.symm #[← mkAppOptM ``sub_pos #[some α, none, none, none, some r, some l]]
      trans h₁ (← trans h (← atT fun x => mkAppM ``LT.lt #[zero, x]))
    | .greaterEq => do
      let h ← mkAppM ``Iff.symm
        #[← mkAppOptM ``sub_nonneg #[some α, none, none, none, some r, some l]]
      trans h₁ (← trans h (← atT fun x => mkAppM ``LE.le #[zero, x]))
    | _ => do
      -- `a = b ↔ r = l ↔ r - l = 0`.
      let atom ← mkEq c.lhs c.rhs
      let turned ← if (← mkEq r l) == atom then iffRefl atom
        else mkAppOptM ``eq_comm #[some α, some c.lhs, some c.rhs]
      let sub ← mkAppM ``Iff.symm #[← mkAppOptM ``sub_eq_zero #[some α, none, some r, some l]]
      let h ← trans turned (← trans sub (← atT fun x => mkEq x zero))
      if c.positive then pure h else negated h
  return (pred, t, h)

/-- `t R 0`, as ALASCA writes it: `$greater(t, 0)`, `$greatereq(t, 0)`, `t = 0`. -/
private def alascaAtom (pred : AlascaPredicate) (α t : Expr) : MetaM Expr := do
  let zero ← wholeOf α 0
  match pred with
  | .greater => mkAppM ``LT.lt #[zero, t]
  | .greaterEq => mkAppM ``LE.le #[zero, t]
  | .eq => mkEq t zero
  | .neq => return mkNot (← mkEq t zero)

/--
The normal form's term, as the port finds it: `t` evaluated and divided by
the recorded `factor`, which has to be what vampire divides it by -- the gcd
of its coefficients, negated only for an equation, which it turns round
where its first monomial is negative.
-/
private def alascaTerm (pred : AlascaPredicate) (α t : Expr) (factor : ℚ) :
    MetaM Nf := do
  let ms := (← evaluated t).wrap
  let gcd := match ms[0]? with
    | none => 1
    | some (k, _) => ms.foldl (fun g (k, _) => qGcd (integral α) g |k|) |k|
  let divisor := if gcd == 0 || gcd == 1 then 1 else gcd
  unless |factor| == divisor do
    throwError "ALASCA normalization divides{indentExpr t}\nby {divisor}, but \
      vampire recorded {factor}"
  if factor < 0 && !(pred == .eq || pred == .neq) then
    throwError "ALASCA normalization recorded {factor} for an inequality, which \
      it never turns round"
  return .poly α (ms.map fun (k, fs) => (k / factor, fs))

/-- `p ↔ q`, for a literal `p` ALASCA normalization made into `q`. -/
def alascaNormalization (p q : Expr) (factor : Int × Nat) : MetaM Expr := do
  let some c := comparison? p
    -- `normalizeUninterpreted`: every argument normalized and evaluated.
    | do
      let (_, atom) := atomOf p
      let args ← atom.getAppArgs.mapM evaluated
      let some turned ← argumentsMade p q args
        | throwError "ALASCA normalization does not make{indentExpr q}\nof{indentExpr p}"
      let (q', back) ← polynomialEvaluation.turnedRound q turned
      let some h ← evaluatesInto p q'
        | throwError "ALASCA normalization makes{indentExpr q}\nof{indentExpr p}, \
            but the two are not one up to evaluating it"
      trans h back
  let α := c.sort
  let (pred, t, toT) ← alascaDifference c
  let k : ℚ := mkRat factor.1 factor.2
  let term ← alascaTerm pred α t k
  -- What vampire wrote: `0 < t'`, `0 ≤ t'`, or `t' = 0` either way round.
  let some d := comparison? q
    | throwError "ALASCA normalized{indentExpr p}\ninto{indentExpr q}, which \
        compares no numbers"
  let isZero (e : Expr) := natLit? e == some 0
  let written := if d.rel == .eq then (if isZero d.rhs then d.lhs else d.rhs) else d.rhs
  unless ← writes term written do
    throwError "ALASCA normalization makes{indentExpr (← term.toExpr)}\nof{indentExpr p}, \
      but vampire wrote{indentExpr written}"
  -- `t R 0 ↔ k * t' R 0 ↔ t' R 0`, `t = k * t'` by evaluating `t`.
  let kExpr ← numeralOf α k
  let scaled ← mkAppM ``HMul.hMul #[kExpr, written]
  let r ← evaluationSteps t
  let same ← mkEqTrans (← match r.proof? with | some h => pure h | none => mkEqRefl t)
    (← ringEq! r.expr scaled)
  let zero ← wholeOf α 0
  let positive := pred != .neq
  let restated (e : Expr) : MetaM Expr := match pred with
    | .greater => mkAppM ``LT.lt #[zero, e]
    | .greaterEq => mkAppM ``LE.le #[zero, e]
    | _ => mkEq e zero
  let motive ← withLocalDeclD `x α fun x => do mkLambdaFVars #[x] (← restated x)
  let rewrite ← iffOfEq (← mkCongrArg motive same)
  let unscale ← match pred with
    | .greater => do
      let pos ← byNumerals (← mkAppM ``LT.lt #[zero, kExpr])
      mkAppOptM ``mul_pos_iff_of_pos_left
        #[none, none, some kExpr, some written, none, none, none, some pos]
    | .greaterEq => do
      let pos ← byNumerals (← mkAppM ``LT.lt #[zero, kExpr])
      mkAppOptM ``mul_nonneg_iff_of_pos_left
        #[none, none, none, some written, some kExpr, none, some pos]
    | _ => do
      let nonzero ← mkExpectedTypeHint (← byNumerals (mkNot (← mkEq kExpr zero)))
        (← mkAppM ``Ne #[kExpr, zero])
      mkAppOptM ``mul_eq_zero_iff_left
        #[none, none, none, some kExpr, some written, some nonzero]
  let unscale ← mkExpectedTypeHint unscale
    (← mkAppM ``Iff #[← restated scaled, ← restated written])
  let atomH ← trans rewrite unscale
  let signedH ← if positive then pure atomH else negated atomH
  let r' := signed positive (← restated written)
  let some last ← sameLiteral r' q
    | throwError "ALASCA normalization makes{indentExpr r'}\nof{indentExpr p}, but \
        vampire made{indentExpr q}"
  trans toT (← trans signedH last)

/-- `¬p`, for a comparison ALASCA normalization makes trivially false. -/
def alascaFalse (p : Expr) (factor : Int × Nat) : MetaM Expr := do
  let some c := comparison? p
    | throwError "ALASCA normalization found{indentExpr p}\nfalse, which compares no numbers"
  let α := c.sort
  let (pred, t, toT) ← alascaDifference c
  let term ← alascaTerm pred α t (mkRat factor.1 factor.2)
  let some value := term.numeral?
    | throwError "ALASCA normalization found{indentExpr p}\nfalse, but its term is not a numeral"
  -- `t R 0 ↔ ↑value · factor R 0`, decided.
  let r ← evaluationSteps t
  let tValue ← numeralOf α (value * mkRat factor.1 factor.2)
  let same ← mkEqTrans (← match r.proof? with | some h => pure h | none => mkEqRefl t)
    (← ringEq! r.expr tValue)
  let atom ← alascaAtom pred α tValue
  let refuted ← byNumerals (mkNot atom)
  let motive ← withLocalDeclD `x α fun x => do mkLambdaFVars #[x] (← alascaAtom pred α x)
  let toValue ← iffOfEq (← mkCongrArg motive same)
  let h ← trans toT toValue
  mkExpectedTypeHint (← mkAppM ``mt #[← mkAppM ``Iff.mp #[h], refuted]) (mkNot p)

end Vampire.LiteralRewrite
