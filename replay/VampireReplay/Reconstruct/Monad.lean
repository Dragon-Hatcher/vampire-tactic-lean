import Lean
import VampireReplay.Translate
import VampireReplay.Wire

namespace Vampire.Reconstruct

open Lean Meta

/-- What reconstruction needs to read a proof back into Lean. -/
structure Context where
  /-- What the TPTP names in the proof stand for. -/
  symbols : Symbols
  proof : Proof
  /--
  The number of the first step polarity flipping made, or zero if it never ran:
  the steps from there on mean the opposite by the predicates it flipped.
  -/
  flipped : UInt32 := 0
  /--
  Whether the step being read is one of those polarity flipping has been
  through.

  Flipping picks a set of predicates and replaces every literal of every clause
  over them by its complement, all at once. It says nothing, then, about the
  clauses -- it says that those predicates now mean the opposite of what they
  did. So a step after it is read with the polarity of a flipped predicate's
  literals inverted, which is what makes the flipping itself say nothing.
  -/
  flipping : Bool := false
  /--
  What the goal holds, for when something of a sort is needed and no instance
  says the sort is inhabited.

  Taken once, before any step is replayed: what a rule brings into scope while
  it works -- a clause's variables, a hypothesis it assumes -- is gone again by
  the time the proof is put together, and nothing of it can be used here.
  -/
  givens : Array Expr := #[]
  /--
  Whether to check each step's term as it is built, rather than leaving the
  whole proof to the kernel.

  What it buys is the rule's name: a term the elaborator accepts and the kernel
  does not -- `mkApp` reads an application's type off the head's signature
  without looking at the arguments, so it is easy to build one -- otherwise
  arrives as an anonymous kernel error with a few hundred steps to choose from.
  What it costs is a second pass over every step, which on the corpus is a
  fifth of the replay and on the largest terms more than half of it.

  Off by default: the kernel checks the finished proof either way, so this is a
  better error message rather than a soundness measure.
  -/
  checkSteps : Bool := false
  /--
  What proves `False` from facts that cannot all hold of any numbers.

  Vampire's arithmetic rules record nothing of why they are sound -- for it,
  soundness is the calculus rather than a derivation -- so those are the one
  kind of step whose conclusion replay has to prove for itself, which for
  arithmetic is what a decision procedure is for. It is handed in rather than
  called directly: `omega` and `linarith` are the procedures, and `linarith`
  lives in a library whose keywords this one cannot afford to have.
  -/
  contradiction : Array Expr → Option Expr → MetaM Expr := fun _ _ =>
    throwError "replay was not given a way to prove arithmetic steps"
  /--
  `a ↔ b` where the two are one comparison with its terms moved across it,
  which is the shape normalising a literal leaves, and none where they are not.

  Handed in for the same reason as `contradiction`, and asked first: what
  relates the two is that the difference between their sides is the same, which
  is a fact about a ring, where a decision procedure would be asked for each
  way round the equivalence goes.
  -/
  rearranged : Expr → Expr → MetaM (Option Expr) := fun _ _ => pure none
  /--
  `x ≠ 0 → x * z = x * w → z = w` at three numbers, and none where their sort
  does not cancel.

  Handed in for the same reason as `contradiction`, and needed because
  vampire's divisibility axiom turns on exactly this: that multiplication by
  anything but zero cancels is a fact about a ring without zero divisors, and
  no procedure that reads its facts as linear constraints can see it.
  -/
  cancelling : Expr → Expr → Expr → MetaM (Option Expr) := fun _ _ _ => pure none
  /--
  The number each numeral symbol stands for, by its name and arity: ALASCA's
  multiplication by a number is printed as the number is.
  -/
  numerals : Std.HashMap (String × Nat) Numeral := {}

structure State where
  /-- The proof term built for each step, by vampire's number for it. -/
  proofs : Std.HashMap UInt32 Expr := {}
  /-- Rules met that have no implementation yet. -/
  unimplemented : Std.HashSet String := {}
  /--
  Symbols vampire introduced and the definition that gave each one meaning,
  e.g. from a `function_definition` step.
  -/
  introduced : Std.HashMap String Expr := {}
  /-- Formulas an `avatar_definition` step named, kept under the positive name. -/
  named : Std.HashMap String Expr := {}
  /-- The proposition rebuilt for each step, by vampire's number for it. -/
  conclusions : Std.HashMap UInt32 Expr := {}
  /-- The one term standing for each shape a rebuilt term has taken. -/
  shared : Std.HashMap Expr Expr := {}
  /--
  The Lean term each of vampire's ground terms rebuilds to, by vampire's index
  for it.

  `shared` gives one term per *shape*, but only once the shape has been built:
  the whole subtree is rebuilt before it turns out to be one already seen. On
  the corpus that is most of what rebuilding does -- one problem builds
  1,935,209 terms of which 13,912 are distinct -- and a ground term's rebuilding
  does not depend on anything but which term it is, so it is done once.

  Only ground terms. What a term with variables in it rebuilds to depends on
  what those variables stand for, which differs from one step to the next.
  -/
  groundTerms : Std.HashMap UInt32 Expr := {}
  /-- What says a sort is inhabited, for the sorts that have needed it. -/
  nonempty : Std.HashMap Expr Expr := {}
  /--
  The Lean proposition each of vampire's variable-free formulas rebuilds to, by
  vampire's index for it.

  The companion of `groundTerms`, and kept for the same reason: a proof states
  the same subformulas over and over -- one problem of the corpus rebuilds
  279,738 formulas of which 7,104 are distinct -- and what a formula free of
  variables rebuilds to does not depend on anything but which formula it is.

  Only such formulas, and only where polarity flipping is not in play: a
  quantifier binds a local whose type comes from the sorts the step recorded, a
  name stands for whatever the proof has bound it to, and a literal over a
  flipped predicate means the opposite after the flipping from before it.
  -/
  groundFormulas : Std.HashMap UInt32 Expr := {}
  /--
  What takes one generalised clause of a clausification to the next, by what
  that step proves.

  One clausification writes out a clause for every conjunct it reached, and
  each of those is a step of vampire's own, replayed on its own. The chains
  that led there agree wherever they agree, so following each from the formula
  proves the same things over and over: on one problem of the corpus, a
  thousand steps replayed where under a quarter of them are distinct.

  Kept by what a step proves rather than by which step it is, because that is
  what makes one term stand for another: a term taking what one clause says to
  what the next says does that wherever it is wanted.
  -/
  clausifyChain : Std.HashMap Expr Expr := {}
  /--
  An interpreted operation at a type, applied to its type and instance
  arguments and waiting for its own: `@HAdd.hAdd τ τ τ inst`, by operation and
  type. Every node of every term over numbers asks for one, and synthesising
  the instance each time was much of what rebuilding such a term cost.
  -/
  heads : Std.HashMap (Name × Expr) Expr := {}
  /-- Each numeral rebuilt, by its type and its value. -/
  numerals : Std.HashMap (Expr × Int) Expr := {}
  /-- The universe each sort an equality has been stated at lives in. -/
  levels : Std.HashMap Expr Level := {}
  /--
  What went wrong binding the names a step introduces, for each step whose
  names could not be bound before replay began: reported with the first name
  that is then missing, since a name nothing bound is otherwise all it says.
  -/
  bindFailures : Array (UInt32 × MessageData) := #[]

abbrev ReconstructM := ReaderT Context (StateRefT State MetaM)

/--
Whether two formulas replay has built are the same one: equal as terms, or
once instances and reducible definitions are unfolded, which is how the same
operator reached through two instance paths is recognised. Never by unfolding
a definition of the goal's: that would take what is only provably equal for
the same formula, and search where the formulas should just be compared.
-/
def sameFormula (a b : Expr) : MetaM Bool := do
  if a == b then return true
  withTransparency .instances (isDefEq a b)

/--
`x`, with what it did to the metavariables undone if it fails.

An attempt that may not succeed -- asking a decision procedure, say -- can
assign metavariables before it gives up, and those assignments would otherwise
outlive it. Replay's own caches are kept: what they hold is true either way.
-/
def rollingBack (x : ReconstructM α) : ReconstructM α := do
  let saved ← Meta.saveState
  try x catch e => saved.restore; throw e

/--
Raised for a name that stands for nothing: neither the goal nor anything the
proof introduced binds it.

The names vampire introduces itself -- skolems, AVATAR's components, the
symbols of its definitions -- are bound before any step is replayed, so meeting
one unbound means that binding it failed, or that no rule binds that kind of
name yet. What went wrong binding is reported with it, since the missing name
is otherwise all the message says.
-/
def throwIntroduced (kind name : String) : ReconstructM α := do
  let failures := (← get).bindFailures
  let why :=
    if failures.isEmpty then m!""
    else m!"\nbinding what the proof introduces failed for {failures.size} \
      step(s):{MessageData.joinSep (failures.toList.map fun (n, e) =>
        m!"\n  step {n}: {e}") ""}"
  throwError "{kind} `{name}` has no Lean counterpart: it is not from the goal, \
    and replay did not bind it{why}"

/-- The Lean type a TPTP sort stands for, if it stands for one. -/
def sortType? (name : String) : ReconstructM (Option Expr) := do
  if let some τ := (← read).symbols.sorts[name]? then
    return τ
  -- TPTP's own arithmetic types, which a proof can reach for even where the
  -- goal did not: reasoning about the rationals states integer bounds.
  if name == "$int" then return mkConst ``Int
  if name == "$rat" then return mkConst `Rat
  if name == "$real" then return mkConst `Real
  return none

/--
Raised for a sort that stands for no Lean type: the goal did not give it one,
and it is not one of TPTP's arithmetic types.
-/
def throwUnknownSort (name : String) : ReconstructM α :=
  throwError "the sort `{name}` has no Lean counterpart in the goal"

/-- The Lean type a TPTP sort stands for. -/
def sortType (name : String) : ReconstructM Expr := do
  let some τ ← sortType? name | throwUnknownSort name
  return τ

/-- The Lean expression a TPTP symbol stands for, from the goal or a definition. -/
def symbolExpr (name : String) : ReconstructM Expr := do
  if let some e := (← read).symbols.symbols[name]? then return e
  if let some e := (← get).introduced[name]? then return e
  throwIntroduced "the symbol" name

/-- Whether a TPTP symbol name has a Lean counterpart yet. -/
def resolvesSymbol (name : String) : ReconstructM Bool := do
  return ((← read).symbols.symbols[name]?).isSome || ((← get).introduced[name]?).isSome

/--
Whether the goal is where a TPTP symbol comes from.

This is what tells a symbol vampire introduced from one of the goal's own,
which asking whether it resolves no longer does: names are bound before any
step is replayed, so by then an introduced one resolves too.
-/
def isGoalSymbol (name : String) : ReconstructM Bool := do
  return ((← read).symbols.symbols[name]?).isSome

/--
A name splitting introduced, taken apart: whether it is the negation of another
and the name it negates, `~n` being `(true, n)` and `n` being `(false, n)`.
-/
def splitName (name : String) : Bool × String :=
  if name.startsWith "~" then (true, (name.drop 1).toString) else (false, name)

/--
What a name splitting introduced stands for, `~n` for the negation of what `n`
does.
-/
def namedFormula (name : String) : ReconstructM Expr := do
  let (negated, key) := splitName name
  let some body := (← get).named[key]?
    | throwIntroduced "the named subformula" name
  return if negated then mkApp (mkConst ``Not) body else body

/--
What a proposition is the negation of, whether it is written `¬a` or `a → False`
-- which is the same thing, and which of the two a proof term states depends on
how it was built.
-/
def asNegation (e : Expr) : Option Expr :=
  match e.not? with
  | some inner => some inner
  | none =>
    -- `a ≠ b` is the same thing again, and a proof built by `Ne.symm` states
    -- itself that way.
    if e.isAppOfArity ``Ne 3 then
      match e.getAppFn with
      | .const _ levels =>
        let args := e.getAppArgs
        some (mkAppN (.const ``Eq levels) args)
      | _ => none
    else
      match e with
      | .forallE _ d body _ =>
        if body.isConstOf ``False && !body.hasLooseBVars then some d else none
      | _ => none

/-- The name of the negation of what `name` names. -/
def flippedName (name : String) : String :=
  match splitName name with
  | (true, positive) => positive
  | (false, positive) => "~" ++ positive

/--
`⟦~n⟧`, and that it says what `¬⟦n⟧` does.

One is the other under a double negation: a name and its negation are two
names, and which of the two carries the negation is up to which one splitting
introduced.
-/
def flipName (name : String) : ReconstructM (Expr × Expr) := do
  let flipped := flippedName name
  let body ← namedFormula name
  let flippedBody ← namedFormula flipped
  if flippedBody == mkApp (mkConst ``Not) body then
    return (flippedBody, ← mkAppOptM ``Iff.refl #[some flippedBody])
  if body == mkApp (mkConst ``Not) flippedBody then
    return (flippedBody,
      ← mkAppM ``Iff.symm #[← mkAppOptM ``Classical.not_not #[some flippedBody]])
  throwError "`{name}` and `{flipped}` are not each other's negation"

/--
The one term of this shape, so that two rebuildings of it are the same term.

A proof states the same literals over and over -- every step of it says what
its premises and its conclusion are -- and each rebuilding otherwise makes its
own copy. Lean shares the subterms of what it is handed before checking it, and
compares terms by their address before their shape, so what the copies cost is
paid many times over.
-/
def shared (e : Expr) : ReconstructM Expr := do
  if let some one := (← get).shared[e]? then
    return one
  modify fun s => { s with shared := s.shared.insert e e }
  return e

end Vampire.Reconstruct
