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

#include "vampire_export.hpp"
#include "vampire_lock.hpp"

#include <sstream>
#include <string>
#include <vector>

#include "CASC/Schedules.hpp"
#include "Lib/Environment.hpp"
#include "Lib/Int.hpp"
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
#include "Kernel/Theory.hpp"
#include "Kernel/Unit.hpp"
#include "Lib/Random.hpp"
#include "Saturation/ProvingHelper.hpp"
#include "Saturation/SaturationAlgorithm.hpp"
#include "Shell/Options.hpp"
#include "Shell/Preprocess.hpp"
#include "Shell/Property.hpp"
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
  // Arithmetic. Vampire's numeric sorts and interpreted symbols are not entries in the
  // signature that a name can be added to -- they are fixed, and `Theory` hands them
  // out -- so they need their own opcodes rather than a `nameIdx`.
  OP_DECL_SORT_NUM = 20, // numKind                               -> defines the next sort slot
  OP_NUM           = 21, // nameIdx (the numeral, written out), numKind -> push term
  OP_INTERP_FUN    = 22, // arithOp, numKind, arity               -> pop arity terms, push term
  OP_INTERP_PRED   = 23, // arithOp, numKind, polarity, arity     -> pop arity terms, push formula
};

/// Which of Vampire's three numeric sorts an arithmetic instruction is about. Mirrored
/// in `Vampire/Translate/Build.lean`.
enum NumKind : uint32_t { NUM_INT = 0, NUM_RAT = 1, NUM_REAL = 2 };

/// An arithmetic operation, independent of the sort it is at. Mirrored in
/// `Vampire/Translate/Build.lean`. These are *our* numbers, not Vampire's: mapping them
/// onto `Theory::Interpretation` here rather than sending its enum values across means
/// the stream does not break silently when that enum gains a member.
enum ArithOp : uint32_t {
  A_PLUS = 1, A_MINUS = 2, A_TIMES = 3, A_UMINUS = 4, A_QUOTIENT = 5, A_ABS = 6,
  A_LESS = 10, A_LESS_EQ = 11, A_GREATER = 12, A_GREATER_EQ = 13,
  A_TO_REAL = 20, A_TO_INT = 21, A_TO_RAT = 22, A_FLOOR = 23,
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
/// Everything a run produces, kept per thread so that reading it back cannot pick up
/// another thread's results.
thread_local std::vector<uint32_t> t_proofCode;
thread_local std::vector<std::string> t_proofNames;
thread_local std::vector<std::string> t_unitStrings;
thread_local std::string t_outline;
thread_local std::string t_message;
thread_local bool t_refuted = false;
/// `Shell::Statistics::TerminationReason` for the last run, as its own enumerator value.
/// The caller needs it to tell a search that ran out of budget -- worth retrying with
/// more -- from one that saturated, which no budget would change.
thread_local uint32_t t_termination = 0;
/// Milliseconds spent building the problem, clausifying it, and searching.
///
/// Reported separately because only the last of the three is bounded by the caller's
/// time limit -- `SaturationAlgorithm::runImpl` is where the check is -- so "the run
/// used its whole budget" and "the search used its whole budget" are different
/// statements, and a run that spends its budget in `Preprocess` has no way to say so
/// otherwise.
thread_local uint32_t t_buildMs = 0;
thread_local uint32_t t_clausifyMs = 0;
thread_local uint32_t t_searchMs = 0;
/// And reading the refutation back out, which is neither bounded nor negligible: it
/// scales with the size of the proof rather than with the difficulty of finding it, and
/// on `ALG165-1`'s 2578 steps it is 104ms of a 182ms call. Without it the phases do not
/// add up to the call, which is the first thing anyone checks them against.
thread_local uint32_t t_exportMs = 0;
/// The portfolio schedule for the last problem `lean_vampire_schedule` was asked about:
/// one encoded strategy per entry, and the deciseconds the schedule intends it to have.
thread_local std::vector<std::string> t_scheduleCodes;
thread_local std::vector<uint32_t> t_scheduleTimes;

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
/// One of Vampire's three numeric sorts.
static TermList numSort(uint32_t kind) {
  switch (kind) {
    case NUM_INT:  return AtomicSort::intSort();
    case NUM_RAT:  return AtomicSort::rationalSort();
    case NUM_REAL: return AtomicSort::realSort();
    default: throw BuildError("unknown numeric sort kind");
  }
}

/// A numeral, from the decimal (or `p/q`) text the Lean side wrote it as.
///
/// The text crosses rather than a machine number, and that is not laziness: Lean's
/// numerals are arbitrary-precision and so are Vampire's, so any fixed-width channel
/// between them would be the one place a problem could quietly change meaning.
static Term *numeral(const std::string &lit, uint32_t kind) {
  // `parse` returns an `Option` rather than throwing, so a numeral Vampire cannot read
  // is a build error naming it, not a crash inside the prover.
  switch (kind) {
    case NUM_INT: {
      auto n = IntegerConstantType::parse(lit);
      if (n.isNone()) throw BuildError("not an integer numeral: '" + lit + "'");
      return Theory::instance()->representConstant(n.unwrap());
    }
    case NUM_RAT: {
      auto n = RationalConstantType::parse(lit);
      if (n.isNone()) throw BuildError("not a rational numeral: '" + lit + "'");
      return Theory::instance()->representConstant(n.unwrap());
    }
    case NUM_REAL: {
      auto n = RealConstantType::parse(lit);
      if (n.isNone()) throw BuildError("not a real numeral: '" + lit + "'");
      return Theory::instance()->representConstant(n.unwrap());
    }
    default: throw BuildError("unknown numeric sort kind");
  }
}

/// An arithmetic function symbol, at one of the three sorts.
static Theory::Interpretation fnInterp(uint32_t aop, uint32_t kind) {
  switch (kind) {
    case NUM_INT:
      switch (aop) {
        case A_PLUS:     return Theory::INT_PLUS;
        case A_MINUS:    return Theory::INT_MINUS;
        case A_TIMES:    return Theory::INT_MULTIPLY;
        case A_UMINUS:   return Theory::INT_UNARY_MINUS;
        case A_ABS:      return Theory::INT_ABS;
        // Integer division is a family in TPTP; `$quotient_e` is the one SMT-LIB's
        // `div` agrees with, so it is the one a translated `Int./` must mean.
        case A_QUOTIENT: return Theory::INT_QUOTIENT_E;
        case A_TO_REAL:  return Theory::INT_TO_REAL;
        case A_TO_INT:   return Theory::INT_TO_INT;
        case A_TO_RAT:   return Theory::INT_TO_RAT;
        case A_FLOOR:    return Theory::INT_FLOOR;
        default: break;
      }
      break;
    case NUM_RAT:
      switch (aop) {
        case A_PLUS:     return Theory::RAT_PLUS;
        case A_MINUS:    return Theory::RAT_MINUS;
        case A_TIMES:    return Theory::RAT_MULTIPLY;
        case A_UMINUS:   return Theory::RAT_UNARY_MINUS;
        case A_QUOTIENT: return Theory::RAT_QUOTIENT;
        case A_TO_REAL:  return Theory::RAT_TO_REAL;
        case A_TO_INT:   return Theory::RAT_TO_INT;
        case A_TO_RAT:   return Theory::RAT_TO_RAT;
        case A_FLOOR:    return Theory::RAT_FLOOR;
        default: break;
      }
      break;
    case NUM_REAL:
      switch (aop) {
        case A_PLUS:     return Theory::REAL_PLUS;
        case A_MINUS:    return Theory::REAL_MINUS;
        case A_TIMES:    return Theory::REAL_MULTIPLY;
        case A_UMINUS:   return Theory::REAL_UNARY_MINUS;
        case A_QUOTIENT: return Theory::REAL_QUOTIENT;
        case A_TO_REAL:  return Theory::REAL_TO_REAL;
        case A_TO_INT:   return Theory::REAL_TO_INT;
        case A_TO_RAT:   return Theory::REAL_TO_RAT;
        case A_FLOOR:    return Theory::REAL_FLOOR;
        default: break;
      }
      break;
    default: throw BuildError("unknown numeric sort kind");
  }
  throw BuildError("no interpreted function for this operation at this sort");
}

/// An arithmetic predicate symbol, at one of the three sorts.
static Theory::Interpretation predInterp(uint32_t aop, uint32_t kind) {
  switch (kind) {
    case NUM_INT:
      switch (aop) {
        case A_LESS:       return Theory::INT_LESS;
        case A_LESS_EQ:    return Theory::INT_LESS_EQUAL;
        case A_GREATER:    return Theory::INT_GREATER;
        case A_GREATER_EQ: return Theory::INT_GREATER_EQUAL;
        default: break;
      }
      break;
    case NUM_RAT:
      switch (aop) {
        case A_LESS:       return Theory::RAT_LESS;
        case A_LESS_EQ:    return Theory::RAT_LESS_EQUAL;
        case A_GREATER:    return Theory::RAT_GREATER;
        case A_GREATER_EQ: return Theory::RAT_GREATER_EQUAL;
        default: break;
      }
      break;
    case NUM_REAL:
      switch (aop) {
        case A_LESS:       return Theory::REAL_LESS;
        case A_LESS_EQ:    return Theory::REAL_LESS_EQUAL;
        case A_GREATER:    return Theory::REAL_GREATER;
        case A_GREATER_EQ: return Theory::REAL_GREATER_EQUAL;
        default: break;
      }
      break;
    default: throw BuildError("unknown numeric sort kind");
  }
  throw BuildError("no interpreted predicate for this operation at this sort");
}

/// Register Vampire's five built-in sorts, in their canonical order.
///
/// Not a tidiness measure. `Signature::getRealSort` and its siblings add the sort by
/// *name*, so which index `$real` lands at depends on the order the sorts happen to be
/// asked for; and `AtomicSort::realSort` caches the sort term in a file-scope pointer
/// which `Lib::resetGlobalState` drops. Between the two, a run that reached `$real`
/// through the cache rather than through `getRealSort` got a term whose functor was the
/// index `$real` had in an *earlier* signature, while the current one had never
/// registered it -- `typeCons()` of 2 against a term naming sort 3. Everything then
/// worked until something printed the term, at which point `Signature::functionName`
/// indexed past the end of `_typeCons`. `ASS_L` guards that, and `ASS_L` is compiled out
/// at `VDEBUG=0`, so what came back was a garbage `Symbol*` and the crash landed in
/// `std::string::length` with nothing to say about where it came from.
///
/// Asking for all five, in order, at the top of every build makes the indices the same
/// in every run: `$i`, `$o`, `$int`, `$rat`, `$real`. The TPTP binary gets this for free
/// because its parser touches them while reading the header; an embedded builder that
/// only ever mentions `$real` does not.
static void registerBuiltinSorts() {
  // Drop the cached sort terms first: they may still point at the previous signature,
  // and a cached term is exactly how the index above went stale.
  Kernel::Term::resetBuiltinCache();
  env.signature->getDefaultSort();
  env.signature->getBoolSort();
  env.signature->getIntSort();
  env.signature->getRatSort();
  env.signature->getRealSort();
}



static void build(const std::vector<std::string> &names,
                  const std::vector<uint32_t> &code)
{
  registerBuiltinSorts();
  std::vector<TermList> sorts;      // sort slot -> Vampire sort
  std::vector<unsigned> funs;       // function slot -> functor
  std::vector<unsigned> preds;      // predicate slot -> predicate number
  DHMap<unsigned, TermList, FnvHash, IdentityHash> varSorts;
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
      case OP_DECL_SORT_NUM: {
        sorts.push_back(numSort(next()));
        break;
      }
      case OP_NUM: {
        const std::string &lit = name(next());
        uint32_t kind = next();
        pushTerm(TermList(numeral(lit, kind)));
        break;
      }
      case OP_INTERP_FUN: {
        uint32_t aop = next();
        uint32_t kind = next();
        unsigned arity = next();
        unsigned f = env.signature->getInterpretingSymbol(fnInterp(aop, kind));
        require(env.signature->functionArity(f) == arity,
                "arity disagrees with the interpreted function");
        std::vector<TermList> args(arity);
        for (unsigned i = 0; i < arity; i++) args[arity - 1 - i] = popTerm();
        pushTerm(TermList(Term::create(f, arity, args.data())));
        break;
      }
      case OP_INTERP_PRED: {
        uint32_t aop = next();
        uint32_t kind = next();
        bool polarity = next() != 0;
        unsigned arity = next();
        unsigned p = env.signature->getInterpretingSymbol(predInterp(aop, kind));
        require(env.signature->predicateArity(p) == arity,
                "arity disagrees with the interpreted predicate");
        std::vector<TermList> args(arity);
        for (unsigned i = 0; i < arity; i++) args[arity - 1 - i] = popTerm();
        pushFormula(new AtomicFormula(Literal::create(p, arity, polarity, args.data())));
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
        // `createEquality` orients the equation by the term ordering when it shares
        // the literal, so an input equation can come back the other way round.
        // `AtomicFormula::flipForPrinting` exists to record that — the TPTP parser sets
        // it — and having the builder set it too does fix the one input bridge that
        // needs it, but it restates every input unit, and the derived steps drawn from
        // them stop matching what VampLean's tactics produce. ALG014 fails that way.
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
        // `args()` in stream order. Building the reverse — so that Vampire *prints*
        // what Lean sent, and an input unit round-trips exactly — does fix the input
        // bridge, but it changes the problem Vampire is given: it then finds different
        // proofs, and ALG014 fails on a clausification it had been replaying fine.
        // Not worth trading a passing problem for a failing one.
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

// --- strategies ---------------------------------------------------------------------
//
// A strategy is one line of one of Vampire's schedules, in the encoded form
// `Options::readFromEncodedOptions` reads:
//
//   dis+1010_3_tgt=full:drc=off:…:ss=axioms_0
//   └┬┘└─┬┘ │ └───────────┬──────────────┘ │
//    │   │  awr        options          time limit, deciseconds
//    │  selection
//   saturation algorithm
//
// The trailing limit is what makes the string parseable at all: an option value may
// itself contain an underscore (`gtg=exists_sym`), so the *last* one is the only
// separator that can be found reliably, which is why every schedule line carries one.

/// Split an encoded strategy into the part before its options, the options themselves,
/// and the trailing time limit. Returns false if it is not in that shape.
///
/// The boundaries are the ones `readFromEncodedOptions` uses: the first two underscores
/// end the selection and the age-weight ratio, and the last one begins the time limit.
static bool splitStrategy(const std::string &code, std::string &head,
                          std::string &options, std::string &tail)
{
  size_t last = code.find_last_of('_');
  if (last == std::string::npos) return false;
  size_t first = code.find('_');
  if (first == last) return false;
  size_t second = code.find('_', first + 1);
  if (second == std::string::npos || second >= last) return false;
  head = code.substr(0, second + 1);
  options = code.substr(second + 1, last - second - 1);
  tail = code.substr(last);
  return true;
}

/// Drop `name=value` from a strategy's options.
///
/// Used for the two options that budget a slice in *instructions* rather than in time.
/// They are why the 2025 schedules end in `_0`: a slice is meant to run until it has
/// executed so many million instructions, which needs `perf` and so exists only under
/// Linux — `Lib/Portability.hpp` does not even register the options elsewhere. An
/// embedded run is bounded by its caller's clock either way, so removing them makes a
/// strategy mean the same thing on both platforms instead of being rejected on one.
static std::string dropOption(const std::string &code, const std::string &name)
{
  std::string head, options, tail;
  if (!splitStrategy(code, head, options, tail)) return code;
  std::string kept;
  size_t at = 0;
  while (at <= options.size()) {
    size_t colon = options.find(':', at);
    std::string one = options.substr(at, colon == std::string::npos
                                           ? std::string::npos : colon - at);
    size_t eq = one.find('=');
    if (!(eq != std::string::npos && one.substr(0, eq) == name)) {
      if (!kept.empty()) kept += ':';
      kept += one;
    }
    if (colon == std::string::npos) break;
    at = colon + 1;
  }
  return head + kept + tail;
}

/// The deciseconds a schedule intends a strategy to have.
///
/// `PortfolioMode::getSliceTime`, for the one case an embedded run meets: the trailing
/// limit of a 2025 schedule line is `0`, and the slice budgets itself with `i=` instead
/// — mega-instructions, which this cannot enforce, so they are converted at the same
/// nominal 200 MIPS the portfolio uses when it finds itself without `perf`. A strategy
/// with neither is unlimited, which here means "whatever budget is left".
static uint32_t sliceDeciseconds(const std::string &code)
{
  size_t last = code.find_last_of('_');
  unsigned declared = 0;
  if (last != std::string::npos &&
      Int::stringToUnsignedInt(code.substr(last + 1), declared) && declared > 0)
    return declared;

  size_t at = code.find(":i=");
  if (at == std::string::npos) at = code.find("_i=");
  if (at == std::string::npos) return 0;
  at += 3;
  size_t end = code.find_first_of(":_", at);
  unsigned instructions = 0;
  if (!Int::stringToUnsignedInt(code.substr(at, end - at), instructions)) return 0;
  return 1 + instructions / 200;
}

/// A strategy as this side will run it: no instruction budgets, and a time limit in
/// the trailing position so that `readFromEncodedOptions` can find the boundary.
static std::string sanitiseStrategy(const std::string &code)
{
  std::string out = dropOption(dropOption(code, "i"), "sil");
  // A strategy written out by hand — the ones quoted in `docs/portfolio.md`, say — has
  // no trailing limit. Give it the one that means "no limit of its own"; the caller's
  // budget is what bounds it.
  size_t last = out.find_last_of('_');
  unsigned ignored;
  if (last == std::string::npos ||
      !Int::stringToUnsignedInt(out.substr(last + 1), ignored))
    out += "_0";
  return out;
}

/// Set the options a run is made under: the strategy's, if there is one, and then the
/// ones this port needs whatever the strategy says.
///
/// Order matters. `proof_extra lean` is what makes preprocessing record the information
/// the replay needs — how many clauses a formula clausified into, which literal a
/// subsumption selected — and a strategy that set `proof` would otherwise take it away.
/// The time limit goes last for the same reason: the strategy's own is a share of a
/// portfolio's wall clock, and what bounds this run is the caller's budget.
///
/// Which is also why the strategy is checked for consistency *before* those are set and
/// not after. `checkGlobalOptionConstraints` is a check on the whole option set, and the
/// whole option set here is one no invocation of the executable would produce: `proof
/// leancheck` requires `output_mode lean`, because in a binary the two go together, and
/// this reads the refutation out of `env.statistics` rather than off a stream. Checking
/// after would reject every strategy for a constraint about printing.
///
/// Throws `Exception` if the strategy is not one this build can run — `sas=z3` where
/// Vampire was built without Z3, or an option combination the check rejects. That is a
/// reason to try the next strategy, not to fail the goal, so the caller reports it as
/// its own status.
/// Whether a strategy looks for a model rather than a refutation.
///
/// `--schedule casc` has nine of them, `fmb…`, and they are no use here twice over: a
/// finite model builder answers "satisfiable" or nothing, so it can never hand back a
/// refutation to replay, and `FiniteModelBuilder::init` dereferences a null pointer when
/// it is run inside this shim rather than the executable. Skipped rather than fixed,
/// because there is nothing to gain by fixing it — the slice it would occupy is better
/// spent on a strategy that could produce a proof.
static bool buildsModels(const std::string &strategy)
{
  return strategy.compare(0, 3, "fmb") == 0;
}

static void configure(const std::string &strategy, uint32_t deciseconds)
{
  if (!strategy.empty()) {
    if (buildsModels(strategy))
      throw Lib::UserErrorException(std::string(
        "it builds finite models, so it has no refutation to give"));
    env.options->readFromEncodedOptions(sanitiseStrategy(strategy));
    // The portfolio normalises the problem once in the parent and each worker inherits
    // it; nothing here does, and a strategy that asked would renumber the units the
    // replay maps back onto the user's hypotheses.
    env.options->setNormalize(false);
    env.options->setForcedOptionValues();
    env.options->checkGlobalOptionConstraints();
  }
  env.options->set("proof", "leancheck");
  env.options->set("proof_extra", "lean");
  env.options->set("skolemization", "syntactic");
  env.options->setTimeLimitInDeciseconds(deciseconds);
  // And bound the search by it. `setTimeLimitInDeciseconds` alone does not: it is read
  // by the limited-resource strategy, which uses it to estimate which clauses it can
  // still reach, but nothing in the loop stops when it is up. The executable is stopped
  // by the thread `Timer::reinitialise` spawns, which `_Exit`s the process and cannot be
  // used here, so what bounds an embedded run is the cooperative check in
  // `SaturationAlgorithm::runImpl` -- and until this line nothing set the limit that
  // check reads. A run therefore ignored its timeout: `BOO028-1` asked for two seconds
  // and searched for thirty.
  Saturation::SaturationAlgorithm::s_embeddedSoftTimeLimit = deciseconds;
}

} // namespace vampire_ffi

using namespace vampire_ffi;

extern "C" {

/**
 * Build a problem, solve it, and export the refutation — the whole run, in one call.
 *
 * `names` indexes symbol names and `code` is the instruction stream from
 * `Vampire/Translate/Build.lean`. Returns 0 if a refutation was found and exported,
 * 1 if the search found none, 2 if a C++ exception escaped, 3 if the instruction
 * stream was malformed, 4 if the refutation could not be exported, 5 if `strategy` is
 * not a strategy this build can run. The reason is in `lean_vampire_message`.
 *
 * `strategy` is one encoded line of a Vampire schedule, or empty for the default
 * strategy. It is a *whole* run's worth of configuration and not a portfolio slice:
 * the environment is torn down and rebuilt on the way in, so one call is one strategy
 * and a portfolio is a sequence of calls, made by the caller.
 *
 * One call, not three, because the entry lock makes a call atomic but not a sequence of
 * them: with Lean elaborating declarations in parallel, another thread's build could
 * land between this thread's build and its solve, and Vampire's environment is shared.
 */
uint32_t lean_vampire_run(b_lean_obj_arg names, b_lean_obj_arg code,
                          uint32_t deciseconds, b_lean_obj_arg strategy, lean_obj_arg)
{
  vampire_ffi::EntryGuard guard;
  t_proofCode.clear();
  t_proofNames.clear();
  t_unitStrings.clear();
  t_outline.clear();
  t_message.clear();
  t_refuted = false;
  t_termination = 0;
  t_buildMs = 0;
  t_clausifyMs = 0;
  t_searchMs = 0;
  t_exportMs = 0;
  try {
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
    t_buildMs = static_cast<uint32_t>(Lib::Timer::elapsedMilliseconds());
    t_unitStrings = g_unitStrings;

    // The strategy's options, then the ones the Lean code generator is written against.
    // A strategy this build cannot run is the caller's to skip rather than a failure of
    // the goal, so it comes back as its own status.
    try {
      configure(std::string(lean_string_cstr(strategy)), deciseconds);
    } catch (Exception &e) {
      // Named, because a broken option constraint reports itself as a bare sentence
      // and one line of a schedule looks much like another in a trace.
      t_message = "this build cannot run '" + std::string(lean_string_cstr(strategy)) +
                  "':" + (e.msg().empty() ? " no reason given" : e.msg());
      return 5;
    }

    // `ProvingHelper::runVampire`, in two halves, so the caller can be told which one
    // its budget went to. The halves are not equivalent: the soft limit above is
    // checked in the saturation loop and nowhere else, so preprocessing is unbounded,
    // and a problem whose clausification runs away looks from the outside exactly like
    // a slow search. This is upstream's own sequence -- the seed, `Preprocess`, then
    // `runVampireSaturation` -- with the resource-limit catches `runVampire` wraps
    // around both kept around the first, since the second has its own.
    if (env.options->randomSeed() != 0)
      Lib::Random::setSeed(env.options->randomSeed());
    else
      Lib::Random::resetSeed();

    bool preprocessed = true;
    try {
      Shell::Preprocess prepro(*env.options);
      prepro.preprocess(*g_built);
    } catch (const std::bad_alloc &) {
      env.statistics->terminationReason = TerminationReason::MEMORY_LIMIT;
      env.statistics->refutation = nullptr;
      preprocessed = false;
    } catch (TimeLimitExceededException &) {
      env.statistics->terminationReason = TerminationReason::TIME_LIMIT;
      env.statistics->refutation = nullptr;
      preprocessed = false;
    } catch (ActivationLimitExceededException &) {
      env.statistics->terminationReason = TerminationReason::ACTIVATION_LIMIT;
      env.statistics->refutation = nullptr;
      preprocessed = false;
    }
    uint32_t afterClausify = static_cast<uint32_t>(Lib::Timer::elapsedMilliseconds());
    t_clausifyMs = afterClausify - t_buildMs;

    if (preprocessed)
      Saturation::ProvingHelper::runVampireSaturation(*g_built, *env.options);
    t_searchMs =
      static_cast<uint32_t>(Lib::Timer::elapsedMilliseconds()) - afterClausify;
    t_termination = static_cast<uint32_t>(env.statistics->terminationReason);

    if (env.statistics->refutation == nullptr) {
      std::ostringstream why;
      env.statistics->explainRefutationNotFound(why);
      t_message = why.str();
      if (t_message.empty()) t_message = "the search finished without a refutation";
      return 1;
    }
    t_refuted = true;
    uint32_t afterSearch = static_cast<uint32_t>(Lib::Timer::elapsedMilliseconds());
    t_outline = vampire_ffi::proofOutline();
    uint32_t status = vampire_ffi::exportRefutation(t_proofCode, t_proofNames, t_message);
    t_exportMs =
      static_cast<uint32_t>(Lib::Timer::elapsedMilliseconds()) - afterSearch;
    return status == 0 ? 0 : 4;
  } catch (BuildError &e) {
    t_message = e.what;
    return 3;
  } catch (Exception &e) {
    t_message = e.msg();
    return 2;
  } catch (...) {
    t_message = "unknown C++ exception";
    return 2;
  }
}

/**
 * Vampire's own portfolio schedule for this problem.
 *
 * The schedule is a function of the problem — `Schedules::getCasc2025Schedule` branches
 * on its `Property`, so a unit-equality problem gets the UEQ schedule and one with
 * arithmetic in it the ALASCA one — which is why this takes the problem and not just a
 * name. It builds it and throws it away again; the caller runs the strategies through
 * `lean_vampire_run`, one whole call each.
 *
 * What it does *not* do is the rest of `PortfolioMode::searchForProof`. Normalisation
 * would renumber the units the replay maps back onto the user's hypotheses, and
 * `TheoryFinder` looks for theory axioms in a problem that by construction has none.
 * The `champions` half of the schedule is dropped for the reason the portfolio itself
 * drops it below two cores: they are long runs meant to occupy a worker of their own
 * while the quick schedule covers the same ground in the others, and there is one
 * worker here.
 *
 * Returns 0 on success, 2 if a C++ exception escaped, 3 if the instruction stream was
 * malformed. The strategies are read back with `lean_vampire_schedule_codes` and their
 * intended shares of the budget with `lean_vampire_schedule_times`.
 */
uint32_t lean_vampire_schedule(b_lean_obj_arg names, b_lean_obj_arg code, lean_obj_arg)
{
  vampire_ffi::EntryGuard guard;
  t_scheduleCodes.clear();
  t_scheduleTimes.clear();
  t_message.clear();
  try {
    std::vector<std::string> ns;
    for (size_t i = 0; i < lean_array_size(names); i++)
      ns.push_back(lean_string_cstr(lean_array_get_core(names, i)));
    std::vector<uint32_t> cs;
    for (size_t i = 0; i < lean_array_size(code); i++)
      cs.push_back(lean_unbox_uint32(lean_array_get_core(code, i)));

    delete g_built;
    g_built = nullptr;

    Lib::resetGlobalState();
    Lib::Timer::startClock();
    build(ns, cs);

    CASC::Schedule quick, champions;
    CASC::Schedules::getCasc2025Schedule(*g_built->getProperty(), quick, champions);
    // `Stack` is a stack; the schedule is meant to be run from the bottom up.
    CASC::Schedule::BottomFirstIterator it(quick);
    while (it.hasNext()) {
      std::string one = it.next();
      // Dropped here as well as refused in `configure`, so that a model builder does
      // not occupy a slice of a budget that is being spent looking for a proof.
      if (buildsModels(one)) continue;
      t_scheduleTimes.push_back(sliceDeciseconds(one));
      t_scheduleCodes.push_back(sanitiseStrategy(one));
    }
    return 0;
  } catch (BuildError &e) {
    t_message = e.what;
    return 3;
  } catch (Exception &e) {
    t_message = e.msg();
    return 2;
  } catch (...) {
    t_message = "unknown C++ exception";
    return 2;
  }
}

/** The strategies of the schedule last asked for. */
lean_obj_res lean_vampire_schedule_codes(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  lean_object *a = lean_alloc_array(t_scheduleCodes.size(), t_scheduleCodes.size());
  for (size_t i = 0; i < t_scheduleCodes.size(); i++)
    lean_array_set_core(a, i, lean_mk_string(t_scheduleCodes[i].c_str()));
  return a;
}

/** What the schedule intends each of them to get, in deciseconds; 0 for "no limit of
 * its own", which the caller reads as whatever is left of the budget. */
lean_obj_res lean_vampire_schedule_times(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  lean_object *a = lean_alloc_array(t_scheduleTimes.size(), t_scheduleTimes.size());
  for (size_t i = 0; i < t_scheduleTimes.size(); i++)
    lean_array_set_core(a, i, lean_box_uint32(t_scheduleTimes[i]));
  return a;
}

/** Anything the prover wrote to its own streams, which the shim captured. */
lean_obj_res lean_vampire_prover_output(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return lean_mk_string(vampire_ffi::proverOutput().c_str());
}

/** Why the last run did not produce a proof, or how it failed. */
lean_obj_res lean_vampire_message(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return lean_mk_string(t_message.c_str());
}

/**
 * Why the last run stopped, as `Shell::Statistics::TerminationReason`.
 *
 * The caller escalates the time limit rather than passing the user's whole budget
 * straight to the prover, so it has to know whether more budget could help: a run cut
 * off by a limit, or one whose limited-resource pruning discarded clauses it then
 * needed, is worth retrying, and a saturated one is not.
 */
uint32_t lean_vampire_termination(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return t_termination;
}

/** Milliseconds the last run spent building the problem. */
uint32_t lean_vampire_build_ms(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return t_buildMs;
}

/** Milliseconds the last run spent in `Preprocess` -- clausification included. */
uint32_t lean_vampire_clausify_ms(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return t_clausifyMs;
}

/** Milliseconds the last run spent in the saturation loop, which is the only one of
 * the four the time limit bounds. */
uint32_t lean_vampire_search_ms(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return t_searchMs;
}

/** Milliseconds the last run spent exporting the refutation it found. */
uint32_t lean_vampire_export_ms(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return t_exportMs;
}

/** How many units the last run's problem had. */
uint32_t lean_vampire_problem_size(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return static_cast<uint32_t>(t_unitStrings.size());
}

/**
 * Vampire's own rendering of unit `i` of the last run's problem.
 *
 * This is the one place text appears, and it goes the other way: it is what Vampire
 * says it received, which is the point — it is evidence about the transfer rather than
 * the medium of it.
 */
lean_obj_res lean_vampire_problem_unit(uint32_t i, lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  if (i >= t_unitStrings.size()) return lean_mk_string("");
  return lean_mk_string(t_unitStrings[i].c_str());
}

/** A one-line-per-step outline of the refutation, for diagnostics. */
lean_obj_res lean_vampire_proof_outline(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return lean_mk_string(t_outline.c_str());
}

/** The exported refutation: the instruction stream and the names it indexes. */
lean_obj_res lean_vampire_proof_code(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  lean_object *a = lean_alloc_array(t_proofCode.size(), t_proofCode.size());
  for (size_t i = 0; i < t_proofCode.size(); i++)
    lean_array_set_core(a, i, lean_box_uint32(t_proofCode[i]));
  return a;
}

lean_obj_res lean_vampire_proof_names(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  lean_object *a = lean_alloc_array(t_proofNames.size(), t_proofNames.size());
  for (size_t i = 0; i < t_proofNames.size(); i++)
    lean_array_set_core(a, i, lean_mk_string(t_proofNames[i].c_str()));
  return a;
}

} // extern "C"
