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
 *   header    21 words, see `write`
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
 *              firstParent, numParents, firstVarSort, numVarSorts}
 *             flags: 1 = clause. A clause's payload is its first literal
 *             index, a formula's payload is its formula index.
 *   unitLits  literal indices
 *   parents   unit indices
 *   varSorts  {variable, sort} pairs, giving the sorts a unit's free
 *             variables take -- a clause is implicitly universally quantified
 *             over them, so rebuilding it needs their sorts
 *   strings   NUL-terminated names, padded to a 4-byte boundary
 *   proofText vampire's own rendering of the proof, padded likewise
 */

#include <sys/stat.h>

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

namespace {

const uint32_t MAGIC = 0x504D4156;  // "VAMP"
const uint32_t VERSION = 2;
const uint32_t NONE = 0xFFFFFFFFu;

struct Encoder {
  std::vector<uint32_t> functions, predicates, sorts, terms, args, literals,
      formulas, subs, vars, units, unitLits, parents, varSorts;
  std::string strings;
  std::string proofText;

  std::unordered_map<uint64_t, uint32_t> termSeen, sortSeen;
  std::unordered_map<const void*, uint32_t> literalSeen, formulaSeen, unitSeen;

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

  uint32_t encodeUnit(Unit* u)
  {
    auto seen = unitSeen.find(u);
    if (seen != unitSeen.end())
      return seen->second;

    uint32_t idx = static_cast<uint32_t>(units.size() / 10);
    units.resize(units.size() + 10, 0);
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

    units[10 * idx + 0] = u->number();
    units[10 * idx + 1] = static_cast<uint32_t>(inference.rule());
    units[10 * idx + 2] = static_cast<uint32_t>(u->inputType());
    units[10 * idx + 3] = flags;
    units[10 * idx + 4] = payload;
    units[10 * idx + 5] = numLits;
    units[10 * idx + 6] = parentIdxs.empty() ? NONE : firstParent;
    units[10 * idx + 7] = static_cast<uint32_t>(parentIdxs.size());
    units[10 * idx + 8] = numVarSorts == 0 ? NONE : firstVarSort;
    units[10 * idx + 9] = numVarSorts;
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
  putWord(buf, static_cast<uint32_t>(enc.units.size() / 10));
  putWord(buf, static_cast<uint32_t>(enc.unitLits.size()));
  putWord(buf, static_cast<uint32_t>(enc.parents.size()));
  putWord(buf, static_cast<uint32_t>(enc.varSorts.size() / 2));
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

    // In portfolio mode a child has already written the proof; anything this
    // process could encode now would be an empty derivation on top of it.
    struct stat ignored;
    if (stat(g_outPath.c_str(), &ignored) != 0)
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
