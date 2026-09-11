import Vampire.Reconstruct.Basic

/-!
Rewriting with an equation.

`ForwardDemodulation` finds a unit equation whose left-hand side matches a
subterm of a literal of the clause being simplified and replaces the subterm by
the right-hand side under the match; `BackwardDemodulation` is the same
inference found from the other end, and states its premises the same way
round. `Superposition` does the same with the
equation's own clause and a unifier rather than a match, so the equation's other
literals join the conclusion.

Which subterm of which literal, which side of the equation, and the
substitution: none of it survives the inference -- vampire's own proof checker
calls working out afterwards which way a demodulator was used "very hard" and
guesses -- so the fork records it.
-/

namespace Vampire.Reconstruct.Rewrite

open Lean Meta

/--
A term of a premise, as the inference saw it: applied symbols down to what
stands for the premise's variables.

Which occurrences of a term a rewrite replaces is settled on vampire's terms
rather than on the Lean expressions they rebuild to. The two are not the same
question: a symbol vampire introduced rebuilds to the definition that gave it
meaning, so two of vampire's terms can rebuild to one expression, and replacing
occurrences of that expression would replace ones the inference left alone.
-/
private inductive Tree where
  | app (head : Expr) (args : Array Tree)
  | leaf (e : Expr)
deriving BEq, Inhabited

private partial def treeOf (vars : Vars) (bindings : Std.HashMap UInt32 Term)
    (t : Term) : ReconstructM Tree := do
  if t.isVar then
    match bindings[t.var]? with
    | some image => treeOf vars {} image
    | none =>
      let some x := vars[t.var]?
        | throwError "variable X{t.var} has no recorded sort"
      return .leaf x
  else
    let some symbol := t.symbol?
      | throwError "term has unknown functor {t.functor}"
    return .app (← symbolExpr symbol.name) (← t.args.mapM (treeOf vars bindings))

private def Tree.toExpr : Tree → Expr
  | .leaf e => e
  | .app head args => mkAppN head (args.map Tree.toExpr)

private partial def Tree.replacing (target : Tree) (x : Expr) : Tree → Tree
  | t@(.leaf _) => if t == target then .leaf x else t
  | t@(.app head args) =>
    if t == target then .leaf x else .app head (args.map (Tree.replacing target x))

/--
A premise's literal at the recorded substitution, with `hole`'s term abstracted
where it is given.
-/
private def literalAt (vars : Vars) (bindings : Std.HashMap UInt32 Term)
    (l : Literal) (hole : Option (Tree × Expr)) : ReconstructM Expr := do
  let args ← l.args.mapM fun a => do
    let tree ← treeOf vars bindings a
    match hole with
    | some (target, x) => return (Tree.replacing target x tree).toExpr
    | none => return tree.toExpr
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
      pure (mkAppN (← symbolExpr symbol.name) args)
  shared (if ← literalPolarity l then atom else mkApp (mkConst ``Not) atom)

/--
The equation a premise use points at, as an oriented rewrite: the side the
inference matched, what it rewrites to, and a proof of the equation that way
round.

Which way round the equation was used is read off the recorded side, and the
recorded substitution is what states that side in the premise's own variables.
-/
private def orientedEquation (use : PremiseUse) (vars : Vars) (proof stated : Expr) :
    ReconstructM (Expr × Expr × Expr) := do
  let some equationSide := use.term
    | throwError "the step did not record which side of the equation it used"
  let «from» ← term (← substitutedVars use vars) equationSide
  let some (_, lhs, rhs) := (← instantiateMVars stated).eq?
    | throwError "the equation is not one:{indentExpr stated}"
  if ← isDefEq lhs «from» then
    return («from», rhs, proof)
  if ← isDefEq rhs «from» then
    return («from», lhs, ← mkAppM ``Eq.symm #[proof])
  throwError "neither side of{indentExpr stated}\nis the term{indentExpr «from»}\n\
    the equation was matched at"

/--
What a rewriting inference did to the premise it rewrote: which literal, and
the term within it, at the substitution the premise was taken at.
-/
private structure Rewritten where
  literals : Array Literal
  bindings : Std.HashMap UInt32 Term
  literal : Nat
  wholePremise : Bool
  target : Tree

private def rewrittenOf (parent : Vampire.Unit) (use : PremiseUse) (vars : Vars) :
    ReconstructM Rewritten := do
  let some literal := use.literal
    | throwError "the step did not record the literal it rewrote"
  let some rewritten := use.term
    | throwError "the step did not record the term it rewrote"
  let some clause := parent.clause?
    | throwError "the premise being rewritten is not a clause"
  let bindings := Std.HashMap.ofList use.bindings.toList
  return { literals := clause.literals, bindings, literal := literal.toNat
           wholePremise := use.rewritesWholePremise
           target := ← treeOf vars bindings rewritten }

/-- `heq : t = to` turns a proof of a literal into one of the literal rewritten. -/
private def rewriteWith (rw : Rewritten) (vars : Vars) (heq to : Expr) (i : Nat)
    (h : Expr) : ReconstructM Expr := do
  let some l := rw.literals[i]?
    | throwError "the premise has no literal {i}"
  let «from» := rw.target.toExpr
  let τ ← inferType «from»
  let motive ← withLocalDeclD `x τ fun x => do
    mkLambdaFVars #[x] (← literalAt vars rw.bindings l (some (rw.target, x)))
  mkAppOptM ``Eq.subst #[some τ, some motive, some «from», some to, some heq, some h]

/--
The premise's clause, with the term the inference rewrote abstracted from the
literal it rewrote it in.

A rewrite happens inside a clause, so the clause is rewritten where it stands
rather than taken apart and put back together: the conclusion of a step over a
clause of a hundred literals is then one substitution rather than a hundred.
-/
private def clauseAbstracting (rw : Rewritten) (vars : Vars) (x : Option Expr) :
    ReconstructM Expr := do
  let parts ← rw.literals.zipIdx.mapM fun (l, i) => do
    if (i == rw.literal || rw.wholePremise) && x.isSome then
      literalAt vars rw.bindings l (x.map (rw.target, ·))
    else
      literalAt vars rw.bindings l none
  sharedClause (junction ``Or ``False parts)

/-- The literals of a clause of `count` of them, taken apart rather than built. -/
private def clausePartsOf (whole : Expr) (count : Nat) :
    ReconstructM (Array Expr) := do
  if count == 0 then return #[]
  let mut parts := #[]
  let mut rest := whole
  for _ in [0 : count - 1] do
    unless rest.isAppOfArity ``Or 2 do
      throwError "a clause of {count} literals is not one:{indentExpr whole}"
    parts := parts.push rest.appFn!.appArg!
    rest := rest.appArg!
  return parts.push rest

/--
What the premise says once the rewrite is made: its own literals, with the one
the inference rewrote in replaced.

Taken from what the premise says rather than built again: a clause of a few
hundred literals is rewritten along its whole length, and stating all of them
for each rewrite costs more than the rewriting does.
-/
private def clauseRewritten (rw : Rewritten) (vars : Vars) (stated to : Expr) :
    ReconstructM Expr := do
  if rw.wholePremise then
    return ← clauseAbstracting rw vars (some to)
  let parts ← clausePartsOf stated rw.literals.size
  let some l := rw.literals[rw.literal]?
    | throwError "the premise has no literal {rw.literal}"
  let rewritten ← literalAt vars rw.bindings l (some (rw.target, to))
  sharedClause (junction ``Or ``False (parts.set! rw.literal rewritten))

/-- `forward_demodulation`: the premise with one literal rewritten. -/
def demodulation (step : Step) : ReconstructM Expr := do
  let #[(mainProof, mainStated), (sideProof, sideStated)] := step.premises
    | throwError "demodulation should have two premises, got {step.premises.size}"
  let #[mainParent, sideParent] := step.unit.parents
    | throwError "demodulation should have two premises"
  let mainUse ← step.useAt 0
  let sideUse ← step.useAt 1
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut kept : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      kept := kept.insert v x
    -- Rewriting can be what removes a variable from the clause.
    let vars ← coverVars mainParent kept
    let rw ← rewrittenOf mainParent mainUse vars
    let (mainAt, mainType) ← instantiateAt mainParent mainUse vars mainProof mainStated
    let (sideAt, sideType) ← instantiateAt sideParent sideUse vars sideProof sideStated
    let (_, to, heq) ← orientedEquation sideUse vars sideAt sideType
    -- The rewrite happens inside the clause, so it is made where it stands.
    let «from» := rw.target.toExpr
    let τ ← inferType «from»
    let motive ← withLocalDeclD `x τ fun x => do
      mkLambdaFVars #[x] (← clauseRewritten rw vars mainType x)
    let rewritten ← mkAppOptM ``Eq.subst
      #[some τ, some motive, some «from», some to, some heq, some mainAt]
    -- What the premise says once rewritten, which is what the conclusion says
    -- up to the order its literals come in.
    let says ← clauseRewritten rw vars mainType to
    mkLambdaFVars xs (← carryAll says target rewritten)

/--
`superposition`: the clause being rewritten and the equation rewriting it, both
at the unifier, with the rewritten literal in place of the equation's.
-/
def superposition (step : Step) : ReconstructM Expr := do
  let #[(mainProof, mainStated), (sideProof, sideStated)] := step.premises
    | throwError "superposition should have two premises, got {step.premises.size}"
  let #[mainParent, sideParent] := step.unit.parents
    | throwError "superposition should have two premises"
  let mainUse ← step.useAt 0
  let sideUse ← step.useAt 1
  let some equationLiteral := sideUse.literal
    | throwError "superposition did not record which literal is the equation"
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut kept : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      kept := kept.insert v x
    let vars ← coverVars sideParent (← coverVars mainParent kept)
    let rw ← rewrittenOf mainParent mainUse vars
    let (mainAt, mainType) ← instantiateAt mainParent mainUse vars mainProof mainStated
    let (sideAt, sideType) ← instantiateAt sideParent sideUse vars sideProof sideStated
    -- The equation is a literal of its own premise, so the case where it holds
    -- is the one that rewrites; its other literals are literals of the
    -- conclusion, as are the ones the rewritten premise keeps.
    let body ← carryPast mainType target mainAt
      (fun i => i == rw.literal || rw.wholePremise)
      (fun i h rest =>
        carryPast sideType rest sideAt (· == equationLiteral.toNat)
          (fun _ hSide inner => do
            let (_, to, heq) ← orientedEquation sideUse vars hSide (← inferType hSide)
            placeLiteral inner (← rewriteWith rw vars heq to i h)))
    mkLambdaFVars xs body

end Vampire.Reconstruct.Rewrite
