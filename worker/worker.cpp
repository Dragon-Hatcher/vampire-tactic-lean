/*
 * One vampire proof attempt, encoded for the Lean side.
 *
 * Usage: vampire-worker <problem.p> <out-file> [name=value ...]
 *
 * The problem is read as TPTP, saturation runs once, and the refutation (if
 * any) is written to <out-file> in the flat format described below. Vampire's
 * own chatter is left on stdout/stderr for diagnostics, which is why the
 * encoding goes to a file rather than a pipe.
 *
 * Every field is a little-endian uint32 unless stated otherwise. Pointers
 * become indices, so the encoding is position-independent and preserves
 * vampire's term sharing. `NONE` (0xFFFFFFFF) marks an absent index.
 *
 *   header    28 words, see `write`
 *   functions {nameOff, arity}          -- indexed by a term's functor
 *   predicates{nameOff, arity}          -- indexed by a literal's predicate
 *   sorts     {nameOff}                 -- vampire's type constructors
 *   terms     {tag, value, firstArg, arity}   tag: 0 = variable, 1 = functor
 *   args      term indices, shared by terms and literals
 *   literals  {predicate, flags, firstArg, arity, sort}
 *             flags: 1 = positive, 2 = equality. `sort` is the sort of an
 *             equality's arguments and `NONE` otherwise; a clause `X = Y`
 *             offers no other way to recover it.
 *   formulas  {connective, literal, firstSub, numSubs, firstVar, numVars, name}
 *             `name` is the string offset of a named subformula -- a
 *             definition vampire introduced while clausifying -- and `NONE`
 *             otherwise
 *   subs      formula indices
 *   vars      variable numbers of quantified formulas
 *   units     {number, rule, inputType, flags, payload, numLits,
 *              firstParent, numParents, firstVarSort, numVarSorts,
 *              firstSkolem, numSkolems, name, firstUse, numUses,
 *              firstSplit, numSplits, satPremise}
 *             `satPremise` is the propositional clause a step derived by SAT
 *             solving stands on, and `NONE` for anything else
 *             `name` is the string offset of the name the input gave this
 *             formula, and `NONE` for anything vampire derived. It says which
 *             hypothesis an `input` step restates, so replay need not search
 *             for one that matches.
 *             flags: 1 = clause. A clause's payload is its first literal
 *             index, a formula's payload is its formula index.
 *   unitLits  literal indices
 *   parents   unit indices
 *   varSorts  {variable, sort} pairs, giving the sorts a unit's free
 *             variables take -- a clause is implicitly universally quantified
 *             over them, so rebuilding it needs their sorts
 *   uses      {premise, literal, term, flags, firstBinding, numBindings}: how a
 *             generated clause used one of its premises. `premise` is that
 *             premise's number, `literal` the index of the literal the
 *             inference acted on or `NONE`, and `term` the index of the term it
 *             acted on within that literal or `NONE` -- a rewriting inference
 *             singles out a subterm rather than a whole literal. A generating
 *             inference discards the unifier it computes, so without this a
 *             reconstruction would have to recover it by matching the
 *             conclusion against the premises.
 *             flags: 1 = the term was rewritten throughout the premise rather
 *             than only in that literal, which is what simultaneous
 *             superposition does
 *   bindings  {variable, term} pairs: what the unifier bound each of a
 *             premise's variables to
 *   satClauses{firstLit, numLits, firstPremise, numPremises, origin}: a clause
 *             of the propositional problem splitting hands to a SAT solver.
 *             `origin` is the unit this clause came from, for one that is a
 *             first-order clause's propositional shadow, and `NONE` for one
 *             the solver derived -- whose premises are then the clauses it was
 *             derived from, in the order the solver used them, each of which
 *             holds all but one of its literals falsified by the ones before
 *   satLits   string offsets of a propositional clause's literals, each the
 *             name of a component or its negation
 *   satPremises indices into `satClauses`
 *   splits    string offsets of the names a clause holds under: splitting
 *             asserts a component's name and works on with the clause under
 *             that assumption, so what such a clause says is that its literals
 *             follow from the names it is written against
 *   skolems   {variable, term} pairs: the existential variable a skolemisation
 *             step replaced, and the term it became. Skolemisation works on
 *             NNF rather than prenex input and a skolem takes only the
 *             universals it depends on, so the term is recorded as vampire
 *             built it rather than re-derived
 *   strings   NUL-terminated names, padded to a 4-byte boundary
 *   proofText vampire's own rendering of the proof, padded likewise
 */

#include <cstdint>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

#include "CASC/PortfolioMode.hpp"
#include "Kernel/Clause.hpp"
#include "Kernel/Formula.hpp"
#include "Kernel/Inference.hpp"
#include "Kernel/InferenceStore.hpp"
#include "Kernel/Problem.hpp"
#include "Kernel/Signature.hpp"
#include "Kernel/SortHelper.hpp"
#include "Lib/SharedSet.hpp"
#include "Kernel/Term.hpp"
#include "Kernel/Unit.hpp"
#include "Lib/Environment.hpp"
#include "Lib/Exception.hpp"
#include "Lib/Timer.hpp"
#include "Parse/TPTP.hpp"
#include "Saturation/ProvingHelper.hpp"
#include "SAT/SATClause.hpp"
#include "SAT/SATInference.hpp"
#include "Saturation/Splitter.hpp"
#include "Shell/Options.hpp"
#include "Shell/Preprocess.hpp"
#include "Shell/Statistics.hpp"
#include "Shell/UIHelper.hpp"

using namespace Lib;
using namespace Kernel;
using namespace Shell;
using namespace Saturation;

namespace {

const uint32_t MAGIC = 0x504D4156;  // "VAMP"
const uint32_t VERSION = 9;
const uint32_t NONE = 0xFFFFFFFFu;

struct Encoder {
  std::vector<uint32_t> functions, predicates, sorts, terms, args, literals,
      formulas, subs, vars, units, unitLits, parents, varSorts, skolems, uses,
      bindings, splits, satClauses, satLits, satPremises;
  std::string strings;
  std::string proofText;

  std::unordered_map<uint64_t, uint32_t> termSeen, sortSeen;
  std::unordered_map<const void*, uint32_t> literalSeen, formulaSeen, unitSeen,
      satSeen;

  uint32_t addString(const std::string& s)
  {
    uint32_t off = static_cast<uint32_t>(strings.size());
    strings.append(s);
    strings.push_back('\0');
    return off;
  }

  void encodeSignature()
  {
    for (unsigned i = 0; i < env.signature->functions(); i++) {
      Signature::Symbol* sym = env.signature->getFunction(i);
      functions.push_back(addString(sym->name()));
      functions.push_back(sym->arity());
    }
    for (unsigned i = 0; i < env.signature->predicates(); i++) {
      Signature::Symbol* sym = env.signature->getPredicate(i);
      predicates.push_back(addString(sym->name()));
      predicates.push_back(sym->arity());
    }
  }

  /** Interns a sort, which for our purposes is always an atomic type. */
  uint32_t encodeSort(TermList sort)
  {
    auto seen = sortSeen.find(sort.content());
    if (seen != sortSeen.end())
      return seen->second;
    std::string name = sort.isTerm()
      ? env.signature->typeConName(sort.term()->functor())
      : "$unknown";
    uint32_t idx = static_cast<uint32_t>(sorts.size());
    sorts.push_back(addString(name));
    sortSeen.emplace(sort.content(), idx);
    return idx;
  }

  uint32_t encodeTerm(TermList t)
  {
    auto seen = termSeen.find(t.content());
    if (seen != termSeen.end())
      return seen->second;

    // Reserve the slot before recursing so sharing is recorded even for the
    // arguments of this very term.
    uint32_t idx = static_cast<uint32_t>(terms.size() / 4);
    terms.resize(terms.size() + 4, 0);
    termSeen.emplace(t.content(), idx);

    if (t.isVar()) {
      terms[4 * idx + 0] = 0;
      terms[4 * idx + 1] = t.var();
      terms[4 * idx + 2] = NONE;
      terms[4 * idx + 3] = 0;
      return idx;
    }

    Term* term = t.term();
    unsigned arity = term->arity();
    std::vector<uint32_t> argIdxs;
    argIdxs.reserve(arity);
    for (unsigned i = 0; i < arity; i++)
      argIdxs.push_back(encodeTerm(*term->nthArgument(i)));

    uint32_t firstArg = static_cast<uint32_t>(args.size());
    for (uint32_t a : argIdxs)
      args.push_back(a);

    terms[4 * idx + 0] = 1;
    terms[4 * idx + 1] = term->functor();
    terms[4 * idx + 2] = arity == 0 ? NONE : firstArg;
    terms[4 * idx + 3] = arity;
    return idx;
  }

  uint32_t encodeLiteral(Literal* l)
  {
    auto seen = literalSeen.find(l);
    if (seen != literalSeen.end())
      return seen->second;

    unsigned arity = l->arity();
    std::vector<uint32_t> argIdxs;
    argIdxs.reserve(arity);
    for (unsigned i = 0; i < arity; i++)
      argIdxs.push_back(encodeTerm(*l->nthArgument(i)));

    uint32_t firstArg = static_cast<uint32_t>(args.size());
    for (uint32_t a : argIdxs)
      args.push_back(a);

    uint32_t flags = 0;
    if (l->isPositive())
      flags |= 1;
    if (l->isEquality())
      flags |= 2;

    uint32_t idx = static_cast<uint32_t>(literals.size() / 5);
    literals.push_back(l->functor());
    literals.push_back(flags);
    literals.push_back(arity == 0 ? NONE : firstArg);
    literals.push_back(arity);
    literals.push_back(l->isEquality()
      ? encodeSort(SortHelper::getEqualityArgumentSort(l)) : NONE);
    literalSeen.emplace(l, idx);
    return idx;
  }

  uint32_t encodeFormula(Formula* f)
  {
    auto seen = formulaSeen.find(f);
    if (seen != formulaSeen.end())
      return seen->second;

    uint32_t idx = static_cast<uint32_t>(formulas.size() / 7);
    formulas.resize(formulas.size() + 7, 0);
    formulaSeen.emplace(f, idx);

    uint32_t literal = NONE;
    uint32_t name = NONE;
    std::vector<uint32_t> subIdxs;
    std::vector<uint32_t> varNums;

    switch (f->connective()) {
      case LITERAL:
        literal = encodeLiteral(f->literal());
        break;
      case AND:
      case OR:
        for (const FormulaList* it = f->args(); it; it = it->tail())
          subIdxs.push_back(encodeFormula(it->head()));
        break;
      case IMP:
      case IFF:
      case XOR:
        subIdxs.push_back(encodeFormula(f->left()));
        subIdxs.push_back(encodeFormula(f->right()));
        break;
      case NOT:
        subIdxs.push_back(encodeFormula(f->uarg()));
        break;
      case FORALL:
      case EXISTS:
        for (const VSList* it = f->vars(); it; it = it->tail())
          varNums.push_back(it->head().first);
        subIdxs.push_back(encodeFormula(f->qarg()));
        break;
      case NAME:
        name = addString(static_cast<const NamedFormula*>(f)->name());
        break;
      default:
        // TRUE, FALSE, BOOL_TERM, NAME, NOCONN carry no subformulas here.
        break;
    }

    uint32_t firstSub = static_cast<uint32_t>(subs.size());
    for (uint32_t s : subIdxs)
      subs.push_back(s);
    uint32_t firstVar = static_cast<uint32_t>(vars.size());
    for (uint32_t v : varNums)
      vars.push_back(v);

    formulas[7 * idx + 0] = static_cast<uint32_t>(f->connective());
    formulas[7 * idx + 1] = literal;
    formulas[7 * idx + 2] = subIdxs.empty() ? NONE : firstSub;
    formulas[7 * idx + 3] = static_cast<uint32_t>(subIdxs.size());
    formulas[7 * idx + 4] = varNums.empty() ? NONE : firstVar;
    formulas[7 * idx + 5] = static_cast<uint32_t>(varNums.size());
    formulas[7 * idx + 6] = name;
    return idx;
  }

  /** A clause of the propositional problem, and how the solver derived it. */
  uint32_t encodeSatClause(SATClause* cl)
  {
    auto seen = satSeen.find(cl);
    if (seen != satSeen.end())
      return seen->second;

    uint32_t idx = static_cast<uint32_t>(satClauses.size() / 5);
    satClauses.resize(satClauses.size() + 5, 0);
    satSeen.emplace(cl, idx);

    uint32_t firstLit = static_cast<uint32_t>(satLits.size());
    for (SATLiteral l : iterTraits(cl->iter()))
      satLits.push_back(addString(Splitter::getFormulaStringFromLiteral(l)));
    uint32_t numLits = static_cast<uint32_t>(cl->length());

    uint32_t origin = NONE;
    std::vector<uint32_t> premiseIdxs;
    if (SATInference* inf = cl->inference()) {
      if (inf->getType() == SATInference::InfType::PROP_INF) {
        for (SATClause* p : iterTraits(inf->propInf()->getPremises()->iter()))
          premiseIdxs.push_back(encodeSatClause(p));
        // The premises were collected by pushing them onto a list, which
        // reverses them; the order the solver used them in is what matters.
        std::reverse(premiseIdxs.begin(), premiseIdxs.end());
      } else {
        origin = encodeUnit(inf->foConversion()->getOrigin());
      }
    }
    uint32_t firstPremise = static_cast<uint32_t>(satPremises.size());
    for (uint32_t p : premiseIdxs)
      satPremises.push_back(p);

    satClauses[5 * idx + 0] = numLits == 0 ? NONE : firstLit;
    satClauses[5 * idx + 1] = numLits;
    satClauses[5 * idx + 2] = premiseIdxs.empty() ? NONE : firstPremise;
    satClauses[5 * idx + 3] = static_cast<uint32_t>(premiseIdxs.size());
    satClauses[5 * idx + 4] = origin;
    return idx;
  }

  uint32_t encodeUnit(Unit* u)
  {
    auto seen = unitSeen.find(u);
    if (seen != unitSeen.end())
      return seen->second;

    uint32_t idx = static_cast<uint32_t>(units.size() / 18);
    units.resize(units.size() + 18, 0);
    unitSeen.emplace(u, idx);

    uint32_t flags = 0;
    uint32_t payload = NONE;
    uint32_t numLits = 0;

    if (u->isClause()) {
      flags |= 1;
      Clause* c = u->asClause();
      std::vector<uint32_t> litIdxs;
      litIdxs.reserve(c->size());
      for (unsigned i = 0; i < c->size(); i++)
        litIdxs.push_back(encodeLiteral((*c)[i]));
      uint32_t firstLit = static_cast<uint32_t>(unitLits.size());
      for (uint32_t l : litIdxs)
        unitLits.push_back(l);
      payload = litIdxs.empty() ? NONE : firstLit;
      numLits = static_cast<uint32_t>(litIdxs.size());
    } else {
      payload = encodeFormula(u->getFormula());
    }

    std::vector<uint32_t> parentIdxs;
    const Inference& inference = u->inference();
    Inference::Iterator it = inference.iterator();
    while (inference.hasNext(it))
      parentIdxs.push_back(encodeUnit(inference.next(it)));

    uint32_t firstParent = static_cast<uint32_t>(parents.size());
    for (uint32_t p : parentIdxs)
      parents.push_back(p);

    DHMap<unsigned, TermList, FnvHash, IdentityHash> sortsOfVars;
    SortHelper::collectVariableSorts(u, sortsOfVars);
    uint32_t firstVarSort = static_cast<uint32_t>(varSorts.size() / 2);
    uint32_t numVarSorts = 0;
    DHMap<unsigned, TermList, FnvHash, IdentityHash>::Iterator it2(sortsOfVars);
    while (it2.hasNext()) {
      unsigned var;
      TermList sort;
      it2.next(var, sort);
      varSorts.push_back(var);
      varSorts.push_back(encodeSort(sort));
      numVarSorts++;
    }

    Stack<std::tuple<Signature::Symbol*, unsigned, Term*>> introduced;
    InferenceStore::instance()->introducedSkolems(u, introduced);
    uint32_t firstSkolem = static_cast<uint32_t>(skolems.size() / 2);
    uint32_t numSkolems = 0;
    for (auto [sym, replacedVar, symTerm] : introduced) {
      skolems.push_back(replacedVar);
      skolems.push_back(encodeTerm(TermList(symTerm)));
      numSkolems++;
    }

    uint32_t firstSplit = static_cast<uint32_t>(splits.size());
    uint32_t numSplits = 0;
    if (u->isClause() && u->asClause()->splits()) {
      auto sit = u->asClause()->splits()->iter();
      while (sit.hasNext()) {
        splits.push_back(
          addString(Splitter::getFormulaStringFromName(sit.next())));
        numSplits++;
      }
    }

    std::string axiomName;
    std::filesystem::path axiomPath;
    uint32_t nameOff =
      Parse::TPTP::findAxiomName(u, axiomName, axiomPath) ? addString(axiomName)
                                                          : NONE;

    units[18 * idx + 0] = u->number();
    units[18 * idx + 1] = static_cast<uint32_t>(inference.rule());
    units[18 * idx + 2] = static_cast<uint32_t>(u->inputType());
    units[18 * idx + 3] = flags;
    units[18 * idx + 4] = payload;
    units[18 * idx + 5] = numLits;
    units[18 * idx + 6] = parentIdxs.empty() ? NONE : firstParent;
    units[18 * idx + 7] = static_cast<uint32_t>(parentIdxs.size());
    units[18 * idx + 8] = numVarSorts == 0 ? NONE : firstVarSort;
    units[18 * idx + 9] = numVarSorts;
    units[18 * idx + 10] = numSkolems == 0 ? NONE : firstSkolem;
    units[18 * idx + 11] = numSkolems;
    units[18 * idx + 12] = nameOff;

    // Subsumption resolution has several implementations and none of them keeps
    // the substitution it found, so it is worked out here instead.
    if (inference.rule() == InferenceRule::FORWARD_SUBSUMPTION_RESOLUTION ||
        inference.rule() == InferenceRule::BACKWARD_SUBSUMPTION_RESOLUTION) {
      InferenceStore::instance()->recoverSubsumptionResolutionUses(u);
    }

    uint32_t firstUse = static_cast<uint32_t>(uses.size() / 6);
    uint32_t numUses = 0;
    if (const Stack<InferenceStore::PremiseUse>* recorded =
          InferenceStore::instance()->premiseUses(u)) {
      for (const auto& use : *recorded) {
        uint32_t firstBinding = static_cast<uint32_t>(bindings.size() / 2);
        for (const auto& [var, term] : use.bindings) {
          bindings.push_back(var);
          bindings.push_back(encodeTerm(term));
        }
        uses.push_back(use.premise);
        uses.push_back(use.literal == InferenceStore::literalNone ? NONE
                                                                  : use.literal);
        uses.push_back(use.term.isEmpty() ? NONE : encodeTerm(use.term));
        uses.push_back(use.flags);
        uses.push_back(use.bindings.isEmpty() ? NONE : firstBinding);
        uses.push_back(static_cast<uint32_t>(use.bindings.size()));
        numUses++;
      }
    }
    units[18 * idx + 13] = numUses == 0 ? NONE : firstUse;
    units[18 * idx + 14] = numUses;
    units[18 * idx + 15] = numSplits == 0 ? NONE : firstSplit;
    units[18 * idx + 16] = numSplits;
    units[18 * idx + 17] =
      inference.satPremise() ? encodeSatClause(inference.satPremise()) : NONE;
    return idx;
  }
};

void putWord(std::string& buf, uint32_t w)
{
  char bytes[4] = {static_cast<char>(w & 0xFF),
                   static_cast<char>((w >> 8) & 0xFF),
                   static_cast<char>((w >> 16) & 0xFF),
                   static_cast<char>((w >> 24) & 0xFF)};
  buf.append(bytes, 4);
}

void putWords(std::string& buf, const std::vector<uint32_t>& ws)
{
  for (uint32_t w : ws)
    putWord(buf, w);
}

void putBlob(std::string& buf, const std::string& blob)
{
  buf.append(blob);
  while (buf.size() % 4 != 0)
    buf.push_back('\0');
}

void write(const std::string& path, const Encoder& enc, uint32_t reason,
           uint32_t refutation)
{
  std::string buf;
  putWord(buf, MAGIC);
  putWord(buf, VERSION);
  putWord(buf, reason);
  putWord(buf, refutation == NONE ? 0 : 1);
  putWord(buf, refutation);
  putWord(buf, static_cast<uint32_t>(enc.functions.size() / 2));
  putWord(buf, static_cast<uint32_t>(enc.predicates.size() / 2));
  putWord(buf, static_cast<uint32_t>(enc.sorts.size()));
  putWord(buf, static_cast<uint32_t>(enc.terms.size() / 4));
  putWord(buf, static_cast<uint32_t>(enc.args.size()));
  putWord(buf, static_cast<uint32_t>(enc.literals.size() / 5));
  putWord(buf, static_cast<uint32_t>(enc.formulas.size() / 7));
  putWord(buf, static_cast<uint32_t>(enc.subs.size()));
  putWord(buf, static_cast<uint32_t>(enc.vars.size()));
  putWord(buf, static_cast<uint32_t>(enc.units.size() / 18));
  putWord(buf, static_cast<uint32_t>(enc.unitLits.size()));
  putWord(buf, static_cast<uint32_t>(enc.parents.size()));
  putWord(buf, static_cast<uint32_t>(enc.varSorts.size() / 2));
  putWord(buf, static_cast<uint32_t>(enc.skolems.size() / 2));
  putWord(buf, static_cast<uint32_t>(enc.splits.size()));
  putWord(buf, static_cast<uint32_t>(enc.satClauses.size() / 5));
  putWord(buf, static_cast<uint32_t>(enc.satLits.size()));
  putWord(buf, static_cast<uint32_t>(enc.satPremises.size()));
  putWord(buf, static_cast<uint32_t>(enc.uses.size() / 6));
  putWord(buf, static_cast<uint32_t>(enc.bindings.size() / 2));
  putWord(buf, static_cast<uint32_t>(enc.strings.size()));
  putWord(buf, static_cast<uint32_t>(enc.proofText.size()));
  // Lets the Lean side notice that its generated `InferenceRule` is stale.
  putWord(buf, static_cast<uint32_t>(
    InferenceRule::FUNCTIONAL_EXTENSIONALITY_AXIOM) + 1);

  putWords(buf, enc.functions);
  putWords(buf, enc.predicates);
  putWords(buf, enc.sorts);
  putWords(buf, enc.terms);
  putWords(buf, enc.args);
  putWords(buf, enc.literals);
  putWords(buf, enc.formulas);
  putWords(buf, enc.subs);
  putWords(buf, enc.vars);
  putWords(buf, enc.units);
  putWords(buf, enc.unitLits);
  putWords(buf, enc.parents);
  putWords(buf, enc.varSorts);
  putWords(buf, enc.skolems);
  putWords(buf, enc.splits);
  putWords(buf, enc.satClauses);
  putWords(buf, enc.satLits);
  putWords(buf, enc.satPremises);
  putWords(buf, enc.uses);
  putWords(buf, enc.bindings);
  putBlob(buf, enc.strings);
  putBlob(buf, enc.proofText);

  // Written aside and renamed so that a half-written file is never visible:
  // in portfolio mode the process doing this can be killed at any moment.
  std::string partial = path + ".part";
  std::ofstream out(partial, std::ios::binary | std::ios::trunc);
  if (!out)
    throw UserErrorException("cannot open output file " + partial);
  out.write(buf.data(), static_cast<std::streamsize>(buf.size()));
  out.close();
  if (!out)
    throw UserErrorException("cannot write output file " + partial);
  if (std::rename(partial.c_str(), path.c_str()) != 0)
    throw UserErrorException("cannot rename " + partial + " to " + path);
}

/** Where `emitProof` writes; set once from `main`. */
std::string g_outPath;

/** Encodes whatever proof this process has, if any, and writes it out. */
void emitProof()
{
  Encoder enc;
  enc.encodeSignature();
  uint32_t refutation = NONE;
  if (Unit* r = env.statistics->refutation) {
    refutation = enc.encodeUnit(r);
    std::ostringstream proof;
    InferenceStore::instance()->outputProof(proof, r);
    enc.proofText = proof.str();
  }
  write(g_outPath, enc,
        static_cast<uint32_t>(env.statistics->terminationReason), refutation);
}

bool isPortfolioMode(Options::Mode mode)
{
  return mode == Options::Mode::PORTFOLIO || mode == Options::Mode::CASC
      || mode == Options::Mode::SMTCOMP;
}

}  // namespace

int main(int argc, char** argv)
{
  if (argc < 3) {
    std::fprintf(stderr,
                 "usage: vampire-worker <problem.p> <out-file> "
                 "[name=value ...]\n");
    return 2;
  }

  try {
    for (int i = 3; i < argc; i++) {
      std::string arg(argv[i]);
      size_t eq = arg.find('=');
      if (eq == std::string::npos)
        throw UserErrorException("expected name=value, got " + arg);
      env.options->set(arg.substr(0, eq), arg.substr(eq + 1));
    }

    g_outPath = argv[2];
    std::remove(g_outPath.c_str());

    Timer::reinitialise();
    UIHelper::parseFile(argv[1], env.options->inputSyntax(), false);
    Problem* prb = UIHelper::getInputProblem();

    // On reaching a limit vampire exits from its timer thread, skipping both
    // the code below and any atexit handler, and re-encoding from that thread
    // would race with the search. So write a proof-less result now: whatever
    // happens, the caller finds a decodable file rather than an empty one.
    emitProof();

    if (isPortfolioMode(env.options->mode())) {
      // The slice that succeeds runs in a child of this process and exits
      // there, so it has to do the encoding itself; the parent never sees its
      // refutation. Portfolio mode preprocesses per slice, so not here.
      UIHelper::onProofFound = &emitProof;
      CASC::PortfolioMode::perform(prb);
    } else {
      env.options->setForcedOptionValues();
      env.options->checkGlobalOptionConstraints();
      Preprocess(*env.options).preprocess(*prb);
      ProvingHelper::runVampireSaturation(*prb, *env.options);
    }

    // A portfolio slice reports for itself, whether it refuted the problem or
    // showed it satisfiable, and it is the only process that knows; this one
    // would only overwrite that with what the placeholder already says.
    if (!isPortfolioMode(env.options->mode()))
      emitProof();
    return 0;
  } catch (Exception& e) {
    std::ostringstream msg;
    e.cry(msg);
    std::fprintf(stderr, "%s\n", msg.str().c_str());
    return 1;
  } catch (const std::exception& e) {
    std::fprintf(stderr, "%s\n", e.what());
    return 1;
  }
}
