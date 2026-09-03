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

#include "vampire_lock.hpp"

#include <algorithm>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>

#include "Debug/Assertion.hpp"
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
#include "Saturation/Splitter.hpp"
#include "Shell/FunctionDefinition.hpp"
#include "Shell/InferenceRecorder.hpp"
#include "Shell/InferenceReplay.hpp"
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

    default:
      return H_UNSUPPORTED;
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
    if (!seenSorts.insert(tc).second) return;
    putDecl(PSYM_SORT);
    putDecl(intern(plainName(env.signature->getTypeCon(tc))));
    putDecl(tc);
  }

  void declareFun(unsigned f) {
    if (!seenFuns.insert(f).second) return;
    Signature::Symbol *sym = env.signature->getFunction(f);
    unsigned arity = sym->arity();
    OperatorType *type = sym->fnType();
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

  void writeLiteral(Literal *l) {
    if (l->isEquality()) {
      writeTerm(*l->nthArgument(0));
      writeTerm(*l->nthArgument(1));
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

  void writeVarList(VSList *vars) {
    unsigned n = 0;
    for (VSList *it = vars; VSList::isNonEmpty(it); it = it->tail()) n++;
    put(n);
    for (VSList *it = vars; VSList::isNonEmpty(it); it = it->tail()) {
      declareSort(it->head().second);
      put(it->head().first);
      put(it->head().second.term()->functor());
    }
  }

  void writeFormula(Formula *f) {
    switch (f->connective()) {
      case LITERAL: writeLiteral(f->literal()); break;
      case TRUE: put(PT_TRUE); break;
      case FALSE: put(PT_FALSE); break;
      case NOT: writeFormula(f->uarg()); put(PT_NOT); break;
      case AND:
      case OR: {
        unsigned n = 0;
        for (Formula *a : iterTraits(f->args()->iter())) { writeFormula(a); n++; }
        put(f->connective() == AND ? PT_AND : PT_OR);
        put(n);
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

/// The splits a clause holds under, as (sat variable, polarity) pairs. Mirrors
/// `LeanChecker::outputCumulativeSplits`, which prints `sAv` or `¬sAv` per level.
static std::vector<std::pair<unsigned, bool>> splitsOf(Unit *u) {
  std::vector<std::pair<unsigned, bool>> out;
  if (!u->isClause()) return out;
  Clause *cl = u->asClause();
  if (cl->noSplits()) return out;
  SplitSet &s = *cl->splits();
  for (int i = 0; i < s.size(); i++) {
    SAT::SATLiteral l = Saturation::Splitter::getLiteralFromName(s[i]);
    out.push_back({l.var(), l.positive()});
  }
  return out;
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
      auto sr = env.proofExtra.get<Inferences::LiteralInferenceExtra>(concl);
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

  void writeUnit(Unit *u) {
    // The substitutions are computed first: replaying an inference disturbs the
    // saturation machinery, and doing it while half-way through writing the unit would
    // interleave the two.
    std::vector<Substitution> subs = substitutionsFor(u);

    DHMap<unsigned, TermList> varSorts;
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
        // Guarded: `proofExtra.get` neither checks presence nor, with RTTI off, the
        // type, so a missing entry is a segfault rather than an error.
        if (env.proofExtra.find(p) != nullptr)
          n = env.proofExtra.get<Inferences::CNFTransformationInferenceExtra>(p).number;
      }
      e.put(n);
    }

    // Which way round each rewriting premise of a definition unfolding is used, which
    // `LeanChecker::definitionUnfolding` reads off `FunctionDefinitionExtra::lhs`.
    if (handlerFor(rule) == H_DEFINITION_UNFOLDING) {
      std::vector<Unit *> premises;
      for (Unit *p : iterTraits(u->getParents())) premises.push_back(p);
      if (env.proofExtra.find(u) == nullptr)
        throw ExportError("no definition information for a definition unfolding");
      auto &extra = env.proofExtra.get<Shell::FunctionDefinitionExtra>(u);
      e.put(static_cast<uint32_t>(premises.size() > 0 ? premises.size() - 1 : 0));
      for (size_t k = 1; k < premises.size(); k++) {
        Clause *rw = premises[k]->asClause();
        Literal *lit = (*rw)[0];
        bool forwards = k - 1 < extra.lhs.size() &&
                        lit->termArg(0).term() == extra.lhs[k - 1];
        e.put(forwards ? 1 : 0);
      }
    }

    // Per premise, the terms its variables are instantiated with. Absent (count 0)
    // when the rule needs no unifier, in which case Lean applies the premise to its own
    // variables unchanged.
    e.put(static_cast<uint32_t>(subs.size()));
    if (!subs.empty()) {
      unsigned i = 0;
      for (Unit *p : iterTraits(u->getParents())) {
        if (i >= subs.size()) break;
        DHMap<unsigned, TermList> premiseSorts;
        SortHelper::collectVariableSorts(p, premiseSorts);
        std::vector<unsigned> vars;
        auto it = premiseSorts.domain();
        while (it.hasNext()) vars.push_back(it.next());
        std::sort(vars.begin(), vars.end());

        auto pSplits = splitsOf(p);
        e.put(static_cast<uint32_t>(pSplits.size()));
        for (auto [v, pos] : pSplits) { e.put(v); e.put(pos ? 1 : 0); }

        e.put(static_cast<uint32_t>(vars.size()));
        for (unsigned v : vars) {
          size_t lenAt = e.code.size();
          e.put(0);
          size_t start = e.code.size();
          e.writeTerm(subs[i].apply(v));
          e.code[lenAt] = static_cast<uint32_t>(e.code.size() - start);
        }
        i++;
      }
    }
  }
};

static std::vector<uint32_t> g_code;
static std::vector<std::string> g_names;
static std::string g_error;

} // namespace vampire_ffi

using namespace vampire_ffi;

static lean_obj_res mkUInt32Array(const std::vector<uint32_t> &v) {
  lean_object *a = lean_alloc_array(v.size(), v.size());
  for (size_t i = 0; i < v.size(); i++)
    lean_array_set_core(a, i, lean_box_uint32(v[i]));
  return a;
}

static lean_obj_res mkStringArray(const std::vector<std::string> &v) {
  lean_object *a = lean_alloc_array(v.size(), v.size());
  for (size_t i = 0; i < v.size(); i++)
    lean_array_set_core(a, i, lean_mk_string(v[i].c_str()));
  return a;
}

extern "C" {

/**
 * Export the last refutation. Returns 0 on success, 1 if there is no refutation,
 * 2 on an exception, 3 if something in the proof cannot be exported yet; the message
 * for the last two is in `lean_vampire_export_error`.
 */
uint32_t lean_vampire_export_proof(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  try {
    g_error.clear();
    g_code.clear();
    g_names.clear();
    Unit *refutation = env.statistics->refutation;
    if (refutation == nullptr) return 1;
    std::ostringstream sink;
    ProofExporter ex(sink, InferenceStore::instance());
    ex.scheduleForPrinting(refutation);
    ex.print();
    g_code = ex.e.finish();
    g_names = std::move(ex.e.names);
    return 0;
  } catch (ExportError &err) {
    g_error = err.what;
    return 3;
  } catch (Exception &err) {
    g_error = err.msg();
    return 2;
  } catch (std::exception &err) {
    g_error = err.what();
    return 2;
  } catch (...) {
    g_error = "unknown C++ exception";
    return 2;
  }
}

lean_obj_res lean_vampire_export_error(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return lean_mk_string(g_error.c_str());
}

lean_obj_res lean_vampire_export_code(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return mkUInt32Array(g_code);
}

lean_obj_res lean_vampire_export_names(lean_obj_arg) {
  vampire_ffi::EntryGuard guard;
  return mkStringArray(g_names);
}

} // extern "C"
