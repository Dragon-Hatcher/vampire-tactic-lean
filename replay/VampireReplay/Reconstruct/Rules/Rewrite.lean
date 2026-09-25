import VampireReplay.Reconstruct.Basic
import VampireReplay.Reconstruct.Rules.Clause

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
  /-- An applied symbol, by the name TPTP gives it and what the goal has for
  it, which is nothing for a symbol TPTP interprets itself. `hash` is the
  tree's, kept so that telling two trees apart is not walking both; `id` is
  the node's own, one per term of vampire's as `TreeCache` builds them; `expr`
  is what it states. -/
  | app (name : String) (head : Option Expr) (args : Array Tree) (hash : UInt64)
      (id : Nat) (expr : Expr)
  | leaf (e : Expr)
deriving Inhabited

private def Tree.hash : Tree → UInt64
  | .app _ _ _ h _ _ => h
  | .leaf e => e.hash

/-- What a tree states. -/
private def Tree.toExpr : Tree → Expr
  | .app _ _ _ _ _ e => e
  | .leaf e => e

/--
Whether two trees are one. The same node is, which is what one term of
vampire's is; the hashes decide almost every other pair that is not, and only
two trees built apart that say the same are walked.
-/
private partial def Tree.beq : Tree → Tree → Bool
  | .leaf a, .leaf b => a == b
  | .app n h as ha i _, .app m k bs hb j _ =>
    i == j || (ha == hb && n == m && h == k && as.size == bs.size
      && (as.zip bs).all fun (a, b) => Tree.beq a b)
  | _, _ => false

private instance : BEq Tree := ⟨Tree.beq⟩

/-- A symbol applied to what `args` state, as a term states it. -/
private def applied (name : String) (head : Option Expr) (args : Array Expr) :
    ReconstructM Expr := do
  if let some interpretation ← interpreted name args then
    return interpretation
  let some head := head | throwIntroduced "the symbol" name
  return mkAppN head args

/--
The trees one step builds, each term of vampire's once: by the term, and
whether it is read through the use's bindings or is an image of them. Vampire
shares its terms, and a tree built afresh at each occurrence of a shared
subterm is exponential in how deep the sharing goes.
-/
private abbrev TreeCache := IO.Ref (Std.HashMap (UInt32 × Bool) Tree × Nat)

private def TreeCache.new : ReconstructM TreeCache := IO.mkRef ({}, 0)

private partial def treeOf (cache : TreeCache) (vars : Vars)
    (bindings : Std.HashMap UInt32 Term) (t : Term) : ReconstructM Tree := do
  if t.isVar then
    match bindings[t.var]? with
    | some image => return ← treeOf cache vars {} image
    | none =>
      let some x := vars[t.var]?
        | throwError "variable X{t.var} has no recorded sort"
      return .leaf x
  let key := (t.index, bindings.isEmpty)
  if let some tree := (← cache.get).1[key]? then return tree
  let some symbol := t.symbol?
    | throwError "term has unknown functor {t.functor}"
  let head ← if ← resolvesSymbol symbol.name then some <$> symbolExpr symbol.name
    else pure none
  let args ← t.args.mapM (treeOf cache vars bindings)
  let expr ← applied symbol.name head (args.map (·.toExpr))
  let (trees, id) ← cache.get
  let hash := args.foldl (fun h a => mixHash h a.hash) (Hashable.hash symbol.name)
  let tree := .app symbol.name head args hash id expr
  cache.set (trees.insert key tree, id + 1)
  return tree

/--
What `tree` states with `target` replaced by `x` wherever it occurs, each node
worked out once however often it is shared.
-/
private partial def replacing (target : Tree) (x : Expr) (tree : Tree) :
    ReconstructM Expr := do
  let seen ← IO.mkRef ({} : Std.HashMap Nat Expr)
  let rec go (t : Tree) : ReconstructM Expr := do
    if t == target then return x
    match t with
    | .leaf e => return e
    | .app name head args _ id expr =>
      if let some e := (← seen.get)[id]? then return e
      let replaced ← args.mapM go
      let e ← if (replaced.zip args).all (fun (r, a) => r == a.toExpr) then pure expr
        else applied name head replaced
      seen.modify (·.insert id e)
      return e
  go tree

/--
A premise's literal at the recorded substitution, with `hole`'s term abstracted
where it is given.
-/
private def literalAt (cache : TreeCache) (vars : Vars) (bindings : Std.HashMap UInt32 Term)
    (l : Literal) (hole : Option (Tree × Expr)) : ReconstructM Expr := do
  let args ← l.args.mapM fun a => do
    let tree ← treeOf cache vars bindings a
    match hole with
    | some (target, x) => replacing target x tree
    | none => pure tree.toExpr
  let atom ←
    if l.isEquality then
      let some sortName := l.sort?
        | throwError "equality literal without a recorded argument sort"
      let #[lhs, rhs] := args
        | throwError "equality literal with {args.size} arguments"
      eqAt (← sortType sortName) lhs rhs
    else
      let some symbol := l.symbol?
        | throwError "literal has unknown predicate {l.predicate}"
      match ← interpreted symbol.name args with
      | some atom => pure atom
      | none => pure (mkAppN (← symbolExpr symbol.name) args)
  shared (if ← literalPolarity l then atom else mkApp (mkConst ``Not) atom)

/--
The equation a premise use points at, as an oriented rewrite: the side the
inference matched, what it rewrites to, and a proof of the equation that way
round.

Which way round the equation was used is read off the recorded side, which is
one of the equation's own arguments; the recorded substitution is what states
that side in the premise's own variables.
-/
private def orientedEquation (parent : Vampire.Unit) (use : PremiseUse)
    (proof stated : Expr) : ReconstructM (Expr × Expr × Expr) := do
  let some (_, lhs, rhs) := (← instantiateMVars stated).eq?
    | throwError "expected an equation from step {parent.number}, got\
        {indentExpr stated}"
  let some literal := use.literal
    | throwError "no literal was recorded for the equation used from step \
        {parent.number}"
  if ← recordedSideIsLeft parent use literal.toNat then
    return (lhs, rhs, proof)
  return (rhs, lhs, ← mkEqSymm proof)

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
  /-- The trees of the premise's terms, the target's among them. -/
  trees : TreeCache

private def rewrittenOf (parent : Vampire.Unit) (use : PremiseUse) (vars : Vars) :
    ReconstructM Rewritten := do
  let some literal := use.literal
    | throwError "no rewritten literal was recorded against step {parent.number}"
  let some rewritten := use.term
    | throwError "no rewritten term was recorded against step {parent.number}"
  let some clause := parent.clause?
    | throwError "the rewritten premise, step {parent.number}, is not a clause"
  let bindings := Std.HashMap.ofList use.bindings.toList
  let trees ← TreeCache.new
  return { literals := clause.literals, bindings, literal := literal.toNat
           wholePremise := use.rewritesWholePremise
           target := ← treeOf trees vars bindings rewritten, trees }

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
      literalAt rw.trees vars rw.bindings l (x.map (rw.target, ·))
    else
      literalAt rw.trees vars rw.bindings l none
  sharedClause (junction ``Or ``False parts)

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
  let parts ← countedParts ``Or stated rw.literals.size
  let some l := rw.literals[rw.literal]?
    | throwError "the premise has no literal {rw.literal}"
  let rewritten ← literalAt rw.trees vars rw.bindings l (some (rw.target, to))
  sharedClause (junction ``Or ``False (parts.set! rw.literal rewritten))

/--
The rewritten premise, from a proof `proof` of what it says, `stated`, and
`heq : t = to` for the term `t` the inference rewrote: the rewrite made inside
the clause, where it stands, with one substitution. With what it then says.
-/
private def rewriteClause (rw : Rewritten) (vars : Vars) (stated proof heq to : Expr) :
    ReconstructM (Expr × Expr) := do
  let «from» := rw.target.toExpr
  let τ ← inferType «from»
  let motive ← withLocalDeclD `x τ fun x => do
    mkLambdaFVars #[x] (← clauseRewritten rw vars stated x)
  let rewritten ← mkAppOptM ``Eq.subst
    #[some τ, some motive, some «from», some to, some heq, some proof]
  return (rewritten, ← clauseRewritten rw vars stated to)

/-- `forward_demodulation`: the premise with one literal rewritten. -/
def demodulation (step : Step) : ReconstructM Expr := do
  let (⟨mainParent, mainProof, mainStated⟩, ⟨sideParent, sideProof, sideStated⟩) ← step.twoPremises
  let mainUse ← step.useAt 0
  let sideUse ← step.useAt 1
  step.underVars fun kept target => do
    -- Rewriting can be what removes a variable from the clause.
    let vars ← coverVars kept step.unit.boundVarSorts
    let rw ← rewrittenOf mainParent mainUse vars
    let (mainAt, mainType) ← instantiateAt mainParent mainUse vars mainProof mainStated
    let (sideAt, sideType) ← instantiateAt sideParent sideUse vars sideProof sideStated
    let (_, to, heq) ← orientedEquation sideParent sideUse sideAt sideType
    -- What the premise says once rewritten is what the conclusion says, up to
    -- the order its literals come in.
    let (rewritten, says) ← rewriteClause rw vars mainType mainAt heq to
    carryAll says target rewritten (placed := step.placedAt 0)
      (sourceCount := mainParent.clauseSize?) (targetCount := step.unit.clauseSize?)

/--
`superposition`: the clause being rewritten and the equation rewriting it, both
at the unifier, with the rewritten literal in place of the equation's.
-/
def superposition (step : Step) : ReconstructM Expr := do
  let (⟨mainParent, mainProof, mainStated⟩, ⟨sideParent, sideProof, sideStated⟩) ← step.twoPremises
  let mainUse ← step.useAt 0
  let sideUse ← step.useAt 1
  let some equationLiteral := sideUse.literal
    | throwError "{step.rule.name} did not record which literal is the equation"
  step.underVars fun kept target => do
    let vars ← coverVars kept step.unit.boundVarSorts
    let rw ← rewrittenOf mainParent mainUse vars
    let (mainAt, mainType) ← instantiateAt mainParent mainUse vars mainProof mainStated
    let (sideAt, sideType) ← instantiateAt sideParent sideUse vars sideProof sideStated
    -- The equation is a literal of its own premise, so the case where it holds
    -- is the one that rewrites -- the premise rewritten where it stands, as a
    -- demodulation rewrites it, and then carried; its other literals are
    -- literals of the conclusion. The equation is cased on once, however
    -- many of the rewritten premise's literals the rewrite reaches.
    step.withInto target fun into =>
      carryPast sideType target sideAt into (· == equationLiteral.toNat)
        (placed := step.placedAt 1) (sourceCount := sideParent.clauseSize?)
        (fun _ hSide => do
          let («from», to, heq) ←
            orientedEquation sideParent sideUse hSide (← inferType hSide)
          let rewriteBy (heq : Expr) : ReconstructM Expr := do
            let (rewritten, says) ← rewriteClause rw vars mainType mainAt heq to
            carryAll says target rewritten (placed := step.placedAt 0) (into := into)
              (sourceCount := mainParent.clauseSize?)
          let source := rw.target.toExpr
          if step.unit.constraints.isEmpty then
            return ← rewriteBy heq
          -- An abstracting unifier did not make the rewritten term and the
          -- equation's side one: what it could not unify it left as
          -- disequalities among the conclusion's literals, between subterms
          -- of the two. So either one of those holds, and it is the
          -- conclusion, or each pair is equal, the two terms are equal by
          -- congruence at those pairs, and the equation rewrites the premise
          -- once composed with that.
          underConstraints step into fun equal => do
            let some same ← equalUnder equal source «from»
              | throwError "step {step.unit.number}: the rewritten term\
                  {indentExpr source}\nand the side of the equation\
                  {indentExpr «from»}\nare not equal even assuming the \
                  unifier's deferred constraints"
            rewriteBy (← mkEqTrans same heq))

/--
`inner_rewriting`: a clause with one of its own disequalities `l ≠ r` used to
rewrite `l` to `r` in each of its other literals, wherever vampire's term `l`
occurs in them.

Either the disequality holds, and it is a literal of the conclusion, or `l = r`
and each other literal becomes what it was rewritten to. Which disequality and
which way round come recorded, and so does where each literal -- rewritten or
not -- went.
-/
def innerRewriting (step : Step) : ReconstructM Expr := do
  let ⟨parent, premiseProof, premiseStated⟩ ← step.onlyPremise
  let some clause := parent.clause?
    | throwError "inner rewriting should be given a clause"
  let use ← step.useAt 0
  let some rewriting := use.literal
    | throwError "inner rewriting did not record the disequality it rewrote with"
  let i := rewriting.toNat
  let leftRewritten ← recordedSideIsLeft parent use i
  let count := clause.literals.size
  step.underVars fun kept target => do
    -- Rewriting substitutes nothing, but it can rewrite a variable away.
    let (vars, args) ← premiseVars parent (← coverVars kept step.unit.boundVarSorts)
    let premiseAt := mkAppN premiseProof args
    let parts ← countedParts ``Or (← instantiateForall premiseStated args) count

    let some equation := parts[i]?.bind (·.not?)
      | throwError "the literal inner rewriting rewrote with is not a disequality"
    let some (_, a, b) := equation.eq?
      | throwError "the literal inner rewriting rewrote with is not a disequality"
    -- The side rewritten away; the equation turned to rewrite it is `lr`.
    let l := if leftRewritten then a else b
    let some sideTerm := use.term
      | throwError "inner rewriting did not record which side it rewrote"
    let trees ← TreeCache.new
    let side ← treeOf trees vars {} sideTerm
    let placed := step.placedAt 0
    step.withInto target fun into =>
    elimGiven parts (motive? := some target) (fun k h => do
      if k == i then return ← into.placeAt placed i h
      let holds ← withLocalDeclD `h equation fun heq => do
        let lr ← if leftRewritten then pure heq else mkEqSymm heq
        let some literal := clause.literals[k]? | throwError "a missing literal"
        -- Which occurrences are rewritten is settled on vampire's terms, as for
        -- any rewrite: the side is replaced wherever the premise's literal has
        -- that term, not wherever its Lean expression happens to appear.
        let rewritten ← withLocalDeclD `x (← inferType l) fun x => do
          let abstracted ← literalAt trees vars {} literal (some (side, x))
          unless abstracted.containsFVar x.fvarId! do return h
          let motive ← mkLambdaFVars #[x] abstracted
          mkEqMP (← mkCongrArg motive lr) h
        let rewritten ← mkExpectedTypeHint rewritten
          (← instantiateMVars (← inferType rewritten)).headBeta
        mkLambdaFVars #[heq] (← into.placeAt placed k rewritten)
      let fails ← withLocalDeclD `h (mkApp (mkConst ``Not) equation) fun hne => do
        mkLambdaFVars #[hne] (← into.placeAt placed i hne)
      mkAppM ``Classical.byCases #[holds, fails]) premiseAt

end Vampire.Reconstruct.Rewrite
