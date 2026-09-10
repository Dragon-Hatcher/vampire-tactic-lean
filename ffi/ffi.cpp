#include <lean/lean.h>

#include <sstream>
#include <string>

#include "Debug/Assertion.hpp"
#include "Forwards.hpp"
#include "Kernel/Clause.hpp"
#include "Kernel/Formula.hpp"
#include "Kernel/Inference.hpp"
#include "Kernel/MainLoop.hpp"
#include "Kernel/Problem.hpp"
#include "Kernel/Signature.hpp"
#include "Kernel/Term.hpp"
#include "Kernel/Unit.hpp"
#include "Lib/Environment.hpp"
#include "Lib/Exception.hpp"
#include "Lib/Timer.hpp"
#include "Parse/TPTP.hpp"
#include "Saturation/ProvingHelper.hpp"
#include "Shell/Options.hpp"
#include "Shell/Preprocess.hpp"
#include "Shell/Statistics.hpp"
#include "Shell/UIHelper.hpp"

using namespace Lib;
using namespace Kernel;
using namespace Shell;
using namespace Saturation;

typedef uint8_t lean_bool;

static inline lean_bool bool_box(bool b) { return b ? 1 : 0; }

// # Boxing of vampire values
//
// Every vampire value handed to Lean is reachable only from the `Solver` that
// produced it, and vampire frees none of it until that solver goes away. So a
// handle pairs the value with an owning reference to its solver, and the
// `foreach` callback reports that reference to the Lean GC.

namespace {

template <typename T>
struct Handle {
  T value;
  lean_object* owner;
};

template <typename T>
void handle_finalize(void* obj)
{
  Handle<T>* h = static_cast<Handle<T>*>(obj);
  if (h->owner)
    lean_dec(h->owner);
  delete h;
}

template <typename T>
void handle_foreach(void* obj, b_lean_obj_arg f)
{
  Handle<T>* h = static_cast<Handle<T>*>(obj);
  if (h->owner) {
    lean_inc(f);
    lean_inc(h->owner);
    lean_apply_1(f, h->owner);
  }
}

template <typename T>
lean_external_class* handle_class()
{
  static lean_external_class* cls =
      lean_register_external_class(handle_finalize<T>, handle_foreach<T>);
  return cls;
}

/** Takes ownership of one reference to `owner`. */
template <typename T>
lean_obj_res handle_box(T value, lean_object* owner)
{
  Handle<T>* h = new Handle<T>{value, owner};
  return lean_alloc_external(handle_class<T>(), h);
}

template <typename T>
Handle<T>* handle_of(b_lean_obj_arg o)
{
  return static_cast<Handle<T>*>(lean_get_external_data(o));
}

template <typename T>
T handle_unbox(b_lean_obj_arg o)
{
  return handle_of<T>(o)->value;
}

/** Boxes `value` under the same owner as `sibling`, borrowing `sibling`. */
template <typename T, typename U>
lean_obj_res handle_derive(T value, b_lean_obj_arg sibling)
{
  lean_object* owner = handle_of<U>(sibling)->owner;
  if (owner)
    lean_inc(owner);
  return handle_box(value, owner);
}

lean_obj_res mk_string(const std::string& s)
{
  return lean_mk_string(s.c_str());
}

}  // namespace

// # `Solver`
//
// Vampire keeps a proof attempt in the global `Lib::env`, so at most one solver
// can be live at a time. The solver object itself carries no state; it exists to
// own the global one and to anchor the lifetime of everything derived from it.

namespace {

struct Solver {
  Problem* problem = nullptr;
  bool solved = false;
};

/**
 * Never reset: vampire leaks proof state through the global `Lib::env` (a
 * second saturation run reports "SaturationAlgorithm cannot set its ordering as
 * global" and cannot be trusted), and its own interactive mode forks a child
 * per run rather than reusing a process. So a solver is one-shot per process,
 * and asking for a second one is an error rather than a wrong answer.
 */
bool g_solver_created = false;

void solver_finalize(void* obj)
{
  delete static_cast<Solver*>(obj);
}

void solver_foreach(void*, b_lean_obj_arg) {}

lean_external_class* solver_class()
{
  static lean_external_class* cls =
      lean_register_external_class(solver_finalize, solver_foreach);
  return cls;
}

Solver* solver_unbox(b_lean_obj_arg s)
{
  return static_cast<Solver*>(lean_get_external_data(s));
}

}  // namespace

extern "C" {

// # `Except Error α` and `Env α` constructors, defined on the Lean side

lean_obj_res generic_except_ok(lean_obj_arg alpha, lean_obj_arg val);
lean_obj_res generic_except_err_of_string(lean_obj_arg alpha, lean_obj_arg msg);

lean_obj_res except_ok(lean_obj_arg val)
{
  return generic_except_ok(lean_box(0), val);
}

lean_obj_res except_err_of_string(lean_obj_arg msg)
{
  return generic_except_err_of_string(lean_box(0), msg);
}

lean_obj_res env_pure(lean_obj_arg alpha, lean_obj_arg a);
lean_obj_res env_throw_string(lean_obj_arg alpha, lean_obj_arg msg);

lean_obj_res env_val(lean_obj_arg val) { return env_pure(lean_box(0), val); }

lean_obj_res env_error_string(lean_obj_arg msg)
{
  return env_throw_string(lean_box(0), msg);
}

// # Exception-catching macros
//
// Vampire signals failure by throwing, and the exception hierarchy roots at
// `Lib::Exception`, whose message is only reachable through `cry`.

static lean_obj_res exception_message(Exception& e)
{
  std::ostringstream out;
  e.cry(out);
  return lean_mk_string(out.str().c_str());
}

#define VAMPIRE_LEAN_TRY_CATCH(on_error)                                    \
  }                                                                         \
  catch (Parse::TPTP::ParseErrorException & e) { return on_error(exception_message(e)); } \
  catch (UserErrorException & e) { return on_error(exception_message(e)); }  \
  catch (Exception & e) { return on_error(exception_message(e)); }           \
  catch (const std::exception& e)                                           \
  {                                                                         \
    return on_error(lean_string_append(lean_mk_string("std::exception "),   \
                                       lean_mk_string(e.what())));          \
  }                                                                         \
  catch (...)                                                               \
  {                                                                         \
    return on_error(lean_mk_string("vampire raised an unexpected exception")); \
  }

#define VAMPIRE_LEAN_EXCEPT_BEGIN try {
#define VAMPIRE_LEAN_EXCEPT_END VAMPIRE_LEAN_TRY_CATCH(except_err_of_string)

#define VAMPIRE_LEAN_ENV_BEGIN try {
#define VAMPIRE_LEAN_ENV_END VAMPIRE_LEAN_TRY_CATCH(env_error_string)

// # Diagnostics

/**
 * Throws and catches inside this shared library, to check that exception
 * unwinding works in the host process. Returns 1 if the typed handler ran, 2 if
 * only the catch-all ran, 0 if neither.
 */
LEAN_EXPORT uint8_t vampire_selfTest_exceptions(uint8_t /* unit */)
{
  try {
    throw Kernel::MainLoop::RefutationFoundException(nullptr);
  } catch (Kernel::MainLoop::RefutationFoundException&) {
    return 1;
  } catch (...) {
    return 2;
  }
  return 0;
}

LEAN_EXPORT lean_obj_res vampire_solver_new()
{
  VAMPIRE_LEAN_ENV_BEGIN
  if (g_solver_created)
    return env_error_string(lean_mk_string(
        "a vampire solver has already been created in this process; vampire "
        "keeps its proof state in a global and cannot run a second saturation "
        "reliably"));
  g_solver_created = true;
  return env_val(lean_alloc_external(solver_class(), new Solver{}));
  VAMPIRE_LEAN_ENV_END
}

LEAN_EXPORT lean_obj_res vampire_solver_setOption(b_lean_obj_arg /* s */,
                                                 b_lean_obj_arg name,
                                                 b_lean_obj_arg value)
{
  VAMPIRE_LEAN_ENV_BEGIN
  env.options->set(std::string(lean_string_cstr(name)),
                   std::string(lean_string_cstr(value)));
  return env_val(lean_box(0));
  VAMPIRE_LEAN_ENV_END
}

LEAN_EXPORT lean_obj_res vampire_solver_parseTPTP(b_lean_obj_arg s,
                                                 b_lean_obj_arg input)
{
  VAMPIRE_LEAN_ENV_BEGIN
  Solver* solver = solver_unbox(s);
  if (solver->problem)
    return env_error_string(
        lean_mk_string("this solver has already been given a problem"));
  Timer::reinitialise();
  std::istringstream in(std::string(lean_string_cstr(input)));
  UIHelper::parseStream(in, "<lean>", Options::InputSyntax::TPTP,
                        /* verbose = */ false, /* preferSMTonAuto = */ false);
  solver->problem = UIHelper::getInputProblem();
  return env_val(lean_box(0));
  VAMPIRE_LEAN_ENV_END
}

LEAN_EXPORT lean_obj_res vampire_solver_solve(b_lean_obj_arg s)
{
  VAMPIRE_LEAN_ENV_BEGIN
  Solver* solver = solver_unbox(s);
  if (!solver->problem)
    return env_error_string(
        lean_mk_string("this solver has not been given a problem yet"));
  if (solver->solved)
    return env_error_string(
        lean_mk_string("this solver has already run to completion"));
  solver->solved = true;

  Problem* prb = solver->problem;
  env.options->setForcedOptionValues();
  env.options->checkGlobalOptionConstraints();
  Preprocess(*env.options).preprocess(*prb);
  ProvingHelper::runVampireSaturation(*prb, *env.options);

  return env_val(lean_box(0));
  VAMPIRE_LEAN_ENV_END
}

LEAN_EXPORT uint8_t vampire_solver_terminationReason(b_lean_obj_arg /* s */)
{
  return static_cast<uint8_t>(env.statistics->terminationReason);
}

/** `Option Unit` — `none` is `lean_box(0)`, `some x` is a one-field ctor. */
LEAN_EXPORT lean_obj_res vampire_solver_refutation(b_lean_obj_arg s)
{
  Unit* refutation = env.statistics->refutation;
  if (!refutation)
    return lean_box(0);
  lean_inc(const_cast<lean_object*>(s));
  lean_object* some = lean_alloc_ctor(1, 1, 0);
  lean_ctor_set(some, 0, handle_box(refutation, const_cast<lean_object*>(s)));
  return some;
}

LEAN_EXPORT lean_obj_res vampire_solver_statistics(b_lean_obj_arg /* s */)
{
  std::ostringstream out;
  env.statistics->print(out);
  return mk_string(out.str());
}

// # `Signature`

LEAN_EXPORT lean_obj_res vampire_solver_functionName(b_lean_obj_arg /* s */,
                                                     uint32_t functor)
{
  VAMPIRE_LEAN_EXCEPT_BEGIN
  return except_ok(mk_string(env.signature->functionName(functor)));
  VAMPIRE_LEAN_EXCEPT_END
}

LEAN_EXPORT lean_obj_res vampire_solver_predicateName(b_lean_obj_arg /* s */,
                                                      uint32_t functor)
{
  VAMPIRE_LEAN_EXCEPT_BEGIN
  return except_ok(mk_string(env.signature->predicateName(functor)));
  VAMPIRE_LEAN_EXCEPT_END
}

// # `Unit`

LEAN_EXPORT uint32_t vampire_unit_number(b_lean_obj_arg u)
{
  return handle_unbox<Unit*>(u)->number();
}

LEAN_EXPORT lean_bool vampire_unit_isClause(b_lean_obj_arg u)
{
  return bool_box(handle_unbox<Unit*>(u)->isClause());
}

LEAN_EXPORT uint8_t vampire_unit_inputType(b_lean_obj_arg u)
{
  return static_cast<uint8_t>(handle_unbox<Unit*>(u)->inputType());
}

LEAN_EXPORT uint8_t vampire_unit_rule(b_lean_obj_arg u)
{
  return static_cast<uint8_t>(handle_unbox<Unit*>(u)->inference().rule());
}

LEAN_EXPORT lean_obj_res vampire_unit_parents(b_lean_obj_arg u)
{
  Unit* unit = handle_unbox<Unit*>(u);
  const Inference& inference = unit->inference();
  lean_object* parents = lean_mk_empty_array();
  Inference::Iterator it = inference.iterator();
  while (inference.hasNext(it))
    parents = lean_array_push(parents,
                              handle_derive<Unit*, Unit*>(inference.next(it), u));
  return parents;
}

LEAN_EXPORT lean_obj_res vampire_unit_toString(b_lean_obj_arg u)
{
  return mk_string(handle_unbox<Unit*>(u)->toString());
}

/** `Option Clause`, `none` when the unit is a formula. */
LEAN_EXPORT lean_obj_res vampire_unit_clause(b_lean_obj_arg u)
{
  Unit* unit = handle_unbox<Unit*>(u);
  if (!unit->isClause())
    return lean_box(0);
  lean_object* some = lean_alloc_ctor(1, 1, 0);
  lean_ctor_set(some, 0,
                handle_derive<Clause*, Unit*>(unit->asClause(), u));
  return some;
}

/** `Option Formula`, `none` when the unit is a clause. */
LEAN_EXPORT lean_obj_res vampire_unit_formula(b_lean_obj_arg u)
{
  Unit* unit = handle_unbox<Unit*>(u);
  if (unit->isClause())
    return lean_box(0);
  lean_object* some = lean_alloc_ctor(1, 1, 0);
  lean_ctor_set(some, 0,
                handle_derive<Formula*, Unit*>(unit->getFormula(), u));
  return some;
}

// # `InferenceRule`

LEAN_EXPORT lean_obj_res vampire_inferenceRule_name(uint8_t rule)
{
  return mk_string(ruleName(static_cast<InferenceRule>(rule)));
}

// # `Clause`

LEAN_EXPORT uint32_t vampire_clause_size(b_lean_obj_arg c)
{
  return handle_unbox<Clause*>(c)->size();
}

LEAN_EXPORT lean_obj_res vampire_clause_literals(b_lean_obj_arg c)
{
  Clause* clause = handle_unbox<Clause*>(c);
  lean_object* literals = lean_mk_empty_array();
  for (unsigned i = 0; i < clause->size(); i++)
    literals = lean_array_push(
        literals, handle_derive<Literal*, Clause*>((*clause)[i], c));
  return literals;
}

LEAN_EXPORT lean_obj_res vampire_clause_toString(b_lean_obj_arg c)
{
  return mk_string(handle_unbox<Clause*>(c)->toString());
}

// # `Literal`

LEAN_EXPORT uint32_t vampire_literal_functor(b_lean_obj_arg l)
{
  return handle_unbox<Literal*>(l)->functor();
}

LEAN_EXPORT uint32_t vampire_literal_arity(b_lean_obj_arg l)
{
  return handle_unbox<Literal*>(l)->arity();
}

LEAN_EXPORT lean_bool vampire_literal_polarity(b_lean_obj_arg l)
{
  return bool_box(handle_unbox<Literal*>(l)->isPositive());
}

LEAN_EXPORT lean_bool vampire_literal_isEquality(b_lean_obj_arg l)
{
  return bool_box(handle_unbox<Literal*>(l)->isEquality());
}

LEAN_EXPORT lean_obj_res vampire_literal_args(b_lean_obj_arg l)
{
  Literal* literal = handle_unbox<Literal*>(l);
  lean_object* args = lean_mk_empty_array();
  for (unsigned i = 0; i < literal->arity(); i++)
    args = lean_array_push(
        args, handle_derive<TermList, Literal*>(*literal->nthArgument(i), l));
  return args;
}

LEAN_EXPORT lean_obj_res vampire_literal_toString(b_lean_obj_arg l)
{
  return mk_string(handle_unbox<Literal*>(l)->toString());
}

// # `Term`

LEAN_EXPORT lean_bool vampire_term_isVar(b_lean_obj_arg t)
{
  return bool_box(handle_unbox<TermList>(t).isVar());
}

LEAN_EXPORT uint32_t vampire_term_var(b_lean_obj_arg t)
{
  return handle_unbox<TermList>(t).var();
}

LEAN_EXPORT uint32_t vampire_term_functor(b_lean_obj_arg t)
{
  return handle_unbox<TermList>(t).term()->functor();
}

LEAN_EXPORT uint32_t vampire_term_arity(b_lean_obj_arg t)
{
  return handle_unbox<TermList>(t).term()->arity();
}

LEAN_EXPORT lean_obj_res vampire_term_args(b_lean_obj_arg t)
{
  TermList term = handle_unbox<TermList>(t);
  lean_object* args = lean_mk_empty_array();
  if (term.isVar())
    return args;
  Term* inner = term.term();
  for (unsigned i = 0; i < inner->arity(); i++)
    args = lean_array_push(
        args, handle_derive<TermList, TermList>(*inner->nthArgument(i), t));
  return args;
}

LEAN_EXPORT lean_obj_res vampire_term_toString(b_lean_obj_arg t)
{
  return mk_string(handle_unbox<TermList>(t).toString());
}

// # `Formula`

LEAN_EXPORT uint8_t vampire_formula_connective(b_lean_obj_arg f)
{
  return static_cast<uint8_t>(handle_unbox<Formula*>(f)->connective());
}

LEAN_EXPORT lean_obj_res vampire_formula_toString(b_lean_obj_arg f)
{
  return mk_string(handle_unbox<Formula*>(f)->toString());
}

/** `Option Literal`, `some` exactly when the connective is `.literal`. */
LEAN_EXPORT lean_obj_res vampire_formula_literal(b_lean_obj_arg f)
{
  Formula* formula = handle_unbox<Formula*>(f);
  if (formula->connective() != LITERAL)
    return lean_box(0);
  lean_object* some = lean_alloc_ctor(1, 1, 0);
  lean_ctor_set(some, 0,
                handle_derive<Literal*, Formula*>(formula->literal(), f));
  return some;
}

LEAN_EXPORT lean_obj_res vampire_formula_subformulas(b_lean_obj_arg f)
{
  Formula* formula = handle_unbox<Formula*>(f);
  lean_object* subformulas = lean_mk_empty_array();
  auto push = [&](Formula* sub) {
    subformulas = lean_array_push(
        subformulas, handle_derive<Formula*, Formula*>(sub, f));
  };
  switch (formula->connective()) {
    case LITERAL:
    case TRUE:
    case FALSE:
      break;
    case AND:
    case OR:
      for (FormulaList* args = formula->args(); args; args = args->tail())
        push(args->head());
      break;
    case IMP:
    case IFF:
    case XOR:
      push(formula->left());
      push(formula->right());
      break;
    case NOT:
      push(formula->uarg());
      break;
    case FORALL:
    case EXISTS:
      push(formula->qarg());
      break;
    default:
      break;
  }
  return subformulas;
}

}  // extern "C"
