import Lean
import Vampire.Ffi
import Vampire.Translate.Commands

/-!
# Compiling the translation into Vampire

The last stage. A list of `Command`s becomes two arrays — a table of symbol names and a
flat instruction stream — which `ffi/vampire_build.cpp` walks, constructing Vampire's
`Signature` entries, `Term`s, `Literal`s and `Formula`s directly.

Two things are worth stating about the encoding.

**It is not a serialisation format.** The stream is a sequence of construction steps, in
the sense that `Term::create(f, args)` is a construction step; it carries no syntax and
nothing parses it. The alternative — one FFI call per node — would be no more direct and
strictly worse, because the entry lock makes a single call atomic but not a sequence of
them, and Vampire's signature is process-global. The whole problem therefore crosses in
one call.

**Symbol names do cross, once.** Vampire's signature is keyed by name and it needs one
to name a symbol in a proof, so a declaration carries the name of the Lean constant or
free variable it stands for. Everything after that refers to symbols by the number
Vampire assigned them.

Vampire, unlike SMT-LIB, keeps terms and formulas apart, so this is also where the
translation's uniform `Term` splits in two: a symbol whose result sort is `Bool` becomes
a predicate and its applications become formulas; everything else becomes a function.
-/

namespace Vampire

open Lean

/-- Opcodes of the instruction stream. Mirrored in `ffi/vampire_build.cpp`; a change
here is a change there. -/
inductive Op where
  | declSort | declFun | declPred | varSort | var | app | atom | eq
  | true | false | not | and | or | imp | iff | forall | exists | assert | xor
  | declSortNum | num | interpFun | interpPred
  deriving Repr, DecidableEq

def Op.code : Op → UInt32
  | .declSort => 1  | .declFun => 2  | .declPred => 3 | .varSort => 4
  | .var      => 5  | .app     => 6  | .atom     => 7 | .eq      => 8
  | .true     => 9  | .false   => 10 | .not      => 11 | .and    => 12
  | .or       => 13 | .imp     => 14 | .iff      => 15 | .forall => 16
  | .exists   => 17 | .assert  => 18 | .xor      => 19
  | .declSortNum => 20 | .num => 21 | .interpFun => 22 | .interpPred => 23

/-- Which of Vampire's three numeric sorts an arithmetic instruction is about. Mirrored
in `ffi/vampire_build.cpp`. -/
inductive NumKind where
  | int | rat | real
  deriving Repr, DecidableEq, Inhabited

def NumKind.code : NumKind → UInt32
  | .int => 0 | .rat => 1 | .real => 2

/-- The sort's name in the intermediate language. -/
def NumKind.sortName : NumKind → String
  | .int => "Int" | .rat => "Rat" | .real => "Real"

def NumKind.ofSortName? (nm : String) : Option NumKind :=
  match nm with
  | "Int" => some .int | "Rat" => some .rat | "Real" => some .real
  | _ => none

/-- An arithmetic operation, independent of the sort it is at. Mirrored in
`ffi/vampire_build.cpp`. -/
inductive ArithOp where
  | plus | minus | times | uminus | quotient | abs
  | less | lessEq | greater | greaterEq
  | toReal | toInt | toRat | floor
  deriving Repr, DecidableEq

def ArithOp.code : ArithOp → UInt32
  | .plus => 1 | .minus => 2 | .times => 3 | .uminus => 4 | .quotient => 5 | .abs => 6
  | .less => 10 | .lessEq => 11 | .greater => 12 | .greaterEq => 13
  | .toReal => 20 | .toInt => 21 | .toRat => 22 | .floor => 23

/-- True for the operations that are predicates rather than functions. -/
def ArithOp.isPred : ArithOp → Bool
  | .less | .lessEq | .greater | .greaterEq => true
  | _ => false

/-- How many arguments the operation takes. -/
def ArithOp.arity : ArithOp → Nat
  | .uminus | .abs | .toReal | .toInt | .toRat | .floor => 1
  | _ => 2

/-- The arithmetic operation a sort-qualified symbol name denotes, with its sort.

The intermediate language spells these `Real.+`, `Int.<` and so on -- sort-qualified,
unlike the rest of its alphabet, which follows SMT-LIB. That is a deliberate deviation
and the reason for it is Vampire rather than taste: SMT-LIB overloads `+` across the
numeric sorts and recovers the sort from the arguments, while Vampire has a *separate*
interpreted symbol per sort (`REAL_PLUS`, `INT_PLUS`, ...) and needs to be told which.
Carrying the sort in the name means `Build.lean` does not have to infer it, which it
could not always do -- the arguments of `+` can both be numerals, and a numeral on its
own does not say which sort it is at. -/
def arithSymbol? (nm : String) : Option (NumKind × ArithOp) :=
  match nm.splitOn "." with
  | [sortNm, opNm] => do
    let kind ← NumKind.ofSortName? sortNm
    let op ← match opNm with
      | "+" => some ArithOp.plus  | "-" => some ArithOp.minus
      | "*" => some .times        | "neg" => some .uminus
      | "/" => some .quotient     | "abs" => some .abs
      | "<" => some .less         | "<=" => some .lessEq
      | ">" => some .greater      | ">=" => some .greaterEq
      | "toReal" => some .toReal  | "toInt" => some .toInt
      | "toRat" => some .toRat    | "floor" => some .floor
      | _ => none
    return (kind, op)
  | _ => none

/-- The sort a numeral head names: the intermediate language writes a numeral as
`Real.num` applied to a `literalT`, because a numeral's sort is not recoverable from its
text -- `2` is a perfectly good real. -/
def numSymbol? (nm : String) : Option NumKind :=
  match nm with
  | "Int.num" => some .int | "Rat.num" => some .rat | "Real.num" => some .real
  | _ => none

/-- What the compiler knows about a declared symbol. -/
structure Decl where
  /-- Slot number within its kind: sorts, functions and predicates are numbered
  separately, in declaration order. -/
  slot : Nat
  arity : Nat
  deriving Inhabited

/-- Where an assertion in the built problem came from.

`Query` records one assertion per hypothesis, but a definition also contributes one —
its defining equation, which Vampire needs because it has no definitions. That equation
has no Lean hypothesis behind it: it holds by `rfl`. Keeping the distinction here is
what lets the refutation find its way back to the right Lean term.
-/
inductive AssertSource where
  /-- A translated hypothesis; the proof comes from `Query.asserted`. -/
  | hypothesis
  /-- The defining equation of `symbol`. -/
  | definition (symbol : String)
  deriving Inhabited

structure BuildState where
  names : Array String := #[]
  nameIdx : Std.HashMap String Nat := {}
  code : Array UInt32 := #[]
  sorts : Std.HashMap String Decl := {}
  funs : Std.HashMap String Decl := {}
  preds : Std.HashMap String Decl := {}
  /-- Bound variables in scope, by the name the translation gave them. -/
  vars : Std.HashMap String Nat := {}
  nextVar : Nat := 0
  /-- The assertions emitted so far, in order. -/
  asserts : Array AssertSource := #[]
  deriving Inhabited

abbrev BuildM := StateT BuildState MetaM

namespace BuildM

private def emit (n : UInt32) : BuildM Unit :=
  modify fun s => { s with code := s.code.push n }

private def emitOp (o : Op) : BuildM Unit := emit o.code

private def emitNat (n : Nat) : BuildM Unit := emit (UInt32.ofNat n)

/-- Intern a symbol name, returning its index in the name table. -/
private def internName (nm : String) : BuildM Nat := do
  match (← get).nameIdx[nm]? with
  | some i => return i
  | none =>
    let s ← get
    let i := s.names.size
    set { s with names := s.names.push nm, nameIdx := s.nameIdx.insert nm i }
    return i

/-- The sort slot a term denotes. -/
private def sortSlot (t : Term) : BuildM Nat := do
  match t with
  | .symbolT "Bool" =>
    throwError "vampire: a proposition cannot be the sort of an argument; \
      the goal is higher-order"
  | .symbolT nm =>
    match (← get).sorts[nm]? with
    | some d => return d.slot
    | none =>
      -- A numeric sort is not declared by the query: it is Vampire's own, and
      -- `Query.lean` leaves it out of the declarations because it is a builtin. So the
      -- first use is what registers a slot for it.
      match NumKind.ofSortName? nm with
      | some kind =>
        emitOp .declSortNum; emit kind.code
        let s ← get
        let slot := s.sorts.size
        set { s with sorts := s.sorts.insert nm ⟨slot, 0⟩ }
        return slot
      | none => throwError "vampire: sort '{nm}' was used before it was declared"
  | t => throwError "vampire: {t} is not a sort Vampire can represent"

/-- Declare a sort. -/
private def declareSort (nm : String) (arity : Nat) : BuildM Unit := do
  if arity != 0 then
    throwError "vampire: '{nm}' is a type constructor of arity {arity}; \
      Vampire's logic is monomorphic, so it must be instantiated first"
  let i ← internName nm
  emitOp .declSort; emitNat i
  modify fun s => { s with sorts := s.sorts.insert nm ⟨s.sorts.size, 0⟩ }

/-- Declare a symbol of the given sort: a predicate if it lands in `Bool`, a function
otherwise. -/
private def declareSymbol (nm : String) (st : Term) : BuildM Unit := do
  let (args, res) := Term.asArrow st
  let argSlots ← args.mapM sortSlot
  let i ← internName nm
  match res with
  | .symbolT "Bool" =>
    emitOp .declPred; emitNat i; emitNat args.size
    for a in argSlots do emitNat a
    modify fun s => { s with preds := s.preds.insert nm ⟨s.preds.size, args.size⟩ }
  | res =>
    let resSlot ← sortSlot res
    emitOp .declFun; emitNat i; emitNat args.size; emitNat resSlot
    for a in argSlots do emitNat a
    modify fun s => { s with funs := s.funs.insert nm ⟨s.funs.size, args.size⟩ }

mutual

/-- Compile a term: something Vampire can apply a function symbol to. -/
private partial def compileTerm (t : Term) : BuildM Unit := do
  let (hd, args) := Term.asApp t
  match hd with
  | .symbolT nm =>
    -- A numeral: `Real.num` applied to the text of the number.
    if let some kind := numSymbol? nm then
      match args with
      | #[.literalT lit] =>
        let i ← internName lit
        emitOp .num; emitNat i; emit kind.code
        return
      | _ =>
        throwError "vampire: '{nm}' takes exactly one numeral"
    -- An interpreted function: Vampire has its own symbol for it, per sort.
    if let some (kind, op) := arithSymbol? nm then
      if op.isPred then
        throwError "vampire: '{nm}' is a predicate, so it cannot appear where a term \
          is expected"
      if op.arity != args.size then
        throwError "vampire: '{nm}' has arity {op.arity} but is applied to \
          {args.size} arguments"
      for a in args do compileTerm a
      emitOp .interpFun; emit op.code; emit kind.code; emitNat args.size
      return
    if let some v := (← get).vars[nm]? then
      if !args.isEmpty then
        throwError "vampire: the variable '{nm}' is applied to arguments, \
          which first-order logic does not allow"
      emitOp .var; emitNat v
      return
    let some d := (← get).funs[nm]?
      | if ((← get).preds[nm]?).isSome then
          throwError "vampire: '{nm}' is a predicate, so it cannot appear where a term \
            is expected"
        else
          throwError "vampire: '{nm}' was used before it was declared"
    if d.arity != args.size then
      throwError "vampire: '{nm}' has arity {d.arity} but is applied to {args.size} \
        arguments; Vampire has no partial application"
    for a in args do compileTerm a
    emitOp .app; emitNat d.slot
  | .literalT l =>
    -- A bare literal has no sort, so it cannot stand on its own; the arithmetic
    -- translators always wrap one in `Real.num` and friends.
    throwError "vampire: the literal '{l}' has no sort, so it cannot be a term on its \
      own; a numeral must be written as `Real.num`, `Int.num` or `Rat.num` applied to it"
  | hd =>
    throwError "vampire: {hd} cannot head a term"

/-- Compile a formula. -/
private partial def compileForm (t : Term) : BuildM Unit := do
  match t with
  | .symbolT "true" => emitOp .true
  | .symbolT "false" => emitOp .false
  | .forallT n s b => compileQuant .forall n s b
  | .existsT n s b => compileQuant .exists n s b
  | .letT n _ _ =>
    throwError "vampire: the `let` binding '{n}' survived translation; \
      Vampire has no definitions in this fragment"
  | t =>
    let (hd, args) := Term.asApp t
    match hd, args with
    | .symbolT "not", #[a] => compileForm a; emitOp .not
    | .symbolT "and", #[a, b] => compileForm a; compileForm b; emitOp .and; emitNat 2
    | .symbolT "or",  #[a, b] => compileForm a; compileForm b; emitOp .or;  emitNat 2
    | .symbolT "=>",  #[a, b] => compileForm a; compileForm b; emitOp .imp
    | .symbolT "iff", #[a, b] => compileForm a; compileForm b; emitOp .iff
    | .symbolT "xor", #[a, b] => compileForm a; compileForm b; emitOp .xor
    | .symbolT "=", #[a, b] => compileTerm a; compileTerm b; emitOp .eq; emitNat 1
    | .symbolT "distinct", #[a, b] => compileTerm a; compileTerm b; emitOp .eq; emitNat 0
    | .symbolT "ite", _ =>
      throwError "vampire: `ite` is not translated yet"
    | .symbolT nm, args =>
      if let some (kind, op) := arithSymbol? nm then
        unless op.isPred do
          throwError "vampire: '{nm}' is a function, so it cannot appear where a \
            formula is expected"
        if op.arity != args.size then
          throwError "vampire: '{nm}' has arity {op.arity} but is applied to \
            {args.size} arguments"
        for a in args do compileTerm a
        emitOp .interpPred; emit op.code; emit kind.code; emitNat 1; emitNat args.size
      else
        compileAtom nm args
    | hd, _ => throwError "vampire: {hd} cannot head a formula"

/-- An application of a declared predicate symbol. -/
private partial def compileAtom (nm : String) (args : Array Term) : BuildM Unit := do
  let some d := (← get).preds[nm]?
    | if ((← get).funs[nm]?).isSome then
        throwError "vampire: '{nm}' is a function, so it cannot appear where a \
          formula is expected"
      else
        throwError "vampire: '{nm}' was used before it was declared"
  if d.arity != args.size then
    throwError "vampire: '{nm}' has arity {d.arity} but is applied to {args.size} \
      arguments"
  for a in args do compileTerm a
  emitOp .atom; emitNat d.slot; emitNat 1

private partial def compileQuant (op : Op) (n : String) (s : Term) (b : Term) : BuildM Unit := do
  let slot ← sortSlot s
  let st ← get
  let v := st.nextVar
  set { st with nextVar := v + 1, vars := st.vars.insert n v }
  -- The variable's sort is recorded before the body so that the builder can work out
  -- the sort of an equation between variables.
  emitOp .varSort; emitNat v; emitNat slot
  compileForm b
  emitOp op; emitNat 1; emitNat v; emitNat slot
  modify fun s => { s with vars := st.vars }

end

/-- Compile one command. -/
private def compileCommand (c : Command) : BuildM Unit := do
  match c with
  | .declareSort nm arity => declareSort nm arity
  | .declare nm st => declareSymbol nm st
  | .assert tm =>
    compileForm tm; emitOp .assert; emitNat 0
    modify fun s => { s with asserts := s.asserts.push .hypothesis }
  | .defineSort nm _ _ =>
    throwError "vampire: the type abbreviation '{nm}' is not translated yet; \
      unfold it in the goal first"
  | .defineFun nm ps cod tm _ =>
    -- Vampire has no definitions, so a definition becomes a declaration plus its
    -- defining equation, universally quantified over the parameters.
    declareSymbol nm (ps.foldr (fun (_, s) t => .arrowT s t) cod)
    let lhs := ps.foldl (fun t (n, _) => .appT t (.symbolT n)) (.symbolT nm)
    let body :=
      match cod with
      | .symbolT "Bool" => Term.mkApp2 (.symbolT "iff") lhs tm
      | _ => Term.mkApp2 (.symbolT "=") lhs tm
    let eqn := ps.foldr (fun (n, s) t => .forallT n s t) body
    compileForm eqn
    emitOp .assert; emitNat 0
    modify fun s => { s with asserts := s.asserts.push (.definition nm) }

end BuildM

/-- Compile the whole problem into the name table and instruction stream, and say where
each assertion came from. -/
def compile (cmds : List Command) :
    MetaM (Array String × Array UInt32 × Array AssertSource × Bool) := do
  let (_, st) ← (cmds.forM BuildM.compileCommand).run {}
  -- Whether the problem has arithmetic in it, which the caller needs in order to spend
  -- the budget the way the `vampire` binary would: `Signature::Property` makes the same
  -- distinction on the C++ side and `getCasc2025Schedule` branches on it. Asking here
  -- rather than re-deriving it there keeps the two answers the same one.
  let hasArith := st.sorts.toList.any fun (nm, _) => (NumKind.ofSortName? nm).isSome
  return (st.names, st.code, st.asserts, hasArith)

end Vampire
