import Lean
import Vampire.Ffi

/-!
# The refutation, read back as structured data

`ffi/vampire_proof.cpp` walks the proof the way `Shell/LeanChecker` does and writes it
out as a flat stream of numbers plus a table of symbol names. This decodes it.

What comes back is everything the Lean side needs to write down the same proof
`LeanChecker` would have printed: the symbols, each unit's statement as a first-order
term, its premises and AVATAR splits, which of `LeanChecker`'s handlers emits it, and —
for the inferences that need a unifier — the substitutions recovered by replaying the
inference. Nothing is parsed; the opcodes are mirrored from the C++ side.
-/

namespace Vampire

/-- A first-order term. `var` is Vampire's variable number; `app` names a function
symbol by its functor. -/
inductive FTerm where
  | var (idx : Nat)
  | app (functor : Nat) (args : Array FTerm)
  deriving Inhabited, Repr

/-- The variables a term mentions. -/
partial def FTerm.varsOf : FTerm → Array Nat
  | .var v => #[v]
  | .app _ args => args.foldl (fun acc a => acc ++ varsOf a) #[]

/-- A formula, or a clause read as the disjunction of its literals. -/
inductive FForm where
  | lit (pred : Nat) (polarity : Bool) (args : Array FTerm)
  | eq (polarity : Bool) (sort : Nat) (lhs rhs : FTerm)
  | tru
  | fls
  | neg (f : FForm)
  | conj (fs : Array FForm)
  | disj (fs : Array FForm)
  | imp (a b : FForm)
  | iff (a b : FForm)
  | xor (a b : FForm)
  | all (vars : Array (Nat × Nat)) (f : FForm)
  | ex (vars : Array (Nat × Nat)) (f : FForm)
  /-- The proposition AVATAR named for a component, by SAT variable. What it stands for
  comes from the definition step that introduced it. -/
  | split (satVar : Nat)
  deriving Inhabited, Repr

/-- Which of `LeanChecker`'s handlers emits a step. Classified on the C++ side, where
`InferenceRule` is defined; see `handlerFor` in `ffi/vampire_proof.cpp`. -/
inductive Handler where
  /-- Not derived: a hypothesis of the final proof. -/
  | input
  /-- `genericNPremiseInference`: instantiate each premise, then `grind only [cases Or]`. -/
  | genericSubs
  /-- `genericNPremiseInferenceNoSubs`. -/
  | genericNoSubs
  /-- `genericInference`: `grind`. -/
  | generic
  | ennf
  | flatten
  | nnf
  | reduceFalseTrue
  | rectify
  | clausify
  | unusedPredDefRemoval
  | avatarContradiction
  /-- `avatarDefinitionIntroduction`: `sAv ↔ C`, by `Iff.rfl`. -/
  | avatarDefinition
  /-- `avatarComponent`. -/
  | avatarComponent
  /-- `avatarSplitClause`. -/
  | avatarSplitClause
  /-- `avatarRefutation`, by way of this fork's `avatarRefutationByResolution`. -/
  | avatarRefutation
  /-- `EVALUATION`, with the `norm_num1` script. -/
  | evaluation
  /-- `definitionUnfolding`: rewrite with each defining equation, then `grind only`. -/
  | definitionUnfolding
  /-- `skolemize`. -/
  | skolemise
  /-- Contributes nothing to the proof: `LeanChecker::isUncheckedInProof`. -/
  | skipped
  /-- `predicateDefinitionIntroduction`: `let sP v… := φ`. -/
  | predicateDefinition
  /-- `functionDefinitionIntroduction`: `let f v… := t`. -/
  | functionDefinition
  /-- `definitionFoldingPred`: the conclusion is the parent, re-stated. -/
  | definitionFoldingPred
  /-- A rule whose handler is not ported yet. -/
  | unsupported
  deriving DecidableEq, Repr, Inhabited

def Handler.ofCode : Nat → Handler
  | 0 => .input           | 1 => .genericSubs   | 2 => .genericNoSubs
  | 3 => .generic         | 4 => .ennf          | 5 => .flatten
  | 6 => .nnf             | 7 => .reduceFalseTrue | 8 => .rectify
  | 9 => .clausify        | 10 => .unusedPredDefRemoval
  | 11 => .avatarContradiction
  | 12 => .definitionUnfolding
  | 13 => .avatarDefinition
  | 14 => .avatarComponent
  | 15 => .avatarSplitClause
  | 16 => .avatarRefutation
  | 17 => .evaluation
  | 18 => .skolemise
  | 19 => .skipped
  | 20 => .predicateDefinition
  | 21 => .functionDefinition
  | 22 => .definitionFoldingPred
  | _ => .unsupported

/-- A function symbol, as Vampire has it. -/
structure FunInfo where
  name : String
  arity : Nat
  argSorts : Array Nat
  resultSort : Nat
  deriving Inhabited

/-- A predicate symbol. -/
structure PredInfo where
  name : String
  arity : Nat
  argSorts : Array Nat
  deriving Inhabited

/-- How a premise is instantiated at its use site: the split hypotheses to discharge,
and one term per variable of the premise, in ascending variable order — which is the
order `LeanPrinter::outputVariables` prints them in, and so the order the premise's `∀`
binders are in. -/
structure PremiseInst where
  splits : Array (Nat × Bool)
  terms : Array FTerm
  deriving Inhabited

/-- One step of the SAT solver's own derivation, as `avatarRefutationByResolution`
walks it. Clauses are literal sets over split variables. -/
structure SatStep where
  concl : Array (Nat × Bool)
  premises : Array (Array (Nat × Bool))
  deriving Inhabited

/-- One step of the refutation. -/
structure Step where
  number : Nat
  handler : Handler
  /-- Vampire's own name for the rule, for diagnostics and error messages. -/
  ruleName : String
  /-- 0 axiom, 1 assumption, 2 conjecture, 3 negated conjecture, … -/
  inputType : Nat
  isClause : Bool
  /-- Free variables of the statement with their sorts, ascending. For a clause these
  are the variables its `∀` binds. -/
  vars : Array (Nat × Nat)
  /-- The AVATAR splits the clause holds under, as (sat variable, polarity). -/
  splits : Array (Nat × Bool)
  premises : Array Nat
  statement : FForm
  /-- One entry per premise, empty when the rule needs no unifier. -/
  insts : Array PremiseInst
  /-- Sorts for variables a substitution maps *into* that the conclusion does not bind.
  Vampire knows them because a substitution is well-sorted; Lean needs them to ask for
  an element of the sort. -/
  rangeSorts : Array (Nat × Nat)
  /-- For a clausification, how many clauses the parent produced. -/
  cnfCount : Nat
  /-- For a clausification, the order `prenexify` hoists the parent's universal
  quantifiers into, restricted to the conclusion's own variables. The conclusion binds
  them ascending, so when this is not ascending the two prefixes are a permutation
  apart — which is what `LeanChecker::outputReorderIfNeeded` rewrites away. -/
  prenexOrder : Array Nat
  /-- For a definition unfolding, which way round each rewriting premise is used. -/
  rewriteForwards : Array Bool
  /-- For an AVATAR definition: the variable named, and what it stands for. -/
  splitVar : Nat
  splitBody : FForm
  /-- The SAT clause AVATAR gave this unit, if any. It stands in for the unit's own
  statement — `LeanChecker` prints it with `outputSatClause`. -/
  satClause : Option (Array (Nat × Bool))
  /-- For an AVATAR split clause: which premises after the first are rewritten with
  rather than against, the split hypotheses to introduce, and the arguments the parent
  clause is applied to. -/
  rewrites : Array Bool
  introSplits : Array (Nat × Nat)
  parentArgs : Array (Nat × Nat)
  /-- For an AVATAR refutation: the parents' SAT clauses and the solver's derivation. -/
  satParents : Array (Array (Nat × Bool))
  derivation : Array SatStep
  /-- For a skolemisation: the symbols introduced, in the order the existentials they
  replace are stripped. -/
  skolems : Array Nat
  /-- For a definition introduction: the symbol named, the parameters it takes, and the
  formula or term it abbreviates. -/
  definedSymbol : Nat
  definedParams : Array (Nat × Nat)
  definedBody : FForm
  definedTerm : FTerm
  deriving Inhabited

/-- The symbol table the statements are written over. -/
structure Symbols where
  sorts : Std.HashMap Nat String := {}
  funs : Std.HashMap Nat FunInfo := {}
  preds : Std.HashMap Nat PredInfo := {}
  deriving Inhabited

/-- A decoded refutation. Steps are in ascending unit number, so a premise always
precedes its conclusion. -/
structure Refutation where
  symbols : Symbols
  steps : Array Step
  deriving Inhabited

namespace Decode

/-- Opcodes, mirrored from `ffi/vampire_proof.cpp`. -/
def opSymSort := 1
def opSymFun := 2
def opSymPred := 3
def opUnit := 4
def opVar := 10
def opApp := 11
def opLit := 12
def opEq := 13
def opClause := 14
def opTrue := 15
def opFalse := 16
def opNot := 17
def opAnd := 18
def opOr := 19
def opImp := 20
def opIff := 21
def opXor := 22
def opForall := 23
def opExists := 24
def opSplit := 25

structure State where
  code : Array UInt32
  names : Array String
  pos : Nat := 0
  symbols : Symbols := {}
  steps : Array Step := #[]

abbrev M := StateT State (Except String)

def next : M Nat := do
  let s ← get
  if h : s.pos < s.code.size then
    set { s with pos := s.pos + 1 }
    return (s.code[s.pos]'h).toNat
  else
    throw "vampire: the exported proof ended in the middle of an instruction"

def name (i : Nat) : M String := do
  let s ← get
  match s.names[i]? with
  | some n => return n
  | none => throw "vampire: name index out of range in the exported proof"

/-- A value on the decoding stack: Vampire keeps terms and formulas apart. -/
inductive Val where
  | term (t : FTerm)
  | form (f : FForm)

def popTerm (st : Array Val) : Except String (Array Val × FTerm) :=
  match st.back? with
  | some (.term t) => .ok (st.pop, t)
  | _ => .error "vampire: expected a term while decoding the proof"

def popForm (st : Array Val) : Except String (Array Val × FForm) :=
  match st.back? with
  | some (.form f) => .ok (st.pop, f)
  | _ => .error "vampire: expected a formula while decoding the proof"

/-- Pop `n` values off the stack, keeping their original order. -/
def popN {α : Type} (st : Array Val) (n : Nat)
    (f : Array Val → Except String (Array Val × α)) :
    Except String (Array Val × Array α) := do
  let mut st := st
  let mut acc : Array α := #[]
  for _ in [0:n] do
    let (st', x) ← f st
    st := st'
    acc := acc.push x
  return (st, acc.reverse)

/-- Read a length-prefixed postfix stream and evaluate it. -/
partial def readStream : M (Array Val) := do
  let len ← next
  let stop := (← get).pos + len
  let mut st : Array Val := #[]
  while (← get).pos < stop do
    let op ← next
    if op == opVar then
      st := st.push (.term (.var (← next)))
    else if op == opApp then
      let f ← next
      let arity := ((← get).symbols.funs[f]?).map (·.arity) |>.getD 0
      let (st', args) ← popN st arity popTerm
      st := st'.push (.term (.app f args))
    else if op == opLit then
      let p ← next
      let pol ← next
      let arity := ((← get).symbols.preds[p]?).map (·.arity) |>.getD 0
      let (st', args) ← popN st arity popTerm
      st := st'.push (.form (.lit p (pol == 1) args))
    else if op == opEq then
      let pol ← next
      let sort ← next
      let (st', rhs) ← popTerm st
      let (st'', lhs) ← popTerm st'
      st := st''.push (.form (.eq (pol == 1) sort lhs rhs))
    else if op == opClause || op == opOr || op == opAnd then
      let n ← next
      let (st', fs) ← popN st n popForm
      st := st'.push (.form (if op == opAnd then .conj fs else .disj fs))
    else if op == opTrue then st := st.push (.form .tru)
    else if op == opFalse then st := st.push (.form .fls)
    else if op == opNot then
      let (st', f) ← popForm st
      st := st'.push (.form (.neg f))
    else if op == opImp || op == opIff || op == opXor then
      let (st', b) ← popForm st
      let (st'', a) ← popForm st'
      st := st''.push (.form (if op == opImp then .imp a b
                              else if op == opIff then .iff a b else .xor a b))
    else if op == opSplit then
      st := st.push (.form (.split (← next)))
    else if op == opForall || op == opExists then
      let n ← next
      let mut vars : Array (Nat × Nat) := #[]
      for _ in [0:n] do
        let v ← next; let s ← next
        vars := vars.push (v, s)
      let (st', f) ← popForm st
      st := st'.push (.form (if op == opForall then .all vars f else .ex vars f))
    else
      let cur ← get
      let from_ := if cur.pos < 16 then 0 else cur.pos - 16
      let window := (cur.code.extract from_ (min cur.code.size (cur.pos + 8))).map (·.toNat)
      throw s!"vampire: unknown opcode {op} at {cur.pos - 1} of {cur.code.size} \
        inside a stream; around it: {window.toList}"
  return st

def readForm : M FForm := do
  let st ← readStream
  match st.back? with
  | some (.form f) => return f
  | _ => throw "vampire: a statement did not decode to a formula"

def readTerm : M FTerm := do
  let st ← readStream
  match st.back? with
  | some (.term t) => return t
  | _ => throw "vampire: an instantiation did not decode to a term"

def readPairs (n : Nat) : M (Array (Nat × Nat)) := do
  let mut acc := #[]
  for _ in [0:n] do
    let a ← next; let b ← next
    acc := acc.push (a, b)
  return acc

def readSplits : M (Array (Nat × Bool)) := do
  let n ← next
  let ps ← readPairs n
  return ps.map (fun (v, p) => (v, p == 1))

def readUnit : M Unit := do
  let number ← next
  let handler := Handler.ofCode (← next)
  let ruleName ← name (← next)
  let inputType ← next
  let isClause := (← next) == 1
  let nVars ← next
  let vars ← readPairs nVars
  let splits ← readSplits
  let hasSat := (← next) == 1
  let satClause : Option (Array (Nat × Bool)) ←
    if hasSat then do let c ← readSplits; pure (some c) else pure none
  let nPremises ← next
  let mut premises := #[]
  for _ in [0:nPremises] do premises := premises.push (← next)
  let statement ← readForm
  let cnfCount ← if handler == .clausify then next else pure 0
  let mut prenexOrder : Array Nat := #[]
  if handler == .clausify then
    let n ← next
    for _ in [0:n] do prenexOrder := prenexOrder.push (← next)
  let mut rewriteForwards : Array Bool := #[]
  if handler == .definitionUnfolding then
    let n ← next
    for _ in [0:n] do rewriteForwards := rewriteForwards.push ((← next) == 1)
  let mut splitVar := 0
  let mut splitBody : FForm := .tru
  let mut rewrites : Array Bool := #[]
  let mut introSplits : Array (Nat × Nat) := #[]
  let mut parentArgs : Array (Nat × Nat) := #[]
  let mut satParents : Array (Array (Nat × Bool)) := #[]
  let mut derivation : Array SatStep := #[]
  if handler == .avatarDefinition then
    splitVar ← next
    splitBody ← readForm
  if handler == .avatarSplitClause then
    let n ← next
    for _ in [0:n] do rewrites := rewrites.push ((← next) == 1)
    introSplits ← readPairs (← next)
    parentArgs ← readPairs (← next)
  let mut definedSymbol := 0
  let mut definedParams : Array (Nat × Nat) := #[]
  let mut definedBody : FForm := .tru
  let mut definedTerm : FTerm := .var 0
  if handler == .predicateDefinition then
    definedSymbol ← next
    definedParams ← readPairs (← next)
    definedBody ← readForm
  if handler == .functionDefinition then
    definedSymbol ← next
    definedParams ← readPairs (← next)
    definedTerm ← readTerm
  let mut skolems : Array Nat := #[]
  if handler == .skolemise then
    let n ← next
    for _ in [0:n] do skolems := skolems.push (← next)
  if handler == .avatarRefutation then
    let n ← next
    for _ in [0:n] do satParents := satParents.push (← readSplits)
    let k ← next
    for _ in [0:k] do
      let concl ← readSplits
      let p ← next
      let mut prems := #[]
      for _ in [0:p] do prems := prems.push (← readSplits)
      derivation := derivation.push { concl, premises := prems }
  let nInsts ← next
  let mut insts : Array PremiseInst := #[]
  for _ in [0:nInsts] do
    let splits ← readSplits
    let nTerms ← next
    let mut terms := #[]
    for _ in [0:nTerms] do terms := terms.push (← readTerm)
    insts := insts.push ({ splits, terms } : PremiseInst)
  let rangeSorts ← readPairs (← next)
  let step : Step :=
    { number, handler, ruleName, inputType, isClause, vars, splits, premises,
      statement, insts, rangeSorts, cnfCount, prenexOrder, rewriteForwards, splitVar,
      splitBody, satClause,
      rewrites, introSplits, parentArgs, satParents, derivation, skolems,
      definedSymbol, definedParams, definedBody, definedTerm }
  modify fun s => { s with steps := s.steps.push step }

partial def run : M Unit := do
  while (← get).pos < (← get).code.size do
    let op ← next
    if op == opSymSort then
      let n ← name (← next)
      let tc ← next
      modify fun s => { s with symbols.sorts := s.symbols.sorts.insert tc n }
    else if op == opSymFun then
      let n ← name (← next)
      let f ← next
      let arity ← next
      let resultSort ← next
      let mut argSorts := #[]
      for _ in [0:arity] do argSorts := argSorts.push (← next)
      let info : FunInfo := { name := n, arity, argSorts, resultSort }
      modify fun s => { s with symbols.funs := s.symbols.funs.insert f info }
    else if op == opSymPred then
      let n ← name (← next)
      let p ← next
      let arity ← next
      let mut argSorts := #[]
      for _ in [0:arity] do argSorts := argSorts.push (← next)
      let info : PredInfo := { name := n, arity, argSorts }
      modify fun s => { s with symbols.preds := s.symbols.preds.insert p info }
    else if op == opUnit then
      readUnit
    else
      let st ← get
      let from_ := if st.pos < 12 then 0 else st.pos - 12
      let window := (st.code.extract from_ (min st.code.size (st.pos + 8))).map (·.toNat)
      throw s!"vampire: unknown top-level opcode {op} at {st.pos - 1} of \
        {st.code.size} in the exported proof; around it: {window.toList}"

end Decode

/-- Decode the stream the exporter produced. -/
def Refutation.decode (code : Array UInt32) (names : Array String) :
    Except String Refutation := do
  let (_, st) ← StateT.run Decode.run { code, names }
  return { symbols := st.symbols, steps := st.steps }

namespace Ffi

/-- Decode the refutation the last run exported. -/
def exportedRefutation : BaseIO (Except String Refutation) := do
  let (code, names) ← exportedProof
  return Refutation.decode code names

end Ffi

end Vampire
