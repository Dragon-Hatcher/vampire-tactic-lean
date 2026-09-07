// Exporting a refutation as structured data.
//
// This is the input side of the proof-translation port. `Shell/LeanChecker` walks the
// same proof and prints Lean source; the Lean side of this FFI walks it and builds Lean
// `Expr`s and tactic syntax. Everything it needs to do that has to cross the boundary,
// and it crosses as numbers:
//
//   * the symbols the proof mentions, so Lean can map each one back to the term it
//     translated it from (or, for one Vampire invented, introduce a fresh constant);
//   * each unit's statement, as a postfix stream over those symbols;
//   * the premises, the AVATAR splits it holds under, and the input type;
//   * the substitutions the inference replayer recovers, which are what
//     `genericNPremiseInference` prints as the `have iN := hN t…` instantiation lines.
//
// The replay is the same call LeanChecker makes: `InferenceReplayer::replayInference`
// re-runs the inference through the saturation machinery so `InferenceRecorder` can
// report the unifier that produced the conclusion. Without it a superposition step is
// just "these two clauses gave that one", which no tactic can check.
//
// Opcodes are mirrored in `Vampire/Proof.lean`; a change here is a change there.

#include <lean/lean.h>

#include "vampire_export.hpp"
#include "vampire_lock.hpp"

#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <sstream>
#include <string>
#include <vector>

#include "Debug/Assertion.hpp"
#include "Lib/Int.hpp"
#include "Lib/SharedSet.hpp"
#include "Inferences/ProofExtra.hpp"
#include "Kernel/Clause.hpp"
#include "Kernel/Connective.hpp"
#include "Kernel/Formula.hpp"
#include "Kernel/FormulaUnit.hpp"
#include "Kernel/Inference.hpp"
#include "Kernel/InferenceStore.hpp"
#include "Kernel/Signature.hpp"
#include "Kernel/SortHelper.hpp"
#include "Kernel/Substitution.hpp"
#include "Kernel/SubstHelper.hpp"
#include "Kernel/Term.hpp"
#include "Kernel/Unit.hpp"
#include "Lib/Environment.hpp"
#include "SATSubsumption/SATSubsumptionAndResolution.hpp"
#include "Kernel/MLVariant.hpp"
#include "Kernel/Ordering.hpp"
#include "Saturation/Splitter.hpp"
#include "Shell/FunctionDefinition.hpp"
#include "Shell/InferenceRecorder.hpp"
#include "Shell/InferenceReplay.hpp"
#include "Shell/LeanChecker/VariablePrenexOrderingTree.hpp"
#include "Shell/Options.hpp"
#include "Shell/Statistics.hpp"

using namespace Lib;
using namespace Kernel;
using namespace Shell;

namespace vampire_ffi {

/// Mirrored in `Vampire.Proof.Op`.
enum ProofOp : uint32_t {
  PSYM_SORT  = 1,  // nameIdx typeCon
  PSYM_FUN   = 2,  // nameIdx functor arity resultSort argSort*
  PSYM_PRED  = 3,  // nameIdx predicate arity argSort*
  PUNIT      = 4,  // number handler ruleNameIdx inputType isClause, then the body
  PT_VAR     = 10, // var
  PT_APP     = 11, // functor
  PT_LIT     = 12, // predicate polarity
  PT_EQ      = 13, // polarity sort
  PT_CLAUSE  = 14, // nLits
  PT_TRUE    = 15,
  PT_FALSE   = 16,
  PT_NOT     = 17,
  PT_AND     = 18, // n
  PT_OR      = 19, // n
  PT_IMP     = 20,
  PT_IFF     = 21,
  PT_XOR     = 22,
  PT_FORALL  = 23, // n (var sort)*
  PT_EXISTS  = 24, // n (var sort)*
  PT_SPLIT   = 25, // satVar — the proposition AVATAR named for a component
};

/// Which of `LeanChecker`'s handlers a rule is emitted by. This mirrors the switch in
/// `LeanChecker::outputInferenceStep` (and the `isUncheckedInProof` test before it), and
/// it lives here rather than in Lean because this is where `InferenceRule` is defined:
/// matching a rule by its enum value across the FFI would break silently whenever the
/// enum gained a member.
enum Handler : uint32_t {
  H_INPUT                   = 0,  // a hypothesis of the final proof, not derived
  H_GENERIC_SUBS            = 1,  // genericNPremiseInference, grind only [cases Or]
  H_GENERIC_NOSUBS          = 2,  // genericNPremiseInferenceNoSubs, grind only
  H_GENERIC                 = 3,  // genericInference, grind
  H_ENNF                    = 4,
  H_FLATTEN                 = 5,
  H_NNF                     = 6,
  H_REDUCE_FALSE_TRUE       = 7,
  H_RECTIFY                 = 8,
  H_CLAUSIFY                = 9,
  H_UNUSED_PRED_DEF_REMOVAL = 10,
  H_AVATAR_CONTRADICTION    = 11,
  H_DEFINITION_UNFOLDING    = 12,
  H_AVATAR_DEFINITION       = 13,  // `sAv ↔ C`, true by `Iff.rfl` once `sAv` is `C`
  H_AVATAR_COMPONENT        = 14,
  H_AVATAR_SPLIT_CLAUSE     = 15,
  H_AVATAR_REFUTATION       = 16,
  H_EVALUATION              = 17,
  H_SKOLEMISE               = 18,
  H_SKIP                    = 19,  // `isUncheckedInProof`: contributes nothing
  H_PREDICATE_DEFINITION    = 20,
  H_FUNCTION_DEFINITION     = 21,
  H_DEFINITION_FOLDING_PRED = 22,
  H_THEORY_AXIOM            = 23,  // an axiom of the arithmetic Vampire introduced
  H_ARITH_NORM              = 24,  // an arithmetic *rewrite* of a formula
  H_ARITH_INFER             = 25,  // a *generating* arithmetic inference
  H_UNSUPPORTED             = 255,
};

static uint32_t handlerFor(InferenceRule rule) {
  switch (rule) {
    case InferenceRule::INPUT:
    case InferenceRule::NEGATED_CONJECTURE:
      return H_INPUT;

    case InferenceRule::RESOLUTION:
    case InferenceRule::SUPERPOSITION:
    case InferenceRule::FORWARD_DEMODULATION:
    case InferenceRule::BACKWARD_DEMODULATION:
    case InferenceRule::FACTORING:
    case InferenceRule::EQUALITY_RESOLUTION:
    case InferenceRule::EQUALITY_RESOLUTION_WITH_DELETION:
    case InferenceRule::EQUALITY_FACTORING:
    case InferenceRule::FORWARD_SUBSUMPTION_RESOLUTION:
    case InferenceRule::BACKWARD_SUBSUMPTION_RESOLUTION:
      return H_GENERIC_SUBS;

    case InferenceRule::REMOVE_DUPLICATE_LITERALS:
    case InferenceRule::REORIENT_EQUATIONS:
    case InferenceRule::TRIVIAL_INEQUALITY_REMOVAL:
    case InferenceRule::REORDER_LITERALS:
    case InferenceRule::DEFINITION_FOLDING_TWEE:
      return H_GENERIC_NOSUBS;

    case InferenceRule::ENNF: return H_ENNF;
    case InferenceRule::FLATTEN: return H_FLATTEN;
    case InferenceRule::NNF: return H_NNF;
    case InferenceRule::REDUCE_FALSE_TRUE: return H_REDUCE_FALSE_TRUE;
    case InferenceRule::RECTIFY: return H_RECTIFY;
    case InferenceRule::CLAUSIFY: return H_CLAUSIFY;
    case InferenceRule::UNUSED_PREDICATE_DEFINITION_REMOVAL:
      return H_UNUSED_PRED_DEF_REMOVAL;
    case InferenceRule::AVATAR_CONTRADICTION_CLAUSE: return H_AVATAR_CONTRADICTION;
    case InferenceRule::DEFINITION_UNFOLDING: return H_DEFINITION_UNFOLDING;
    case InferenceRule::AVATAR_DEFINITION: return H_AVATAR_DEFINITION;
    case InferenceRule::AVATAR_COMPONENT: return H_AVATAR_COMPONENT;
    case InferenceRule::AVATAR_SPLIT_CLAUSE: return H_AVATAR_SPLIT_CLAUSE;
    case InferenceRule::AVATAR_REFUTATION:
    case InferenceRule::AVATAR_REFUTATION_SMT: return H_AVATAR_REFUTATION;
    // The arithmetic simplifications, all to one handler. Each rewrites a unit into an
    // arithmetically equal one -- evaluating a numeral expression, normalising an
    // inequality, cancelling a common addend, eliminating a variable -- so each is
    // `premise → conclusion` with both sides true of the same numbers, and the cascade
    // in `Vampire/Arith.lean` closes them all. The alternative for a rule that is not
    // listed is `genericInference`'s bare `grind`, which on an NRA formula does not
    // fail so much as run the elaborator out of memory: that is what `p15_NRA` did.
    // Computing a value: the conclusion is the premise with the arithmetic worked out,
    // and `ring` or `norm_num` closes it.
    case InferenceRule::EVALUATION:
    case InferenceRule::CANCELLATION:
    case InferenceRule::INTERPRETED_SIMPLIFICATION:
    case InferenceRule::GAUSSIAN_VARIABLE_ELIMINIATION:
      return H_EVALUATION;

    // Restating a formula: same numbers, different shape -- `A ≥ 0` as `¬A < 0`, the
    // products reordered, the conjunctions reassociated. These want the two sides
    // normalised the same way rather than either side proved, and they are separated
    // from the group above because sharing its tactic order cost 8.5 seconds a step;
    // see `Vampire/Arith.lean`'s `normTactics`.
    case InferenceRule::THEORY_NORMALIZATION:
    case InferenceRule::ARITHMETIC_SUBTERM_GENERALIZATION:
    case InferenceRule::ALASCA_NORMALIZATION:
    case InferenceRule::ALASCA_COHERENCE_NORMALIZATION:
    case InferenceRule::ALASCA_ABSTRACTION:
    case InferenceRule::ALASCA_INTEGER_TRANSFORMATION:
      return H_ARITH_NORM;

    // Generating: the conclusion follows from the premises at a unifier, so the premises
    // have to be instantiated the way resolution's are before anything arithmetic can be
    // said about the result. These were falling through to `genericInference`'s bare
    // `grind`, which is how one `constrained superposition` step in an ARI proof of
    // `p15_NRA` took the elaborator past six minutes and 9GB -- `grind` rediscovering
    // arithmetic by case analysis on an NRA formula.
    case InferenceRule::CONSTRAINED_RESOLUTION:
    case InferenceRule::CONSTRAINED_SUPERPOSITION:
    case InferenceRule::CONSTRAINED_FACTORING:
    case InferenceRule::ALASCA_SUPERPOSITION:
    case InferenceRule::ALASCA_FWD_DEMODULATION:
    case InferenceRule::ALASCA_BWD_DEMODULATION:
    case InferenceRule::ALASCA_COHERENCE:
    case InferenceRule::ALASCA_FLOOR_BOUNDS:
    case InferenceRule::ALASCA_FLOOR_ELIMINATION:
    case InferenceRule::ALASCA_VARIABLE_ELIMINATION:
    case InferenceRule::ALASCA_FOURIER_MOTZKIN:
    case InferenceRule::ALASCA_INTEGER_FOURIER_MOTZKIN:
    case InferenceRule::ALASCA_LITERAL_FACTORING:
    case InferenceRule::ALASCA_TERM_FACTORING:
    case InferenceRule::ALASCA_EQ_FACTORING:
    case InferenceRule::ALASCA_VIRAS_QE:
    case InferenceRule::ALASCA_INTEGRALITY_AXIOM:
      return H_ARITH_INFER;

    // `LeanChecker::outputInferenceStep` ends its switch with `genericInference`, so
    // an unlisted rule gets a statement of premises implying conclusion and `grind`.
    // The exceptions are the rules it handles in `outputProofStep` instead, which need
    // machinery the replay does not have yet.
    case InferenceRule::SKOLEMIZE: return H_SKOLEMISE;
    case InferenceRule::SKOLEM_SYMBOL_INTRODUCTION: return H_SKIP;

    case InferenceRule::PREDICATE_DEFINITION: return H_PREDICATE_DEFINITION;
    case InferenceRule::FUNCTION_DEFINITION: return H_FUNCTION_DEFINITION;
    case InferenceRule::DEFINITION_FOLDING_PRED: return H_DEFINITION_FOLDING_PRED;

    default:
      // A theory axiom is a premise-free unit that Vampire introduced because the
      // problem has arithmetic in it: commutativity of `$sum`, `$uminus($uminus(X)) = X`
      // and so on. `LeanChecker` writes each as a Lean `axiom`, which a tactic cannot
      // do -- but it does not have to, because every one of them is *true* in Lean and
      // provable there. So it is exported with its statement like any other unit and
      // `Reconstruct` proves it; see `Handler.theoryAxiom`.
      //
      // `DISTINCTNESS_AXIOM` goes the same way: it is the pairwise disequality of the
      // problem's distinct objects, which is true of Lean numerals for the same reason.
      if (isTheoryAxiomRule(rule) || rule == InferenceRule::DISTINCTNESS_AXIOM)
        return H_THEORY_AXIOM;
      return H_GENERIC;
  }
}

/// The name a symbol was declared under.
///
/// `Signature::Symbol` wraps a name in single quotes when it is not a legal TPTP
/// identifier, which every Lean identifier that is not plain ASCII is. The quotes are
/// for printing; the Lean side looks the symbol up by the name it declared it under,
/// so they come back off here.
static std::string plainName(const Signature::Symbol *sym) {
  const std::string &n = sym->name();
  if (n.size() >= 2 && n.front() == '\'' && n.back() == '\'')
    return n.substr(1, n.size() - 2);
  return n;
}

struct ExportError {
  std::string what;
  explicit ExportError(std::string w) : what(std::move(w)) {}
};

/// The functor a `Signature::Symbol` is registered under.
///
/// Upstream's `InferenceStore` records the symbols an inference introduced as
/// `Signature::Symbol*`, and everything that crosses this boundary identifies a symbol
/// by its number instead: that is what a `Term` carries, and what the Lean side has a
/// map from. The signature is keyed by name and arity, which is the way back. Whether
/// the symbol is a predicate or a function is not something the store says any more, so
/// this asks, and the round trip is checked rather than assumed -- looking a name up in
/// the wrong table would otherwise return a number belonging to a different symbol.
static unsigned functorOf(Signature::Symbol *sym) {
  const std::string &name = sym->name();
  unsigned arity = sym->arity();
  if (env.signature->predicateExists(name, arity) &&
      env.signature->getPredicate(env.signature->getPredicateNumber(name, arity)) == sym)
    return env.signature->getPredicateNumber(name, arity);
  if (env.signature->functionExists(name, arity) &&
      env.signature->getFunction(env.signature->getFunctionNumber(name, arity)) == sym)
    return env.signature->getFunctionNumber(name, arity);
  throw ExportError("the symbol '" + name + "' an inference introduced is not in the "
                    "signature under its own name");
}

/// `env.proofExtra.get`, with the check it does not do.
///
/// `ProofExtra::get` looks the unit up with `DHMap::get`, whose only guard is an `ASS`
/// that `-DVDEBUG=0` compiles out, so a unit whose extra was never recorded reads a null
/// `unique_ptr` and dereferences it — a segfault in the middle of an export, which as a
/// way to tell a Lean user that a proof cannot be replayed leaves something to be
/// desired.
///
/// Not hypothetical, and not something the default strategy reaches. Which extras a run
/// records depends on which engines the strategy switched on, and a rule can come from
/// more than one engine: `FORWARD_SUBSUMPTION_RESOLUTION` from the code-tree engine,
/// which records the literal it resolved on, and from subsumption demodulation, which
/// records nothing. A portfolio runs both.
///
/// The cast is unchecked because the build has no RTTI; what stands in for the check is
/// that a rule is emitted by engines that agree on the extra's type.
template <class T>
static const T &extraFor(Unit *u, const char *what) {
  const Lib::InferenceExtra *x = env.proofExtra.find(u);
  if (x == nullptr)
    throw ExportError("step " + Int::toString(u->number()) + " (" +
                      ruleName(u->inference().rule()) + ") carries no recorded " + what +
                      ", so this proof cannot be exported");
  return *static_cast<const T *>(x);
}

/// The SAT variable a named formula stands for. Defined before the exporter because
/// `writeFormula` needs it.
static unsigned splitVarOfName(NamedFormula *f);

/// Collects the stream and the names it indexes.
struct Exporter {
  /// Symbol declarations, kept apart from the body: a term is written as a
  /// length-prefixed stream, and a declaration discovered while writing one must not
  /// land inside it.
  std::vector<uint32_t> decls;
  std::vector<uint32_t> code;
  std::vector<std::string> names;
  std::map<std::string, uint32_t> nameIdx;
  std::set<unsigned> seenSorts, seenFuns, seenPreds;

  uint32_t intern(const std::string &n) {
    auto it = nameIdx.find(n);
    if (it != nameIdx.end()) return it->second;
    uint32_t i = static_cast<uint32_t>(names.size());
    names.push_back(n);
    nameIdx[n] = i;
    return i;
  }

  void put(uint32_t w) { code.push_back(w); }
  void putDecl(uint32_t w) { decls.push_back(w); }

  /// Declarations first, then the units that refer to them.
  std::vector<uint32_t> finish() {
    std::vector<uint32_t> all = decls;
    all.insert(all.end(), code.begin(), code.end());
    return all;
  }

  // --- symbols -------------------------------------------------------------------

  /// A sort is a nullary type constructor; Vampire's built-ins keep their TPTP names,
  /// which is how Lean recognises `$i` as the sort it declared for a Lean type.
  void declareSort(TermList sort) {
    if (!sort.isTerm()) throw ExportError("a sort variable escaped into the proof");
    unsigned tc = sort.term()->functor();
    // `Signature::getTypeCon` checks this with `ASS_L`, which is compiled out at
    // `VDEBUG=0` -- so an out-of-range type constructor reads a garbage `Symbol*` and
    // the crash lands in `plainName` with nothing to say about where it came from.
    if (tc >= env.signature->typeCons())
      throw ExportError("sort " + Int::toString((int)tc) + " is not in the signature (" +
                        Int::toString((int)env.signature->typeCons()) + " type constructors)");
    if (!seenSorts.insert(tc).second) return;
    putDecl(PSYM_SORT);
    putDecl(intern(plainName(env.signature->getTypeCon(tc))));
    putDecl(tc);
  }

  void declareFun(unsigned f) {
    if (!seenFuns.insert(f).second) return;
    if (f >= env.signature->functions())
      throw ExportError("function " + Int::toString((int)f) + " is not in the signature");
    Signature::Symbol *sym = env.signature->getFunction(f);
    unsigned arity = sym->arity();
    OperatorType *type = sym->fnType();
    if (!type)
      throw ExportError("the symbol '" + plainName(sym) + "' has no function type");
    std::vector<TermList> args;
    TermList result = type->result();
    for (unsigned i = 0; i < arity; i++) args.push_back(type->arg(i));
    declareSort(result);
    for (TermList a : args) declareSort(a);
    putDecl(PSYM_FUN);
    putDecl(intern(plainName(sym)));
    putDecl(f);
    putDecl(arity);
    putDecl(result.term()->functor());
    for (TermList a : args) putDecl(a.term()->functor());
  }

  void declarePred(unsigned p) {
    if (p == 0) return; // equality: Lean knows it
    if (!seenPreds.insert(p).second) return;
    Signature::Symbol *sym = env.signature->getPredicate(p);
    unsigned arity = sym->arity();
    std::vector<TermList> args;
    if (arity != 0) {
      OperatorType *type = sym->predType();
      for (unsigned i = 0; i < arity; i++) args.push_back(type->arg(i));
    }
    for (TermList a : args) declareSort(a);
    putDecl(PSYM_PRED);
    putDecl(intern(plainName(sym)));
    putDecl(p);
    putDecl(arity);
    for (TermList a : args) putDecl(a.term()->functor());
  }

  // --- terms and formulas --------------------------------------------------------

  void writeTerm(TermList t) {
    if (t.isVar()) { put(PT_VAR); put(t.var()); return; }
    Term *term = t.term();
    declareFun(term->functor());
    for (unsigned i = 0; i < term->arity(); i++) writeTerm(*term->nthArgument(i));
    put(PT_APP);
    put(term->functor());
  }

  /// `flip` undoes the reorientation Vampire applied when it shared the literal.
  ///
  /// `Literal::createEquality` orients an equation by the term ordering, and
  /// `AtomicFormula` records on `flipForPrinting` that it did — the comment in
  /// `Formula.hpp` says it exists so the input can be shown "in the original
  /// orientation". Ignoring it means an input unit comes back with `a = b` where the
  /// hypothesis it was translated from says `b = a`, and the two then have to be
  /// bridged by a `simp only [eq_comm]` over the whole formula, which on a large one
  /// costs more than the rest of the replay.
  void writeLiteral(Literal *l, bool flip = false) {
    if (l->isEquality()) {
      writeTerm(*l->nthArgument(flip ? 1 : 0));
      writeTerm(*l->nthArgument(flip ? 0 : 1));
      TermList sort = SortHelper::getEqualityArgumentSort(l);
      declareSort(sort);
      put(PT_EQ);
      put(l->polarity() ? 1 : 0);
      put(sort.term()->functor());
      return;
    }
    declarePred(l->functor());
    for (unsigned i = 0; i < l->arity(); i++) writeTerm(*l->nthArgument(i));
    put(PT_LIT);
    put(l->functor());
    put(l->polarity() ? 1 : 0);
  }

  /// A quantifier's variables, ascending.
  ///
  /// Not the order the list holds them in: `LeanPrinter::outputSortsWithQuantor` sorts
  /// by variable number before printing, so the generated file always binds them
  /// ascending, and every tactic written against that file expects it. Keeping the list
  /// order gives a formula that binds `∀ v2 v1` where its own component clause binds
  /// `∀ v1 v2`, and applying one to the other silently permutes the arguments.
  void writeVarList(VSList *vars) {
    std::vector<std::pair<unsigned, TermList>> vs;
    for (VSList *it = vars; VSList::isNonEmpty(it); it = it->tail())
      vs.push_back(it->head());
    std::sort(vs.begin(), vs.end(),
              [](auto a, auto b) { return a.first < b.first; });
    put(static_cast<uint32_t>(vs.size()));
    for (auto [v, sort] : vs) {
      declareSort(sort);
      put(v);
      put(sort.term()->functor());
    }
  }

  void writeFormula(Formula *f) {
    switch (f->connective()) {
      case LITERAL: {
        auto *atom = static_cast<AtomicFormula *>(f);
        writeLiteral(atom->getLiteral(), atom->flipForPrinting);
        break;
      }
      case TRUE: put(PT_TRUE); break;
      case FALSE: put(PT_FALSE); break;
      case NOT: writeFormula(f->uarg()); put(PT_NOT); break;
      case AND:
      case OR: {
        // Reversed, to match how the formula is *printed*.
        //
        // `Formula::toString` walks a junction's arguments backwards ("we will reverse
        // the order // but that should not matter"), and `LeanPrinter` does the same
        // deliberately, with a `FormulaList::reverse`. So the generated file states a
        // disjunction in the reverse of `args()` order — and VampLean's
        // `nnf_transformation` and friends were written to produce exactly what that
        // file states. Exporting `args()` order gives formulas that are correct but
        // mirror images of the ones those tactics build, so `exact h` misses and the
        // fallback `grind` is left to prove a commuted disjunction.
        std::vector<Formula *> args;
        for (Formula *a : iterTraits(f->args()->iter())) args.push_back(a);
        for (auto it = args.rbegin(); it != args.rend(); ++it) writeFormula(*it);
        put(f->connective() == AND ? PT_AND : PT_OR);
        put(static_cast<uint32_t>(args.size()));
        break;
      }
      case IMP: writeFormula(f->left()); writeFormula(f->right()); put(PT_IMP); break;
      case IFF: writeFormula(f->left()); writeFormula(f->right()); put(PT_IFF); break;
      case XOR: writeFormula(f->left()); writeFormula(f->right()); put(PT_XOR); break;
      case FORALL:
      case EXISTS: {
        writeFormula(f->qarg());
        put(f->connective() == FORALL ? PT_FORALL : PT_EXISTS);
        writeVarList(f->vars());
        break;
      }
      case NAME:
        // An AVATAR split proposition. The definition unit that introduced it says
        // what it stands for; see `writeUnit`.
        put(PT_SPLIT);
        put(splitVarOfName(static_cast<NamedFormula *>(f)));
        break;
      default:
        throw ExportError("connective " + Formula::toString(f->connective()) +
                          " is not exported yet");
    }
  }

  /// A clause is a disjunction; its variables are handled by the caller, which knows
  /// them from the unit's variable list.
  void writeClause(Clause *cl) {
    for (Literal *l : cl->iterLits()) writeLiteral(l);
    put(PT_CLAUSE);
    put(cl->size());
  }

  void writeStatement(Unit *u) {
    if (u->isClause()) writeClause(u->asClause());
    else writeFormula(u->getFormula());
  }
};

/// The SAT variable a named formula stands for.
///
/// `Splitter` names split levels `sA<n>` where `n` is the variable; `InferenceStore`
/// records the string. Recovering the number from it is unpleasant but the name is the
/// only link the formula carries back to the level.
static unsigned splitVarOfName(NamedFormula *f) {
  const std::string &n = f->name();
  size_t i = 0;
  while (i < n.size() && (n[i] < '0' || n[i] > '9')) i++;
  if (i == n.size()) throw ExportError("cannot read a split variable from '" + n + "'");
  return static_cast<unsigned>(std::stoul(n.substr(i)));
}

/// The splits a clause holds under, as (sat variable, polarity) pairs, ordered by
/// variable. Mirrors `LeanChecker::outputCumulativeSplits`, which collects them into a
/// `std::set` and prints `sAv` or `¬sAv` per level.
static std::vector<std::pair<unsigned, bool>> splitsOf(Unit *u) {
  std::vector<std::pair<unsigned, bool>> out;
  if (!u->isClause()) return out;
  Clause *cl = u->asClause();
  if (cl->noSplits()) return out;
  std::map<unsigned, bool> seen;
  SplitSet &s = *cl->splits();
  for (int i = 0; i < s.size(); i++) {
    SAT::SATLiteral l = Saturation::Splitter::getLiteralFromName(s[i]);
    seen.insert({l.var(), l.positive()});
  }
  for (auto [v, p] : seen) out.push_back({v, p});
  return out;
}

/// The SAT clause a unit carries, if any. A unit with one — an AVATAR split clause, or
/// a parent of the SAT refutation — *is* that clause as far as the Lean proof is
/// concerned; `LeanChecker` prints it with `outputSatClause` rather than printing the
/// unit.
static bool satClauseOf(Unit *u, std::vector<std::pair<unsigned, bool>> &out) {
  InferenceRule rule = u->inference().rule();
  if (rule != InferenceRule::AVATAR_SPLIT_CLAUSE &&
      rule != InferenceRule::AVATAR_CONTRADICTION_CLAUSE)
    return false;
  if (env.proofExtra.find(u) == nullptr) return false;
  std::map<unsigned, bool> seen;   // ordered by variable, as LeanChecker prints them
  for (SAT::SATLiteral l : extraFor<Indexing::SATClauseExtra>(u, "SAT clause").clause->iter())
    seen.insert({l.var(), l.positive()});
  for (auto [v, p] : seen) out.push_back({v, p});
  return true;
}

/// True for the rules whose Lean proof needs the unifier, i.e. the ones
/// `LeanChecker::inferenceNeedsReplayInformation` replays.
static bool needsReplay(InferenceRule rule) {
  switch (rule) {
    case InferenceRule::RESOLUTION:
    case InferenceRule::FACTORING:
    case InferenceRule::EQUALITY_RESOLUTION:
    case InferenceRule::EQUALITY_RESOLUTION_WITH_DELETION:
    case InferenceRule::EQUALITY_FACTORING:
    case InferenceRule::SUPERPOSITION:
    case InferenceRule::FORWARD_DEMODULATION:
    case InferenceRule::BACKWARD_DEMODULATION:
      return true;
    default:
      return false;
  }
}

/// Demodulation's first premise is instantiated by the identity: only the rewriting
/// equation is unified. Mirrors `LeanChecker::demodulation`.
static bool identityForFirstPremise(InferenceRule rule) {
  return rule == InferenceRule::FORWARD_DEMODULATION ||
         rule == InferenceRule::BACKWARD_DEMODULATION;
}

/// Walks the proof and writes it out, replaying inferences on the way.
struct ProofExporter : public InferenceStore::AbstractProofPrinter {
  Exporter e;
  InferenceReplayer replayer;

  ProofExporter(std::ostream &o, InferenceStore *is)
    : AbstractProofPrinter(o, is), replayer(o)
  {
    savedAlgorithm = env.options->saturationAlgorithm();
    env.options->set("code_tree_subsumption", "off");
    // The run that just finished installed its ordering globally, and a second
    // algorithm cannot install another. It is harmless — the replayer sets its own
    // ordering directly — but Vampire warns about it, so give it the slot.
    Kernel::Ordering::unsetGlobalOrdering();
    replayer.makeInferenceEngine(is->ordering);
  }

  /// `makeInferenceEngine` puts the environment into reconstruction mode and forces
  /// DISCOUNT. Both outlive the export, and a later run left in reconstruction mode
  /// stops finding proofs at all — which showed up as the second goal in a file
  /// failing where the first had succeeded.
  ~ProofExporter() override {
    env.options->set("code_tree_subsumption", "on");
    env.options->setSaturationAlgorithm(savedAlgorithm);
    env.reconstruction = false;
  }

  Shell::Options::SaturationAlgorithm savedAlgorithm;

  void printStep(Unit *u) override { writeUnit(u); }

  /// The substitutions to instantiate each premise with, one per premise, in premise
  /// order. Empty when the rule needs none.
  std::vector<Substitution> substitutionsFor(Unit *u) {
    InferenceRule rule = u->inference().rule();
    std::vector<Substitution> subs;
    if (rule == InferenceRule::FORWARD_SUBSUMPTION_RESOLUTION ||
        rule == InferenceRule::BACKWARD_SUBSUMPTION_RESOLUTION) {
      // Recovered by re-running the SAT subsumption check, as LeanChecker does.
      Clause *concl = u->asClause();
      UnitIterator it = u->getParents();
      Clause *left = static_cast<Clause *>(it.next());
      Clause *right = static_cast<Clause *>(it.next());
      const auto &sr =
        extraFor<Inferences::LiteralInferenceExtra>(concl, "resolved literal");
      Literal *m = sr.selectedLiteral;
      SATSubsumption::SATSubsumptionAndResolution satSR;
      if (!satSR.checkSubsumptionResolutionWithLiteral(right, left,
                                                       left->getLiteralPosition(m)))
        throw ExportError("could not reconstruct the subsumption resolution match");
      subs.push_back(Substitution());
      subs.push_back(satSR.getBindingsForSubsumptionResolutionWithLiteral());
      return subs;
    }
    if (!needsReplay(rule)) return subs;
    if (u->isClause()) InferenceRecorder::instance()->setCurrentGoal(u->asClause());
    replayer.replayInference(u);
    const InferenceRecorder::InferenceInformation *info =
      InferenceRecorder::instance()->getLastRecordedInferenceInformation();
    if (info == nullptr)
      throw ExportError("the inference replayer produced no information for " +
                        std::string(ruleName(rule)));
    if (identityForFirstPremise(rule)) {
      subs.push_back(Substitution());
      if (info->substitutionForBanksSub.empty())
        throw ExportError("no replay substitution for demodulation");
      subs.push_back(info->substitutionForBanksSub[0]);
    } else {
      for (const Substitution &s : info->substitutionForBanksSub) subs.push_back(s);
    }
    return subs;
  }

  /// The literals of a SAT clause, ordered by variable.
  void putSatClause(SAT::SATClause *cl) {
    std::map<unsigned, bool> seen;
    for (SAT::SATLiteral l : cl->iter()) seen.insert({l.var(), l.positive()});
    e.put(static_cast<uint32_t>(seen.size()));
    for (auto [v, p] : seen) { e.put(v); e.put(p ? 1 : 0); }
  }

  /// Everything the AVATAR handlers need beyond the common fields.
  void writeAvatarPayload(Unit *u, InferenceRule rule) {
    switch (handlerFor(rule)) {
      case H_AVATAR_DEFINITION: writeAvatarDefinition(u); break;
      case H_AVATAR_SPLIT_CLAUSE: writeAvatarSplitClause(u); break;
      case H_AVATAR_REFUTATION: writeAvatarRefutation(u); break;
      case H_SKOLEMISE: writeSkolemisation(u); break;
      case H_PREDICATE_DEFINITION: writePredicateDefinition(u); break;
      case H_FUNCTION_DEFINITION: writeFunctionDefinition(u); break;
      default: break;
    }
  }

  /// The variable AVATAR named, and the component it named. The unit's statement is
  /// `sAv ↔ C`; Lean takes `sAv` to *be* `C`, so the step holds by `Iff.rfl`.
  void writeAvatarDefinition(Unit *u) {
    if (u->isClause() || u->getFormula()->connective() != IFF)
      throw ExportError("an AVATAR definition was not an equivalence");
    Formula *named = u->getFormula()->left();
    if (named->connective() != NAME)
      throw ExportError("an AVATAR definition did not name a proposition");
    e.put(splitVarOfName(static_cast<NamedFormula *>(named)));
    size_t lenAt = e.code.size();
    e.put(0);
    size_t start = e.code.size();
    e.writeFormula(u->getFormula()->right());
    e.code[lenAt] = static_cast<uint32_t>(e.code.size() - start);
  }

  /// Mirrors `LeanChecker::avatarSplitClause`: which premises are rewritten with and
  /// which against, the split hypotheses to introduce, and the arguments the parent
  /// clause is applied to. The variable correspondence is the same reconstruction the
  /// generator does, via `Splitter::getComponents` and matching each class against a
  /// component up to renaming.
  void writeAvatarSplitClause(Unit *u) {
    UnitIterator parents = u->getParents();
    if (!parents.hasNext()) throw ExportError("an AVATAR split clause has no parent");
    Clause *parent = parents.next()->asClause();

    std::set<unsigned> previousSplits;
    if (!parent->noSplits())
      for (unsigned split : iterTraits(parent->splits()->iter()))
        previousSplits.insert(Saturation::Splitter::getLiteralFromName(split).var());

    std::map<unsigned, bool> currentSplits;
    for (SAT::SATLiteral l :
         extraFor<Indexing::SATClauseExtra>(u, "SAT clause").clause->iter())
      currentSplits.insert({l.var(), l.positive()});

    std::unordered_map<unsigned, Clause *> components;
    std::map<unsigned, std::pair<unsigned, Clause *>> splitToParent;
    std::vector<bool> rewrites;      // per premise after the first
    unsigned index = 0;
    for (Unit *p : iterTraits(u->getParents())) {
      if (index++ == 0) continue;
      const auto &dex = extraFor<Shell::SplitDefinitionExtra>(p, "split definition");
      unsigned component = dex.component->splits()->sval();
      components.insert({component, dex.component});
      unsigned var = Saturation::Splitter::getLiteralFromName(component).var();
      bool isNew = previousSplits.find(var) == previousSplits.end();
      if (isNew) splitToParent.insert({var, {index - 1, dex.component}});
      rewrites.push_back(isNew);
    }

    // Map each variable of the parent clause to the split whose component covers it,
    // and to the variable it is called by there.
    Stack<LiteralStack> disjoint;
    if (!Saturation::Splitter::getComponents(parent, disjoint)) {
      disjoint.reset();
      LiteralStack one;
      for (Literal *l : parent->iterLits()) one.push(l);
      disjoint.push(std::move(one));
    }
    Substitution fullSubst;
    std::map<unsigned, unsigned> varToSplit;
    decltype(disjoint)::Iterator classes(disjoint);
    while (classes.hasNext()) {
      LiteralStack klass = classes.next();
      Substitution subst;
      for (auto [name, component] : components) {
        if (klass.size() != component->length()) continue;
        subst.reset();
        unsigned var = Saturation::Splitter::getLiteralFromName(name).var();
        if (klass.size() == 1 && klass[0]->ground() &&
            Literal::positiveLiteral(klass[0]) == Literal::positiveLiteral((*component)[0])) {
          DHMap<unsigned, TermList, FnvHash, IdentityHash> map;
          SortHelper::collectVariableSorts(klass[0], map);
          auto dom = map.domain();
          while (dom.hasNext()) varToSplit.insert({dom.next(), var});
          break;
        }
        if (Kernel::MLVariant::isVariant(klass.begin(), component, false, &subst)) {
          for (auto [v, term] : iterTraits(subst.items())) {
            fullSubst.bind(term.var(), TermList::var(v));
            varToSplit.insert({term.var(), var});
          }
          break;
        }
      }
    }

    e.put(static_cast<uint32_t>(rewrites.size()));
    for (bool r : rewrites) e.put(r ? 1 : 0);

    // `intros x<split>a<var> …`, in the order the generator introduces them.
    std::vector<std::pair<unsigned, unsigned>> intros;
    for (auto [split, _] : currentSplits) {
      auto it = splitToParent.find(split);
      if (it == splitToParent.end()) continue;
      DHMap<unsigned, TermList, FnvHash, IdentityHash> map;
      SortHelper::collectVariableSorts(it->second.second, map);
      std::set<unsigned> vars;
      for (unsigned v : iterTraits(map.domain())) vars.insert(v);
      for (unsigned v : vars) intros.push_back({split, v});
    }
    e.put(static_cast<uint32_t>(intros.size()));
    for (auto [split, v] : intros) { e.put(split); e.put(v); }

    // The arguments the parent clause is applied to.
    DHMap<unsigned, TermList, FnvHash, IdentityHash> parentSorts;
    SortHelper::collectVariableSorts(parent, parentSorts);
    std::set<unsigned> sortedVars;
    for (unsigned v : iterTraits(parentSorts.domain())) sortedVars.insert(v);
    e.put(static_cast<uint32_t>(sortedVars.size()));
    for (unsigned v : sortedVars) {
      TermList applied = fullSubst.apply(v);
      if (!applied.isVar()) throw ExportError("a split variable did not map to a variable");
      auto it = varToSplit.find(v);
      if (it == varToSplit.end())
        throw ExportError("a parent variable belongs to no split component");
      e.put(it->second);
      e.put(applied.var());
    }
  }

  /// The solver's own derivation, as `avatarRefutationByResolution` walks it: a
  /// post-order list of derived clauses, each with the premises it came from. Replaying
  /// it beats asking Lean to re-solve the SAT problem, which is why this fork added it.
  void writeAvatarRefutation(Unit *u) {
    // The parents' clauses are the hypotheses; the derivation's leaves are matched to
    // them by literal content, not by pointer.
    std::set<Unit *, CompareUnits> sortedParents;
    for (Unit *p : iterTraits(u->getParents())) sortedParents.insert(p);
    e.put(static_cast<uint32_t>(sortedParents.size()));
    for (Unit *p : sortedParents)
      putSatClause(extraFor<Indexing::SATClauseExtra>(p, "SAT clause").clause);

    SAT::SATClause *proof = u->inference().satPremise();
    if (proof == nullptr) { e.put(0); return; }

    std::vector<SAT::SATClause *> order;
    std::set<SAT::SATClause *> visited;
    std::vector<std::pair<SAT::SATClause *, bool>> todo{{proof, false}};
    while (!todo.empty()) {
      SAT::SATClause *cl = todo.back().first;
      bool expanded = todo.back().second;
      todo.pop_back();
      if (expanded) { order.push_back(cl); continue; }
      if (!visited.insert(cl).second) continue;
      SAT::SATInference *inf = cl->inference();
      if (!inf || inf->getType() != SAT::SATInference::PROP_INF) continue;
      todo.push_back({cl, true});
      for (SAT::SATClause *prem : iterTraits(inf->propInf()->getPremises()->iter()))
        todo.push_back({prem, false});
    }

    e.put(static_cast<uint32_t>(order.size()));
    for (SAT::SATClause *cl : order) {
      putSatClause(cl);
      std::vector<SAT::SATClause *> prems;
      for (SAT::SATClause *prem : iterTraits(cl->inference()->propInf()->getPremises()->iter()))
        prems.push_back(prem);
      e.put(static_cast<uint32_t>(prems.size()));
      for (SAT::SATClause *prem : prems) putSatClause(prem);
    }
  }

  /// The skolem symbols a skolemisation introduced, in the order the existentials they
  /// replace are stripped. `LeanChecker::skolemize` gets the order the same way, from a
  /// `VariablePrenexOrderingTree` over the parent formula.
  void writeSkolemisation(Unit *u) {
    UnitIterator parents = u->getParents();
    if (!parents.hasNext()) throw ExportError("a skolemisation has no parent");
    Unit *parent = parents.next();
    if (parent->isClause()) throw ExportError("a skolemisation's parent is a clause");

    InferenceStore *is = InferenceStore::instance();
    if (!is->hasIntroducedSymbols(u))
      throw ExportError("a skolemisation introduced no symbols");
    std::map<long, unsigned> byVar;
    for (auto *symbol : iterTraits(is->getIntroducedSymbols(u).iter())) {
      long replaced = is->variableReplacedByIntroducedSymbol(symbol);
      if (replaced < 0) throw ExportError("a skolem symbol replaced no variable");
      byVar[replaced] = functorOf(symbol);
    }

    VariablePrenexOrderingTree tree;
    tree.buildTreeFromFormula(parent->getFormula(), Kernel::EXISTS);
    std::vector<unsigned> ordered;
    for (unsigned v : tree.determineVariableOrdering())
      if (byVar.count(v)) ordered.push_back(byVar[v]);

    e.put(static_cast<uint32_t>(ordered.size()));
    for (unsigned sym : ordered) { e.declareFun(sym); e.put(sym); }
  }

  /// The predicate a definition introduction named, the parameters it takes, and the
  /// formula it abbreviates. `LeanChecker::predicateDefinitionIntroduction` writes
  /// `let sP v… := φ`; here the symbol becomes the lambda directly.
  void writePredicateDefinition(Unit *u) {
    InferenceStore *is = InferenceStore::instance();
    auto &introduced = is->getIntroducedSymbols(u);
    if (introduced.size() != 1)
      throw ExportError("a predicate definition introduced " +
                        std::to_string(introduced.size()) + " symbols");
    unsigned sym = functorOf(introduced.top());
    Formula *body = is->formulaReplacedByIntroducedSymbol(introduced.top());
    if (body == nullptr) throw ExportError("a predicate definition has no body");
    if (u->isClause()) throw ExportError("a predicate definition is a clause");

    e.declarePred(sym);
    e.put(sym);

    // The parameters, which are the conclusion's universal variables in the order it
    // binds them — rectification has already sorted them.
    DHMap<unsigned, TermList, FnvHash, IdentityHash> sorts;
    SortHelper::collectVariableSorts(u, sorts);
    std::vector<std::pair<unsigned, unsigned>> params;
    if (u->getFormula()->connective() == FORALL)
      for (auto vs : iterTraits(VSList::RefIterator(u->getFormula()->vars()->iter()))) {
        e.declareSort(vs.second);
        params.push_back({vs.first, vs.second.term()->functor()});
      }
    // Deliberately *not* sorted. `LeanChecker::predicateDefinitionIntroduction` prints
    // the `let`'s parameters and the application of the symbol in the formula's own
    // variable order, and only the `intros` in sorted order — so the lambda takes its
    // arguments in this order while the statement binds them in that one.
    e.put(static_cast<uint32_t>(params.size()));
    for (auto [v, sort] : params) { e.put(v); e.put(sort); }

    size_t lenAt = e.code.size();
    e.put(0);
    size_t start = e.code.size();
    e.writeFormula(body);
    e.code[lenAt] = static_cast<uint32_t>(e.code.size() - start);
  }

  /// The function a definition introduction named, its parameters, and the term it
  /// abbreviates — the left argument of the conclusion's equation, as
  /// `LeanChecker::functionDefinitionIntroduction` reads it.
  void writeFunctionDefinition(Unit *u) {
    InferenceStore *is = InferenceStore::instance();
    auto &introduced = is->getIntroducedSymbols(u);
    if (introduced.size() != 1)
      throw ExportError("a function definition introduced " +
                        std::to_string(introduced.size()) + " symbols");
    unsigned sym = functorOf(introduced.top());
    if (!u->isClause() || u->asClause()->size() != 1)
      throw ExportError("a function definition is not a unit clause");
    Literal *lit = (*u->asClause())[0];
    if (!lit->isEquality()) throw ExportError("a function definition is not an equation");

    // Which side of the equation is the definition, and which the term it stands for,
    // is not something to assume. Two passes introduce this rule and they orient it
    // oppositely — `TweeGoalTransformation` writes `t = sF(vars)` and
    // `DefinitionIntroduction` (`fdi`) writes `sF(vars) = t` — and
    // `Literal::createEquality` may turn either of them round again, because it orients
    // by the term ordering when it shares the literal. Assuming the first cost 33
    // problems of the portfolio measurement: every `fdi` strategy that refuted a goal
    // produced a proof whose `rfl` compared a term with a constant.
    TermList sides[2] = {lit->termArg(0), lit->termArg(1)};
    int defSide = -1;
    for (int k = 0; k < 2; k++)
      if (sides[k].isTerm() && sides[k].term()->functor() == sym) defSide = k;
    if (defSide < 0)
      throw ExportError("a function definition has its symbol on neither side");
    Term *def = sides[defSide].term();
    TermList body = sides[1 - defSide];

    e.declareFun(sym);
    e.put(sym);

    // The parameters are the definition's own arguments, in its own order, because that
    // is the order the lambda has to abstract them in. They are all distinct variables
    // by construction — both passes build the application out of the variables they
    // collected — and a type argument would mean a polymorphic definition, which this
    // translation cannot produce and should not silently mis-read.
    DHMap<unsigned, TermList, FnvHash, IdentityHash> sorts;
    SortHelper::collectVariableSorts(lit, sorts);
    e.put(def->arity());
    for (unsigned i = 0; i < def->arity(); i++) {
      TermList arg = *def->nthArgument(i);
      if (!arg.isVar())
        throw ExportError("a function definition takes an argument that is not a variable");
      TermList sort;
      if (!sorts.find(arg.var(), sort))
        throw ExportError("a function definition's parameter has no recorded sort");
      e.declareSort(sort);
      e.put(arg.var());
      e.put(sort.term()->functor());
    }

    size_t lenAt = e.code.size();
    e.put(0);
    size_t start = e.code.size();
    e.writeTerm(body);
    e.code[lenAt] = static_cast<uint32_t>(e.code.size() - start);
  }

  void writeUnit(Unit *u) {
    // The substitutions are computed first: replaying an inference disturbs the
    // saturation machinery, and doing it while half-way through writing the unit would
    // interleave the two.
    std::vector<Substitution> subs = substitutionsFor(u);

    DHMap<unsigned, TermList, FnvHash, IdentityHash> varSorts;
    SortHelper::collectVariableSorts(u, varSorts);

    InferenceRule rule = u->inference().rule();
    e.put(PUNIT);
    e.put(u->number());
    e.put(handlerFor(rule));
    e.put(e.intern(ruleName(rule)));
    e.put(static_cast<uint32_t>(u->inference().inputType()));
    e.put(u->isClause() ? 1 : 0);

    // Free variables of the statement, with their sorts, in ascending order — the
    // order `LeanPrinter::outputVariables` sorts them into, which is what the `intros`
    // and the instantiation lines both follow.
    {
      std::vector<std::pair<unsigned, unsigned>> vars;
      auto it = varSorts.items();
      while (it.hasNext()) {
        auto [v, s] = it.next();
        e.declareSort(s);
        vars.push_back({v, s.term()->functor()});
      }
      std::sort(vars.begin(), vars.end());
      e.put(static_cast<uint32_t>(vars.size()));
      for (auto [v, s] : vars) { e.put(v); e.put(s); }
    }

    {
      auto splits = splitsOf(u);
      e.put(static_cast<uint32_t>(splits.size()));
      for (auto [v, pos] : splits) { e.put(v); e.put(pos ? 1 : 0); }
    }

    // A unit AVATAR gave a SAT clause *is* that clause for the Lean proof, whatever
    // its own statement says; `LeanChecker` prints it with `outputSatClause`.
    {
      std::vector<std::pair<unsigned, bool>> sat;
      bool has = satClauseOf(u, sat);
      e.put(has ? 1 : 0);
      if (has) {
        e.put(static_cast<uint32_t>(sat.size()));
        for (auto [v, pos] : sat) { e.put(v); e.put(pos ? 1 : 0); }
      }
    }

    {
      std::vector<Unit *> premises;
      for (Unit *p : iterTraits(u->getParents())) premises.push_back(p);
      e.put(static_cast<uint32_t>(premises.size()));
      for (Unit *p : premises) e.put(p->number());
    }

    // The statement, as a length-prefixed postfix stream.
    {
      size_t lenAt = e.code.size();
      e.put(0);
      size_t start = e.code.size();
      e.writeStatement(u);
      e.code[lenAt] = static_cast<uint32_t>(e.code.size() - start);
    }

    // For a clausification, how many clauses its parent produced: with one, the parent
    // can be used directly, which is the branch `LeanChecker::clausify` takes first.
    if (handlerFor(rule) == H_CLAUSIFY) {
      unsigned n = 0;
      for (Unit *p : iterTraits(u->getParents())) {
        // Absence is meaningful here rather than an error — a parent that recorded no
        // clause count contributes none — so this asks rather than using `extraFor`.
        if (env.proofExtra.find(p) != nullptr)
          n = env.proofExtra.get<Inferences::CNFTransformationInferenceExtra>(p).number;
      }
      e.put(n);

      // The order `prenexify` will hoist the parent's universal quantifiers into.
      //
      // `LeanChecker::outputReorderIfNeeded` builds exactly this ordering, with the
      // same `VariablePrenexOrderingTree` the skolemisation export already uses, and
      // filters it to the conclusion's own variables. When the result is not ascending
      // the generated file rewrites the goal's binder prefix into it, because the
      // conclusion is stated `∀` in ascending order while the prenexed hypothesis
      // binds in this one, and `assumption` cannot see past the permutation.
      std::vector<unsigned> prenexOrder;
      {
        UnitIterator ps = u->getParents();
        if (ps.hasNext()) {
          Unit *parent = ps.next();
          if (!parent->isClause()) {
            VariablePrenexOrderingTree tree;
            tree.buildTreeFromFormula(parent->getFormula(), Kernel::FORALL);
            for (unsigned v : tree.determineVariableOrdering())
              if (varSorts.findPtr(v) != nullptr) prenexOrder.push_back(v);
          }
        }
      }
      e.put(static_cast<uint32_t>(prenexOrder.size()));
      for (unsigned v : prenexOrder) e.put(v);
    }

    // Which way round each rewriting premise of a definition unfolding is used, which
    // `LeanChecker::definitionUnfolding` reads off `FunctionDefinitionExtra::lhs`.
    if (handlerFor(rule) == H_DEFINITION_UNFOLDING) {
      std::vector<Unit *> premises;
      for (Unit *p : iterTraits(u->getParents())) premises.push_back(p);
      if (env.proofExtra.find(u) == nullptr)
        throw ExportError("no definition information for a definition unfolding");
      const auto &extra = extraFor<Shell::FunctionDefinitionExtra>(u, "function definition");
      e.put(static_cast<uint32_t>(premises.size() > 0 ? premises.size() - 1 : 0));
      for (size_t k = 1; k < premises.size(); k++) {
        Clause *rw = premises[k]->asClause();
        Literal *lit = (*rw)[0];
        bool forwards = k - 1 < extra.lhs.size() &&
                        lit->termArg(0).term() == extra.lhs[k - 1];
        e.put(forwards ? 1 : 0);
      }
    }

    writeAvatarPayload(u, rule);

    // Per premise, the terms its variables are instantiated with. Absent (count 0)
    // when the rule needs no unifier, in which case Lean applies the premise to its own
    // variables unchanged.
    //
    // A substitution can send a premise variable to a variable the conclusion does not
    // bind, and then Lean needs its sort to ask for an element of it. The sort is the
    // premise's, since a substitution is well-sorted, so it is recorded on the way past.
    std::map<unsigned, unsigned> rangeSorts;
    e.put(static_cast<uint32_t>(subs.size()));
    if (!subs.empty()) {
      unsigned i = 0;
      for (Unit *p : iterTraits(u->getParents())) {
        if (i >= subs.size()) break;
        DHMap<unsigned, TermList, FnvHash, IdentityHash> premiseSorts;
        SortHelper::collectVariableSorts(p, premiseSorts);
        std::vector<unsigned> vars;
        auto it = premiseSorts.domain();
        while (it.hasNext()) vars.push_back(it.next());
        std::sort(vars.begin(), vars.end());

        auto pSplits = splitsOf(p);   // ordered by variable, as `instantiatePremiseVars` prints them
        e.put(static_cast<uint32_t>(pSplits.size()));
        for (auto [v, pos] : pSplits) { e.put(v); e.put(pos ? 1 : 0); }

        e.put(static_cast<uint32_t>(vars.size()));
        for (unsigned v : vars) {
          TermList applied = subs[i].apply(v);
          if (applied.isVar()) {
            TermList sort = premiseSorts.get(v);
            e.declareSort(sort);
            rangeSorts[applied.var()] = sort.term()->functor();
          }
          size_t lenAt = e.code.size();
          e.put(0);
          size_t start = e.code.size();
          e.writeTerm(applied);
          e.code[lenAt] = static_cast<uint32_t>(e.code.size() - start);
        }
        i++;
      }
    }

    e.put(static_cast<uint32_t>(rangeSorts.size()));
    for (auto [v, sort] : rangeSorts) { e.put(v); e.put(sort); }
  }
};

uint32_t exportRefutation(std::vector<uint32_t> &code,
                          std::vector<std::string> &names,
                          std::string &error)
{
  try {
    error.clear();
    code.clear();
    names.clear();
    Unit *refutation = env.statistics->refutation;
    if (refutation == nullptr) return 1;
    std::ostringstream sink;
    ProofExporter ex(sink, InferenceStore::instance());
    ex.scheduleForPrinting(refutation);
    ex.print();
    code = ex.e.finish();
    names = std::move(ex.e.names);
    return 0;
  } catch (ExportError &err) {
    error = err.what;
    return 3;
  } catch (Exception &err) {
    error = err.msg();
    return 2;
  } catch (std::exception &err) {
    error = err.what();
    return 2;
  } catch (...) {
    error = "unknown C++ exception";
    return 2;
  }
}

std::string proofOutline()
{
  try {
    Unit *refutation = env.statistics->refutation;
    if (refutation == nullptr) return "";
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
    return s.text;
  } catch (...) {
    return "";
  }
}

} // namespace vampire_ffi

// The entry points live in `vampire_build.cpp`, which drives the whole run.

