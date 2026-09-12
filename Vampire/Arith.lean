import Lean
import Mathlib.Tactic.Linarith
import Mathlib.Tactic.Ring

/-!
What proves an arithmetic step of vampire's.

Kept apart from the rest of the tactic because `linarith` comes with a library
whose keywords -- `lemma`, `says`, `to` -- the replay uses as names of its own.
Replay is handed `contradiction` rather than importing it.
-/

namespace Vampire.Arith

open Lean Meta Mathlib.Tactic

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
    -- be another binder.
    if e.isFVar || acc.any (· == e) then return (acc, seen)
    return (acc.push e, seen)

/--
`a ↔ b`, where the two are one comparison with its terms moved across it.

What theory normalisation does to a literal is to gather its terms on one side:
`-14 x + -77 y < 64` for `0 < 64 + 14 x + 77 y`. The two say the same because
the difference between the sides is the same, which is a fact about a ring and
not about an order, so `ring` settles it -- where asking a decision procedure
asks twice, once for each way round the equivalence goes, and asks it to search
for a combination when there is nothing to search for.
-/
def rearranged (a b : Expr) : MetaM (Option Expr) := do
  -- A lemma stated of whatever makes it true here, found by unifying it with
  -- what is wanted of it rather than by counting its arguments.
  let instantiated (name : Name) (want : Expr) : MetaM (Option Expr) := do
    let e ← mkConstWithFreshMVarLevels name
    let (mvars, binders, stated) ← forallMetaTelescope (← inferType e)
    unless ← isDefEq stated want do return none
    -- Unifying settles what the lemma is stated of but not what it is stated
    -- over: an instance argument is found rather than matched.
    for (mvar, binder) in mvars.zip binders do
      if binder == .instImplicit && !(← mvar.mvarId!.isAssigned) then
        match ← trySynthInstance (← mvar.mvarId!.getType) with
        | .some inst => unless ← isDefEq mvar inst do return none
        | _ => return none
    let stated ← instantiateMVars (mkAppN e mvars)
    -- Nothing left unsettled. A term with a hole in it is one the kernel will
    -- not take, and the slow way round is there to be taken instead.
    if stated.hasExprMVar then return none
    return some stated
  -- A comparison read as `0 ≤ d` or `0 < d`, with what says the two are the
  -- same. A denied comparison is a comparison the other way round, which is
  -- the shape normalisation leaves and is a lemma rather than a question.
  let below (e : Expr) : MetaM (Option (Bool × Expr × Expr × Expr)) := do
    let parsed : Option (Bool × Expr × Expr × Option Name) :=
      match e.getAppFnArgs with
      | (``LE.le, #[_, _, x, y]) => some (true, y, x, none)
      | (``LT.lt, #[_, _, x, y]) => some (false, y, x, none)
      | (``Not, #[p]) =>
        match p.getAppFnArgs with
        | (``LT.lt, #[_, _, x, y]) => some (true, x, y, some ``not_lt)
        | (``LE.le, #[_, _, x, y]) => some (false, x, y, some ``not_le)
        | _ => none
      | _ => none
    let some (nonneg, greater, lesser, denied) := parsed | return none
    let difference ← mkAppM ``HSub.hSub #[greater, lesser]
    let α ← inferType difference
    let zero ← mkAppOptM ``OfNat.ofNat #[some α, some (mkRawNatLit 0), none]
    let named (l r : Expr) : MetaM Expr :=
      mkAppM (if nonneg then ``LE.le else ``LT.lt) #[l, r]
    let stated ← named zero difference
    let some core ← instantiated (if nonneg then ``sub_nonneg else ``sub_pos)
        (← mkAppM ``Iff #[stated, ← named lesser greater])
      | return none
    match denied with
    | none => return some (nonneg, difference, stated, core)
    | some name =>
      let some bridge ← instantiated name
          (← mkAppM ``Iff #[e, ← named lesser greater])
        | return none
      return some (nonneg, difference, stated,
        ← mkAppM ``Iff.trans #[core, ← mkAppM ``Iff.symm #[bridge]])
  let some (nonnegA, dA, statedA, saysA) ← below a | return none
  let some (nonnegB, dB, _, saysB) ← below b | return none
  unless nonnegA == nonnegB do return none
  let same ← mkFreshExprMVar (← mkEq dA dB)
  try
    AtomM.run .reducible (Mathlib.Tactic.Ring.proveEq same.mvarId!)
  catch _ => return none
  -- The two differ only where the difference stands, so one is the other with
  -- it replaced, and `same` says the replacement holds.
  let α ← inferType dA
  let motive := Expr.lam `t α (statedA.abstract #[dA]) .default
  let between ← mkAppM ``iff_of_eq #[← mkAppM ``congrArg #[motive, same]]
  let answer ← instantiateMVars (← mkAppM ``Iff.trans
    #[← mkAppM ``Iff.symm #[saysA], ← mkAppM ``Iff.trans #[between, saysB]])
  if answer.hasExprMVar then return none
  return some answer

/-- `False` or `claim`, asked of the facts as they stand. -/
private def askAbout (facts : Array Expr) (claim : Option Expr) : MetaM Expr := do
  let goal ← mkFreshExprMVar (claim.getD (mkConst ``False))
  -- `omega` decides the integers and the naturals and nothing else, so asking
  -- it about the rationals or the reals is asking a question whose answer is
  -- known: it cannot say. What is asked here is asked once per literal of
  -- every clause of every arithmetic step, so a procedure that cannot answer
  -- is not asked.
  let integral (e : Expr) : Bool :=
    (e.find? fun s => s.isConstOf ``Int || s.isConstOf ``Nat).isSome
  let discrete := claim.any integral
    || (← facts.anyM fun f => return integral (← instantiateMVars (← inferType f)))
  try
    -- `linarith` proves a comparison outright, which is what a theory axiom
    -- like commutativity states; `omega` wants a goal of `False`, so it is
    -- given one, the claim having been turned into a fact by the caller.
    if claim.isSome || !discrete then
      Mathlib.Tactic.Linarith.linarith true facts.toList {} goal.mvarId!
    else
      Lean.Elab.Tactic.Omega.omega facts.toList goal.mvarId!
  catch omegaFailed =>
    try
      if !discrete then
        throw omegaFailed
      else if claim.isSome then
        Lean.Elab.Tactic.Omega.omega facts.toList goal.mvarId!
      else
        Mathlib.Tactic.Linarith.linarith true facts.toList {} goal.mvarId!
    catch linarithFailed =>
      let stated ← facts.mapM fun f => do
        return indentExpr (← instantiateMVars (← inferType f))
      throwError "nothing says {(claim.map fun c =>
          m!"that{indentExpr c}\nfollows").getD m!"these cannot all hold"} \
        of any numbers:{MessageData.joinSep stated.toList ""}\n\
        omega said: {omegaFailed.toMessageData}\n\
        linarith said: {linarithFailed.toMessageData}"
  instantiateMVars goal

/--
`False`, from facts that cannot all hold of any numbers.

Two procedures rather than one: `omega` knows that the integers are discrete,
which is what vampire's integrality steps turn on, and `linarith` works over
any ordered field, which is where the rationals and the reals are. Neither is
asked to find the facts -- they are the step's own premises -- only to see that
together they are impossible.
-/
def contradiction (facts : Array Expr) (claim : Option Expr) : MetaM Expr := do
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
  let facts ← facts.mapM fun fact => do
    let stated ← instantiateMVars (← inferType fact)
    let reduced ← readable stated
    if reduced == stated then pure fact else mkExpectedTypeHint fact reduced
  let claim ← claim.mapM readable
  -- Put aside what the procedure can only take whole and ask about a variable
  -- standing for each, so that what is asked is as wide as the numbers in it
  -- and no wider. The answer proves the question with those variables free, so
  -- applying it to the terms they stand for, and to the facts the question
  -- took as hypotheses, proves what was asked.
  let mut atoms := #[]
  let mut seen : Std.HashSet Expr := {}
  for fact in facts do
    let (atoms', seen') ← atomsOf (← instantiateMVars (← inferType fact)) atoms seen
    atoms := atoms'; seen := seen'
  if let some claim := claim then
    let (atoms', _) ← atomsOf claim atoms seen
    atoms := atoms
  if atoms.isEmpty then
    return ← askAbout facts claim
  let mut decls := #[]
  for (atom, i) in atoms.zipIdx do
    decls := decls.push (Name.mkSimple s!"a{i}", fun _ => inferType atom)
  withLocalDeclsD decls fun locals => do
    let standingFor (e : Expr) : Expr :=
      e.replace fun s =>
        match atoms.findIdx? (· == s) with
        | some i => some locals[i]!
        | none => none
    let mut hypDecls := #[]
    for (fact, i) in facts.zipIdx do
      let stated := standingFor (← instantiateMVars (← inferType fact))
      hypDecls := hypDecls.push (Name.mkSimple s!"h{i}", fun _ => pure stated)
    withLocalDeclsD hypDecls fun hyps => do
      let answer ← askAbout hyps (claim.map standingFor)
      return mkAppN (← mkLambdaFVars (locals ++ hyps) answer) (atoms ++ facts)

end Vampire.Arith
