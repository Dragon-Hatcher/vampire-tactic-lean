namespace Vampire

inductive Error where
  | error (msg : String)
deriving Repr, BEq

namespace Error

protected def toString : Error → String
  | .error msg => msg

instance : ToString Error := ⟨Error.toString⟩

def unwrap! [Inhabited α] : Except Error α → α
  | .ok a => a
  | .error e => panic! e.toString

end Error

abbrev EnvT (m : Type → Type) (α : Type) : Type := ExceptT Error m α

abbrev Env (α : Type) : Type := EnvT BaseIO α

namespace Env

@[export env_pure]
private def env_pure (a : α) : Env α := return a

@[export env_throw_string]
private def env_throw_string (msg : String) : Env α := throw (.error msg)

end Env

@[export generic_except_ok]
private def mkExceptOk {α : Type} : α → Except Error α := .ok

@[export generic_except_err_of_string]
private def mkExceptErrOfString {α : Type} : String → Except Error α :=
  .error ∘ Error.error

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
  | axiom
  | assumption
  | conjecture
  | negatedConjecture
  | claim
  | extensionalityAxiom
deriving Inhabited, Repr, BEq, DecidableEq

inductive Connective where
  | literal
  | and
  | or
  | imp
  | iff
  | xor
  | not
  | forall
  | exists
  | boolTerm
  | false
  | true
  | name
  | noconn
deriving Inhabited, Repr, BEq, DecidableEq

structure InferenceRule where
  toUInt8 : UInt8
deriving Inhabited, Repr, BEq, DecidableEq

namespace InferenceRule

@[extern "vampire_inferenceRule_name"]
opaque name : InferenceRule → String

instance : ToString InferenceRule := ⟨name⟩

end InferenceRule

private opaque SolverImpl : NonemptyType.{0}

def Solver : Type := SolverImpl.type

instance : Nonempty Solver := SolverImpl.property

private opaque UnitImpl : NonemptyType.{0}

def Unit : Type := UnitImpl.type

instance : Nonempty Unit := UnitImpl.property

private opaque ClauseImpl : NonemptyType.{0}

def Clause : Type := ClauseImpl.type

instance : Nonempty Clause := ClauseImpl.property

private opaque LiteralImpl : NonemptyType.{0}

def Literal : Type := LiteralImpl.type

instance : Nonempty Literal := LiteralImpl.property

private opaque TermImpl : NonemptyType.{0}

def Term : Type := TermImpl.type

instance : Nonempty Term := TermImpl.property

private opaque FormulaImpl : NonemptyType.{0}

def Formula : Type := FormulaImpl.type

instance : Nonempty Formula := FormulaImpl.property

@[extern "vampire_selfTest_exceptions"]
opaque selfTestExceptions : UInt8 → UInt8

namespace Solver

@[extern "vampire_solver_new"]
opaque new : Env Solver

@[extern "vampire_solver_setOption"]
opaque setOption : Solver → (name value : String) → Env PUnit

@[extern "vampire_solver_parseTPTP"]
opaque parseTPTP : Solver → (input : String) → Env PUnit

@[extern "vampire_solver_solve"]
opaque solve : Solver → Env PUnit

@[extern "vampire_solver_terminationReason"]
opaque terminationReason : Solver → TerminationReason

@[extern "vampire_solver_refutation"]
opaque refutation : Solver → Option Unit

@[extern "vampire_solver_statistics"]
opaque statistics : Solver → String

@[extern "vampire_solver_functionName"]
opaque functionName : Solver → (functor : UInt32) → Except Error String

@[extern "vampire_solver_predicateName"]
opaque predicateName : Solver → (functor : UInt32) → Except Error String

end Solver

namespace Unit

@[extern "vampire_unit_number"]
opaque number : Unit → UInt32

@[extern "vampire_unit_isClause"]
opaque isClause : Unit → Bool

@[extern "vampire_unit_inputType"]
opaque inputType : Unit → UnitInputType

@[extern "vampire_unit_rule"]
opaque rule : Unit → InferenceRule

@[extern "vampire_unit_parents"]
opaque parents : Unit → Array Unit

@[extern "vampire_unit_clause"]
opaque clause? : Unit → Option Clause

@[extern "vampire_unit_formula"]
opaque formula? : Unit → Option Formula

@[extern "vampire_unit_toString"]
protected opaque toString : Unit → String

instance : ToString Unit := ⟨Unit.toString⟩

end Unit

namespace Clause

@[extern "vampire_clause_size"]
opaque size : Clause → UInt32

@[extern "vampire_clause_literals"]
opaque literals : Clause → Array Literal

@[extern "vampire_clause_toString"]
protected opaque toString : Clause → String

instance : ToString Clause := ⟨Clause.toString⟩

end Clause

namespace Literal

@[extern "vampire_literal_functor"]
opaque functor : Literal → UInt32

@[extern "vampire_literal_arity"]
opaque arity : Literal → UInt32

@[extern "vampire_literal_polarity"]
opaque polarity : Literal → Bool

@[extern "vampire_literal_isEquality"]
opaque isEquality : Literal → Bool

@[extern "vampire_literal_args"]
opaque args : Literal → Array Term

@[extern "vampire_literal_toString"]
protected opaque toString : Literal → String

instance : ToString Literal := ⟨Literal.toString⟩

end Literal

namespace Term

@[extern "vampire_term_isVar"]
opaque isVar : Term → Bool

@[extern "vampire_term_var"]
opaque var : Term → UInt32

@[extern "vampire_term_functor"]
opaque functor : Term → UInt32

@[extern "vampire_term_arity"]
opaque arity : Term → UInt32

@[extern "vampire_term_args"]
opaque args : Term → Array Term

@[extern "vampire_term_toString"]
protected opaque toString : Term → String

instance : ToString Term := ⟨Term.toString⟩

end Term

namespace Formula

@[extern "vampire_formula_connective"]
opaque connective : Formula → Connective

@[extern "vampire_formula_literal"]
opaque literal? : Formula → Option Literal

@[extern "vampire_formula_subformulas"]
opaque subformulas : Formula → Array Formula

@[extern "vampire_formula_toString"]
protected opaque toString : Formula → String

instance : ToString Formula := ⟨Formula.toString⟩

end Formula

end Vampire
