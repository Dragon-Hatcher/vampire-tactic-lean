import Vampire.Reconstruct.Basic

/-!
Clausification.

`NewCNF::clausify` works on a set of generalised clauses -- disjunctions of
signed subformulas, together with what the variables they quantify have been
bound to. It starts from the formula itself and replaces one signed subformula
at a time: a conjunction at positive polarity gives one clause per conjunct, a
disjunction gives all its disjuncts at once, an equivalence gives two clauses,
a quantifier is either instantiated or skolemised according to the polarity it
occurs with, and a subformula occurring too often is replaced by a name. When
nothing but literals is left, each clause is written out.

Every one of those replacements holds on its own, so replay follows them, one
recorded step at a time. Which conjunct a clause came from, which way round an
equivalence was taken, and what a quantifier was skolemised at are not searched
for: the fork records them.
-/

namespace Vampire.Reconstruct.Clausify

open Lean Meta

/-- What a signed subformula says. -/
private def genLit (sorts : Array (UInt32 × String)) (vars : Vars)
    (l : Formula × Bool) : ReconstructM Expr := do
  let stated ← Reconstruct.formula sorts vars l.1
  return if l.2 then stated else mkApp (mkConst ``Not) stated

/-- What a generalised clause says: the disjunction of its signed subformulas. -/
private def genParts (sorts : Array (UInt32 × String)) (vars : Vars)
    (c : GenClause) : ReconstructM (Array Expr) :=
  c.literals.mapM (genLit sorts vars)

/-- The variables a quantifier binds, with their sorts. -/
private def boundOf (sorts : Array (UInt32 × String)) (f : Formula) :
    Array (UInt32 × String) :=
  f.boundVars.filterMap fun v => (sorts.find? (·.1 == v)).map fun (_, s) => (v, s)

/--
Whether a quantifier is skolemised where it occurs: it is at the polarity that
makes it existential, and instantiated at the other.
-/
private def skolemises (connective : Connective) (sign : Bool) : Bool :=
  match connective with
  | .«exists» => sign
  | .«forall» => !sign
  | _ => false

/--
Binds the symbols a quantifier's skolemisation introduced.

The block `∃ x₁ … xₙ, φ` is witnessed one variable at a time: the symbol for
`xᵢ` stands for a witness to what remains once the ones before it are chosen,
which is what Hilbert choice gives. A universal block at negative polarity is
the same read through its failing.
-/
private def registerBlock (sorts : Array (UInt32 × String)) (positive : Bool)
    (skolems : Std.HashMap UInt32 Term) (vars : Vars) (f : Formula) :
    ReconstructM PUnit := do
  let some body := f.subformulas[0]? | throwError "a quantifier without a body"
  let rec go (rest : List (UInt32 × String)) (vars : Vars) : ReconstructM PUnit := do
    match rest with
    | [] => return
    | (v, sortName) :: rest =>
      let some skolemTerm := skolems[v]?
        | throwError "no skolem recorded for X{v}"
      let some symbol := skolemTerm.symbol?
        | throwError "the skolem term for X{v} has no symbol"
      -- Several clauses come out of one clausification and share its steps, so
      -- a symbol is bound once and read back afterwards.
      let witness ←
        if ← resolvesSymbol symbol.name then
          term vars skolemTerm
        else
          let τ ← sortType sortName
          let predicate ← withLocalDeclD (Name.mkSimple s!"X{v}") τ fun x => do
            mkLambdaFVars #[x] (← blockProp positive sorts rest (vars.insert v x) body)
          let (witness, _) ← epsilon τ predicate
          registerSkolem skolems vars v witness
          pure witness
      go rest (vars.insert v witness)
  go (boundOf sorts f).toList vars

/--
A proof of the body of a skolemised block, at the symbols that were chosen for
it.

The witnesses are the same terms `registerBlock` bound those symbols to, so
what the block says of them is what Hilbert choice says.
-/
private def peelBlock (sorts : Array (UInt32 × String)) (positive : Bool)
    (vars : Vars) (f : Formula) (h : Expr) : ReconstructM (Vars × Expr) := do
  let some body := f.subformulas[0]? | throwError "a quantifier without a body"
  let rec go (rest : List (UInt32 × String)) (vars : Vars) (h : Expr) :
      ReconstructM (Vars × Expr) := do
    match rest with
    | [] => return (vars, h)
    | (v, sortName) :: rest =>
      let τ ← sortType sortName
      let predicate ← withLocalDeclD (Name.mkSimple s!"X{v}") τ fun x => do
        mkLambdaFVars #[x] (← blockProp positive sorts rest (vars.insert v x) body)
      let (witness, choice) ← epsilon τ predicate
      -- At negative polarity what is at hand refutes a universal, and that a
      -- universal fails is that something fails it.
      let existence ←
        if positive then pure h
        else
          let some quantified := (← instantiateMVars (← inferType h)).not?
            | throwError "a universal block is not refuted by{indentExpr h}"
          let .forallE n τ' inner bi := quantified
            | throwError "a universal block is not one:{indentExpr quantified}"
          mkAppM ``Iff.mp
            #[← mkAppOptM ``Classical.not_forall
                #[some τ', some (Expr.lam n τ' inner bi)], h]
      go rest (vars.insert v witness) (← mkAppM ``Iff.mp #[choice, existence])
  go (boundOf sorts f).toList vars h

/-- Which of `parts` says what `e` does. -/
private def indexOfPart (parts : Array Expr) (e : Expr) : ReconstructM Nat := do
  for (part, i) in parts.zipIdx do
    if ← isDefEq part e then
      return i
  throwError "nothing among the clause's parts says{indentExpr e}"

/-- Everything replaying one clausification needs to hand. -/
private structure Replay where
  sorts : Array (UInt32 × String)
  vars : Vars
  /-- A proof of the formula being clausified. -/
  premise : Expr

mutual

/--
A proof of what a generalised clause says.

By refutation: suppose it fails, and then the clause it was reached from cannot
hold either -- every position it kept fails with this one, and the position
that was replaced fails by the step that replaced it.
-/
private partial def prove (r : Replay) (c : GenClause) : ReconstructM Expr := do
  let parts ← genParts r.sorts r.vars c
  let target := junction ``Or ``False parts
  let contradiction ←
    withLocalDeclD `n (mkApp (mkConst ``Not) target) fun n => do
      let refuted (e : Expr) : ReconstructM Expr := do
        -- What a step put in a clause is recorded before the clausifier's own
        -- normalisation has unwrapped a negation into the sign it carries.
        for (part, i) in parts.zipIdx do
          let some says ← sameUpToDoubleNegation part e | continue
          let refutation ← withLocalDeclD `p part fun p => do
            mkLambdaFVars #[p] (mkApp n (← injectGiven parts i p))
          return ← mkAppM ``Iff.mp #[← mkAppM ``not_congr #[says], refutation]
        throwError "the clause does not say{indentExpr e}\nwhich a step it was \
          reached from does"
      let body ←
        match c.parent? with
        | none => root r parts refuted
        | some p => do
          let stated ← genParts r.sorts r.vars p
          let some position := c.position?
            | throwError "a clausification step without the position it replaced"
          elimGiven stated (fun i h => do
              if i == position.toNat then
                replaced r c p position.toNat h refuted
              else
                -- A position the step kept is one of this clause's own.
                return mkApp (← refuted (← instantiateMVars (← inferType h))) h)
            (← prove r p)
      mkLambdaFVars #[n] body
  mkAppM ``Iff.mp
    #[← mkAppOptM ``Classical.not_not #[some target], contradiction]

/--
The clauses clausification begins at: the formula itself, and, for a subformula
it names, that the name and the subformula say the same thing.
-/
private partial def root (r : Replay) (parts : Array Expr)
    (refuted : Expr → ReconstructM Expr) : ReconstructM Expr := do
  if h : parts.size = 1 then
    return mkApp (← refuted parts[0]) r.premise
  if parts.size == 2 then
    -- A name stands for what it names, so the two parts are one thing under
    -- opposite signs and refuting both is a contradiction outright.
    let (positive, negative) :=
      if (parts[0]!).not?.isSome then (parts[1]!, parts[0]!) else (parts[0]!, parts[1]!)
    let some inner := negative.not?
      | throwError "neither part of a definition is a negation"
    unless ← isDefEq inner positive do
      throwError "a definition's parts{indentExpr positive}\nand\
        {indentExpr negative}\nare not each other's negation"
    return mkApp (← refuted negative) (← refuted positive)
  throwError "clausification began at a clause of {parts.size} parts, which is \
    neither the formula nor a definition"

/--
The step that replaced one position: what was put there follows from what was
there, so refuting all of it refutes what was there.
-/
private partial def replaced (r : Replay) (c p : GenClause) (position : Nat)
    (h : Expr) (refuted : Expr → ReconstructM Expr) : ReconstructM Expr := do
  let some (g, sign) := p.literals[position]?
    | throwError "a clausification step replaced a position that is not there"
  let stated ← genLit r.sorts r.vars (g, sign)
  let replacement := c.replacement
  -- What the step put there, refuted.
  let against ← replacement.mapM fun l => do refuted (← genLit r.sorts r.vars l)
  -- Naming, and the shuffling of a negation between a formula and its sign,
  -- leave what is said untouched.
  if h' : replacement.size = 1 then
    if ← isDefEq (← genLit r.sorts r.vars replacement[0]) stated then
      return mkApp against[0]! h
  if replacement.isEmpty then
    -- A constant: either the clause said `False`, or it said `¬True`.
    if stated.isConstOf ``False then
      return h
    if let some inner := stated.not? then
      if inner.isConstOf ``True then
        return mkApp h (mkConst ``True.intro)
    throwError "a clausification step replaced{indentExpr stated}\nby nothing"
  let subs := g.subformulas
  let parts ← subs.mapM (Reconstruct.formula r.sorts r.vars)
  -- Which of the step's replacements is a given subformula of `g`. The
  -- replacements come in the order the clausifier built them, which is not the
  -- order of the subformulas, so they are told apart by which formula they are.
  let replacementOf (j : Nat) : ReconstructM (Bool × Expr) := do
    let some sub := subs[j]?
      | throwError "a junction has no part {j}"
    for ((f, sign), i) in replacement.zipIdx do
      if f == sub then
        let some negation := against[i]?
          | throwError "a replacement without a refutation"
        return (sign, negation)
    throwError "a part of a junction is not among what replaced it"
  -- The only replacement there is, whatever subformula it is of.
  let only : ReconstructM (Nat × Bool × Expr) := do
    let some (f, sign) := replacement[0]?
      | throwError "a step replaced a position by nothing"
    let some negation := against[0]?
      | throwError "a replacement without a refutation"
    for (sub, j) in subs.zipIdx do
      if f == sub then
        return (j, sign, negation)
    throwError "what a step put in place of a junction is not one of its parts"
  -- `a` from a refutation of `¬a`, and `¬a` from one of `a`.
  let held (sign : Bool) (negation : Expr) : ReconstructM Expr := do
    if sign then
      return negation
    -- A refutation states itself as an arrow or as a negation according to how
    -- it was built, and the two are the same thing.
    let some inner := asNegation (← instantiateMVars (← inferType negation))
      | throwError "a refutation is not one"
    let some innermost := asNegation inner
      | throwError "a refutation of a negation is not one"
    mkAppM ``Iff.mp #[← mkAppOptM ``Classical.not_not #[some innermost], negation]
  match ← connectiveOf g with
  | .and =>
    if sign then
      let (j, _, negation) ← only
      return mkApp negation (← projectGiven parts j h)
    else
      return mkApp h (← introGiven parts fun j => do
        let (sign, negation) ← replacementOf j
        held sign negation)
  | .or =>
    if sign then
      return ← elimGiven parts (fun j hj => do
        let (_, negation) ← replacementOf j
        return mkApp negation hj) h
    else
      let (j, sign', negation) ← only
      return mkApp h (← injectGiven parts j (← held sign' negation))
  | .iff | .xor =>
    let #[left, right] := parts
      | throwError "an equivalence of {parts.size} parts"
    let (leftSign, leftAgainst) ← replacementOf 0
    let (rightSign, rightAgainst) ← replacementOf 1
    -- What is at hand is the equivalence, or its failing; which of the two is
    -- settled by the connective and the polarity together.
    let equivalence ← do
      let isIff := (← connectiveOf g) matches .iff
      if isIff == sign then
        -- `⟦l <=> r⟧` at positive polarity, or `⟦l <+> r⟧` at negative.
        if isIff then pure h
        else
          let some inner := stated.not?
            | throwError "the failing of an exclusive or is not a negation"
          let some innermost := inner.not?
            | throwError "the failing of an exclusive or is not a negation"
          mkAppM ``Iff.mp
            #[← mkAppOptM ``Classical.not_not #[some innermost], h]
      else pure h
    let isIff := (← connectiveOf g) matches .iff
    if isIff == sign then
      -- The two sides are taken at opposite signs: one holds and the other
      -- fails, which the equivalence cannot allow.
      if leftSign then
        return mkApp leftAgainst
          (← mkAppM ``Iff.mpr #[equivalence, ← held rightSign rightAgainst])
      else
        return mkApp rightAgainst
          (← mkAppM ``Iff.mp #[equivalence, ← held leftSign leftAgainst])
    else
      -- The two sides are taken at the same sign, so both hold or both fail,
      -- and either way they are equivalent -- which is what is refuted.
      let sides ←
        if leftSign then
          mkAppOptM ``iff_of_false
            #[some left, some right, some (← held leftSign leftAgainst),
              some (← held rightSign rightAgainst)]
        else
          mkAppOptM ``iff_of_true
            #[some left, some right, some (← held leftSign leftAgainst),
              some (← held rightSign rightAgainst)]
      return mkApp equivalence sides
  | .«forall» | .«exists» =>
    let bound := boundOf r.sorts g
    let isExists := (← connectiveOf g) matches .«exists»
    let some negation := against[0]?
      | throwError "a quantifier replaced by nothing"
    if skolemises (← connectiveOf g) sign then
      let (_, body) ← peelBlock r.sorts sign r.vars g h
      -- What the block leaves and what the step recorded in its place can meet
      -- with a double negation between them, for the same reason a literal can:
      -- the record is taken before the clausifier's own normalisation.
      let some refuted := asNegation (← instantiateMVars (← inferType negation))
        | throwError "a quantifier's replacement is not refuted"
      let stated ← instantiateMVars (← inferType body)
      if ← isDefEq refuted stated then
        return mkApp negation body
      let some says ← sameUpToDoubleNegation stated refuted
        | throwError "a skolemised block leaves{indentExpr stated}\nwhich is \
          not what the step put in its place"
      return mkApp negation (← mkAppM ``Iff.mp #[says, body])
    else
      -- The quantifier is instantiated, at the variables the clause keeps.
      let args ← bound.mapM fun (v, sortName) => do
        match r.vars[v]? with
        | some x => pure x
        | none => someElement (← sortType sortName)
      if isExists then
        -- Nothing satisfies it, and yet the step says something does of the
        -- variables the clause keeps. What each witness is a witness to is
        -- read off the quantifier: the body may not mention the variable, or
        -- may mention the same term elsewhere, and then nothing about the
        -- proof says which occurrences the quantifier stood over.
        let some body := g.subformulas[0]? | throwError "a quantifier without a body"
        let mut instantiated := r.vars
        for ((v, _), arg) in bound.zip args do
          instantiated := instantiated.insert v arg
        let mut witnessed ← held false negation
        for j in (List.range bound.size).reverse do
          let some (v, sortName) := bound[j]? | throwError "a quantifier's variable"
          let τ ← sortType sortName
          let rest := (bound.extract (j + 1) bound.size).toList
          let predicate ← withLocalDeclD (Name.mkSimple s!"X{v}") τ fun x => do
            mkLambdaFVars #[x]
              (← blockProp true r.sorts rest (instantiated.insert v x) body)
          witnessed ← mkAppOptM ``Exists.intro
            #[some τ, some predicate, some args[j]!, some witnessed]
        return mkApp h witnessed
      else
        return mkApp negation (mkAppN h args)
  | c => throwError "cannot replay a clausification step on {repr c}"

end

/--
Binds every symbol a unit's clausification introduced by skolemising.

Where each skolemisation happened is read off the recorded steps rather than
looked for: `newcnf` skolemises a subformula at the polarity it occurs with,
and for a universal inside an equivalence that is not anywhere an existential
can be found.
-/
private partial def registerAlong (sorts : Array (UInt32 × String))
    (skolems : Std.HashMap UInt32 Term) (c : GenClause) : ReconstructM PUnit := do
  let some parent := c.parent? | return
  registerAlong sorts skolems parent
  let some position := c.position? | return
  let some (replaced, sign) := parent.literals[position.toNat]?
    | throwError "a clausification step replaced a position that is not there"
  unless skolemises (← connectiveOf replaced) sign do return
  let bound := boundOf sorts replaced
  -- The same variable is skolemised once for each occurrence of the quantifier
  -- that calls for it, and to a symbol of its own each time, so which symbol
  -- this occurrence introduced is read off the clause it left it bound in
  -- rather than off the step, which records them all under the one variable.
  let occurrence := Std.HashMap.ofList c.bindings.toList
  let skolems := bound.foldl (init := skolems) fun acc (v, _) =>
    match occurrence[v]? with
    | some image => acc.insert v image
    | none => acc
  -- A variable the quantifier's body mentions is either an argument of the
  -- symbols being introduced, and stands for itself, or one the clause has
  -- already bound, and stands for what it was bound to -- which is why the
  -- symbol does not take it as an argument.
  let bindings := Std.HashMap.ofList parent.bindings.toList
  let arguments := sorts.filter fun (v, _) =>
    !bound.any (·.1 == v) && !bindings.contains v
  withVars arguments {} fun vars _ => do
    let mut vars := vars
    -- A binding can stand on another, so keep reading them until none is left.
    let mut pending := parent.bindings
    repeat
      let before := pending.size
      let mut again := #[]
      for (v, image) in pending do
        match ← (try pure (some (← term vars image)) catch _ => pure none) with
        | some e => vars := vars.insert v e
        | none => again := again.push (v, image)
      pending := again
      if pending.isEmpty || pending.size == before then break
    registerBlock sorts sign skolems vars replaced

def registerSkolemsOf (u : Vampire.Unit) : ReconstructM PUnit := do
  let some clause := u.genClause? | return
  let skolems := Std.HashMap.ofList
    (u.skolems ++ u.parents.flatMap (·.skolems)).toList
  if skolems.isEmpty then return
  registerAlong (u.parents.flatMap (·.varSorts) ++ u.varSorts) skolems clause

/-!
The other clausifier, `CNF::clausify`, walks a formula in negation normal form
instead: it takes every disjunct of a disjunction into the clause it is
building, drops each universal, and takes each conjunct of a conjunction into a
clause of its own. So a clause is one path through the conjunctions, and which
conjunct each of them contributed comes recorded.
-/

/-- A proof of `⟦f⟧ → target`, along the recorded path through `f`. -/
private partial def descend (sorts : Array (UInt32 × String))
    (choices : Array (Formula × UInt32)) (vars : Vars) (f : Formula)
    (target : Expr) : ReconstructM Expr := do
  match ← connectiveOf f with
  | .«forall» =>
    let some body := f.subformulas[0]? | throwError "a quantifier without a body"
    -- Read the quantifier before extending `vars`, so its own binders are the
    -- ones `formula` introduces rather than anything instantiated below.
    let hypothesis ← Reconstruct.formula sorts vars f
    -- Instantiate rather than bind: the clause has its own binders already.
    let mut vars := vars
    let mut args := #[]
    for v in f.boundVars do
      let arg ←
        match vars[v]? with
        | some x => pure x
        | none =>
          let some (_, sortName) := sorts.find? (·.1 == v)
            | throwError "variable X{v} has no recorded sort"
          someElement (← sortType sortName)
      vars := vars.insert v arg
      args := args.push arg
    let rest ← descend sorts choices vars body target
    withLocalDeclD `h hypothesis fun h => do
      mkLambdaFVars #[h] (mkApp rest (mkAppN h args))
  | .and =>
    -- The clause came from one conjunct, the recorded one.
    let parts ← f.subformulas.mapM (Reconstruct.formula sorts vars)
    let some (_, argument) := choices.find? fun (node, _) => node == f
      | throwError "nothing says which conjunct of{indentExpr
          (Reconstruct.junction ``And ``True parts)}\nthis clause came from"
    let some conjunct := f.subformulas[argument.toNat]?
      | throwError "a clause came from conjunct {argument}, which is not there"
    let rest ← descend sorts choices vars conjunct target
    let whole := Reconstruct.junction ``And ``True parts
    withLocalDeclD `h whole fun h => do
      mkLambdaFVars #[h] (mkApp rest (← projectGiven parts argument.toNat h))
  | .or =>
    -- Every disjunct is taken into the same clause, so each must lead to it.
    let parts ← f.subformulas.mapM (Reconstruct.formula sorts vars)
    let branches ← f.subformulas.mapM (descend sorts choices vars · target)
    let whole := Reconstruct.junction ``Or ``False parts
    withLocalDeclD `h whole fun h => do
      mkLambdaFVars #[h]
        (← elimGiven parts (fun i hi => do
          let some branch := branches[i]? | throwError "a missing disjunct"
          return mkApp branch hi) h)
  | .«false» =>
    withLocalDeclD `h (mkConst ``False) fun h => do
      mkLambdaFVars #[h] (← mkAppOptM ``False.elim #[some target, some h])
  | _ =>
    -- A literal, which the clause has to contain.
    let literal ← Reconstruct.formula sorts vars f
    withLocalDeclD `h literal fun h => do
      mkLambdaFVars #[h] (← placeLiteral target h)

/-- `clausify`: one clause of a formula's conjunctive normal form. -/
def clausify (step : Step) : ReconstructM Expr := do
  let #[(premiseProof, _)] := step.premises
    | throwError "clausify should have one premise, got {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "clausify without a premise"
  let some premise := parent.formula?
    | throwError "clausify should be given a formula"
  let sorts := parent.varSorts ++ step.unit.varSorts
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut vars : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      vars := vars.insert v x
    match step.unit.genClause? with
    | some clause =>
      -- A variable the clause quantifies stands for what it was bound to;
      -- one the clause kept stands for the local the conclusion binds for it.
      for (v, image) in clause.bindings do
        vars := vars.insert v (← term vars image)
      let proof ← prove { sorts, vars, premise := premiseProof } clause
      let place := placeLiteral target
      mkLambdaFVars xs
        (← elimGiven (← genParts sorts vars clause) (fun _ h => place h) proof)
    | none =>
      let implication ←
        descend sorts step.unit.conjunctChoices vars premise target
      mkLambdaFVars xs (mkApp implication premiseProof)
end Vampire.Reconstruct.Clausify
