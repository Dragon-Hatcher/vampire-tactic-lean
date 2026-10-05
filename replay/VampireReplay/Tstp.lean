import Std.Data.HashMap
import VampireReplay.InferenceRule

/-!
Reads what vampire prints when run with `--proof tptp --proof_extra full`: the
SZS status, what the strategy that won said of itself, and the proof -- TSTP,
with what vampire recorded of each step in it, which vampire's
`Kernel/TPTPProofExtra.hpp` describes.

Nothing is read off the shape of what the proof says where the proof can say
it: a clause is a clause because it is `tcf`, a split name is one because its
declaration marks it, a premise's use is its use because of where the proof
puts it. What is worked out -- an equality's sort, from the declarations and
the sorts of TPTP's operations -- is worked out only where it is certain, and
otherwise refused.

The file is parsed in two passes. The first reads it into the shape TPTP gives
it -- annotated formulas, terms, formulas, general terms -- and the second
builds the tables the accessors below read. Vampire shares its terms and
literals, and replay keys what it rebuilds on which one a term is
(`Term.index`), so the second pass interns them by structure: two occurrences
of one term are one term here, as they were in vampire.
-/

namespace Vampire

/-- The version of the format vampire writes (`FORMAT` in `Kernel/TPTPProofExtra.cpp`). -/
private def formatVersion : Nat := 2

/-- Why a proof could not be had or read: what went wrong, in words. -/
structure Error where
  message : String
deriving Repr, BEq

instance : ToString Error := ⟨Error.message⟩

/-- Fails with `message`. -/
def Error.fail (message : String) : Except Error α := .error ⟨message⟩

inductive TerminationReason where
  | refutation
  | satisfiable
  | refutationNotFound
  | inappropriate
  | unknown
  | timeLimit
  | instructionLimit
  | memoryLimit
  | activationLimit
deriving Inhabited, Repr, BEq, DecidableEq

/-- Why vampire stopped, as a person would say it. -/
def TerminationReason.describe : TerminationReason → String
  | .refutation => "it found a refutation"
  | .satisfiable =>
    "the goal does not follow from the hypotheses that were sent: vampire found \
    a model of them and the negated goal"
  | .refutationNotFound => "it ran out of inferences to make"
  | .inappropriate => "no strategy it has suits the problem"
  | .unknown => "it stopped without saying why"
  | .timeLimit => "it ran out of time"
  | .instructionLimit => "it reached its instruction limit"
  | .memoryLimit => "it ran out of memory"
  | .activationLimit => "it reached its limit on activations"

inductive Connective where
  | literal | and | or | imp | iff | xor | not
  | «forall» | «exists» | «false» | «true» | name
deriving Inhabited, Repr, BEq, DecidableEq, Hashable

/--
The procedure a literal-wise simplification rewrote its premise by, as vampire
records it (`InferenceStore::LiteralProcedure`): evaluation is whichever of
several evaluators the options chose, and they rewrite a literal differently.
-/
inductive LiteralProcedure where
  | theoryNormalization
  | interpretedEvaluation
  /-- `InterpretedEvaluation` with inequality normalization on. -/
  | interpretedEvaluationNormalizing
  | polynomialEvaluation
  | pushUnaryMinus
  | alascaNormalization
  | cancellation
  /-- Each literal is the premise's at the recorded witness, up to ring identities. -/
  | generalization
  /-- ALASCA's VIRAS quantifier elimination. -/
  | viras
  /--
  ALASCA's strong normalization of comparisons, which can make one literal two,
  so that no image is recorded.
  -/
  | inequalityPredicateNormalization
deriving Inhabited, Repr, BEq, DecidableEq

/-- How one of clausification's generalised clauses was reached. -/
inductive GenClause.GenHow where
  /-- A clause clausification started from: the formula, or a definition. -/
  | introduced
  /-- A position replaced by `replacement`, the rest kept. -/
  | extended
  /-- A position rewritten in place: a quantifier's body, a let's contents. -/
  | replaced
  /-- A position rewritten in place by a name for what stood there. -/
  | named
deriving Inhabited, Repr, BEq

/-! ## Reading TSTP -/

namespace Tstp

/-- A term as written. -/
inductive Tm where
  | var (n : UInt32)
  /-- A TPTP number, as written: `3`, `-1/3`. -/
  | num (text : String)
  | app (f : String) (args : Array Tm)
deriving Inhabited

/-- A formula as written. -/
inductive Fm where
  | atom (positive : Bool) (t : Tm)
  | eq (positive : Bool) (lhs rhs : Tm)
  | junction (conj : Bool) (subs : Array Fm)
  | binary (c : Connective) (lhs rhs : Fm)
  | not (f : Fm)
  | quant (all : Bool) (vars : Array (UInt32 × String)) (body : Fm)
  /-- `$true` or `$false`. -/
  | const (c : Connective)
  /--
  A split name, AVATAR's name for a component, standing as a formula: `n`, or
  `~n` for one written negated. Split names are told apart from predicates by
  their declarations, so the parser never makes one; the builder does.
  -/
  | name (n : String)
deriving Inhabited

/-- A general term, as useful information holds them. -/
inductive GT where
  | word (s : String)
  | num (text : String)
  | app (f : String) (args : Array GT)
  | list (xs : Array GT)
  | fot (t : Tm)
  | tff (f : Fm)
  /-- `data:term`, as in a parent's details `f12:[...]` or a variable's sort `X0:s`. -/
  | colon (lhs rhs : GT)
deriving Inhabited

/-- What an annotated formula states: a formula, or a symbol's type. -/
inductive Body where
  | formula (f : Fm)
  /--
  A state of the new clausifier: its variables, and the disjuncts of its one
  parenthesised disjunction, each as written -- one that is a disjunction is
  one disjunct, in parentheses of its own.
  -/
  | disjuncts (vars : Array (UInt32 × String)) (items : Array Fm)
  | type (symbol : String) (args : Array String) (result : String)
deriving Inhabited

/-- One annotated formula: `language(name, role, body, source, [info])`. -/
structure Annotated where
  language : String
  name : String
  role : String
  body : Body
  source : Option GT
  info : Array GT
deriving Inhabited

/--
The parser: the file, and how far into it it has read. `EStateM` keeps the
position when parsing fails, so the error can say where.
-/
private abbrev M := ReaderT ByteArray (EStateM String Nat)

@[inline] private def peekAt (k : Nat) : M UInt8 := do
  let d ← read
  let p := (← get) + k
  return if h : p < d.size then d[p] else 0

@[inline] private def peek : M UInt8 := peekAt 0

@[inline] private def advance (n : Nat := 1) : M PUnit := modify (· + n)

@[inline] private def isLower (c : UInt8) : Bool := c ≥ 'a'.toUInt8 && c ≤ 'z'.toUInt8
@[inline] private def isUpper (c : UInt8) : Bool := c ≥ 'A'.toUInt8 && c ≤ 'Z'.toUInt8
@[inline] private def isDigit (c : UInt8) : Bool := c ≥ '0'.toUInt8 && c ≤ '9'.toUInt8
@[inline] private def isAlnum (c : UInt8) : Bool :=
  isLower c || isUpper c || isDigit c || c == '_'.toUInt8

/-- Skips whitespace and comments, `% ...` to the end of the line and `/* ... */`. -/
private partial def skipWs : M PUnit := do
  let c ← peek
  if c == ' '.toUInt8 || c == '\n'.toUInt8 || c == '\t'.toUInt8 || c == '\r'.toUInt8 then
    advance
    skipWs
  else if c == '%'.toUInt8 then
    while (← peek) != '\n'.toUInt8 && (← peek) != 0 do advance
    skipWs
  else if c == '/'.toUInt8 && (← peekAt 1) == '*'.toUInt8 then
    advance 2
    while !((← peek) == '*'.toUInt8 && (← peekAt 1) == '/'.toUInt8) && (← peek) != 0 do
      advance
    advance 2
    skipWs

/-- Whether `s` comes next, after whitespace. -/
private def lookingAt (s : String) : M Bool := do
  skipWs
  let d ← read
  let p ← get
  let bytes := s.toUTF8
  return p + bytes.size ≤ d.size && (List.range bytes.size).all fun i => d[p + i]! == bytes[i]!

private def expect (s : String) : M PUnit := do
  if ← lookingAt s then advance s.utf8ByteSize
  else throw s!"expected `{s}`"

private def slice (a b : Nat) : M String := do
  match String.fromUTF8? ((← read).extract a b) with
  | some s => return s
  | none => throw "a name is not valid UTF-8"

/--
A word: a lower or upper word, one prefixed by `$` or `$$`, or a single-quoted
atom, which is returned without its quotes.
-/
private partial def word : M String := do
  skipWs
  if (← peek) == '\''.toUInt8 then
    advance
    let rec go (acc : ByteArray) : M ByteArray := do
      let c ← peek
      if c == 0 then throw "a quoted atom does not end"
      advance
      if c == '\\'.toUInt8 then
        let e ← peek
        advance
        go (acc.push e)
      else if c == '\''.toUInt8 then return acc
      else go (acc.push c)
    match String.fromUTF8? (← go .empty) with
    | some s => return s
    | none => throw "a quoted atom is not valid UTF-8"
  let start ← get
  while (← peek) == '$'.toUInt8 do advance
  let afterDollars ← get
  while isAlnum (← peek) do advance
  if (← get) == afterDollars then throw "expected a word"
  slice start (← get)

private def atNumber : M Bool := do
  skipWs
  let c ← peek
  return isDigit c || ((c == '-'.toUInt8 || c == '+'.toUInt8) && isDigit (← peekAt 1))

/-- A TPTP number, as written: an integer, `n/d`, or a decimal. -/
private def number : M String := do
  skipWs
  let start ← get
  if (← peek) == '-'.toUInt8 || (← peek) == '+'.toUInt8 then advance
  while isDigit (← peek) do advance
  if (← peek) == '/'.toUInt8 then
    advance
    while isDigit (← peek) do advance
  else if (← peek) == '.'.toUInt8 && isDigit (← peekAt 1) then
    advance
    while isDigit (← peek) do advance
  if (← peek) == 'e'.toUInt8 || (← peek) == 'E'.toUInt8 then
    advance
    if (← peek) == '-'.toUInt8 || (← peek) == '+'.toUInt8 then advance
    while isDigit (← peek) do advance
  slice start (← get)

/-- The number `name` is `pre` followed by, if it is: `f12` after `f` as `12`. -/
private def numberAfter? (pre name : String) : Option Nat :=
  if name.startsWith pre then (String.ofList (name.toList.drop pre.length)).toNat? else none

/-- Whether `name` is `pre` followed by digits. -/
private def numbered (name pre : String) : Bool := (numberAfter? pre name).isSome

/-- `X12` as `12`. -/
private def varNumber (w : String) : M UInt32 := do
  match numberAfter? "X" w with
  | some n => return n.toUInt32
  | none => throw s!"unexpected variable {w}"

/-- Comma-separated `item`s, up to `close`. -/
private partial def sepBy (item : M α) (close : String) : M (Array α) := do
  if ← lookingAt close then return #[]
  let mut out := #[← item]
  while ← lookingAt "," do
    expect ","
    out := out.push (← item)
  return out

private partial def term : M Tm := do
  if ← atNumber then return .num (← number)
  skipWs
  if isUpper (← peek) then return .var (← varNumber (← word))
  let f ← word
  if ← lookingAt "(" then
    expect "("
    let args ← sepBy term ")"
    expect ")"
    return .app f args
  return .app f #[]

private partial def typedVariable : M (UInt32 × String) := do
  let v ← varNumber (← word)
  expect ":"
  return (v, ← word)

mutual

/--
A formula that needs no parentheses around it. Vampire parenthesises every
junction and binary connective, writes a negation `~ (f)` and a negative
literal `~p`, so that a parenthesis is the only thing that groups.
-/
private partial def unitary : M Fm := do
  skipWs
  let c ← peek
  if c == '('.toUInt8 then
    advance
    let first ← unitary
    let f ←
      if ← lookingAt "&" then junction true first
      else if ← lookingAt "|" then junction false first
      else if ← lookingAt "=>" then binary .imp "=>" first
      else if ← lookingAt "<=>" then binary .iff "<=>" first
      else if ← lookingAt "<~>" then binary .xor "<~>" first
      else pure first
    expect ")"
    return f
  if c == '~'.toUInt8 then
    advance
    skipWs
    if (← peek) == '('.toUInt8 then return .not (← unitary)
    return .atom false (← term)
  if (c == '!'.toUInt8 || c == '?'.toUInt8) && (← peekAt 1) != '='.toUInt8 then
    advance
    expect "["
    let vars ← sepBy typedVariable "]"
    expect "]"
    expect ":"
    return .quant (c == '!'.toUInt8) vars (← unitary)
  let t ← term
  match t with
  | .app "$true" #[] => return .const .true
  | .app "$false" #[] => return .const .false
  | _ =>
    if ← lookingAt "!=" then
      expect "!="
      return .eq false t (← term)
    if (← lookingAt "=") && !(← lookingAt "=>") then
      expect "="
      return .eq true t (← term)
    return .atom true t

private partial def junction (conj : Bool) (first : Fm) : M Fm := do
  let op := if conj then "&" else "|"
  let mut subs := #[first]
  while ← lookingAt op do
    expect op
    subs := subs.push (← unitary)
  return .junction conj subs

private partial def binary (c : Connective) (op : String) (lhs : Fm) : M Fm := do
  expect op
  return .binary c lhs (← unitary)

end

mutual

private partial def general : M GT := do
  let data ← generalData
  if ← lookingAt ":" then
    expect ":"
    return .colon data (← general)
  return data

private partial def generalData : M GT := do
  if ← lookingAt "[" then
    expect "["
    let xs ← sepBy general "]"
    expect "]"
    return .list xs
  if ← atNumber then return .num (← number)
  let w ← word
  if w == "$fot" then
    expect "("
    let t ← term
    expect ")"
    return .fot t
  if w == "$tff" then
    expect "("
    let f ← unitary
    expect ")"
    return .tff f
  if ← lookingAt "(" then
    expect "("
    let args ← sepBy general ")"
    expect ")"
    return .app w args
  return .word w

end

/-- A type declaration: `f: (s1 * s2) > s`, `f: s1 > s` or `f: s`. -/
private def typeDecl : M Body := do
  let symbol ← word
  expect ":"
  if ← lookingAt "(" then
    expect "("
    let mut args := #[← word]
    while ← lookingAt "*" do
      expect "*"
      args := args.push (← word)
    expect ")"
    expect ">"
    return .type symbol args (← word)
  let s ← word
  if ← lookingAt ">" then
    expect ">"
    return .type symbol #[s] (← word)
  return .type symbol #[] s

/--
A new-clausifier state's statement, `! [X0: s, ...] : (D1 | ... | Dn)` or
`$false`, read as written: the parenthesised disjunction's disjuncts are the
state's guards and subformulas, which reading it as a formula would merge
where one of them is a disjunction.
-/
private def stateBody : M Body := do
  skipWs
  let mut vars := #[]
  if (← peek) == '!'.toUInt8 && (← peekAt 1) != '='.toUInt8 then
    advance
    expect "["
    vars ← sepBy typedVariable "]"
    expect "]"
    expect ":"
  if ← lookingAt "$false" then
    expect "$false"
    return .disjuncts vars #[]
  expect "("
  let mut items := #[← unitary]
  while ← lookingAt "|" do
    expect "|"
    items := items.push (← unitary)
  expect ")"
  return .disjuncts vars items

private def annotated : M Annotated := do
  let language ← word
  expect "("
  let name ← word
  expect ","
  let role ← word
  expect ","
  -- The format names the new clausifier's states `gN`, and no other step.
  let body ← if role == "type" then typeDecl
    else if numbered name "g" then stateBody
    else Body.formula <$> unitary
  let mut source := none
  let mut info := #[]
  if ← lookingAt "," then
    expect ","
    source := some (← general)
    if ← lookingAt "," then
      expect ","
      match ← general with
      | .list xs => info := xs
      | _ => throw "useful information is not a list"
  expect ")"
  expect "."
  return { language, name, role, body, source, info }

private partial def annotatedFormulas : M (Array Annotated) := do
  let mut out := #[]
  repeat
    skipWs
    if (← get) ≥ (← read).size then break
    out := out.push (← annotated)
  return out

/-- Parses a TSTP file into its annotated formulas. -/
def parse (data : ByteArray) : Except Error (Array Annotated) :=
  match (annotatedFormulas.run data).run 0 with
  | .ok out _ => .ok out
  | .error message pos =>
    let line := (data.extract 0 pos).foldl (fun n b => if b == '\n'.toUInt8 then n + 1 else n) 1
    Error.fail s!"malformed proof from vampire: {message} at line {line}"

end Tstp

/-! ## The tables -/

/--
A number a function symbol stands for: `numerator / denominator` at one of
TPTP's arithmetic sorts, and whether the symbol is that number itself or
ALASCA's multiplication by it, which takes one argument.
-/
structure Numeral where
  sort : String
  multiplies : Bool
  numerator : Int
  denominator : Nat
deriving Repr, Inhabited

/-- A symbol's name and arity. -/
structure Symbol where
  name : String
  arity : UInt32
  /-- The number the symbol is, if it is one, as vampire writes it from its signature. -/
  numeral? : Option Numeral := none
  /--
  The truth value pure predicate removal replaced this predicate by, if it did
  -- the one that satisfies each of its occurrences, which all have one
  polarity -- and its number among the predicates found pure, in the order
  they were found: a step replaces those numbered below its `variant`.
  -/
  pure? : Option (Bool × Nat) := none
  /--
  When vampire created the symbol, counted over functions and predicates alike:
  a symbol it introduced is made of symbols that exist already. Zero for the
  symbols TPTP has of its own, numerals and interpreted operations, which the
  proof does not declare.
  -/
  created : Nat := 0
deriving Repr, Inhabited

private structure TermRec where
  isVar : Bool
  /-- The variable's number, or the functor. -/
  value : UInt32
  args : Array UInt32
deriving Inhabited, BEq

private instance : Hashable TermRec where
  hash t := t.args.foldl (fun h a => mixHash h (hash a)) (mixHash (hash t.isVar) (hash t.value))

private structure LiteralRec where
  predicate : UInt32
  polarity : Bool
  isEquality : Bool
  args : Array UInt32
  /-- An equality's sort, that of its sides. -/
  sort : Option String
deriving Inhabited, BEq

private instance : Hashable LiteralRec where
  hash l := l.args.foldl (fun h a => mixHash h (hash a))
    (mixHash (mixHash (hash l.predicate) (hash l.polarity)) (mixHash (hash l.isEquality) (hash l.sort)))

private structure FormulaRec where
  connective : Connective
  literal : Option UInt32 := none
  subs : Array UInt32 := #[]
  vars : Array UInt32 := #[]
  name : Option String := none
deriving Inhabited, BEq

private instance : Hashable FormulaRec where
  hash f := (f.subs ++ f.vars).foldl (fun h a => mixHash h (hash a))
    (mixHash (mixHash (hash f.connective) (hash f.literal)) (hash f.name))

private structure UseRec where
  premise : UInt32
  literal : Option UInt32 := none
  term : Option UInt32 := none
  rewritesWholePremise : Bool := false
  virtualEpsilon : Bool := false
  virtualInfinity : Option Bool := none
  negated : Bool := false
  bindings : Array (UInt32 × UInt32) := #[]
  other : Option UInt32 := none
  factor : Option UInt32 := none
deriving Inhabited

/-- A congruence step, as `Congruence` has it but with its terms as indices. -/
private inductive CongruenceRec where
  | input (literal : Nat)
  | congruence (lhs rhs : UInt32) (args : Array (Option Nat))
  | trans (first second : Nat)
  | symm (step : Nat)
  | goalEquality (literal : Nat) (step : Option Nat)
  | goalLiterals (negative positive : Nat) (args : Array (Option Nat))
deriving Inhabited

/--
Where a premise's literal went (`turned(E)`, `rewritten(E)`): the conclusion's
literal it became, and whether turned round or rewritten into it.
-/
private structure Placed where
  index : Nat
  turned : Bool := false
  rewritten : Bool := false
deriving Inhabited

private structure PlacementRec where
  position : Nat
  use : Nat
  entries : Array (Option Placed)
deriving Inhabited

private structure UnitRec where
  number : UInt32
  rule : InferenceRule
  isClause : Bool
  literals : Array UInt32 := #[]
  formula : UInt32 := 0
  parents : Array UInt32 := #[]
  varSorts : Array (UInt32 × String) := #[]
  boundVarSorts : Array (UInt32 × String) := #[]
  skolems : Array (UInt32 × UInt32) := #[]
  name : Option String := none
  uses : Array UseRec := #[]
  splits : Array String := #[]
  satPremise : Option UInt32 := none
  namings : Array (String × Array UInt32 × UInt32) := #[]
  genClause : Option UInt32 := none
  /-- Each conjunction's position in the premise's formula, and the argument taken. -/
  choices : Array (Array UInt32 × UInt32) := #[]
  congruences : Array CongruenceRec := #[]
  constraints : Array Nat := #[]
  placements : Array PlacementRec := #[]
  splittingName : Option Nat := none
  literalFactors : Option (Array (Int × Nat)) := none
  procedure : Option LiteralProcedure := none
  introduced : Array (Nat × Option Nat) := #[]
  variant : Nat := 0
  introducedSymbol : Option String := none
  introducedTerms : Array (Option UInt32) := #[]
deriving Inhabited

private structure GenRec where
  parent : Option UInt32
  position : Option UInt32
  literals : Array (UInt32 × Bool)
  replacement : Array (UInt32 × Bool)
  bindings : Array (UInt32 × UInt32)
  how : GenClause.GenHow
  placements : Array (Nat × Bool)
deriving Inhabited

private structure SatRec where
  literals : Array String
  premises : Array UInt32
  origin : Option UInt32
  order : Option (Array Nat)
deriving Inhabited

/--
A proof: the tables vampire's TSTP was read into, and what the run
said of itself. Everything the accessors read is here, so a proof is
independent of the process that produced it.
-/
structure Proof where
  private mk ::
  private functionTable : Array Symbol
  private predicateTable : Array Symbol
  private termTable : Array TermRec
  private literalTable : Array LiteralRec
  private formulaTable : Array FormulaRec
  private unitTable : Array UnitRec
  private satTable : Array SatRec
  private genTable : Array GenRec
  private refutationIdx : Option UInt32
  private strategyText : Option String
  /-- What the strategy that won ran for on the clock, in milliseconds. -/
  private strategyMs : Option Nat
  private text : String
  /-- Why vampire stopped. -/
  terminationReason : TerminationReason
deriving Inhabited

/-! ## Building the tables -/

namespace Tstp

private structure Builder where
  functions : Array Symbol := #[]
  /-- A function symbol by its name, arity and, for a numeral, sort. -/
  functionIdx : Std.HashMap String UInt32 := {}
  /-- The result sort of each declared function symbol, by name and arity. -/
  resultSorts : Std.HashMap (String × Nat) String := {}
  /-- Vampire's predicate 0 is equality, which no literal names but by `=`. -/
  predicates : Array Symbol := #[{ name := "=", arity := 2 }]
  predicateIdx : Std.HashMap (String × Nat) UInt32 := {}
  terms : Array TermRec := #[]
  termIdx : Std.HashMap TermRec UInt32 := {}
  literals : Array LiteralRec := #[]
  literalIdx : Std.HashMap LiteralRec UInt32 := {}
  formulas : Array FormulaRec := #[]
  formulaIdx : Std.HashMap FormulaRec UInt32 := {}
  /--
  The function symbols declared, by the name and arity the proof writes them
  with: ALASCA's multiplication by a numeral has no TPTP name of its own, so
  the proof gives it one, and its declaration says what it is.
  -/
  declaredFunctors : Std.HashMap (String × Nat) UInt32 := {}
  /-- The split names, which their declarations mark as such. -/
  splitNames : Std.HashSet String := {}
  /-- Steps, propositional clauses and generalised clauses, by name. -/
  units : Std.HashMap String UInt32 := {}
  sats : Std.HashMap String UInt32 := {}
  gens : Std.HashMap String UInt32 := {}

private abbrev B := StateT Builder (Except Error)

private def bail (message : String) : B α :=
  throw ⟨s!"malformed proof from vampire: {message}"⟩

private def functorKey (name : String) (arity : Nat) (sort : String) : String :=
  s!"{name}\x00{arity}\x00{sort}"

/-- The function symbol `sym` names, which is added if it is new. -/
private def internFunctor (sym : Symbol) : B UInt32 := do
  let key := functorKey sym.name sym.arity.toNat ((sym.numeral?.map (·.sort)).getD "")
  if let some i := (← get).functionIdx[key]? then return i
  let i := (← get).functions.size.toUInt32
  modify fun b => { b with functions := b.functions.push sym, functionIdx := b.functionIdx.insert key i }
  return i

private def internPredicate (name : String) (arity : Nat) : B UInt32 := do
  if let some i := (← get).predicateIdx[(name, arity)]? then return i
  let i := (← get).predicates.size.toUInt32
  modify fun b => { b with
    predicates := b.predicates.push { name, arity := arity.toUInt32 }
    predicateIdx := b.predicateIdx.insert (name, arity) i }
  return i

/-- `n` or `n/d`, as a numerator and a positive denominator. -/
private def rational (text : String) : Option (Int × Nat) :=
  match text.splitOn "/" with
  | [n] => do return (← n.toInt?, 1)
  | [n, d] => do
    let d ← d.toNat?
    if d == 0 then none
    return (← n.toInt?, d)
  | _ => none

/-- The sort of a TPTP number, as vampire writes them. -/
private def numberSort (text : String) : B String :=
  if text.contains '/' then pure "$rat"
  else if text.contains '.' || text.contains 'e' || text.contains 'E' then
    bail s!"the decimal {text}, where vampire writes a real `$to_real(n/d)`"
  else pure "$int"

/--
The symbol of a numeral, or of ALASCA's multiplication by one, named as
vampire names it: an integer as itself, a rational `n/d`, a real
`$to_real(n/d)`, and a multiplication by the number as its sort prints it,
which for a real is `n/d`. Replay keys numerals on those names.
-/
private def numeral (text : String) (sort : String) (multiplies : Bool) : B Symbol := do
  let some (numerator, denominator) := rational text | bail s!"unreadable number {text}"
  let name :=
    if sort == "$int" then s!"{numerator}"
    else if sort == "$real" && !multiplies then s!"$to_real({numerator}/{denominator})"
    else s!"{numerator}/{denominator}"
  return { name, arity := if multiplies then 1 else 0
           numeral? := some { sort, multiplies, numerator, denominator } }

private def internTermRec (r : TermRec) : B UInt32 := do
  if let some i := (← get).termIdx[r]? then return i
  let i := (← get).terms.size.toUInt32
  modify fun b => { b with terms := b.terms.push r, termIdx := b.termIdx.insert r i }
  return i

private def constant (sym : Symbol) (args : Array UInt32 := #[]) : B UInt32 := do
  internTermRec { isVar := false, value := ← internFunctor sym, args }

private partial def internTerm : Tm → B UInt32
  | .var n => internTermRec { isVar := true, value := n, args := #[] }
  | .num text => do constant (← numeral text (← numberSort text) false)
  | .app "$to_real" #[.num text] => do
    -- A real numeral, unless what it converts is an integer.
    if text.contains '/' then constant (← numeral text "$real" false)
    else constant { name := "$to_real", arity := 1 } #[← internTerm (.num text)]
  | .app f args => do
    let args ← args.mapM internTerm
    match (← get).declaredFunctors[(f, args.size)]? with
    | some i => internTermRec { isVar := false, value := i, args }
    | none => constant { name := f, arity := args.size.toUInt32 } args

/-- TPTP's arithmetic operations whose result is at the sort of their arguments. -/
private def arithmeticAtArgumentSort : List String :=
  ["$sum", "$difference", "$product", "$quotient", "$quotient_e", "$quotient_t",
   "$quotient_f", "$remainder_e", "$remainder_t", "$remainder_f", "$uminus", "$floor",
   "$ceiling", "$truncate", "$round", "$abs"]

/--
The sort of a term, for an equality's: a variable's from where it is bound, a
declared symbol's from its declaration, and an operation of TPTP's from what
it is applied to.
-/
private partial def sortOf (env : Std.HashMap UInt32 String) : Tm → B String
  | .var n => match env[n]? with
    | some s => pure s
    | none => bail s!"the sort of X{n} is not known where it occurs"
  | .num text => numberSort text
  | .app "$to_real" _ => pure "$real"
  | .app "$to_rat" _ => pure "$rat"
  | .app "$to_int" _ => pure "$int"
  | .app f args => do
    if let some s := (← get).resultSorts[(f, args.size)]? then return s
    -- TPTP's arithmetic operations, which are at the sort of what they apply
    -- to; any other is no symbol this format can say the sort of.
    if arithmeticAtArgumentSort.contains f then
      if let some a := args[0]? then return ← sortOf env a
    bail s!"the sort of {f} is not known"

private def internLiteralRec (r : LiteralRec) : B UInt32 := do
  if let some i := (← get).literalIdx[r]? then return i
  let i := (← get).literals.size.toUInt32
  modify fun b => { b with literals := b.literals.push r, literalIdx := b.literalIdx.insert r i }
  return i

private def internLiteral (env : Std.HashMap UInt32 String) : Fm → B UInt32
  | .atom polarity (.app p args) => do
    if (← get).splitNames.contains p then
      bail s!"the split name {p} stands where a literal of a predicate does"
    let args ← args.mapM internTerm
    internLiteralRec { predicate := ← internPredicate p args.size, polarity
                       isEquality := false, args, sort := none }
  | .eq polarity lhs rhs => do
    let sort ← try sortOf env lhs catch _ => sortOf env rhs
    internLiteralRec { predicate := 0, polarity, isEquality := true
                       args := #[← internTerm lhs, ← internTerm rhs], sort := some sort }
  | _ => bail "expected a literal"

private def internFormulaRec (r : FormulaRec) : B UInt32 := do
  if let some i := (← get).formulaIdx[r]? then return i
  let i := (← get).formulas.size.toUInt32
  modify fun b => { b with formulas := b.formulas.push r, formulaIdx := b.formulaIdx.insert r i }
  return i

private def bindSorts (env : Std.HashMap UInt32 String) (vars : Array (UInt32 × String)) :
    Std.HashMap UInt32 String :=
  vars.foldl (fun e (v, s) => e.insert v s) env

private partial def internFormula (env : Std.HashMap UInt32 String) : Fm → B UInt32
  | .atom polarity (.app n #[]) => do
    -- A split name stands as a formula of its own, a name rather than a literal.
    if (← get).splitNames.contains n then
      return ← internFormulaRec { connective := .name, name := some (if polarity then n else s!"~{n}") }
    internFormulaRec { connective := .literal
                       literal := some (← internLiteral env (.atom polarity (.app n #[]))) }
  | .atom polarity t => do
    internFormulaRec { connective := .literal, literal := some (← internLiteral env (.atom polarity t)) }
  | .eq polarity lhs rhs => do
    internFormulaRec { connective := .literal
                       literal := some (← internLiteral env (.eq polarity lhs rhs)) }
  | .junction conj subs => do
    internFormulaRec { connective := if conj then .and else .or
                       subs := ← subs.mapM (internFormula env) }
  | .binary c lhs rhs => do
    internFormulaRec { connective := c, subs := #[← internFormula env lhs, ← internFormula env rhs] }
  | .not f => do internFormulaRec { connective := .not, subs := #[← internFormula env f] }
  | .quant all vars body => do
    internFormulaRec { connective := if all then .«forall» else .«exists»
                       subs := #[← internFormula (bindSorts env vars) body]
                       vars := vars.map (·.1) }
  | .const c => internFormulaRec { connective := c }
  | .name n => internFormulaRec { connective := .name, name := some n }

/-! Reading general terms. -/

private def gtNat : GT → B Nat
  | .num text => match text.toNat? with
    | some n => pure n
    | none => bail s!"expected a natural number, not {text}"
  | _ => bail "expected a natural number"

private def gtU32 (g : GT) : B UInt32 := (·.toUInt32) <$> gtNat g

private def gtOptNat : GT → B (Option Nat)
  | .word "none" => pure none
  | g => some <$> gtNat g

private def gtList : GT → B (Array GT)
  | .list xs => pure xs
  | _ => bail "expected a list"

private def gtWord : GT → B String
  | .word s => pure s
  | _ => bail "expected a name"

/-- A variable, `X12`, as its number. -/
private def gtVar : GT → B UInt32
  | .word w => match numberAfter? "X" w with
    | some n => pure n.toUInt32
    | none => bail s!"expected a variable, not {w}"
  | _ => bail "expected a variable"

private def gtTerm : GT → B UInt32
  | .fot t => internTerm t
  | _ => bail "expected a term"

private def gtOptTerm : GT → B (Option UInt32)
  | .word "none" => pure none
  | g => some <$> gtTerm g

/-- The arguments of `f(...)`, which has to have `n` of them. -/
private def gtArgs (f : String) (n : Nat) : GT → B (Array GT)
  | .app f' args => if f' == f && args.size == n then pure args
    else bail s!"expected {f} of {n} arguments, not {f'} of {args.size}"
  | _ => bail s!"expected {f}"

/-- `[X0:s, X1:t]`: variables and their sorts. -/
private def gtVarSorts (g : GT) : B (Array (UInt32 × String)) := do
  (← gtList g).mapM fun
    | .colon v s => do return (← gtVar v, ← gtWord s)
    | _ => bail "expected a variable and its sort"

/-- `bind(X, $fot(t))`: what a variable was bound to. -/
private def gtBinding (g : GT) : B (UInt32 × UInt32) := do
  let a ← gtArgs "bind" 2 g
  return (← gtVar a[0]!, ← gtTerm a[1]!)

/-- A formula of a record, `$tff(f)` or, with free variables, `scoped([X0:s, ...], $tff(f))`. -/
private def gtFormula : GT → B UInt32
  | .tff f => internFormula {} f
  | .app "scoped" #[vars, .tff f] => do internFormula (bindSorts {} (← gtVarSorts vars)) f
  | _ => bail "expected a formula"

/-- A placement entry. -/
private partial def gtPlaced : GT → B (Option Placed)
  | .word "none" => pure none
  | .app "turned" #[g] => do return (← gtPlaced g).map ({ · with turned := true })
  | .app "rewritten" #[g] => do return (← gtPlaced g).map ({ · with rewritten := true })
  | g => do return some { index := ← gtNat g }

/-- A term written as a general term, as `skolemize` writes the term it names. -/
private partial def gtAsTerm : GT → B Tm
  | .word w => do
    if let some n := numberAfter? "X" w then return .var n.toUInt32
    return .app w #[]
  | .num text => pure (.num text)
  | .app f args => do return .app f (← args.mapM gtAsTerm)
  | _ => bail "expected a term"

/-- The rule a step names, by the name a TPTP proof writes it by. -/
private def ruleNamed (step name : String) : B InferenceRule := do
  match InferenceRule.ofTptpName? name with
  | some rule => pure rule
  | none => throw ⟨s!"step {step} names the inference rule {name}, which \
      replay/VampireReplay/InferenceRule.lean does not have; rerun \
      scripts/gen-inference-rules.py"⟩

/-- What a name refers to among those `names` holds, which it has to be one of. -/
private def resolve (names : Std.HashMap String UInt32) (what name : String) : B UInt32 := do
  match names[name]? with
  | some i => pure i
  | none => bail s!"{what} {name} is not in the proof"

private def congruenceStep : GT → B CongruenceRec
  | .app "input" #[a] => do return .input (← gtNat a)
  | .app "congruence" #[a, b, args] => do
    return .congruence (← gtTerm a) (← gtTerm b) (← (← gtList args).mapM gtOptNat)
  | .app "trans" #[a, b] => do return .trans (← gtNat a) (← gtNat b)
  | .app "symm" #[a] => do return .symm (← gtNat a)
  | .app "goal_equality" #[a, b] => do return .goalEquality (← gtNat a) (← gtOptNat b)
  | .app "goal_literals" #[a, b, args] => do
    return .goalLiterals (← gtNat a) (← gtNat b) (← (← gtList args).mapM gtOptNat)
  | _ => bail "unknown congruence step"

/-- One premise use (`use(...)`, or `use` with nothing in it), and its placement. -/
private def gtUse (premise : UInt32) (g : GT) : B (UseRec × Option (Array (Option Placed))) := do
  let items := match g with
    | .app "use" items => items
    | _ => #[]
  let mut use : UseRec := { premise }
  let mut placed := none
  for item in items do
    match item with
    | .app "literal" #[l] => use := { use with literal := some (← gtU32 l) }
    | .app "term" #[t] => use := { use with term := some (← gtTerm t) }
    | .app "bind" _ => use := { use with bindings := use.bindings.push (← gtBinding item) }
    | .word "rewrites_whole_premise" => use := { use with rewritesWholePremise := true }
    | .app "virtual" #[.word "epsilon"] => use := { use with virtualEpsilon := true }
    | .app "virtual" #[.word "plus_infinity"] => use := { use with virtualInfinity := some true }
    | .app "virtual" #[.word "minus_infinity"] =>
      unless use.virtualInfinity == some true do use := { use with virtualInfinity := some false }
    | .word "negated" => use := { use with negated := true }
    | .app "other" #[t] => use := { use with other := some (← gtTerm t) }
    | .app "factor" #[t] => use := { use with factor := some (← gtTerm t) }
    | .app "placed" #[entries] => placed := some (← (← gtList entries).mapM gtPlaced)
    | _ => bail "unknown item of a premise use"
  return (use, placed)

/--
The parents, and what the step recorded of each: the `j`th occurrence of a
premise is the `j`th use recorded against it, and each use after those, which
only the last occurrence holds, the one after; a placement belongs to the use
it is in, or, on its own, to the occurrence's.
-/
private def buildParents (step : String) (parents : Array GT) :
    B (Array UInt32 × Array UseRec × Array PlacementRec) := do
  let units := (← get).units
  let mut out := #[]
  let mut uses := #[]
  let mut placements := #[]
  let mut seen : Std.HashMap UInt32 Nat := {}
  for h : pos in [0:parents.size] do
    let (name, details) ← match parents[pos] with
      | .word name => pure (name, #[])
      | .colon (.word name) details => pure (name, ← gtList details)
      | _ => bail s!"step {step} has a malformed premise"
    let i ← resolve units "the premise" name
    let some number := numberAfter? "f" name
      | bail s!"unexpected step name {name}"
    let number := number.toUInt32
    out := out.push i
    let j := seen.getD number 0
    let mut k := j
    for d in details do
      match d with
      | .app "placed" #[entries] =>
        unless details.size == 1 do
          bail s!"step {step} places premise {name}'s literals beside a use"
        placements := placements.push
          { position := pos, use := j, entries := ← (← gtList entries).mapM gtPlaced }
      | _ =>
        let (use, placed) ← gtUse number d
        uses := uses.push use
        if let some entries := placed then
          placements := placements.push { position := pos, use := k, entries }
        k := k + 1
    seen := seen.insert number (max (j + 1) k)
  return (out, uses, placements)

/-- Each record of useful information by its name. -/
private def records (info : Array GT) : Std.HashMap String (Array GT) :=
  info.foldl (init := {}) fun m g =>
    match g with
    | .app f args => m.insert f args
    | .word f => m.insert f #[]
    | _ => m

/-- The single argument of a record, if the step has it. -/
private def single (rs : Std.HashMap String (Array GT)) (key : String) : B (Option GT) :=
  match rs[key]? with
  | some #[g] => pure (some g)
  | some _ => bail s!"malformed {key}"
  | none => pure none

private def buildUnit (a : Annotated) : B UnitRec := do
  let some number := numberAfter? "f" a.name
    | bail s!"unexpected step name {a.name}"
  -- The rule, the premises, and the information the source and the
  -- annotation hold between them.
  let (rule, parents, uses, placements, name, info) ← match a.source with
    | some (.app "file" #[_, n]) => pure (.input, #[], #[], #[], some (← gtWord n), a.info)
    | some (.app "file" #[_]) => pure (.input, #[], #[], #[], none, a.info)
    | some (.app "introduced" #[.word _, .list items, .list #[]]) => do
      let some (GT.word r) := items[0]? | bail s!"step {a.name} names no rule"
      pure (← ruleNamed a.name r, #[], #[], #[], none, items.extract 1 items.size ++ a.info)
    | some (.app "inference" #[.word r, .list items, .list premises]) => do
      let (parents, uses, placements) ← buildParents a.name premises
      pure (← ruleNamed a.name r, parents, uses, placements, none, items ++ a.info)
    | _ => bail s!"step {a.name} has no source this format writes"
  let rs := records info
  let .formula statement := a.body | bail s!"step {a.name} states no formula"
  let mut u : UnitRec := { number := number.toUInt32, rule, isClause := a.language == "tcf",
                           parents, uses, placements, name }
  if u.isClause then
    -- A clause is quantified over its variables, in `varSorts`' order, and
    -- holds under the split names it denies, which come after its literals.
    let (varSorts, body) := match statement with
      | .quant true vars body => (vars, body)
      | f => (#[], f)
    let lits := match body with
      | .junction false subs => subs
      | .const .false => #[]
      | f => #[f]
    let splitNames := (← get).splitNames
    let isSplit : Fm → Bool
      | .atom _ (.app n #[]) => splitNames.contains n
      | _ => false
    let own := lits.takeWhile (!isSplit ·)
    let splits ← (lits.extract own.size lits.size).mapM fun
      | .atom false (.app n #[]) => if splitNames.contains n then pure n
          else bail s!"step {a.name} has a literal after its split names"
      | .atom true (.app n #[]) => if splitNames.contains n then pure s!"~{n}"
          else bail s!"step {a.name} has a literal after its split names"
      | _ => bail s!"step {a.name} has a literal after its split names"
    u := { u with varSorts, splits, literals := ← own.mapM (internLiteral (bindSorts {} varSorts)) }
  else
    let varSorts ← match ← single rs "variable_sorts" with
      | some g => gtVarSorts g
      | none => pure #[]
    u := { u with varSorts, formula := ← internFormula (bindSorts {} varSorts) statement }
  if let some g ← single rs "bound_sorts" then u := { u with boundVarSorts := ← gtVarSorts g }
  if let some g ← single rs "input_name" then u := { u with name := some (← gtWord g) }
  -- The first symbol it introduced, which the first list of symbols names
  -- (vampire lists a split name it introduced in a list of its own).
  let splitNames := (← get).splitNames
  for item in info do
    if let .app "new_symbols" #[_, .list syms] := item then
      let syms ← syms.mapM gtWord
      if u.introducedSymbol.isNone && !syms.any splitNames.contains then
        u := { u with introducedSymbol := syms[0]? }
    if let .app "skolemize" #[v, t] := item then
      u := { u with skolems := u.skolems.push (← gtVar v, ← internTerm (← gtAsTerm t)) }
  if let some g ← single rs "sat_premise" then
    u := { u with satPremise := some (← resolve (← get).sats "the propositional clause" (← gtWord g)) }
  if let some g ← single rs "namings" then
    u := { u with namings := ← (← gtList g).mapM fun n => do
      let a ← gtArgs "naming" 3 n
      return (← gtWord a[0]!, ← (← gtList a[1]!).mapM gtVar, ← gtFormula a[2]!) }
  if let some g ← single rs "gen_clause" then
    u := { u with genClause := some (← resolve (← get).gens "the generalised clause" (← gtWord g)) }
  if let some g ← single rs "choices" then
    u := { u with choices := ← (← gtList g).mapM fun c => do
      let a ← gtArgs "choice" 2 c
      return (← (← gtList a[0]!).mapM gtU32, ← gtU32 a[1]!) }
  if let some g ← single rs "congruences" then
    u := { u with congruences := ← (← gtList g).mapM congruenceStep }
  if let some g ← single rs "constraints" then
    u := { u with constraints := ← (← gtList g).mapM gtNat }
  if let some g ← single rs "splitting_name" then u := { u with splittingName := some (← gtNat g) }
  if let some g ← single rs "literal_factors" then
    u := { u with literalFactors := some (← (← gtList g).mapM fun q => do
      let .num text := q | bail "expected a rational"
      let some r := rational text | bail s!"unreadable rational {text}"
      pure r) }
  if let some g ← single rs "procedure" then
    u := { u with procedure := some (← match g with
      | .word "theory_normalization" => pure .theoryNormalization
      | .word "interpreted_evaluation" => pure .interpretedEvaluation
      | .word "interpreted_evaluation_normalizing" => pure .interpretedEvaluationNormalizing
      | .word "polynomial_evaluation" => pure .polynomialEvaluation
      | .word "push_unary_minus" => pure .pushUnaryMinus
      | .word "alasca_normalization" => pure .alascaNormalization
      | .word "cancellation" => pure .cancellation
      | .word "generalization" => pure .generalization
      | .word "viras" => pure .viras
      | .word "inequality_predicate_normalization" => pure .inequalityPredicateNormalization
      | _ => bail s!"step {a.name} names an unknown literal procedure") }
  if let some g ← single rs "introduced" then
    u := { u with introduced := ← (← gtList g).mapM fun l => do
      let a ← gtArgs "lit" 2 l
      return (← gtNat a[0]!, ← gtOptNat a[1]!) }
  if let some g ← single rs "variant" then u := { u with variant := ← gtNat g }
  if let some g ← single rs "introduced_terms" then
    u := { u with introducedTerms := ← (← gtList g).mapM gtOptTerm }
  return u

/-- A propositional literal: a split name, `~` before it for its negation. -/
private def satLiteral : Fm → B String
  | .atom polarity (.app n #[]) => do
    unless (← get).splitNames.contains n do bail s!"{n} is no split name"
    pure (if polarity then n else s!"~{n}")
  | _ => bail "expected a propositional literal"

private def buildSat (a : Annotated) : B SatRec := do
  let .formula statement := a.body | bail s!"{a.name} states no clause"
  let lits := match statement with
    | .junction false subs => subs
    | .const .false => #[]
    | f => #[f]
  let (premises, origin, order) ← match a.source with
    | some (.app "inference" #[.word "rat", _, .list ps]) => do
      let sats := (← get).sats
      pure (← ps.mapM fun p => do resolve sats "the propositional clause" (← gtWord p), none, none)
    | some (.app "inference" #[.word "sat_conversion", .list items, .list #[p]]) => do
      let order ← match ← single (records items) "order" with
        | some g => some <$> (← gtList g).mapM gtNat
        | none => pure none
      pure (#[], some (← resolve (← get).units "the step" (← gtWord p)), order)
    | some (.word "unknown") => pure (#[], none, none)
    | _ => bail s!"{a.name} has no source this format writes"
  return { literals := ← lits.mapM satLiteral, premises, origin, order }

/--
One of the new clausifier's states, from its step: its statement's disjuncts
are its guards and then its subformulas, the guards `X != t` its bindings, as
many as `bound` lists, and a subformula `~ (F)` is `F` negative -- a positive
one is never written as a negation.
-/
private def buildGen (a : Annotated) : B GenRec := do
  let .disjuncts vars disjuncts := a.body | bail s!"{a.name} states no generalised clause"
  let (parent, items) ← match a.source with
    | some (.app "inference" #[.word "clausification_step", .list items, .list #[p]]) => do
      let name ← gtWord p
      -- The parent state, or the step the first state was inferred from.
      match (← get).gens[name]? with
      | some i => pure (some i, items)
      | none => do
        discard <| resolve (← get).units "the step" name
        pure (none, items)
    | some (.app "introduced" #[.word "definition", .list items, .list #[]]) => do
      let some (.word "clausification_step") := items[0]?
        | bail s!"{a.name} is introduced, but not by clausification"
      pure (none, items.extract 1 items.size)
    | _ => bail s!"{a.name} is no clausification step"
  let rs := records items
  let how : GenClause.GenHow ← match items.find? (fun | .word _ => true | _ => false) with
    | some (.word "introduced") => pure .introduced
    | some (.word "extended") => pure .extended
    | some (.word "replaced") => pure .replaced
    | some (.word "named") => pure .named
    | _ => bail s!"{a.name} was reached in an unknown way"
  let position ← match ← single rs "position" with
    | some g => some <$> gtU32 g
    | none => pure none
  let bound ← match ← single rs "bound" with
    | some g => (← gtList g).mapM gtVar
    | none => pure #[]
  let some replacement ← single rs "replacement" | bail s!"{a.name} records no replacement"
  let some placed ← single rs "placed" | bail s!"{a.name} records no placements"
  let env := bindSorts {} vars
  if disjuncts.size < bound.size then
    bail s!"{a.name} has fewer disjuncts than the variables it binds"
  let bindings ← (bound.zip (disjuncts.extract 0 bound.size)).mapM fun (p : UInt32 × Fm) =>
    match p with
    | (v, .eq false (.var v') t) => do
      unless v == v' do bail s!"{a.name}'s guard for X{v} is not where it is listed"
      return (v, ← internTerm t)
    | (v, _) => bail s!"{a.name} has no guard for X{v}"
  let literals ← (disjuncts.extract bound.size disjuncts.size).mapM fun (d : Fm) =>
    match d with
    | .not f => do return (← internFormula env f, false)
    | f => do return (← internFormula env f, true)
  let signed (g : GT) : B (Array (UInt32 × Bool)) := do
    (← gtList g).mapM fun
      | .app "pos" #[f] => do return (← gtFormula f, true)
      | .app "neg" #[f] => do return (← gtFormula f, false)
      | _ => bail "expected a signed formula"
  return {
    parent, position, how, literals, replacement := ← signed replacement, bindings
    placements := ← (← gtList placed).mapM fun
      | .app "turned" #[g] => do return (← gtNat g, true)
      | g => do return (← gtNat g, false) }

/-- Records what a declaration says of the symbol it declares. -/
private def declare (symbol : String) (args : Array String) (result : String)
    (info : Array GT) : B PUnit := do
  if result == "$tType" then return
  let rs := records info
  -- A split name is propositional and of no signature.
  if rs.contains "split_name" then
    unless result == "$o" && args.isEmpty do bail s!"the split name {symbol} is no proposition"
    modify fun b => { b with splitNames := b.splitNames.insert symbol }
    return
  let created ← match ← single rs "created" with
    | some g => gtNat g
    | none => pure 0
  if result == "$o" then
    let i ← internPredicate symbol args.size
    let pure? ← match rs["pure"]? with
      | some #[.word value, order] => pure (some (value == "true", ← gtNat order))
      | some _ => bail "malformed pure"
      | none => pure none
    modify fun b => { b with predicates := b.predicates.modify i.toNat fun s =>
      { s with created, pure? } }
    return
  -- ALASCA's multiplication by a numeral, which the declaration says is one:
  -- the symbol vampire has, named as vampire names it.
  let sym ← match ← single rs "lin_mul" with
    | some (.fot (.num text)) => do
      pure { (← numeral text (← numberSort text) true) with created }
    | some (.fot (.app "$to_real" #[.num text])) => do
      pure { (← numeral text "$real" true) with created }
    | some _ => bail s!"{symbol} multiplies by something other than a numeral"
    | none => pure { name := symbol, arity := args.size.toUInt32, created }
  let i ← internFunctor sym
  modify fun b => { b with
    resultSorts := b.resultSorts.insert (symbol, args.size) result
    declaredFunctors := b.declaredFunctors.insert (symbol, args.size) i }

/--
Checks every position that picks out a clause's literal, a formula's
subformula or an earlier step: the accessors index with `!`, and replay would
go on with a default where one is out of range.
-/
private def validate (units : Array UnitRec) (sats : Array SatRec) (gens : Array GenRec)
    (formulas : Array FormulaRec) : Except Error PUnit := do
  let malformed (what : String) : Except Error PUnit :=
    Error.fail s!"malformed proof from vampire: {what}"
  let index (what : String) (i bound : Nat) : Except Error PUnit :=
    if i < bound then pure () else malformed s!"{what} {i} is out of range (there are {bound})"
  for u in units do
    let n := u.literals.size
    for c in u.constraints do index s!"step {u.number}'s constraint" c n
    for (l, _) in u.introduced do index s!"step {u.number}'s introduced literal" l n
    if let some l := u.splittingName then index s!"step {u.number}'s splitting name" l n
    -- A placement's entries are the step's own literals, except in a split
    -- clause: those are of the components' literals, into the clause split,
    -- which is the step's first premise.
    unless u.placements.isEmpty do
      let into ←
        if u.rule == .avatarSplitClause then
          match u.parents[0]? with
          | some p => pure units[p.toNat]!.literals.size
          | none => do malformed s!"split clause {u.number} has no premises"; pure 0
        else pure n
      for p in u.placements do
        for e in p.entries do
          if let some e := e then index s!"step {u.number}'s placed literal" e.index into
    for h : k in [0:u.congruences.size] do
      let c := u.congruences[k]
      let literal (i : Nat) := index s!"step {u.number}'s congruence literal" i n
      let earlier (i : Nat) := index s!"step {u.number}'s congruence step" i k
      let arguments (args : Array (Option Nat)) : Except Error PUnit := do
        for arg in args do
          if let some j := arg then index s!"step {u.number}'s congruence argument" j k
      match c with
      | .input l => literal l
      | .congruence _ _ args => arguments args
      | .trans a b => do earlier a; earlier b
      | .symm a => earlier a
      | .goalEquality l s => do literal l; if let some s := s then earlier s
      | .goalLiterals a b args => do literal a; literal b; arguments args
    -- Each choice's position leads, through the premise's formula, to a
    -- conjunction that has the argument chosen.
    unless u.choices.isEmpty do
      let some root := u.parents[0]?.map (units[·.toNat]!)
        | malformed s!"step {u.number} chooses conjuncts but has no premise"
      if root.isClause then
        malformed s!"step {u.number} chooses conjuncts of a premise that is no formula"
      for (path, argument) in u.choices do
        let mut f := formulas[root.formula.toNat]!
        for i in path do
          let some sub := f.subs[i.toNat]?
            | malformed s!"step {u.number} chooses a conjunct at a position its premise has not"
          f := formulas[sub.toNat]!
        unless f.connective == .and do
          malformed s!"step {u.number} chooses a conjunct of something that is no conjunction"
        index s!"step {u.number}'s conjunct" argument.toNat f.subs.size
  for s in sats do
    if let some order := s.order then
      let some origin := s.origin | malformed "a propositional clause orders the literals of no clause"
      if order.size != units[origin.toNat]!.literals.size then
        malformed s!"a propositional clause orders {order.size} literals of step \
          {units[origin.toNat]!.number}"
      for k in order do index "a propositional literal" k s.literals.size
  for g in gens do
    if let (some parent, some position) := (g.parent, g.position) then
      index "a replaced position" position.toNat gens[parent.toNat]!.literals.size
    for (k, _) in g.placements do index "a generalised placement" k g.literals.size

/--
The header: the comment lines before the first annotated formula that read
`VAMPIRE key: value`, by key.
-/
private def header (text : String) : Std.HashMap String String := Id.run do
  let mut out := {}
  for line in text.splitOn "\n" do
    unless line.startsWith "%" do
      if line.trimAscii.isEmpty then continue else break
    let comment := (String.ofList (line.toList.drop 1)).trimAscii.toString
    unless comment.startsWith "VAMPIRE " do continue
    match (String.ofList (comment.toList.drop "VAMPIRE ".length)).splitOn ": " with
    | key :: value@(_ :: _) => out := out.insert key (": ".intercalate value)
    | _ => pure ()
  return out

/--
What the run said of itself, outside the proof: why vampire stopped, and the
strategy that won with what it ran for.
-/
structure Outcome where
  reason : TerminationReason
  strategy : Option String := none
  strategyMs : Option Nat := none

/-- Builds the tables from the annotated formulas of a proof. -/
private def build (text : String) (all : Array Annotated) (outcome : Outcome) :
    Except Error Proof := do
  let rs := header text
  let field (key : String) : Except Error String := match rs[key]? with
    | some value => pure value
    | none => Error.fail s!"malformed proof from vampire: its header has no `{key}`"
  let nats (key : String) : Except Error (List Nat) := do
    match (← field key).splitOn " " |>.mapM (·.toNat?) with
    | some ns => pure ns
    | none => Error.fail s!"malformed proof from vampire: its header's `{key}` is malformed"
  -- The proof states its format, so there is a version to check wherever
  -- there is a proof.
  if rs.contains "format" || !all.isEmpty then
    let [v] ← nats "format"
      | Error.fail "malformed proof from vampire: its header's `format` is malformed"
    if v != formatVersion then
      Error.fail (s!"vampire writes proof format version {v}, but replay reads \
        version {formatVersion}; run `lake build` to rebuild vampire")
  let units := all.filter (numbered ·.name "f")
  let sats := all.filter (numbered ·.name "s")
  let gens := all.filter (numbered ·.name "g")
  let names (as : Array Annotated) : Std.HashMap String UInt32 :=
    as.zipIdx.foldl (init := {}) fun m (a, i) => m.insert a.name i.toUInt32
  let go : B (Array UnitRec × Array SatRec × Array GenRec × Option UInt32) := do
    for a in all do
      if let .type symbol args result := a.body then declare symbol args result a.info
    let genRecs ← gens.mapM buildGen
    let satRecs ← sats.mapM buildSat
    let unitRecs ← units.mapM buildUnit
    let refutation ← match rs["refutation"]? with
      | some name => some <$> resolve (← get).units "the refutation" name
      | none => pure none
    return (unitRecs, satRecs, genRecs, refutation)
  let ((unitRecs, satRecs, genRecs, refutation), b) ←
    go.run { units := names units, sats := names sats, gens := names gens }
  validate unitRecs satRecs genRecs b.formulas
  return {
    functionTable := b.functions, predicateTable := b.predicates
    termTable := b.terms, literalTable := b.literals, formulaTable := b.formulas
    unitTable := unitRecs, satTable := satRecs, genTable := genRecs
    refutationIdx := refutation, strategyText := outcome.strategy
    strategyMs := outcome.strategyMs, text, terminationReason := outcome.reason }

end Tstp

namespace Proof

/--
A line of vampire's output as it says it, without the comment sign and,
where several strategies run at once, the `(pid)` of the process that said
it: that process, `""` without one, and what it said.
-/
private def said (line : String) : Option (String × String) := do
  guard (line.startsWith "% ")
  let rest := String.ofList (line.toList.drop 2)
  if rest.startsWith "(" then
    let pid := rest.toList.drop 1 |>.takeWhile Char.isDigit
    let after := rest.toList.drop (1 + pid.length)
    if !pid.isEmpty && after.head? == some ')' then
      return (String.ofList pid, String.ofList (after.drop 1))
  return ("", rest)

/-- Why vampire stopped, by the SZS status it gave. -/
private def reasonOfStatus : String → Option TerminationReason
  | "Theorem" | "Unsatisfiable" | "ContradictoryAxioms" => some .refutation
  | "CounterSatisfiable" | "Satisfiable" => some .satisfiable
  | "GaveUp" => some .refutationNotFound
  | "Timeout" => some .timeLimit
  | "InstrOut" => some .instructionLimit
  | _ => none

/-- Why vampire stopped, by what its statistics say: `Termination reason: …`. -/
private def reasonOfStatistics (said : String) : Option TerminationReason :=
  match said with
  | "Refutation" => some .refutation
  | "Satisfiable" => some .satisfiable
  | "Time limit" => some .timeLimit
  | "Instruction limit" => some .instructionLimit
  | "Memory limit" => some .memoryLimit
  | "Activation limit" => some .activationLimit
  | "Inappropriate" => some .inappropriate
  | "Unknown" => some .unknown
  | _ => if said.startsWith "Refutation not found" then some .refutationNotFound else none

/--
The strategy as vampire's `strategy` option reads it, from the one a slice
says it runs: what that says, less `proof_extra=full`, which is how the proof
is written rather than how it is found, and which the tactic asks for anyway.
A strategy encodes its options `name=value:…` between the first and last
`_` (`Config.refused?`), so the pair is taken out with the separator before
it, or after it where it is the first.
-/
private def searchStrategy (encoded : String) : String :=
  let pair := "proof_extra=full"
  if (encoded.splitOn s!":{pair}:").length == 2 then
    ":".intercalate (encoded.splitOn s!":{pair}:")
  else if (encoded.splitOn s!"_{pair}:").length == 2 then
    "_".intercalate (encoded.splitOn s!"_{pair}:")
  else if (encoded.splitOn s!":{pair}_").length == 2 then
    "_".intercalate (encoded.splitOn s!":{pair}_")
  else encoded

/--
What vampire printed, read: the outcome of the run and, where it found one,
the proof.

`problem` is the name vampire knows the problem by, its file's name without
the extension, which it says the strategies it runs on. The parts read:

- The verdict is the last SZS status printed. In portfolio mode a strategy
  that succeeds has its result printed by the schedule once every other
  strategy has been stopped, and one that fails prints none; when none
  succeeds the schedule's own is the last thing said. A single strategy that
  reaches a limit prints no status, but its statistics say why it stopped. A
  run that ends saying neither -- a crash -- reads as `unknown`, and only what
  vampire printed explains it.
- The proof is between the SZS output markers.
- The strategy that won is the one whose own last words follow the verdict,
  the result being printed whole from what that strategy wrote: the first
  `Termination reason` after the status is its, and the `(pid)` says which
  process it was. Before it, that process said which strategy it ran and,
  counting beats, what that took on the clock. With one strategy at a time
  there is no `(pid)`, and the last strategy started is the one that won.
-/
def ofOutput (output : ByteArray) (problem : String) : Except Error Proof := do
  let some text := String.fromUTF8? output
    | Error.fail "malformed output from vampire: it is not valid UTF-8"
  let lines := (text.splitOn "\n").toArray
  let mut status : Option (Nat × String) := none
  for h : i in [0:lines.size] do
    if let some (_, w) := said lines[i] then
      if w.startsWith "SZS status " then
        status := some (i, (w.splitOn " ")[2]!)
  -- Without a status, a run of one strategy in one process -- whose lines
  -- carry no `(pid)` -- still says why it stopped in its statistics; no line
  -- of a portfolio's slices speaks for the run.
  let statistics := lines.reverse.findSome? fun line => do
    let (pid, w) ← said line
    guard (pid.isEmpty && w.startsWith "Termination reason: ")
    reasonOfStatistics (String.ofList (w.toList.drop "Termination reason: ".length))
  let reason := match status with
    | some (_, word) => (reasonOfStatus word).getD .unknown
    | none => statistics.getD .unknown
  let startMarker := s!"% SZS output start Proof for {problem}"
  let endMarker := s!"% SZS output end Proof for {problem}"
  let block : Option String := do
    let start ← lines.findIdx? (· == startMarker)
    let stop ← (lines.extract (start + 1) lines.size).findIdx? (· == endMarker)
    return "\n".intercalate (lines.extract (start + 1) (start + 1 + stop)).toList
  if reason == .refutation && block.isNone then
    Error.fail "vampire says it found a refutation but printed no proof"
  -- The strategy that won, where one did.
  let mut outcome : Tstp.Outcome := { reason }
  if let (some (verdict, _), true) := (status, reason == .refutation || reason == .satisfiable) then
    let winner := (lines.extract verdict lines.size).findSome? fun line => do
      let (pid, w) ← said line
      guard (w.startsWith "Termination reason:")
      return pid
    if let some pid := winner then
      let before := (lines.extract 0 verdict).reverse.filterMap fun line => do
        let (p, w) ← said line
        guard (p == pid)
        return w
      let runs := s!" on {problem} for ("
      let strategy := before.findSome? fun w => do
        let parts := w.splitOn runs
        guard (parts.length == 2 && w.endsWith ")")
        return searchStrategy parts[0]!
      let ms := before.findSome? fun w => do
        guard (w.startsWith "beats ")
        match w.splitOn " " with
        | ["beats", _, "in", t] =>
          if t.endsWith "ms" then (String.ofList (t.toList.take (t.length - 2))).toNat? else none
        | _ => none
      outcome := { outcome with strategy, strategyMs := ms }
  let body := block.getD ""
  Tstp.build body (← Tstp.parse body.toUTF8) outcome

/--
The strategy the proof was found by, as vampire's `strategy` option reads it,
and `none` when there is no proof or vampire did not say.

In portfolio mode the strategy that wins is one of a schedule of them, and
running it on its own is the same run without the ones it won against.
-/
def strategy? (p : Proof) : Option String := p.strategyText

/--
How long the strategy that found the proof ran for on the clock, in
milliseconds, and `none` when there is no proof or vampire did not say, which
it does where it counts beats.
-/
def strategyTime? (p : Proof) : Option Nat :=
  if p.strategyText.isNone then none else p.strategyMs

/-- The proof as vampire wrote it, in TSTP. -/
def proofText (p : Proof) : String := p.text

end Proof

/-- A term: a variable, or a functor applied to arguments. -/
structure Term where
  private mk ::
  private proof : Proof
  private idx : UInt32

/-- A literal: a predicate applied to arguments, with a polarity. -/
structure Literal where
  private mk ::
  private proof : Proof
  private idx : UInt32

/-- A first-order formula, for units that have not been clausified. -/
structure Formula where
  private mk ::
  private proof : Proof
  private idx : UInt32

/-- A clause: a disjunction of literals. -/
structure Clause where
  private mk ::
  private proof : Proof
  private idx : UInt32

/--
How a step used one of its premises: which of that premise's literals the
inference acted on, and what the unifier bound each of its variables to.

A generating inference discards the substitution it computes, so without this a
reconstruction would have to recover it by matching the conclusion back against
the premises.
-/
structure PremiseUse where
  /-- Vampire's number for the premise. -/
  premise : UInt32
  /-- Index of the literal the inference acted on. -/
  literal : Option UInt32
  /--
  The term the inference acted on within that literal.

  A rewriting inference singles out a subterm rather than a whole literal: the
  subterm rewritten in the premise it rewrites, and the side of the equation
  doing the rewriting in the premise that one comes from.
  -/
  term : Option Term
  /--
  Whether the inference rewrote that term throughout the premise rather than
  only in the literal recorded against it, which is what simultaneous
  superposition does.
  -/
  rewritesWholePremise : Bool
  /--
  The virtual term VIRAS substituted for the variable it eliminated, beyond the
  term `other` gives: plus an infinitesimal, and plus or minus infinity.
  -/
  virtualEpsilon : Bool
  virtualInfinity : Option Bool
  /--
  Whether the premise states `term` negated: an integrality premise `j s + u`
  whose coefficient of `s` is negative, `j` being its absolute value.
  -/
  negated : Bool
  bindings : Array (UInt32 × Term)
  /--
  A second term of the premise the inference acted on: what an arithmetic
  equation `k s + t = 0` rewrote `s` to, `-t/k`, which is no side of it; the
  atom an inequality factoring unified `term` with; for an equality factoring,
  the other side of the equation `term` is one side of; or, for VIRAS, the
  virtual term's term. Stated in the premise's variables, as `term` is.
  -/
  other : Option Term
  /--
  A numeral the inference scaled the term by: the coefficient `k` of the atom
  an arithmetic equation `k s + t = 0` rewrites.
  -/
  factor : Option Term

/--
One step of the reasoning behind a congruence-closure conflict, which vampire
states as an axiom: its literals cannot all be false, and the clause itself
holds what it takes to see that.
-/
inductive Congruence where
  /-- The equality the clause's `literal`th literal denies. -/
  | input (literal : Nat)
  /-- `f as = f bs`, from what says each pair of arguments is equal. -/
  | congruence (lhs rhs : Term) (args : Array (Option Nat))
  /-- One step and then the other. -/
  | trans (first second : Nat)
  /-- A step, the other way round. -/
  | symm (step : Nat)
  /--
  The clause's `literal`th literal is the equality `step` proves; `none` only
  where its sides are one term.
  -/
  | goalEquality (literal : Nat) (step : Option Nat)
  /-- The clause's two literals are one atom under both signs. -/
  | goalLiterals (negative positive : Nat) (args : Array (Option Nat))

/--
One state of one of clausification's generalised clauses: a disjunction of
signed subformulas, together with what the variables it quantifies have been
bound to.

Clausification starts from the formula itself and replaces one signed
subformula at a time until nothing but literals is left; each replacement is a
step that holds on its own, and the clauses that come out are the states with
nothing left to replace. Which conjunct a clause came from, which way round an
equivalence was taken and what a quantifier was skolemised at are all here.
-/
structure GenClause where
  private mk ::
  private proof : Proof
  private idx : UInt32

/--
A clause of the propositional problem splitting hands to a SAT solver, and how
the solver came by it.
-/
structure SatClause where
  private mk ::
  private proof : Proof
  private idx : UInt32

/--
Two formulas are the same when they are the same one. Formulas are interned by
structure, so two occurrences of one formula are one formula here.
-/
instance : BEq Formula where
  beq a b := a.idx == b.idx

/--
Two literals are the same when they are the same one: literals are interned by
structure, as vampire shares them, and a clause built from another's literals
shares them.
-/
instance : BEq Literal where
  beq a b := a.idx == b.idx

/-- Two terms are the same when they are the same one: they are shared. -/
instance : BEq Term where
  beq a b := a.idx == b.idx

/-- A step in the derivation: a clause or formula, and how it was inferred. -/
structure Unit where
  private mk ::
  private proof : Proof
  private idx : UInt32

namespace Proof

/-- The function symbols of the problem's signature. -/
def function? (p : Proof) (functor : UInt32) : Option Symbol :=
  p.functionTable[functor.toNat]?

/-- Every function symbol of the problem's signature. -/
def functions (p : Proof) : Array Symbol := p.functionTable

/-- The predicate symbols of the problem's signature. -/
def predicate? (p : Proof) (predicate : UInt32) : Option Symbol :=
  p.predicateTable[predicate.toNat]?

/-- Every predicate symbol of the problem's signature. -/
def predicates (p : Proof) : Array Symbol := p.predicateTable

/-- The final step of the derivation, when vampire found a refutation. -/
def refutation? (p : Proof) : Option Unit := p.refutationIdx.map (⟨p, ·⟩)

/-- Every step of the derivation. -/
def units (p : Proof) : Array Unit :=
  Array.ofFn (n := p.unitTable.size) fun i => ⟨p, UInt32.ofNat i.val⟩

end Proof

namespace Term

@[inline] private def r (t : Term) : TermRec := t.proof.termTable[t.idx.toNat]!

/--
The term's place among the proof's terms.

Vampire shares its terms, so two occurrences of one term are one term here too,
and this says which. What rebuilds a term keys its answer on it.
-/
def index (t : Term) : UInt32 := t.idx

/-- Whether this term is a variable. -/
def isVar (t : Term) : Bool := t.r.isVar

/-- The variable's number. Only meaningful when `isVar`. -/
def var (t : Term) : UInt32 := t.r.value

/-- The functor. Only meaningful when not `isVar`. -/
def functor (t : Term) : UInt32 := t.r.value

/-- The functor's symbol, or `none` for a variable. -/
def symbol? (t : Term) : Option Symbol :=
  if t.isVar then none else t.proof.function? t.functor

/-- The number of arguments. -/
def arity (t : Term) : UInt32 := t.r.args.size.toUInt32

/-- The arguments, left to right. -/
def args (t : Term) : Array Term := t.r.args.map (⟨t.proof, ·⟩)

protected partial def render (t : Term) : String :=
  if t.isVar then s!"X{t.var}"
  else
    let name := (t.symbol?.map (·.name)).getD s!"f{t.functor}"
    if t.arity == 0 then name
    else s!"{name}({String.intercalate ", " (t.args.toList.map Term.render)})"

instance : ToString Term := ⟨Term.render⟩

end Term

namespace Literal

@[inline] private def r (l : Literal) : LiteralRec := l.proof.literalTable[l.idx.toNat]!

/-- The predicate symbol's index. -/
def predicate (l : Literal) : UInt32 := l.r.predicate

/-- The predicate's symbol. -/
def symbol? (l : Literal) : Option Symbol := l.proof.predicate? l.predicate

/-- Whether the literal occurs positively. -/
def polarity (l : Literal) : Bool := l.r.polarity

/-- Whether the literal is an equality. -/
def isEquality (l : Literal) : Bool := l.r.isEquality

/-- The number of arguments. -/
def arity (l : Literal) : UInt32 := l.r.args.size.toUInt32

/-- The arguments, left to right. -/
def args (l : Literal) : Array Term := l.r.args.map (⟨l.proof, ·⟩)

/--
The sort of an equality's arguments. A clause `X = Y` gives no other way to
recover it, so it is read off the sorts of the variables where the literal
occurs, or off the declarations of the symbols its sides are made of.
-/
def sort? (l : Literal) : Option String := l.r.sort

protected def render (l : Literal) : String :=
  let name := (l.symbol?.map (·.name)).getD s!"p{l.predicate}"
  let args := l.args.toList.map toString
  match l.isEquality, args with
  | true, [lhs, rhs] => s!"{lhs} {if l.polarity then "=" else "!="} {rhs}"
  | _, _ =>
    let atom :=
      if l.arity == 0 then name
      else s!"{name}({String.intercalate ", " args})"
    if l.polarity then atom else s!"~{atom}"

instance : ToString Literal := ⟨Literal.render⟩

end Literal

namespace Unit

@[inline] private def r (u : Unit) : UnitRec := u.proof.unitTable[u.idx.toNat]!

end Unit

namespace Clause

/-- The literals of the clause. -/
def literals (c : Clause) : Array Literal :=
  c.proof.unitTable[c.idx.toNat]!.literals.map (⟨c.proof, ·⟩)

/-- The number of literals, read off the clause rather than counted. -/
def size (c : Clause) : Nat := c.proof.unitTable[c.idx.toNat]!.literals.size

/-- Whether this is the empty clause. -/
def isEmpty (c : Clause) : Bool := c.size == 0

instance : ToString Clause where
  toString c :=
    if c.isEmpty then "$false"
    else String.intercalate " | " (c.literals.toList.map toString)

end Clause

namespace Formula

@[inline] private def r (f : Formula) : FormulaRec := f.proof.formulaTable[f.idx.toNat]!

/-- Which formula of the proof this is. -/
def index (f : Formula) : UInt32 := f.idx

/-- The formula's top-level connective. -/
def connective (f : Formula) : Connective := f.r.connective

/-- The atom, when the connective is `literal`. -/
def literal? (f : Formula) : Option Literal := f.r.literal.map (⟨f.proof, ·⟩)

/--
The name of a named subformula: a definition vampire introduced while
clausifying. `none` for every other connective.
-/
def name? (f : Formula) : Option String := f.r.name

/-- The immediate subformulas. -/
def subformulas (f : Formula) : Array Formula := f.r.subs.map (⟨f.proof, ·⟩)

/-- The variables bound by a quantifier. -/
def boundVars (f : Formula) : Array UInt32 := f.r.vars

/-- Renders the formula in TPTP-like syntax. -/
protected partial def render (f : Formula) : String :=
  let subs := f.subformulas
  let sub (i : Nat) : String := (subs[i]?.map Formula.render).getD "<?>"
  let binary (op : String) : String := s!"({sub 0} {op} {sub 1})"
  let junction (op : String) : String :=
    if subs.isEmpty then "()"
    else s!"({String.intercalate op (subs.toList.map Formula.render)})"
  let quantified (q : String) : String :=
    let vars := f.boundVars.toList.map (s!"X{·}")
    s!"{q} [{String.intercalate ", " vars}] : {sub 0}"
  match f.r.connective with
  | .literal => (f.literal?.map toString).getD "<missing literal>"
  | .«true» => "$true"
  | .«false» => "$false"
  | .not => s!"~{sub 0}"
  | .and => junction " & "
  | .or => junction " | "
  | .imp => binary "=>"
  | .iff => binary "<=>"
  | .xor => binary "<~>"
  | .«forall» => quantified "!"
  | .«exists» => quantified "?"
  | .name => "<name>"

instance : ToString Formula := ⟨Formula.render⟩

end Formula

namespace Unit

/-- Vampire's number for this step, as it appears in the proof text. -/
def number (u : Unit) : UInt32 := u.r.number

/-- Whether this step is a clause rather than a formula. -/
def isClause (u : Unit) : Bool := u.r.isClause

/-- The clause, when this step has been clausified. -/
def clause? (u : Unit) : Option Clause :=
  if u.isClause then some ⟨u.proof, u.idx⟩ else none

/--
How many literals the step's clause has, when it is one. What its statement's
shape says can be more: a literal naming a subformula stands for that formula.
-/
def clauseSize? (u : Unit) : Option Nat := u.clause?.map (·.size)

/-- The formula, when this step has not been clausified. -/
def formula? (u : Unit) : Option Formula :=
  if u.isClause then none else some ⟨u.proof, u.r.formula⟩

/-- The rule this step was derived by. -/
def rule (u : Unit) : InferenceRule := u.r.rule

/--
The sorts of the step's free variables. A clause is implicitly universally
quantified over them, so rebuilding it as a Lean proposition needs their sorts.
-/
def varSorts (u : Unit) : Array (UInt32 × String) := u.r.varSorts

/--
The sorts of the variables that occur only in what this step's uses bound its
premises' variables to.

A unifier's image can mention a variable that neither the premise nor the
conclusion has, and reading that term back needs its sort as much as any other
variable's. They are apart from `varSorts` because those are the quantifier
prefix the conclusion is rebuilt with, and these are no part of it.
-/
def boundVarSorts (u : Unit) : Array (UInt32 × String) := u.r.boundVarSorts

/--
Which of this step's literals are its unification constraints, by where they
stand in its clause; empty where it has none.

Under unification with abstraction the substitution does not make the two terms
one: what it could not unify it defers into disequality literals the inference
puts into its conclusion. The step is sound because the conclusion failing
makes each of those pairs equal, and then the two terms really are one. Where
the inference put them says nothing by the time the clause is written out --
literal selection permutes it in place -- so vampire finds each by which
literal it is.
-/
def constraints (u : Unit) : Array Nat := u.r.constraints

/--
The skolem symbols this step introduced: the existential variable each replaced,
and the term it became.

Skolemisation works on NNF rather than prenex input, and a skolem takes only
the universals it depends on, so this is vampire's own record of the term
rather than something re-derived.
-/
def skolems (u : Unit) : Array (UInt32 × Term) :=
  u.r.skolems.map fun (v, t) => (v, ⟨u.proof, t⟩)

/--
The literals the inference built rather than carried, in the order it built
them -- a theory axiom's -- each the index of the conclusion's literal it is.
-/
def introduced (u : Unit) : Array Nat := u.r.introduced.map (·.1)

/--
For each literal `introduced` gives, the literal of the first premise it was
made of, where it was made of one: a rewrite of one literal into several.
-/
def introducedSources (u : Unit) : Array (Option Nat) := u.r.introduced.map (·.2)

/--
The terms the inference built that replay is told of, in the order its rule
lists them, `none` where it built none there: integer Fourier-Motzkin's floors.
-/
def introducedTerms (u : Unit) : Array (Option Term) :=
  u.r.introducedTerms.map (·.map (⟨u.proof, ·⟩))

/-- Which of the clauses of different shapes its rule builds this one is. -/
def variant (u : Unit) : Nat := u.r.variant

/--
The name the input gave this formula, and `none` for anything vampire derived.
It says which hypothesis an `input` step restates.
-/
def name? (u : Unit) : Option String := u.r.name

/-- The first symbol vampire recorded this step to introduce. -/
def introducedSymbol? (u : Unit) : Option String := u.r.introducedSymbol

/--
The names this step's clause holds under.

Splitting asserts a component's name and works on with the clause under that
assumption, so what such a clause says is that its literals follow from the
names it is written against. A name is written as the definition that
introduced it does, negated ones with a leading `~`.
-/
def splits (u : Unit) : Array String := u.r.splits

/--
The subformulas this step's clausification named.

Clausification names a subformula that occurs too often to be worth expanding,
and works on with the name in its place. The definition never becomes a step of
its own -- the clauses saying what the name means come out of the same
clausification -- so nothing in the proof says what the name stands for.
-/
def namings (u : Unit) : Array (String × Array UInt32 × Formula) :=
  u.r.namings.map fun (name, args, f) => (name, args, ⟨u.proof, f⟩)

/--
Which argument of each conjunction the clausification of this clause went into,
each conjunction given by its position in the premise's formula: the indices of
the subformulas leading to it from the root, as `Formula.subformulas` numbers
them.

The other clausifier walks a formula in negation normal form, taking every
disjunct into the clause it is building and each conjunct into a clause of its
own, so a clause is one path through the conjunctions and this is that path.
A conjunction is named by where it stands rather than by which formula it is:
two conjunctions alike are one formula here, and can be taken different ways.
-/
def conjunctChoices (u : Unit) : Array (Array UInt32 × UInt32) := u.r.choices

/--
The reasoning behind a congruence-closure conflict, the last step of it being
the literal the reasoning settles.
-/
def congruences (u : Unit) : Array Congruence :=
  u.r.congruences.map fun
    | .input l => .input l
    | .congruence a b args => .congruence ⟨u.proof, a⟩ ⟨u.proof, b⟩ args
    | .trans a b => .trans a b
    | .symm a => .symm a
    | .goalEquality l s => .goalEquality l s
    | .goalLiterals a b args => .goalLiterals a b args

private def placementEntries? (u : Unit) (position : Nat) (use : Nat) :
    Option (Array (Option Placed)) :=
  (u.r.placements.find? fun p => p.position == position && p.use == use).map (·.entries)

/--
Where the literals of the premise in `position` went in this step's clause,
under the `use`th substitution recorded against it: for each of its literals,
the conclusion's literal it became and whether with its equation turned round,
or `none` for one it became none of. `none` altogether where nothing was
recorded -- for a formula, say.

Vampire works it out by substituting and comparing literals, which it shares,
so a literal is placed rather than looked for.
-/
def placement? (u : Unit) (position : Nat) (use : Nat := 0) :
    Option (Array (Option (Nat × Bool))) :=
  (u.placementEntries? position use).map (·.map (·.map fun e => (e.index, e.turned)))

/--
Which of the literals of the premise in `position` the inference rewrote into
the literal it was placed at (`recordRewritten`), rather than carried there.
-/
def rewritten? (u : Unit) (position : Nat) (use : Nat := 0) : Option (Array Bool) :=
  (u.placementEntries? position use).map (·.map fun e => e.any (·.rewritten))

/--
For a literal-wise simplification that scaled a literal, one number per
literal of its premise: the number the difference of the literal's sides is
the term of what it became times, as `numerator / denominator`, the
denominator positive. `none` where nothing was scaled.

ALASCA normalization divides a comparison by the gcd of its coefficients,
and turns an equation's sides round, which is a factor of `-1`; the factor
depends on the order vampire keeps a polynomial's monomials in, which is
nothing replay could reconstruct, so vampire records it.
-/
def literalFactors? (u : Unit) : Option (Array (Int × Nat)) := u.r.literalFactors

/-- For a literal-wise simplification, which procedure rewrote it; `none` for anything else. -/
def literalProcedure? (u : Unit) : Option LiteralProcedure := u.r.procedure

/-- The generalised clause this clause came out of, if clausification made it. -/
def genClause? (u : Unit) : Option GenClause := u.r.genClause.map (⟨u.proof, ·⟩)

/--
Which literal of a general splitting step's clause is the name the splitting
introduced: asserted in a component, denied in what is left of the clause
split; `none` for any other step.
-/
def splittingName? (u : Unit) : Option Nat := u.r.splittingName

/--
The propositional clause a step derived by SAT solving stands on, and `none`
for anything else.
-/
def satPremise? (u : Unit) : Option SatClause := u.r.satPremise.map (⟨u.proof, ·⟩)

/-- How this step used each of its premises. -/
def premiseUses (u : Unit) : Array PremiseUse :=
  let p := u.proof
  u.r.uses.map fun use =>
    { premise := use.premise
      literal := use.literal
      term := use.term.map (⟨p, ·⟩)
      rewritesWholePremise := use.rewritesWholePremise
      virtualEpsilon := use.virtualEpsilon
      virtualInfinity := use.virtualInfinity
      negated := use.negated
      bindings := use.bindings.map fun (v, t) => (v, ⟨p, t⟩)
      other := use.other.map (⟨p, ·⟩)
      factor := use.factor.map (⟨p, ·⟩) }

/-- The steps this one was derived from. -/
def parents (u : Unit) : Array Unit := u.r.parents.map (⟨u.proof, ·⟩)

instance : ToString Unit where
  toString u :=
    match u.clause? with
    | some c => toString c
    | none => (u.formula?.map toString).getD "<missing formula>"

end Unit

namespace GenClause

@[inline] private def r (c : GenClause) : GenRec := c.proof.genTable[c.idx.toNat]!

/-- The clause's place among the proof's generalised clauses. -/
def index (c : GenClause) : UInt32 := c.idx

/-- The state this one was reached from, `none` for one clausification began at. -/
def parent? (c : GenClause) : Option GenClause := c.r.parent.map (⟨c.proof, ·⟩)

/-- The position replaced in the state this one was reached from. -/
def position? (c : GenClause) : Option UInt32 := c.r.position

/-- The signed subformulas of the clause as it stands. -/
def literals (c : GenClause) : Array (Formula × Bool) :=
  c.r.literals.map fun (f, sign) => (⟨c.proof, f⟩, sign)

/-- What was put in the replaced position. -/
def replacement (c : GenClause) : Array (Formula × Bool) :=
  c.r.replacement.map fun (f, sign) => (⟨c.proof, f⟩, sign)

/-- What each variable the clause quantifies has been bound to. -/
def bindings (c : GenClause) : Array (UInt32 × Term) :=
  c.r.bindings.map fun (v, t) => (v, ⟨c.proof, t⟩)

/-- How the clause was reached. -/
def how (c : GenClause) : GenHow := c.r.how

/--
Where each literal the step pushed went in the clause, in the order it pushed
them, and whether the push turned it, storing `¬f` at a sign as `f` at the
other: a clause started from pushes `replacement`; one extended pushes its
parent's literals with `replacement` in place of `position`; one replaced in
place has one entry, for `position`.
-/
def placements (c : GenClause) : Array (Nat × Bool) := c.r.placements

end GenClause

namespace SatClause

@[inline] private def r (c : SatClause) : SatRec := c.proof.satTable[c.idx.toNat]!

/--
The clause's literals, each the name of a component or its negation, written as
the definition that introduced the name writes it.
-/
def literals (c : SatClause) : Array String := c.r.literals

/--
The clauses the solver derived this one from, in the order it used them: all but
one of each clause's literals are false once the ones before it are.

Empty for a clause that is a first-order clause's propositional shadow, which
`origin?` gives instead.
-/
def premises (c : SatClause) : Array SatClause := c.r.premises.map (⟨c.proof, ·⟩)

/-- The clause's place among the proof's propositional clauses. -/
def index (c : SatClause) : UInt32 := c.idx

/-- The step this clause is the propositional shadow of, if it is one. -/
def origin? (c : SatClause) : Option Unit := c.r.origin.map (⟨c.proof, ·⟩)

/--
For the shadow of a first-order clause, which of this clause's literals each of
the clause's literals became, in the clause's order: the shadow's literals are
sorted. `none` for the shadow of a formula, whose disjuncts are its names.
-/
def originOrder? (c : SatClause) : Option (Array Nat) := c.r.order

end SatClause

end Vampire
