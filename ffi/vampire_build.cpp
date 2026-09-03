// Building a translated Lean goal in Vampire's own data structures.
//
// The Lean side (`Vampire/Translate/Build.lean`) compiles its translation of the goal
// into two arrays: a table of symbol names, and a flat instruction stream. This walks
// that stream and constructs Signature entries, Terms, Literals and Formulas directly.
// Nothing is printed and reparsed; the only strings that cross are the names Vampire's
// signature is keyed by, which it needs regardless in order to name a symbol in a proof.
//
// The whole problem arrives in a single call. That matters: the entry lock makes one
// call atomic but not a sequence of them, and `env.signature` is process-global, so a
// build spread over many calls could be interleaved by another elaboration thread.
//
// The opcodes are defined once in Lean (`Vampire.Translate.Op`) and mirrored here.

#include <lean/lean.h>

#include "vampire_lock.hpp"

#include <sstream>
#include <string>
#include <vector>

#include "Lib/Environment.hpp"
#include "Lib/List.hpp"
#include "Lib/Reset.hpp"
#include "Lib/Timer.hpp"
#include "Kernel/Formula.hpp"
#include "Kernel/InferenceStore.hpp"
#include "Kernel/FormulaUnit.hpp"
#include "Kernel/Inference.hpp"
#include "Kernel/OperatorType.hpp"
#include "Kernel/Problem.hpp"
#include "Kernel/Signature.hpp"
#include "Kernel/SortHelper.hpp"
#include "Kernel/Term.hpp"
#include "Kernel/Unit.hpp"
#include "Saturation/ProvingHelper.hpp"
#include "Shell/Options.hpp"
#include "Shell/Statistics.hpp"

using namespace Lib;
using namespace Kernel;

namespace vampire_ffi {

/// Mirrors `Vampire.Translate.Op`. Kept as plain integers so the two sides can be
/// diffed by eye; any change must be made in both.
enum Op : uint32_t {
  OP_DECL_SORT = 1,  // nameIdx                                  -> defines the next sort slot
  OP_DECL_FUN  = 2,  // nameIdx, arity, resultSort, argSort*      -> defines the next function slot
  OP_DECL_PRED = 3,  // nameIdx, arity, argSort*                  -> defines the next predicate slot
  OP_VAR_SORT  = 4,  // var, sortSlot                             -> records a variable's sort
  OP_VAR       = 5,  // var                                       -> push term
  OP_APP       = 6,  // funSlot                                   -> pop arity terms, push term
  OP_ATOM      = 7,  // predSlot, polarity                        -> pop arity terms, push formula
  OP_EQ        = 8,  // polarity                                  -> pop 2 terms, push formula
  OP_TRUE      = 9,
  OP_FALSE     = 10,
  OP_NOT       = 11, //                                           -> pop 1 formula
  OP_AND       = 12, // n                                         -> pop n formulas
  OP_OR        = 13, // n                                         -> pop n formulas
  OP_IMP       = 14, //                                           -> pop 2 formulas
  OP_IFF       = 15, //                                           -> pop 2 formulas
  OP_FORALL    = 16, // n, (var, sortSlot)*n                      -> pop 1 formula
  OP_EXISTS    = 17, // n, (var, sortSlot)*n                      -> pop 1 formula
  OP_ASSERT    = 18, // conjecture                                -> pop 1 formula, emit a unit
};

/// A value on the builder's stack: Vampire keeps terms and formulas apart, and so must
/// this. Which one an instruction produces is fixed by its opcode, so a mismatch is a
/// bug in the Lean compiler rather than something a problem can trigger.
struct Value {
  bool isFormula;
  TermList term;
  Formula *formula;
};

/// The problem most recently built, held so it can be inspected and then solved. It
/// outlives the call because `env.setMainProblem` keeps a pointer to it.
static Problem *g_built = nullptr;
/// Vampire's rendering of each unit, captured while it is built.
///
/// Captured rather than kept as pointers: preprocessing replaces the problem's unit
/// list, and reading a `Unit*` back afterwards would be reading memory whose ownership
/// has moved on. The strings cost nothing next to saturation.
static std::vector<std::string> g_unitStrings;

struct BuildError {
  std::string what;
  explicit BuildError(std::string w) : what(std::move(w)) {}
};

static void require(bool cond, const char *msg) {
  if (!cond) throw BuildError(msg);
}

/// Walk the instruction stream, constructing signature entries and formulas.
static void build(const std::vector<std::string> &names,
                  const std::vector<uint32_t> &code)
{
  std::vector<TermList> sorts;      // sort slot -> Vampire sort
  std::vector<unsigned> funs;       // function slot -> functor
  std::vector<unsigned> preds;      // predicate slot -> predicate number
  DHMap<unsigned, TermList> varSorts;
  std::vector<Value> stack;
  UnitList *units = nullptr;
  g_unitStrings.clear();

  size_t pc = 0;
  auto next = [&]() -> uint32_t {
    require(pc < code.size(), "truncated instruction stream");
    return code[pc++];
  };
  auto name = [&](uint32_t i) -> const std::string & {
    require(i < names.size(), "name index out of range");
    return names[i];
  };
  auto sortAt = [&](uint32_t i) -> TermList {
    require(i < sorts.size(), "sort slot out of range");
    return sorts[i];
  };
  auto popTerm = [&]() -> TermList {
    require(!stack.empty() && !stack.back().isFormula, "expected a term on the stack");
    TermList t = stack.back().term;
    stack.pop_back();
    return t;
  };
  auto popFormula = [&]() -> Formula * {
    require(!stack.empty() && stack.back().isFormula, "expected a formula on the stack");
    Formula *f = stack.back().formula;
    stack.pop_back();
    return f;
  };
  auto pushTerm = [&](TermList t) { stack.push_back({false, t, nullptr}); };
  auto pushFormula = [&](Formula *f) { stack.push_back({true, TermList(), f}); };

  while (pc < code.size()) {
    uint32_t op = next();
    switch (op) {
      case OP_DECL_SORT: {
        const std::string &n = name(next());
        bool added;
        unsigned tc = env.signature->addTypeCon(n, 0, added);
        if (added) env.signature->getTypeCon(tc)->setType(OperatorType::getTypeConType(0));
        sorts.push_back(TermList(AtomicSort::createConstant(tc)));
        break;
      }
      case OP_DECL_FUN: {
        const std::string &n = name(next());
        unsigned arity = next();
        TermList result = sortAt(next());
        std::vector<TermList> args;
        for (unsigned i = 0; i < arity; i++) args.push_back(sortAt(next()));
        bool added;
        unsigned f = env.signature->addFunction(n, arity, added);
        if (added)
          env.signature->getFunction(f)->setType(
            OperatorType::getFunctionType(arity, args.data(), result));
        funs.push_back(f);
        break;
      }
      case OP_DECL_PRED: {
        const std::string &n = name(next());
        unsigned arity = next();
        std::vector<TermList> args;
        for (unsigned i = 0; i < arity; i++) args.push_back(sortAt(next()));
        bool added;
        unsigned p = env.signature->addPredicate(n, arity, added);
        // Vampire leaves the type of a nullary predicate implicit; setting one is an
        // error rather than a no-op, which is why the parser skips it too.
        if (added && arity != 0)
          env.signature->getPredicate(p)->setType(
            OperatorType::getPredicateType(arity, args.data()));
        preds.push_back(p);
        break;
      }
      case OP_VAR_SORT: {
        unsigned v = next();
        varSorts.set(v, sortAt(next()));
        break;
      }
      case OP_VAR: {
        pushTerm(TermList(next(), false));
        break;
      }
      case OP_APP: {
        uint32_t slot = next();
        require(slot < funs.size(), "function slot out of range");
        unsigned f = funs[slot];
        unsigned arity = env.signature->functionArity(f);
        std::vector<TermList> args(arity);
        for (unsigned i = 0; i < arity; i++) args[arity - 1 - i] = popTerm();
        pushTerm(TermList(Term::create(f, arity, args.data())));
        break;
      }
      case OP_ATOM: {
        uint32_t slot = next();
        require(slot < preds.size(), "predicate slot out of range");
        bool polarity = next() != 0;
        unsigned p = preds[slot];
        unsigned arity = env.signature->predicateArity(p);
        std::vector<TermList> args(arity);
        for (unsigned i = 0; i < arity; i++) args[arity - 1 - i] = popTerm();
        pushFormula(new AtomicFormula(Literal::create(p, arity, polarity, args.data())));
        break;
      }
      case OP_EQ: {
        bool polarity = next() != 0;
        TermList rhs = popTerm();
        TermList lhs = popTerm();
        // The sort is recovered from the signature rather than sent again: for an
        // application it is the symbol's result sort, and for a variable it is the sort
        // recorded by the binder that introduced it.
        TermList sort = SortHelper::getResultSort(lhs, varSorts);
        pushFormula(new AtomicFormula(Literal::createEquality(polarity, lhs, rhs, sort)));
        break;
      }
      case OP_TRUE:  pushFormula(new Formula(true)); break;
      case OP_FALSE: pushFormula(new Formula(false)); break;
      case OP_NOT:   pushFormula(new NegatedFormula(popFormula())); break;
      case OP_AND:
      case OP_OR: {
        unsigned n = next();
        require(n >= 2, "junction of fewer than two formulas");
        FormulaList *args = nullptr;
        for (unsigned i = 0; i < n; i++) FormulaList::push(popFormula(), args);
        pushFormula(new JunctionFormula(op == OP_AND ? AND : OR, args));
        break;
      }
      case OP_IMP:
      case OP_IFF: {
        Formula *rhs = popFormula();
        Formula *lhs = popFormula();
        pushFormula(new BinaryFormula(op == OP_IMP ? IMP : IFF, lhs, rhs));
        break;
      }
      case OP_FORALL:
      case OP_EXISTS: {
        unsigned n = next();
        require(n >= 1, "quantifier with no variables");
        std::vector<std::pair<unsigned, TermList>> vars;
        for (unsigned i = 0; i < n; i++) {
          unsigned v = next();
          vars.push_back({v, sortAt(next())});
        }
        Formula *body = popFormula();
        VSList *vs = nullptr;
        for (size_t i = vars.size(); i-- > 0;) VSList::push(vars[i], vs);
        pushFormula(new QuantifiedFormula(op == OP_FORALL ? FORALL : EXISTS, vs, body));
        break;
      }
      case OP_ASSERT: {
        bool conjecture = next() != 0;
        Formula *f = popFormula();
        UnitInputType kind = conjecture ? UnitInputType::NEGATED_CONJECTURE
                                        : UnitInputType::AXIOM;
        Unit *u = new FormulaUnit(f, FromInput(kind));
        UnitList::push(u, units);
        g_unitStrings.push_back(u->toString());
        break;
      }
      default:
        throw BuildError("unknown opcode " + std::to_string(op));
    }
  }

  require(stack.empty(), "instruction stream left values on the stack");

  // `units` was built by pushing, so it is in reverse assertion order; put it back.
  units = UnitList::reverse(units);

  g_built = new Problem(units);
  env.setMainProblem(g_built);
}

} // namespace vampire_ffi

using namespace vampire_ffi;

extern "C" {

/**
 * Build a problem from the compiled instruction stream.
 *
 * `names` indexes symbol names; `code` is the stream. Returns 0 on success, 2 if a
 * C++ exception escaped, 3 if the stream was malformed. The message for the latter is
 * available from `lean_vampire_build_error`.
 */
uint32_t lean_vampire_build(b_lean_obj_arg names, b_lean_obj_arg code, lean_obj_arg);

static std::string g_error;
static std::string g_solveReason;

uint32_t lean_vampire_build(b_lean_obj_arg names, b_lean_obj_arg code, lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  try {
    g_error.clear();
    std::vector<std::string> ns;
    for (size_t i = 0; i < lean_array_size(names); i++)
      ns.push_back(lean_string_cstr(lean_array_get_core(names, i)));
    std::vector<uint32_t> cs;
    for (size_t i = 0; i < lean_array_size(code); i++)
      cs.push_back(lean_unbox_uint32(lean_array_get_core(code, i)));

    // Before the reset, not after: the problem holds units allocated in the environment
    // that is about to be torn down, and destroying it afterwards would reach into it.
    delete g_built;
    g_built = nullptr;

    Lib::resetGlobalState();
    Lib::Timer::startClock();
    build(ns, cs);
    return 0;
  } catch (BuildError &e) {
    g_error = e.what;
    return 3;
  } catch (Exception &e) {
    g_error = e.msg();
    return 2;
  } catch (...) {
    g_error = "unknown C++ exception";
    return 2;
  }
}

/** Why the last solve did not produce a refutation. */
lean_obj_res lean_vampire_solve_reason(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return lean_mk_string(g_solveReason.c_str());
}

/** The message from the last failed build. */
lean_obj_res lean_vampire_build_error(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return lean_mk_string(g_error.c_str());
}

/** How many units the last build produced. */
uint32_t lean_vampire_problem_size(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return static_cast<uint32_t>(g_unitStrings.size());
}

/**
 * Vampire's own rendering of unit `i`.
 *
 * This is the one place text appears, and it goes the other way: it is what Vampire
 * says it received, which is the point — it is evidence about the transfer rather than
 * the medium of it.
 */
lean_obj_res lean_vampire_problem_unit(uint32_t i, lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  try {
    if (i >= g_unitStrings.size()) return lean_mk_string("");
    return lean_mk_string(g_unitStrings[i].c_str());
  } catch (...) {
    return lean_mk_string("");
  }
}

/**
 * Preprocess and saturate the problem built by `lean_vampire_build`.
 *
 * Returns 1 if a refutation was found, 0 if not, 2 on an exception. Bounded by a soft
 * time limit, which throws out of the search loop; never the timer thread, which would
 * `_Exit` the host.
 */
uint32_t lean_vampire_solve(uint32_t deciseconds, lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  try {
    if (g_built == nullptr) return 0;
    env.options->setTimeLimitInDeciseconds(deciseconds);
    // The options the Lean code generator is written against. `proof_extra lean` is
    // what makes preprocessing record the information the replay needs — how many
    // clauses a formula clausified into, which literal a subsumption selected — and
    // without it those come back empty rather than wrong, which is worse.
    env.options->set("proof", "leancheck");
    env.options->set("proof_extra", "lean");
    env.options->set("skolemization", "syntactic");
    // AVATAR is off because its proof steps are not ported yet: the SAT refutation,
    // the split clauses and the per-theorem split binders all need machinery the Lean
    // replay does not have. Turning it off costs search power on large problems and
    // nothing on small ones; turning it back on is what the port needs next.
    env.options->set("avatar", "off");
    Saturation::ProvingHelper::runVampire(*g_built, *env.options);
    if (env.statistics->refutation != nullptr) return 1;
    std::ostringstream why;
    env.statistics->explainRefutationNotFound(why);
    g_solveReason = why.str();
    if (g_solveReason.empty())
      g_solveReason = "the search finished without a refutation";
    return 0;
  } catch (Exception &e) {
    g_solveReason = e.msg();
    return 2;
  } catch (...) {
    g_solveReason = "unknown C++ exception";
    return 2;
  }
}

/**
 * A one-line-per-step outline of the refutation: unit number, rule, premises.
 *
 * A survey, not the proof: `vampire_proof.cpp` exports the proof as structured data.
 */
lean_obj_res lean_vampire_proof_outline(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  try {
    Unit *refutation = env.statistics->refutation;
    if (refutation == nullptr) return lean_mk_string("");
    struct Survey : public InferenceStore::AbstractProofPrinter {
      std::string text;
      Survey(std::ostream &o, InferenceStore *is) : AbstractProofPrinter(o, is) {}
      void printStep(Unit *u) override {
        text += std::to_string(u->number());
        text += "  ";
        text += ruleName(u->inference().rule());
        text += "  [";
        bool first = true;
        for (Unit *p : iterTraits(u->getParents())) {
          if (!first) text += ",";
          text += std::to_string(p->number());
          first = false;
        }
        text += "]  ";
        text += u->toString();
        text += "\n";
      }
    };
    std::ostringstream sink;
    Survey s(sink, InferenceStore::instance());
    s.scheduleForPrinting(refutation);
    s.print();
    return lean_mk_string(s.text.c_str());
  } catch (...) {
    return lean_mk_string("");
  }
}

} // extern "C"
