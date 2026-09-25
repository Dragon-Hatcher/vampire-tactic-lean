import Lean

/-!
Putting aside what a decision procedure cannot read.

A step over the numbers is settled by a decision procedure, and what the step
speaks of is mostly not numbers: an uninterpreted symbol applied to something,
a term a skolemisation stood up, a whole formula. Asking the procedure about
those has it walk them, where all it can do with one is tell it apart from
another -- so each is put aside, the question asked of a variable standing for
it, and the answer applied to it again.

None of that needs the procedure itself, and none of it needs Mathlib, so it
lives here and is precompiled: `Vampire.Arith` hands in the asking. On the
corpus, what is left interpreted around a procedure call is about a third of
the time the call costs.
-/

namespace VampireReplay.Abstract

open Lean Meta

/--
Whether a decision procedure reads inside a term of this shape, or can only
take it whole.

The comparisons and the arithmetic it is stated over, and the connectives
between them. Anything else -- an uninterpreted symbol applied to something, a
term a skolemisation stood up, a numeral's own innards -- is a term it can only
treat as one opaque thing.
-/
private def transparent (e : Expr) : Option (Array Expr) :=
  let args := e.getAppArgs
  match e.getAppFn with
  | .const c _ =>
    if c == ``Not && args.size == 1 then some args
    else if (c == ``And || c == ``Or || c == ``Iff) && args.size == 2 then some args
    else if c == ``False || c == ``True then some #[]
    -- A comparison's sort is an argument of it, and is no part of what is
    -- compared.
    else if (c == ``LE.le || c == ``LT.lt || c == ``GE.ge || c == ``GT.gt)
        && args.size == 4 then some args[2:]
    else if (c == ``Eq || c == ``Ne) && args.size == 3 then some args[1:]
    else if (c == ``HAdd.hAdd || c == ``HSub.hSub || c == ``HMul.hMul
        || c == ``HDiv.hDiv) && args.size == 6 then some args[4:]
    else if c == ``Neg.neg && args.size == 3 then some args[2:]
    -- A numeral is not looked into: it is read as the number it is.
    else if c == ``OfNat.ofNat || c == ``OfScientific.ofScientific then some #[]
    else none
  | _ => none

/--
The terms a decision procedure can only take whole, each once.

A step of vampire's speaks of the terms the clause it acts on speaks of, and a
skolemisation's is the whole formula it came from: asking about a handful of
numbers over such terms has the procedure walk them, where all it can do with
one is tell it apart from another. So each is put aside here, the question
asked of a variable standing for it, and the answer applied to it again.
-/
private partial def atomsOf (e : Expr) (acc : Array Expr)
    (seen : Std.HashSet Expr) : MetaM (Array Expr × Std.HashSet Expr) := do
  -- A term read back from the proof is shared wherever the proof shares it, so
  -- it is a graph and not a tree: walking it as a tree walks a shared part
  -- once for every path that reaches it, which for the terms these steps
  -- speak of is a walk that does not end.
  if seen.contains e then return (acc, seen)
  let seen := seen.insert e
  match transparent e with
  | some args =>
    let mut acc := acc
    let mut seen := seen
    for a in args do
      let (acc', seen') ← atomsOf a acc seen
      acc := acc'; seen := seen'
    return (acc, seen)
  | none =>
    -- Only a term stands aside. What a proposition says is what relates it to
    -- another proposition -- a thing and its denial cannot both hold, whatever
    -- the thing is -- and a variable standing for one says nothing of the
    -- sort, so putting one aside is losing the very fact that settles it.
    if ← isProp e then return (acc, seen)
    -- A local already stands for itself, and standing for it again would only
    -- be another binder. A term met before is in `seen`, so is not met again.
    if e.isFVar then return (acc, seen)
    return (acc.push e, seen)

/--
The terms a decision procedure can only take whole, among what `types` state:
what `abstracting` puts aside.
-/
def opaqueTerms (types : Array Expr) : MetaM (Array Expr) := do
  let mut atoms := #[]
  let mut seen : Std.HashSet Expr := {}
  for type in types do
    let (atoms', seen') ← atomsOf type atoms seen
    atoms := atoms'; seen := seen'
  return atoms

/--
Runs `ask` on `facts` and `claim` with every term it can only take whole put
aside.

`facts` are proofs, and `ask hyps claim` is to prove `claim` -- or `False`, when
there is none -- from the proofs `hyps`. Each term a decision procedure cannot
read into is replaced by a local standing for it: `ask` is handed hypotheses
stating the facts over those locals, and the claim over them, and its answer is
applied to the terms and the facts again. When nothing is put aside, `ask` gets
the facts themselves. Either way, applications of lambdas in what the facts and
the claim state are first beta-reduced, as `readable` below says.
-/
def abstracting (ask : Array Expr → Option Expr → MetaM Expr)
    (facts : Array Expr) (claim : Option Expr) : MetaM Expr := do
  -- What a symbol vampire introduced stands for is a function, so a step over
  -- one states an application of it; the procedures read what it says, which
  -- is that reduced. Stated again rather than rebuilt: the two are the same
  -- term to the kernel.
  -- Only where what it says is a proposition. A defined predicate applied to
  -- something says what it stands for once reduced, and that is what the
  -- procedures read; a term does not need reading that way, and reducing one
  -- copies the body of the function into every place its variable occurs,
  -- which for a term a skolemisation stood up is a term there is no end of.
  let readable (e : Expr) : MetaM Expr :=
    Meta.transform e (post := fun s => do
      if s.getAppFn.isLambda && (← isProp (← inferType s)) then
        return .done s.headBeta
      return .done s)
  -- Each fact with what it states, read once.
  let stated ← facts.mapM fun fact => do
    let stated ← instantiateMVars (← inferType fact)
    let reduced ← readable stated
    let fact ← if reduced == stated then pure fact else mkExpectedTypeHint fact reduced
    return (fact, reduced)
  let (facts, types) := stated.unzip
  let claim ← claim.mapM readable
  -- Put aside what the procedure can only take whole and ask about a variable
  -- standing for each, so that what is asked is as wide as the numbers in it
  -- and no wider. The answer proves the question with those variables free, so
  -- applying it to the terms they stand for, and to the facts the question
  -- took as hypotheses, proves what was asked.
  let mut atoms ← opaqueTerms (types ++ claim.toArray)
  if atoms.isEmpty then
    return ← ask facts claim
  -- Two atoms can be one term reached two ways: a numeral's or an operator's
  -- instance written through one structure in what vampire's step rebuilt and
  -- through another in what normalisation made of it. The procedure has to be
  -- told they are one, or it knows nothing relating them; so each stands for
  -- the first it is equal to once instances are unfolded, which is how two
  -- instance paths to one operator are told apart from two operators.
  let mut distinct := #[]
  let mut position : Std.HashMap Expr Nat := {}
  for atom in atoms do
    let τ ← inferType atom
    let mut same := none
    for (other, j) in distinct.zipIdx do
      if ← withTransparency .instances (isDefEq (← inferType other) τ <&&> isDefEq other atom) then
        same := some j
        break
    match same with
    | some j => position := position.insert atom j
    | none =>
      position := position.insert atom distinct.size
      distinct := distinct.push atom
  atoms := distinct
  let mut decls := #[]
  for (atom, i) in atoms.zipIdx do
    decls := decls.push (Name.mkSimple s!"a{i}", fun _ => inferType atom)
  withLocalDeclsD decls fun locals => do
    let standingFor (e : Expr) : Expr :=
      e.replace fun s => (position[s]?).map fun i => locals[i]!
    let mut hypDecls := #[]
    for (type, i) in types.zipIdx do
      let stated := standingFor type
      hypDecls := hypDecls.push (Name.mkSimple s!"h{i}", fun _ => pure stated)
    withLocalDeclsD hypDecls fun hyps => do
      let answer ← ask hyps (claim.map standingFor)
      return mkAppN (← mkLambdaFVars (locals ++ hyps) answer) (atoms ++ facts)

end VampireReplay.Abstract
