import Vampire.InferenceRule

namespace Vampire

/-- Absent index. -/
def none32 : UInt32 := 0xFFFFFFFF

@[inline] private def readU32 (data : ByteArray) (byteOff : Nat) : UInt32 :=
  data[byteOff]!.toUInt32
    ||| (data[byteOff + 1]!.toUInt32 <<< 8)
    ||| (data[byteOff + 2]!.toUInt32 <<< 16)
    ||| (data[byteOff + 3]!.toUInt32 <<< 24)

/-- Byte offsets of each section, derived once from the header. -/
private structure Layout where
  functions : Nat
  predicates : Nat
  sorts : Nat
  terms : Nat
  args : Nat
  literals : Nat
  formulas : Nat
  subs : Nat
  vars : Nat
  units : Nat
  unitLits : Nat
  parents : Nat
  varSorts : Nat
  strings : Nat
  proofText : Nat
  numFunctions : Nat
  numPredicates : Nat
  numSorts : Nat
  numTerms : Nat
  numLiterals : Nat
  numFormulas : Nat
  numUnits : Nat
  proofTextLen : Nat
deriving Inhabited

inductive Error where
  | error (msg : String)
deriving Repr, BEq

namespace Error

protected def toString : Error → String
  | .error msg => msg

instance : ToString Error := ⟨Error.toString⟩

end Error

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

inductive UnitInputType where
  | «axiom»
  | assumption
  | conjecture
  | negatedConjecture
  | claim
  | extensionalityAxiom
deriving Inhabited, Repr, BEq, DecidableEq

inductive Connective where
  | literal | and | or | imp | iff | xor | not
  | «forall» | «exists» | boolTerm | «false» | «true» | name | noconn
deriving Inhabited, Repr, BEq, DecidableEq

private def ofIndex (variants : Array α) (i : UInt32) (what : String) :
    Except Error α :=
  match variants[i.toNat]? with
  | some v => .ok v
  | none => .error (.error s!"unknown {what} {i}")

/--
A decoded proof: the worker's output buffer plus the offsets into it. All
accessors read from `data`, so a proof is independent of the process that
produced it.
-/
structure Proof where
  private mk ::
  private data : ByteArray
  private layout : Layout
  /-- Why vampire stopped. -/
  terminationReason : TerminationReason
deriving Inhabited

namespace Proof

private def magic : UInt32 := 0x504D4156

private def version : UInt32 := 2

/-- Decodes a buffer written by `vampire-worker`. -/
def ofByteArray (data : ByteArray) : Except Error Proof := do
  if data.size < 21 * 4 then
    .error (.error s!"proof is {data.size} bytes, too short for a header")
  if readU32 data 0 != magic then
    .error (.error "proof does not start with the expected magic bytes")
  let v := readU32 data 4
  if v != version then
    .error (.error s!"proof has format version {v}, expected {version}")
  let word (i : Nat) : Nat := (readU32 data (4 * i)).toNat
  let numRules := word 20
  if numRules != InferenceRule.count then
    .error (.error s!"vampire declares {numRules} inference rules but \
      Vampire/InferenceRule.lean has {InferenceRule.count}; \
      rerun scripts/gen-inference-rules.py")
  let numFunctions := word 5
  let numPredicates := word 6
  let numSorts := word 7
  let numTerms := word 8
  let numArgs := word 9
  let numLiterals := word 10
  let numFormulas := word 11
  let numSubs := word 12
  let numVars := word 13
  let numUnits := word 14
  let numUnitLits := word 15
  let numParents := word 16
  let numVarSorts := word 17
  let stringsLen := word 18
  let proofTextLen := word 19
  let functions := 21 * 4
  let predicates := functions + numFunctions * 2 * 4
  let sorts := predicates + numPredicates * 2 * 4
  let terms := sorts + numSorts * 4
  let args := terms + numTerms * 4 * 4
  let literals := args + numArgs * 4
  let formulas := literals + numLiterals * 5 * 4
  let subs := formulas + numFormulas * 7 * 4
  let vars := subs + numSubs * 4
  let units := vars + numVars * 4
  let unitLits := units + numUnits * 10 * 4
  let parents := unitLits + numUnitLits * 4
  let varSorts := parents + numParents * 4
  let strings := varSorts + numVarSorts * 2 * 4
  let pad (n : Nat) : Nat := (n + 3) / 4 * 4
  let proofText := strings + pad stringsLen
  let expected := proofText + pad proofTextLen
  if data.size < expected then
    .error (.error s!"proof is {data.size} bytes, expected at least {expected}")
  let reason ← ofIndex
    #[.refutation, .satisfiable, .refutationNotFound, .inappropriate, .unknown,
      .timeLimit, .instructionLimit, .memoryLimit, .activationLimit]
    (readU32 data 8) "termination reason"
  return {
    data, terminationReason := reason
    layout := {
      functions, predicates, sorts, terms, args, literals, formulas, subs, vars,
      units, unitLits, parents, varSorts, strings, proofText, numFunctions,
      numPredicates, numSorts, numTerms, numLiterals, numFormulas, numUnits,
      proofTextLen
    }
  }

/-- Reads a NUL-terminated name from the string blob. -/
private def string (p : Proof) (off : UInt32) : String :=
  let start := p.layout.strings + off.toNat
  let rec len (i : Nat) (fuel : Nat) : Nat :=
    match fuel with
    | 0 => i
    | fuel + 1 => if p.data[start + i]! == 0 then i else len (i + 1) fuel
  let n := len 0 (p.data.size - start)
  String.fromUTF8! (p.data.extract start (start + n))

/-- Vampire's own rendering of the proof, empty when there is no refutation. -/
def proofText (p : Proof) : String :=
  String.fromUTF8! <|
    p.data.extract p.layout.proofText (p.layout.proofText + p.layout.proofTextLen)

end Proof

/-- A symbol's name and arity. -/
structure Symbol where
  name : String
  arity : UInt32
deriving Repr, Inhabited

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

/-- A step in the derivation: a clause or formula, and how it was inferred. -/
structure Unit where
  private mk ::
  private proof : Proof
  private idx : UInt32

namespace Proof

@[inline] private def field (p : Proof) (section_ width i off : Nat) : UInt32 :=
  readU32 p.data (section_ + (width * i + off) * 4)

/-- The function symbols of the problem's signature. -/
def function? (p : Proof) (functor : UInt32) : Option Symbol :=
  if functor.toNat >= p.layout.numFunctions then none
  else some {
    name := p.string (p.field p.layout.functions 2 functor.toNat 0)
    arity := p.field p.layout.functions 2 functor.toNat 1
  }

/-- The predicate symbols of the problem's signature. -/
def predicate? (p : Proof) (predicate : UInt32) : Option Symbol :=
  if predicate.toNat >= p.layout.numPredicates then none
  else some {
    name := p.string (p.field p.layout.predicates 2 predicate.toNat 0)
    arity := p.field p.layout.predicates 2 predicate.toNat 1
  }

/-- The name of the sort vampire numbers `i`. -/
def sortName? (p : Proof) (i : UInt32) : Option String :=
  if i.toNat >= p.layout.numSorts then none
  else some (p.string (readU32 p.data (p.layout.sorts + i.toNat * 4)))

/-- The final step of the derivation, when vampire found a refutation. -/
def refutation? (p : Proof) : Option Unit :=
  if readU32 p.data 12 == 0 then none
  else some ⟨p, readU32 p.data 16⟩

/-- Every step of the derivation. -/
def units (p : Proof) : Array Unit :=
  Array.ofFn (n := p.layout.numUnits) fun i => ⟨p, UInt32.ofNat i.val⟩

end Proof

namespace Term

@[inline] private def field (t : Term) (off : Nat) : UInt32 :=
  t.proof.field t.proof.layout.terms 4 t.idx.toNat off

/-- Whether this term is a variable. -/
def isVar (t : Term) : Bool := t.field 0 == 0

/-- The variable's number. Only meaningful when `isVar`. -/
def var (t : Term) : UInt32 := t.field 1

/-- The functor. Only meaningful when not `isVar`. -/
def functor (t : Term) : UInt32 := t.field 1

/-- The functor's symbol, or `none` for a variable. -/
def symbol? (t : Term) : Option Symbol :=
  if t.isVar then none else t.proof.function? t.functor

/-- The number of arguments. -/
def arity (t : Term) : UInt32 := t.field 3

/-- The arguments, left to right. -/
def args (t : Term) : Array Term :=
  let first := t.field 2
  Array.ofFn (n := t.arity.toNat) fun i =>
    ⟨t.proof, readU32 t.proof.data (t.proof.layout.args + (first.toNat + i.val) * 4)⟩

protected partial def render (t : Term) : String :=
  if t.isVar then s!"X{t.var}"
  else
    let name := (t.symbol?.map (·.name)).getD s!"f{t.functor}"
    if t.arity == 0 then name
    else s!"{name}({String.intercalate ", " (t.args.toList.map Term.render)})"

instance : ToString Term := ⟨Term.render⟩

end Term

namespace Literal

@[inline] private def field (l : Literal) (off : Nat) : UInt32 :=
  l.proof.field l.proof.layout.literals 5 l.idx.toNat off

/-- The predicate symbol's index. -/
def predicate (l : Literal) : UInt32 := l.field 0

/-- The predicate's symbol. -/
def symbol? (l : Literal) : Option Symbol := l.proof.predicate? l.predicate

/-- Whether the literal occurs positively. -/
def polarity (l : Literal) : Bool := l.field 1 &&& 1 != 0

/-- Whether the literal is an equality. -/
def isEquality (l : Literal) : Bool := l.field 1 &&& 2 != 0

/-- The number of arguments. -/
def arity (l : Literal) : UInt32 := l.field 3

/-- The arguments, left to right. -/
def args (l : Literal) : Array Term :=
  let first := l.field 2
  Array.ofFn (n := l.arity.toNat) fun i =>
    ⟨l.proof, readU32 l.proof.data (l.proof.layout.args + (first.toNat + i.val) * 4)⟩

/--
The sort of an equality's arguments. A clause `X = Y` gives no other way to
recover it, so the worker records it.
-/
def sort? (l : Literal) : Option String :=
  let i := l.field 4
  if i == none32 then none else l.proof.sortName? i

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

namespace Clause

/-- The literals of the clause. -/
def literals (c : Clause) : Array Literal :=
  let p := c.proof
  let first := p.field p.layout.units 10 c.idx.toNat 4
  let count := p.field p.layout.units 10 c.idx.toNat 5
  Array.ofFn (n := count.toNat) fun i =>
    ⟨p, readU32 p.data (p.layout.unitLits + (first.toNat + i.val) * 4)⟩

/-- The number of literals. -/
def size (c : Clause) : Nat := c.literals.size

/-- Whether this is the empty clause. -/
def isEmpty (c : Clause) : Bool := c.size == 0

instance : ToString Clause where
  toString c :=
    if c.isEmpty then "$false"
    else String.intercalate " | " (c.literals.toList.map toString)

end Clause

namespace Formula

@[inline] private def field (f : Formula) (off : Nat) : UInt32 :=
  f.proof.field f.proof.layout.formulas 7 f.idx.toNat off

/-- The formula's top-level connective. -/
def connective (f : Formula) : Except Error Connective :=
  ofIndex
    #[.literal, .and, .or, .imp, .iff, .xor, .not, .«forall», .«exists»,
      .boolTerm, .«false», .«true», .name, .noconn]
    (f.field 0) "connective"

/-- The atom, when the connective is `literal`. -/
def literal? (f : Formula) : Option Literal :=
  let l := f.field 1
  if l == none32 then none else some ⟨f.proof, l⟩

/--
The name of a named subformula: a definition vampire introduced while
clausifying. `none` for every other connective.
-/
def name? (f : Formula) : Option String :=
  let off := f.field 6
  if off == none32 then none else some (f.proof.string off)

/-- The immediate subformulas. -/
def subformulas (f : Formula) : Array Formula :=
  let p := f.proof
  let first := f.field 2
  let count := f.field 3
  Array.ofFn (n := count.toNat) fun i =>
    ⟨p, readU32 p.data (p.layout.subs + (first.toNat + i.val) * 4)⟩

/-- The variables bound by a quantifier. -/
def boundVars (f : Formula) : Array UInt32 :=
  let p := f.proof
  let first := f.field 4
  let count := f.field 5
  Array.ofFn (n := count.toNat) fun i =>
    readU32 p.data (p.layout.vars + (first.toNat + i.val) * 4)

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
  match f.connective with
  | .error _ => "<unknown connective>"
  | .ok .literal => (f.literal?.map toString).getD "<missing literal>"
  | .ok .«true» => "$true"
  | .ok .«false» => "$false"
  | .ok .not => s!"~{sub 0}"
  | .ok .and => junction " & "
  | .ok .or => junction " | "
  | .ok .imp => binary "=>"
  | .ok .iff => binary "<=>"
  | .ok .xor => binary "<~>"
  | .ok .«forall» => quantified "!"
  | .ok .«exists» => quantified "?"
  | .ok .boolTerm => "<bool term>"
  | .ok .name => "<name>"
  | .ok .noconn => "<noconn>"

instance : ToString Formula := ⟨Formula.render⟩

end Formula

namespace Unit

@[inline] private def field (u : Unit) (off : Nat) : UInt32 :=
  u.proof.field u.proof.layout.units 10 u.idx.toNat off

/-- Vampire's number for this step, as it appears in the proof text. -/
def number (u : Unit) : UInt32 := u.field 0

/-- The inference rule, as vampire numbers it. -/
def ruleIndex (u : Unit) : UInt32 := u.field 1

/-- Where this step came from. -/
def inputType (u : Unit) : Except Error UnitInputType :=
  ofIndex
    #[.«axiom», .assumption, .conjecture, .negatedConjecture, .claim,
      .extensionalityAxiom]
    (u.field 2) "input type"

/-- Whether this step is a clause rather than a formula. -/
def isClause (u : Unit) : Bool := u.field 3 &&& 1 != 0

/-- The clause, when this step has been clausified. -/
def clause? (u : Unit) : Option Clause :=
  if u.isClause then some ⟨u.proof, u.idx⟩ else none

/-- The formula, when this step has not been clausified. -/
def formula? (u : Unit) : Option Formula :=
  if u.isClause then none else some ⟨u.proof, u.field 4⟩

/-- The rule this step was derived by. -/
def rule? (u : Unit) : Option InferenceRule := InferenceRule.ofNat? (u.field 1).toNat

/--
The sorts of the step's free variables. A clause is implicitly universally
quantified over them, so rebuilding it as a Lean proposition needs their sorts.
-/
def varSorts (u : Unit) : Array (UInt32 × String) :=
  let p := u.proof
  let first := u.field 8
  let count := u.field 9
  Array.ofFn (n := count.toNat) fun i =>
    let base := p.layout.varSorts + (first.toNat + i.val) * 2 * 4
    (readU32 p.data base, (p.sortName? (readU32 p.data (base + 4))).getD "?")

/-- The steps this one was derived from. -/
def parents (u : Unit) : Array Unit :=
  let p := u.proof
  let first := u.field 6
  let count := u.field 7
  Array.ofFn (n := count.toNat) fun i =>
    ⟨p, readU32 p.data (p.layout.parents + (first.toNat + i.val) * 4)⟩

instance : ToString Unit where
  toString u :=
    match u.clause? with
    | some c => toString c
    | none => (u.formula?.map toString).getD "<missing formula>"

end Unit

end Vampire
