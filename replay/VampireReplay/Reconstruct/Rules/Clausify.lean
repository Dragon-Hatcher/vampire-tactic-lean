import VampireReplay.Reconstruct.Basic
import VampireReplay.Reconstruct.Rules.Clause

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
  boundSorts sorts f.boundVars

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
  let block := boundOf sorts f
  let qs ← blockPredicates positive sorts block vars body
  let mut witnesses := #[]
  let mut vars := vars
  for ((v, sortName), i) in block.zipIdx do
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
        let (witness, _) ← epsilon (← sortType sortName) (blockPredicate qs i witnesses)
        registerSkolem skolems vars v witness
    witnesses := witnesses.push witness
    vars := vars.insert v witness

/--
A proof of the body of a skolemised block, at the symbols that were chosen for
it.

The witnesses are the same terms `registerBlock` bound those symbols to, so
what the block says of them is what Hilbert choice says.
-/
private def peelBlock (sorts : Array (UInt32 × String)) (positive : Bool)
    (skolems : Std.HashMap UInt32 Term) (vars : Vars) (f : Formula) (h : Expr) :
    ReconstructM (Vars × Expr) := do
  let some body := f.subformulas[0]? | throwError "a quantifier without a body"
  let block := boundOf sorts f
  let qs ← blockPredicates positive sorts block vars body
  let mut witnesses := #[]
  let mut vars := vars
  let mut h := h
  for ((v, sortName), i) in block.zipIdx do
    let τ ← sortType sortName
    let predicate := blockPredicate qs i witnesses
    let (_, choice) ← epsilon τ predicate
    -- The symbol `registerBlock` bound to that choice.
    let some skolemTerm := skolems[v]?
      | throwError "no skolem recorded for X{v}"
    let witness ← term vars skolemTerm
    let choice ← choiceAt τ predicate choice witness
    let level ← getLevel τ
    let existenceProp := mkApp2 (mkConst ``Exists [level]) τ predicate
    -- At negative polarity what is at hand refutes a universal, and that a
    -- universal fails is that something fails it.
    let existence ←
      if positive then pure h
      else
        let some quantified := (← instantiateMVars (← inferType h)).not?
          | throwError "expected the refutation of a universal block, got{indentExpr h}"
        let .forallE n τ' inner bi := quantified
          | throwError "expected a universal quantifier, got{indentExpr quantified}"
        let over := Expr.lam n τ' inner bi
        pure (mkApp4 (mkConst ``Iff.mp)
          (mkApp (mkConst ``Not) quantified)
          (mkApp2 (mkConst ``Exists [← getLevel τ'])
            τ' (.lam n τ' (mkApp (mkConst ``Not) inner) bi))
          (mkApp2 (mkConst ``Classical.not_forall [← getLevel τ']) τ' over) h)
    h := mkApp4 (mkConst ``Iff.mp) existenceProp (mkApp predicate witness).headBeta
      choice existence
    witnesses := witnesses.push witness
    vars := vars.insert v witness
  -- What is left is the block's body at the witnesses, which the choices
  -- state through the definition `blockPredicates` gave it; stated as the
  -- body itself, it is what the step put in the block's place.
  let stated ← formula sorts vars body
  return (vars, ← mkExpectedTypeHint h (if positive then stated else mkNot stated))

/--
The parts of a signed subformula, taken apart rather than built again.

What a step put in a clause is a part of what it replaced, so the clause it
reached says nothing the clause it came from had not said already.

`stated` is what the signed subformula says as a clause states it, which is
built the way `genLit` builds it or taken apart from something that was: so a
junction, an equivalence or a negation is always in the shape its connective
gives it, and one that is not is a mistake rather than something to rebuild.
-/
private def subformulaParts (sorts : Array (UInt32 × String)) (vars : Vars)
    (g : Formula) (sign : Bool) (stated : Expr) : ReconstructM (Array Expr) := do
  let body : ReconstructM Expr := do
    if sign then return stated
    let some inner := stated.not?
      | throwError "expected a negated subformula, got{indentExpr stated}"
    return inner
  let subs := g.subformulas
  let sides (e : Expr) : ReconstructM (Array Expr) := do
    unless e.isAppOfArity ``Iff 2 do
      throwError "expected an equivalence, got{indentExpr e}"
    return #[e.appFn!.appArg!, e.appArg!]
  let negated (e : Expr) : ReconstructM Expr := do
    let some inner := e.not?
      | throwError "expected a negation, got{indentExpr e}"
    return inner
  match ← connectiveOf g with
  | .and => countedParts ``And (← body) subs.size
  | .or => countedParts ``Or (← body) subs.size
  | .iff => sides (← body)
  | .xor => sides (← negated (← body))
  | .not => return #[← negated (← body)]
  | _ => subs.mapM (Reconstruct.formula sorts vars)

/--
What a literal a step pushed says, from the part it went to: the same, unless
the push turned `¬f` at a negative sign into `f` at a positive one, which the
part states as `f` and the literal as `¬¬f`.
-/
private def pushedStatement (part : Expr) (sign turned : Bool) : Expr :=
  if turned && !sign then mkNot (mkNot part) else part

/-- The part a pushed literal went to, from what the literal says. -/
private def pushedPart (statement : Expr) (sign turned : Bool) : ReconstructM Expr := do
  unless turned && !sign do return statement
  let some part := statement.not? >>= Expr.not?
    | throwError "clausify: a literal pushed turned at a negative sign, which is \
        no negation{indentExpr statement}"
  return part

/-- Where a step recorded its `pushed`th literal went, and whether it was turned. -/
private def landing (c : GenClause) (pushed : Nat) : ReconstructM (Nat × Bool) := do
  let some landed := c.placements[pushed]?
    | throwError "clausify: nothing records where literal {pushed} a step pushed went"
  return landed

/--
Which literal a step extending its parent pushed for the parent's `i`th: the
step pushes the parent's literals in order, what it replaced `position` by in
that position's place.
-/
private def keptPushed (c : GenClause) (position i : Nat) : Nat :=
  if i < position then i else i - 1 + c.replacement.size

private def genPartsFrom (sorts : Array (UInt32 × String)) (vars : Vars)
    (c : GenClause) (parent : Array (Formula × Bool)) (parentParts : Array Expr) :
    ReconstructM (Array Expr) := do
  let some position := c.position?
    | throwError "a clausification step without the position it replaced"
  let position := position.toNat
  match c.how with
  | .introduced => throwError "a clause clausification started from has no parent"
  | .replaced | .named =>
    -- Rewritten in place: every other position stays where it was.
    let some l := c.literals[position]?
      | throwError "a clausification step replaced a position that is not there"
    unless position < parentParts.size do
      throwError "a clausification step replaced a position that is not there"
    return parentParts.set! position (← genLit sorts vars l)
  | .extended =>
  let some (g, sign) := parent[position]?
    | throwError "a clausification step replaced a position that is not there"
  let some part := parentParts[position]?
    | throwError "a clausification step replaced a position that is not there"
  -- What the step put there is made of the parts of what it replaced, taken
  -- apart rather than built again.
  let subParts? ← do
    match ← connectiveOf g with
    | .«forall» | .«exists» | .name | .literal => pure none
    | _ => pure (some (← subformulaParts sorts vars g sign part))
  let statementOf (l : Formula × Bool) : ReconstructM Expr := do
    if let some subParts := subParts? then
      if let some j := g.subformulas.findIdx? (· == l.1) then
        if let some sub := subParts[j]? then
          return if l.2 then sub else mkNot sub
    genLit sorts vars l
  -- The literals in the order the step pushed them: each goes where it was
  -- recorded to, and one repeating a literal already there goes with it.
  let mut parts : Array (Option Expr) := c.literals.map fun _ => none
  let pushed : Array (ReconstructM (Expr × Bool)) :=
    (parentParts.extract 0 position).map (fun p => pure (p, true)) ++
    c.replacement.map (fun l => do return (← statementOf l, l.2)) ++
    (parentParts.extract (position + 1) parentParts.size).map (fun p => pure (p, true))
  for (item, i) in pushed.zipIdx do
    let (k, turned) ← landing c i
    let some slot := parts[k]?
      | throwError "clausify: a literal went to position {k}, which the clause does not have"
    if slot.isSome then continue
    let (statement, sign) ← item
    parts := parts.set! k (some (← pushedPart statement sign turned))
  parts.mapIdxM fun k part? => do
    let some part := part?
      | throwError "clausify: nothing the step pushed went to position {k}"
    return part

/-- Everything replaying one clausification needs to hand. -/
private structure Replay where
  sorts : Array (UInt32 × String)
  vars : Vars
  /-- A proof of the formula being clausified. -/
  premise : Expr
  /--
  The locals the clause being written out binds for the variables it keeps.

  What is proved along the way says things of them -- a quantifier the
  clausification instantiated is instantiated at them -- and each clause of a
  clausification binds its own, so a step kept to be used again is kept as
  something said of these rather than of those.
  -/
  locals : Array Expr := #[]
  /-- The skolem terms the clausification and its premise recorded. -/
  skolems : Std.HashMap UInt32 Term := {}

mutual

/--
A proof of what a generalised clause says.

By refutation: suppose it fails, and then the clause it was reached from cannot
hold either -- every position it kept fails with this one, and the position
that was replaced fails by the step that replaced it.
-/
private partial def prove (r : Replay) (c : GenClause) (parent? : Option Expr)
    (parts : Array Expr) (parentParts : Array Expr) : ReconstructM Expr := do
  let target := junction ``Or ``False parts
  let contradiction ←
    withLocalDeclD `n (mkApp (mkConst ``Not) target) fun n => do
      let refutations := refutationsOf parts n
      let refuting (k : Nat) : ReconstructM Expr := do
        let some refutation := refutations[k]? | throwError "the clause has no part {k}"
        return refutation
      -- What the step's `pushed`th literal says, refuted where it went.
      let refutePushed (pushed : Nat) (sign : Bool) : ReconstructM (Expr × Expr) := do
        let (k, turned) ← landing c pushed
        let some part := parts[k]? | throwError "the clause has no part {k}"
        let refutation ← refuting k
        if turned && !sign then
          -- `¬¬f`, refuted by what refutes `f`.
          let statement := pushedStatement part sign turned
          return (statement, .lam `h statement (mkApp (.bvar 0) refutation) .default)
        return (part, refutation)
      let body ←
        match c.parent? with
        | none => root r c refutePushed
        | some p => do
          let stated := parentParts
          let some position := c.position?
            | throwError "a clausification step without the position it replaced"
          let some parentProof := parent?
            | throwError "a clausification step without a proof of what it \
              was reached from"
          let position := position.toNat
          -- What the step put in the position, refuted: a rewriting in place
          -- pushes one literal, at the sign that stood there.
          let refuteReplacement (j : Nat) : ReconstructM Expr := do
            match c.how with
            | .extended =>
              let some (_, sign) := c.replacement[j]?
                | throwError "a clausification step has no replacement {j}"
              return (← refutePushed (position + j) sign).2
            | _ =>
              let some (_, sign) := p.literals[position]?
                | throwError "a clausification step replaced a position that is not there"
              return (← refutePushed 0 sign).2
          elimGiven stated (fun i h => do
              if i == position then
                replaced r c p position parentParts h refuteReplacement
              else
                -- A position the step kept is one of this clause's own, where
                -- the step recorded it went.
                match c.how with
                | .extended =>
                  let (k, turned) ← landing c (keptPushed c position i)
                  if turned then
                    throwError "clausify: a kept literal turned, which only one \
                      that was not stored yet can be"
                  return mkApp (← refuting k) h
                | _ => return mkApp (← refuting i) h)
            parentProof
      -- Abstracted directly where there is nothing for `mkLambdaFVars` to do
      -- beyond it: no metavariable for it to account for.
      let body ← instantiateMVars body
      if body.hasMVar then mkLambdaFVars #[n] body
      else return .lam `n (mkApp (mkConst ``Not) target) (body.abstract #[n]) .default
  return ofNotNot target contradiction

/--
The clauses clausification begins at: the formula itself, and, for a subformula
it names, that the name and the subformula say the same thing.
-/
private partial def root (r : Replay) (c : GenClause)
    (refutePushed : Nat → Bool → ReconstructM (Expr × Expr)) : ReconstructM Expr := do
  match c.replacement with
  | #[(_, sign)] =>
    -- The formula, pushed at a positive sign.
    return mkApp (← refutePushed 0 sign).2 r.premise
  | #[(_, nameSign), (_, sign)] =>
    -- A name and what it names, pushed first and at opposite signs: the two
    -- are one thing, so refuting both is a contradiction outright.
    let (negated, holding) ←
      if nameSign then pure ((← refutePushed 1 sign), (← refutePushed 0 nameSign))
      else pure ((← refutePushed 0 nameSign), (← refutePushed 1 sign))
    let some inner := negated.1.not?
      | throwError "the negative part of a definition is no negation"
    unless ← isDefEq inner holding.1 do
      throwError "a definition's parts{indentExpr holding.1}\nand\
        {indentExpr negated.1}\nare not each other's negation"
    return mkApp negated.2 holding.2
  | pushed => throwError "clausify: the first clause of the chain pushed {pushed.size} \
      literals, expected 1 (the formula) or 2 (a definition)"

/--
The step that replaced one position: what was put there follows from what was
there, so refuting all of it refutes what was there.
-/
private partial def replaced (r : Replay) (c p : GenClause) (position : Nat)
    (parentParts : Array Expr)
    (h : Expr) (refuteReplacement : Nat → ReconstructM Expr) : ReconstructM Expr := do
  let some (g, sign) := p.literals[position]?
    | throwError "a clausification step replaced a position that is not there"
  let some stated := parentParts[position]?
    | throwError "a clausification step replaced a position that is not there"
  let replacement := c.replacement
  -- What the step put there, refuted.
  let against ← (Array.range replacement.size).mapM refuteReplacement
  let connective ← connectiveOf g
  -- A name, a let's contents or a term's truth put in place of what stood
  -- there says what it said.
  if c.how == .named || (c.how == .replaced && !(connective matches .«forall» | .«exists»)) then
    let some negation := against[0]? | throwError "a rewriting in place without a refutation"
    let some says := asNegation (← instantiateMVars (← inferType negation))
      | throwError "expected a refutation to be a negation"
    unless ← sameFormula says stated do
      throwError "clausify: what was put in place of{indentExpr stated}\nsays\
        {indentExpr says}"
    return mkApp negation h
  if replacement.isEmpty then
    -- A constant: either the clause said `False`, or it said `¬True`.
    if stated.isConstOf ``False then
      return h
    if let some inner := stated.not? then
      if inner.isConstOf ``True then
        return mkApp h (mkConst ``True.intro)
    throwError "a clausification step replaced{indentExpr stated}\nby nothing"
  let subs := g.subformulas
  -- The parts of what was replaced are its own parts, taken apart rather than
  -- built a second time.
  let parts ← subformulaParts r.sorts r.vars g sign stated
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
    throwError "a part of a junction is missing from the step's replacements"
  -- The only replacement there is, whatever subformula it is of.
  let only : ReconstructM (Nat × Bool × Expr) := do
    let some (f, sign) := replacement[0]?
      | throwError "a step replaced a position by nothing"
    let some negation := against[0]?
      | throwError "a replacement without a refutation"
    for (sub, j) in subs.zipIdx do
      if f == sub then
        return (j, sign, negation)
    throwError "the step's replacement for a junction is not one of its parts"
  -- `a` from a refutation of `¬a`, and `¬a` from one of `a`.
  let held (sign : Bool) (negation : Expr) : ReconstructM Expr := do
    if sign then
      return negation
    -- A refutation states itself as an arrow or as a negation according to how
    -- it was built, and the two are the same thing.
    let some inner := asNegation (← instantiateMVars (← inferType negation))
      | throwError "expected a refutation to be a negation"
    let some innermost := asNegation inner
      | throwError "expected the refutation of a negation to be a double negation"
    return ofNotNot innermost negation
  match connective with
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
    let isIff := connective matches .iff
    let equivalence ←
      if !isIff && !sign then
        -- `⟦l <+> r⟧` at negative polarity is the equivalence under a double
        -- negation.
        let some inner := stated.not?
          | throwError "expected a negated exclusive or, got{indentExpr stated}"
        let some innermost := inner.not?
          | throwError "expected a negated exclusive or, got{indentExpr stated}"
        pure (ofNotNot innermost h)
      else pure h
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
    let isExists := connective matches .«exists»
    let some negation := against[0]?
      | throwError "a quantifier replaced by nothing"
    if skolemises connective sign then
      -- Which symbols this occurrence of the quantifier introduced, read off
      -- the clause it left its variables bound in, as `registerAlong` reads
      -- them: the step records every occurrence's under the one variable.
      let occurrence := Std.HashMap.ofList c.bindings.toList
      let skolems := bound.foldl (init := r.skolems) fun acc (v, _) =>
        match occurrence[v]? with
        | some image => acc.insert v image
        | none => acc
      let (_, body) ← peelBlock r.sorts sign skolems r.vars g h
      -- What the block leaves is what the step put in its place.
      let some refuted := asNegation (← instantiateMVars (← inferType negation))
        | throwError "expected the refutation of a quantifier's replacement to be \
            a negation"
      let stated ← instantiateMVars (← inferType body)
      unless ← sameFormula refuted stated do
        throwError "a skolemised block leaves{indentExpr stated}\nwhich is \
          not what the step put in its place:{indentExpr refuted}"
      return mkApp negation body
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
        let qs ← blockPredicates true r.sorts bound r.vars body
        let mut witnessed ← held false negation
        for j in (List.range bound.size).reverse do
          let some (_, sortName) := bound[j]? | throwError "a quantifier has no variable {j}"
          let τ ← sortType sortName
          let predicate := blockPredicate qs j (args.extract 0 j)
          witnessed ← mkAppOptM ``Exists.intro
            #[some τ, some predicate, some args[j]!, some witnessed]
        return mkApp h witnessed
      else
        return mkApp negation (mkAppN h args)
  | other => throwError "cannot replay a clausification step on {repr other}"

end

/-- The variables a term mentions. -/
private partial def variablesOf (t : Term) : Array UInt32 :=
  if t.isVar then #[t.var] else t.args.flatMap variablesOf

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
    -- A binding can stand on another: its image mentions variables other
    -- bindings give. Each is read once every variable it mentions is known.
    let mut pending := parent.bindings
    while !pending.isEmpty do
      let (ready, waiting) := pending.partition fun (_, image) =>
        (variablesOf image).all vars.contains
      if ready.isEmpty then
        throwError "the bindings of a clausification step stand on variables \
          nothing binds: {waiting.map (·.1)}"
      for (v, image) in ready do
        vars := vars.insert v (← term vars image)
      pending := waiting
    registerBlock sorts sign skolems vars replaced

def registerSkolemsOf (u : Vampire.Unit) : ReconstructM PUnit := do
  let some clause := u.genClause? | return
  -- The unit's own records last, so that they win: a parent numbers its
  -- variables independently, and one of its variables can have the number of
  -- one of the unit's.
  let skolems := Std.HashMap.ofList
    (u.parents.flatMap (·.skolems) ++ u.skolems).toList
  if skolems.isEmpty then return
  registerAlong (u.parents.flatMap (·.varSorts) ++ u.varSorts) skolems clause

/-- The generalised clauses a clause was reached through, the first one first. -/
private partial def chainTo (c : GenClause) (chain : Array GenClause := #[]) :
    Array GenClause :=
  match c.parent? with
  | some parent => chainTo parent (chain.push c)
  | none => (chain.push c).reverse

/--
What takes one clause of a chain to the next, taking as given both what the
clause it starts from says and the variables the clause being written out
keeps.

A step of a clausification is replayed once and used wherever it is reached:
the clauses of one clausification are each a step of vampire's, replayed on its
own, and the chain that led to one is mostly the chain that led to another. Its
term is kept as a function of what it starts from, so that keeping it is
walking one step and not the whole chain behind it.

Kept by what the step proves rather than by which step it is, because that is
what makes one term stand for another; and kept only where it says nothing of
any other local, since what such a term says of a local of the clause it was
built for means nothing in another.
-/
private def chainStep (r : Replay) (parentSays says : Expr)
    (prove : Expr → ReconstructM Expr) : ReconstructM Expr := do
  let stated ← mkArrow parentSays says
  -- Which locals a term mentions is asked by one walk that visits each shared
  -- subterm once; `containsFVar` walks it as a tree, once per local.
  let mentioned := (Lean.collectFVars {} stated).fvarSet
  let occurring := r.locals.filter fun x => mentioned.contains x.fvarId!
  let key ← mkLambdaFVars occurring stated
  if let some taken := (← get).clausifyChain[key]? then
    return mkAppN taken occurring
  let step ← withLocalDeclD `h parentSays fun h => do
    mkLambdaFVars #[h] (← prove h)
  let abstracted ← instantiateMVars (← mkLambdaFVars occurring step)
  -- Nor a term with a hole in it: what fills the hole is settled where the
  -- term was built, and a term used again elsewhere would carry that with it.
  let left := (Lean.collectFVars {} abstracted).fvarSet
  unless abstracted.hasExprMVar || r.locals.any (left.contains ·.fvarId!) do
    modify fun s => { s with clausifyChain := s.clausifyChain.insert key abstracted }
  return step

/--
A proof of the last clause of a chain, each clause along the way proved from
the one before it.

By the step that reached it rather than by the chain behind it: each step
supposes its clause fails, and putting that supposition through what came
before it would walk the whole of it again at every step of the chain.
-/
private partial def proveChain (r : Replay) (chain : Array GenClause) (i : Nat)
    (parent? : Option Expr) (parentParts : Array Expr) : ReconstructM Expr := do
  let some c := chain[i]?
    | throwError "a clausification without a clause"
  -- Each clause of the chain says what it says once: it is the conclusion of
  -- one step and the premise of the next.
  let parts ←
    match c.parent? with
    | some p => genPartsFrom r.sorts r.vars c p.literals parentParts
    | none => genParts r.sorts r.vars c
  let says := junction ``Or ``False parts
  let value ←
    match parent? with
    | none => prove r c none parts parentParts
    | some parentProof =>
      let parentSays := junction ``Or ``False parentParts
      let step ← chainStep r parentSays says fun h =>
        prove r c (some h) parts parentParts
      pure (mkApp step parentProof)
  if i + 1 == chain.size then
    return value
  proveChain r chain (i + 1) (some value) parts

/-!
The other clausifier, `CNF::clausify`, walks a formula in negation normal form
instead: it takes every disjunct of a disjunction into the clause it is
building, drops each universal, and takes each conjunct of a conjunction into a
clause of its own. So a clause is one path through the conjunctions, and which
conjunct each of them contributed comes recorded.
-/

/--
A proof of `stated → target`, along the recorded path through `f`.

`stated` is what `f` says, which is given rather than built: every step of the
descent has it to hand already, in the shape the formula the clausification
began at was stated in.
-/
private partial def descend (sorts : Array (UInt32 × String))
    (choices : Std.HashMap UInt32 UInt32) (clause : Array Literal) (vars : Vars) (f : Formula)
    (stated : Expr) (target : Expr) (into : Into) : ReconstructM Expr := do
  -- A literal of the formula is one of the clause's: `CNF::clausify` builds
  -- the clause of the formula's literals themselves, which vampire shares, so
  -- which one it is is which of the clause's it is.
  let place (g : Formula) (h : Expr) : ReconstructM Expr := do
    let some lit := g.literal?
      | throwError "a disjunct of a clause's disjunction that is no literal"
    let some k := clause.findIdx? (· == lit)
      | throwError "the clause has no literal{indentExpr (← instantiateMVars (← inferType h))}"
    let some part := into.parts[k]? | throwError "the clause has no literal {k}"
    let stated ← instantiateMVars (← inferType h)
    unless stated == part do
      throwError "literal {k} of the clause is{indentExpr part}\nnot{indentExpr stated}"
    return into.inject k h
  match ← connectiveOf f with
  | .«forall» =>
    let some body := f.subformulas[0]? | throwError "a quantifier without a body"
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
    let rest ← descend sorts choices clause vars body
      (← instantiateForall stated args) target into
    withLocalDeclD `h stated fun h => do
      mkLambdaFVars #[h] (mkApp rest (mkAppN h args))
  | .and =>
    -- The clause came from one conjunct, the recorded one.
    let parts ← countedParts ``And stated f.subformulas.size
    let some argument := choices[f.index]?
      | throwError "nothing says which conjunct of{indentExpr stated}\nthis \
          clause came from"
    let some conjunct := f.subformulas[argument.toNat]?
      | throwError "a clause came from conjunct {argument}, which is not there"
    let some part := parts[argument.toNat]?
      | throwError "a clause came from conjunct {argument}, which is not there"
    let rest ← descend sorts choices clause vars conjunct part target into
    withLocalDeclD `h stated fun h => do
      mkLambdaFVars #[h] (mkApp rest (← projectGiven parts argument.toNat h))
  | .or =>
    -- Every disjunct is taken into the same clause, so each must lead to it.
    let parts ← countedParts ``Or stated f.subformulas.size
    -- A disjunction of literals is the clause itself, up to the order its
    -- literals are in, and is carried into it following the shape of both.
    let literals ← f.subformulas.allM fun g => do
      return !((← connectiveOf g) matches .«forall» | .and | .or | .«false»)
    if literals then
      return ← withLocalDeclD `h stated fun h => do
        mkLambdaFVars #[h] (← elimGiven parts (motive? := some target) (fun i hi => do
          let some g := f.subformulas[i]? | throwError "a missing disjunct"
          place g hi) h)
    let branches ← f.subformulas.zipIdx.mapM fun (g, i) => do
      let some part := parts[i]? | throwError "a missing disjunct"
      descend sorts choices clause vars g part target into
    withLocalDeclD `h stated fun h => do
      mkLambdaFVars #[h]
        (← elimGiven parts (fun i hi => do
          let some branch := branches[i]? | throwError "a missing disjunct"
          return mkApp branch hi) h)
  | .«false» =>
    withLocalDeclD `h (mkConst ``False) fun h => do
      mkLambdaFVars #[h] (← mkAppOptM ``False.elim #[some target, some h])
  | _ =>
    -- A literal, which the clause has to contain.
    withLocalDeclD `h stated fun h => do
      mkLambdaFVars #[h] (← place f h)

/-- `clausify`: one clause of a formula's conjunctive normal form. -/
def clausify (step : Step) : ReconstructM Expr := do
  let ⟨parent, premiseProof, premiseStated⟩ ← step.onlyPremise
  let some premise := parent.formula?
    | throwError "clausify should be given a formula"
  let sorts := parent.varSorts ++ step.unit.varSorts
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut vars : Vars :=
      (xs.zip step.unit.varSorts).foldl (init := {}) fun vars (x, (v, _)) => vars.insert v x
    match step.unit.genClause? with
    | some clause =>
      -- A variable the clause quantifies stands for what it was bound to;
      -- one the clause kept stands for the local the conclusion binds for it.
      for (v, image) in clause.bindings do
        vars := vars.insert v (← term vars image)
      -- As `registerSkolemsOf` reads them: the unit's own records win.
      let skolems := Std.HashMap.ofList
        (step.unit.parents.flatMap (·.skolems) ++ step.unit.skolems).toList
      let proof ← proveChain { sorts, vars, premise := premiseProof, locals := xs, skolems }
        (chainTo clause) 0 none #[]
      let generalised ← genParts sorts vars clause
      mkLambdaFVars xs
        (← carryAll (junction ``Or ``False generalised) target proof
          (placed := step.placedAt 0) (sourceCount := some generalised.size)
          (targetCount := step.unit.clauseSize?))
    | none =>
      let proof ← step.withInto target fun into => do
        let some conclusion := step.unit.clause?
          | throwError "clausify concluded no clause"
        let implication ← descend sorts
          (Std.HashMap.ofList (step.unit.conjunctChoices.toList.map fun (f, i) => (f.index, i)))
          conclusion.literals vars premise (← instantiateMVars premiseStated) target into
        return mkApp implication premiseProof
      mkLambdaFVars xs proof
end Vampire.Reconstruct.Clausify
