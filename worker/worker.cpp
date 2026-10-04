/*
 * One vampire proof attempt, written out for the Lean side.
 *
 * Usage: vampire-worker <problem.p> <out-file> [name=value ...]
 *
 * The problem is read as TPTP, saturation runs once, and the refutation (if
 * any) is written to <out-file> as TSTP, in the form described below. Vampire's
 * own chatter is left on stdout/stderr for diagnostics, which is why the proof
 * goes to a file rather than a pipe.
 *
 * The file is a sequence of TPTP annotated formulas. Everything vampire's own
 * proof would say is said the TSTP way; what the fork records beyond that --
 * how each step used its premises, where each literal went, and the rest of
 * `InferenceStore` -- goes into each step's useful information, as general
 * terms. Terms and formulas inside those are written `$fot(t)` and `$tff(f)`.
 * Nothing refers to anything by position in the file, so it can be read by
 * any TPTP tool, and the Lean side recovers vampire's sharing of terms by
 * structure.
 *
 *   % SZS status <status> for problem
 *   % format: N
 *   % termination: R
 *   % rules: Count Fingerprint
 *   % polarity flip boundary: B
 *   % refutation: uK
 *   % strategy: ...
 *   % times: Strategy Setup FoundAt
 *   % SZS output start Refutation for problem      (with a refutation only)
 *     The header, as comments like the SZS lines, each `key: value`, before
 *     the first annotated formula. `format` is the version of this format.
 *     `termination` is vampire's termination reason, `refutation_not_found`
 *     and so on; SZS cannot tell all of them apart. `rules` are how many
 *     inference rules vampire declares and a hash of their names in order
 *     (`VAMPIRE_RULE_FINGERPRINT`, see CMakeLists.txt), which the Lean side
 *     checks its generated copy against. `polarity flip boundary` is the
 *     number of the first step polarity flipping made, or zero. The last three
 *     are there with a refutation only: the step that is the refutation, the
 *     strategy that found it, from which alone the same run can be had again,
 *     and what that strategy ran for, what starting up and parsing took and
 *     when the proof was found, in milliseconds.
 *
 *   tff(sort_I, type, s: $tType).
 *   tff(func_I, type, f: (s1 * s2) > s, unknown, [created(C)]).
 *   tff(pred_I, type, p: (s1 * s2) > $o, unknown, [created(C), flipped,
 *       pure(Value,Order)]).
 *     Every sort and uninterpreted symbol, with what replay needs to know of
 *     a symbol: when it was created, counted over functions and predicates
 *     alike -- a symbol vampire introduced is made of symbols that exist
 *     already, so this is an order to bind them in; whether polarity flipping
 *     flipped a predicate, so that every step after it means the opposite by
 *     it; and the truth value pure predicate removal replaced it by, with its
 *     number among the predicates found pure in the order they were found.
 *     Interpreted symbols are TPTP's own and are not declared. Numerals are
 *     written as TPTP writes them, `3` and `1/3`, except that TPTP's reals are
 *     decimals, so a real is `$to_real(1/3)`, which is also how vampire names
 *     it. ALASCA's multiplication by a numeral `k` is `$$lin_mul(k, t)`. A
 *     symbol whose type is not first-order over atomic sorts is left out.
 *
 *   tcf(uN, Role, ! [X0: s0, X1: s1] : (L1 | L2), Source, [Records]).
 *   tff(uN, Role, Formula, Source, [Records]).
 *     One step of the derivation, `N` being vampire's number for it; `tcf` for
 *     a clause and `tff` for a formula. A clause is quantified over its
 *     variables in the order vampire collects their sorts, and its literals
 *     are in vampire's order, which the records index; `$false` is the empty
 *     clause. In a formula, `~p` is a negative literal and `~ (f)` a negation,
 *     an equality's sort is that of its sides, and a name for a formula is
 *     `$$name('n')`. Steps come in the order the worker met them, from the
 *     refutation back, so a step's premises follow it.
 *     The source is `file('problem.p', name)` for an input formula, naming the
 *     hypothesis it restates, and `inference(rule, [], [premises])` otherwise,
 *     `rule` being the name of the `InferenceRule` enumerator in lower case.
 *     The records, each there only where it says something:
 *       var_sorts([v(V,s)])    a formula's variables' sorts
 *       bound_sorts([v(V,s)])  the sorts of variables that occur only in what
 *                              the uses bound premises' variables to: a
 *                              unifier's image can mention a variable that
 *                              neither the premise nor the conclusion has
 *       input_name(n)          the input name of a step that is not an input
 *       skolems([skolem(V,$fot(t))])  each existential variable a
 *                              skolemisation replaced, and the term it became
 *       uses([use(P, Lit, Term, Flags, [bind(V,$fot(t))], Other, Factor)])
 *                              how the step used premise number `P`: the
 *                              literal it acted on and the term within it,
 *                              each `none` where there was none, flags (1 =
 *                              the term was rewritten throughout the premise;
 *                              2, 4, 8 = VIRAS's virtual term is plus an
 *                              infinitesimal, plus infinity, minus infinity;
 *                              16 = the premise states the term negated),
 *                              what the unifier bound each of the premise's
 *                              variables to, a second term it acted on and
 *                              the numeral it scaled the term by
 *                              (`InferenceStore::PremiseUse`)
 *       splits(['n'])          the names a clause holds under
 *       sat_premise(sat_I)     the propositional clause a step derived by SAT
 *                              solving stands on
 *       namings([naming(p, [V], F)])  a predicate clausification introduced
 *                              to name formula `F`, and the variables it was
 *                              applied to
 *       gen_clause(gen_I)      the generalised clause a clause came out of
 *       choices([choice([I], K)])  which argument of each conjunction the
 *                              old clausifier took the clause into, the
 *                              conjunction given by its position in the
 *                              premise's formula: the path of subformula
 *                              indices to it from the root. By position, not
 *                              by restating it, since two conjunctions alike
 *                              can be taken different ways
 *       congruences([...])     the reasoning behind a congruence-closure
 *                              conflict, step by step: input(L) the equality
 *                              literal `L` denies; congruence($fot(a),
 *                              $fot(b), [S]) `a = b` from a step per pair of
 *                              arguments, `none` where they are the same term;
 *                              trans(S1,S2); symm(S); goal_equality(L, S)
 *                              literal `L` is the equality step `S` proves;
 *                              goal_literals(L1, L2, [S]) literals `L1` and
 *                              `L2` are one atom under both signs. Steps are
 *                              numbered within the step's run
 *       constraints([L])       which literals are the disequalities an
 *                              abstracting unifier left behind
 *       placements([placement(K, U, [E])])  where the literals of the `K`th
 *                              premise went under the `U`th use recorded
 *                              against it: for each, the conclusion's literal
 *                              it became, `turned(E)` with its equation turned
 *                              round, `rewritten(E)` where the inference
 *                              rewrote it into that literal rather than
 *                              carried it, and `none` where it became none.
 *                              For a literal-wise simplification, what the
 *                              rule recorded each literal became; for an
 *                              AVATAR split clause, the components' literals
 *                              under each renaming, into the clause split
 *       literal_factors([Q])   per premise literal of a literal-wise
 *                              simplification that scaled one, the rational
 *                              its sides' difference is its image's times
 *       procedure(N)           which procedure rewrote a literal-wise
 *                              simplification (`InferenceStore::LiteralProcedure`)
 *       splitting_name(L)      the literal of a general splitting step that is
 *                              the name it introduced
 *       site('file:line')      where in vampire the inference was made
 *       introduced([lit(L, S)])  the literals the inference built rather than
 *                              carried, in the order it built them, each with
 *                              the literal of the first premise it was made of
 *                              or `none`
 *       variant(N)             which of the shapes its rule builds this one is
 *       introduced_symbol(f)   the first symbol vampire recorded it to
 *                              introduce
 *       introduced_terms([T])  terms the inference built that replay is told
 *                              of, `$fot(t)` or `none`
 *     Literals are indexed by their place in the clause as written. A formula
 *     in a record stands on its own, so its free variables' sorts come with
 *     it: `scoped([v(V,s)], $tff(F))`.
 *
 *   cnf(sat_I, plain, ($$name('n') | ~$$name('m')), Source, [order([K])]).
 *     A clause of the propositional problem splitting hands to a SAT solver.
 *     The source is `inference(sat_resolution, [], [sat_J, ...])` for one the
 *     solver derived, from premises in the order it used them, each of which
 *     holds all but one of its literals falsified by the ones before;
 *     `inference(sat_conversion, [], [uN])` for a first-order clause's
 *     propositional shadow, with `order` saying which of the shadow's literals
 *     each of the clause's became, since the shadow sorts them; and `unknown`
 *     for any other.
 *
 *   tff(gen_I, unknown, $true, unknown, [gen_state(Parent, Position, How,
 *       [pos(F) | neg(F)], [Replacement], [bind(V,$fot(t))], [Placement])]).
 *     One state of one of clausification's generalised clauses: a disjunction
 *     of signed subformulas, together with what the variables it quantifies
 *     have been bound to. `Parent` is the state it was reached from and
 *     `Position` the position replaced in it, both `none` for a clause
 *     clausification started from; `How` (`InferenceStore::gen*`) is 0 for a
 *     clause started from, 1 for a position replaced by the replacement, 2 for
 *     one rewritten in place and 3 for one rewritten in place by a name; and
 *     each placement is where a literal the step pushed went, `turned(K)`
 *     where the push stored `~f` at a sign as `f` at the other.
 */

#include <algorithm>
#include <cctype>
#include <cerrno>
#include <chrono>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <sstream>
#include <string>
#include <system_error>
#include <tuple>
#include <unordered_map>
#include <utility>
#include <vector>

#include <unistd.h>

#include "CASC/PortfolioMode.hpp"
#include "Kernel/Clause.hpp"
#include "Kernel/Formula.hpp"
#include "Kernel/Inference.hpp"
#include "Kernel/InferenceStore.hpp"
#include "Kernel/Problem.hpp"
#include "Kernel/Signature.hpp"
#include "Kernel/SortHelper.hpp"
#include "Kernel/SubstHelper.hpp"
#include "Kernel/Substitution.hpp"
#include "Kernel/Term.hpp"
#include "Kernel/Unit.hpp"
#include "Lib/Environment.hpp"
#include "Lib/Exception.hpp"
#include "Lib/SharedSet.hpp"
#include "Lib/Timer.hpp"
#include "Parse/TPTP.hpp"
#include "SAT/SATClause.hpp"
#include "SAT/SATInference.hpp"
#include "Saturation/ProvingHelper.hpp"
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

/** The version of the format described above, which the Lean side checks. */
const uint32_t FORMAT = 1;
/** Words per unit record. */
const uint32_t UNIT_WIDTH = 41;
const uint32_t NONE = 0xFFFFFFFFu;
/** A placement entry's flags: the literal was turned round, or rewritten into it. */
const uint32_t PLACED_TURNED = 0x80000000u;
const uint32_t PLACED_REWRITTEN = 0x40000000u;

/**
 * How many inference rules vampire declares, as the Lean side counts them.
 *
 * `scripts/gen-inference-rules.py` and CMakeLists.txt both take every
 * enumerator of `InferenceRule` that is followed by a comma, which is every
 * one but the closing `GENERIC_THEORY_AXIOM_LAST` marker; the marker's value
 * is therefore the count. CMakeLists.txt passes its own count in, so that a
 * change to the enum that the two would read differently -- a new last rule
 * after the marker, or a comma after it -- stops the build here rather than
 * making every proof look stale.
 */
const uint32_t RULE_COUNT =
  static_cast<uint32_t>(toNumber(InferenceRule::GENERIC_THEORY_AXIOM_LAST));
static_assert(toNumber(InferenceRule::GENERIC_THEORY_AXIOM_LAST) ==
                VAMPIRE_RULE_COUNT,
              "InferenceRule no longer ends with GENERIC_THEORY_AXIOM_LAST as "
              "its only enumerator without a comma");

/*
 * The reasoning behind a congruence-closure conflict.
 *
 * Such a clause is stated as an axiom: it says that its literals cannot all be
 * false, and nothing in the proof says why. What it takes to see it is short,
 * and the clause holds all of it -- the equalities it denies, closed under
 * congruence, make the two sides of the equality it states equal -- so it is
 * worked out here and written down as the steps of the argument. Replay then
 * rebuilds those steps rather than looking for them.
 */
namespace congruence {

enum Kind : uint32_t {
  /** The equality the clause's `a`th literal denies. */
  INPUT,
  /** `f(as) = f(bs)`, from an equality for each pair of arguments. */
  CONGRUENCE,
  /** Steps `a` and `b`, one after the other. */
  TRANS,
  /** Step `a`, the other way round. */
  SYMM,
  /** The clause's `a`th literal is the equality proved, by step `b`. */
  GOAL_EQUALITY,
  /** The clause's `a`th and `b`th literals are one atom under both signs. */
  GOAL_LITERALS,
};

struct Step {
  uint32_t kind = NONE;
  uint32_t a = NONE;
  uint32_t b = NONE;
  /** For a congruence, what says each pair of arguments is equal. */
  std::vector<uint32_t> args;
  /** What the step concludes, for the steps that conclude an equality. */
  TermList lhs;
  TermList rhs;
};

/**
 * Closes a clause's terms under the equalities it denies, keeping a proof of
 * every equality it derives.
 *
 * Each class holds a term of its own that the others are proved equal to, so
 * merging two classes composes proofs rather than searching for a path; the
 * cores are a dozen literals and the terms in them are small.
 */
class Proof {
public:
  /** Whether the clause's literals were shown not to be all false. */
  bool of(Clause* c)
  {
    for (unsigned i = 0; i < c->size(); i++) {
      Literal* l = (*c)[i];
      for (unsigned j = 0; j < l->arity(); j++)
        collect(*l->nthArgument(j));
    }
    _representative.resize(_terms.size());
    _toRepresentative.assign(_terms.size(), NONE);
    for (unsigned i = 0; i < _terms.size(); i++)
      _representative[i] = i;

    // A literal denying an equality is an equality to reason with: were it
    // false, that equality would hold.
    for (unsigned i = 0; i < c->size(); i++) {
      Literal* l = (*c)[i];
      if (!l->isEquality() || l->isPositive())
        continue;
      TermList lhs = *l->nthArgument(0);
      TermList rhs = *l->nthArgument(1);
      Step step;
      step.kind = INPUT;
      step.a = i;
      step.lhs = lhs;
      step.rhs = rhs;
      merge(indexOf(lhs), indexOf(rhs), emit(step));
    }

    close();
    return closeOn(c);
  }

  const std::vector<Step>& steps() const { return _steps; }

private:
  std::vector<TermList> _terms;
  std::vector<unsigned> _representative;
  /** What says a term equals its class's own term; `NONE` for that term. */
  std::vector<uint32_t> _toRepresentative;
  std::vector<Step> _steps;

  void collect(TermList t)
  {
    if (indexOf(t) == NONE) {
      if (!t.isVar())
        for (unsigned i = 0; i < t.term()->arity(); i++)
          collect(*t.term()->nthArgument(i));
      _terms.push_back(t);
    }
  }

  /** Where a term stands among those met, or `NONE`. */
  unsigned indexOf(TermList t) const
  {
    for (unsigned i = 0; i < _terms.size(); i++)
      if (_terms[i] == t)
        return i;
    return NONE;
  }

  uint32_t emit(const Step& step)
  {
    _steps.push_back(step);
    return static_cast<uint32_t>(_steps.size() - 1);
  }

  /** Both steps, one after the other; either may be nothing to say. */
  uint32_t transitivity(uint32_t p, uint32_t q)
  {
    if (p == NONE)
      return q;
    if (q == NONE)
      return p;
    Step step;
    step.kind = TRANS;
    step.a = p;
    step.b = q;
    step.lhs = _steps[p].lhs;
    step.rhs = _steps[q].rhs;
    return emit(step);
  }

  uint32_t symmetry(uint32_t p)
  {
    if (p == NONE)
      return NONE;
    Step step;
    step.kind = SYMM;
    step.a = p;
    step.lhs = _steps[p].rhs;
    step.rhs = _steps[p].lhs;
    return emit(step);
  }

  /** What says two terms of one class are equal. */
  uint32_t equality(unsigned i, unsigned j)
  {
    return transitivity(_toRepresentative[i], symmetry(_toRepresentative[j]));
  }

  void merge(unsigned i, unsigned j, uint32_t p)
  {
    unsigned from = _representative[i];
    unsigned to = _representative[j];
    if (from == to)
      return;
    uint32_t between = transitivity(symmetry(_toRepresentative[i]),
                                    transitivity(p, _toRepresentative[j]));
    for (unsigned k = 0; k < _terms.size(); k++)
      if (_representative[k] == from) {
        _toRepresentative[k] = transitivity(_toRepresentative[k], between);
        _representative[k] = to;
      }
  }

  /** What says the arguments of two applications are equal, one by one. */
  bool argumentsEqual(Term* s, Term* t, std::vector<uint32_t>& out)
  {
    for (unsigned k = 0; k < s->arity(); k++) {
      TermList a = *s->nthArgument(k);
      TermList b = *t->nthArgument(k);
      if (a == b) {
        out.push_back(NONE);
        continue;
      }
      unsigned i = indexOf(a);
      unsigned j = indexOf(b);
      if (i == NONE || j == NONE || _representative[i] != _representative[j])
        return false;
      out.push_back(equality(i, j));
    }
    return true;
  }

  /** Merges what congruence makes equal, until it makes nothing more. */
  void close()
  {
    bool again = true;
    while (again) {
      again = false;
      for (unsigned i = 0; i < _terms.size(); i++)
        for (unsigned j = i + 1; j < _terms.size(); j++) {
          if (_representative[i] == _representative[j])
            continue;
          if (_terms[i].isVar() || _terms[j].isVar())
            continue;
          Term* s = _terms[i].term();
          Term* t = _terms[j].term();
          if (s->functor() != t->functor() || s->arity() != t->arity())
            continue;
          std::vector<uint32_t> args;
          if (!argumentsEqual(s, t, args))
            continue;
          Step step;
          step.kind = CONGRUENCE;
          step.args = args;
          step.lhs = _terms[i];
          step.rhs = _terms[j];
          merge(i, j, emit(step));
          again = true;
        }
    }
  }

  /**
   * The literal of the clause that the equalities settle, if there is one.
   *
   * Either an equality it states, both sides of which are now in one class, or
   * a pair of literals over one predicate and of opposite signs whose
   * arguments are.
   */
  bool closeOn(Clause* c)
  {
    for (unsigned i = 0; i < c->size(); i++) {
      Literal* l = (*c)[i];
      if (!l->isEquality() || !l->isPositive())
        continue;
      unsigned lhs = indexOf(*l->nthArgument(0));
      unsigned rhs = indexOf(*l->nthArgument(1));
      if (lhs == NONE || rhs == NONE || _representative[lhs] != _representative[rhs])
        continue;
      Step step;
      step.kind = GOAL_EQUALITY;
      step.a = i;
      step.b = equality(lhs, rhs);
      emit(step);
      return true;
    }
    for (unsigned i = 0; i < c->size(); i++) {
      Literal* negative = (*c)[i];
      if (negative->isEquality() || negative->isPositive())
        continue;
      for (unsigned j = 0; j < c->size(); j++) {
        Literal* positive = (*c)[j];
        if (positive->isEquality() || !positive->isPositive())
          continue;
        if (positive->functor() != negative->functor())
          continue;
        std::vector<uint32_t> args;
        if (!argumentsEqual(negative, positive, args))
          continue;
        Step step;
        step.kind = GOAL_LITERALS;
        step.a = i;
        step.b = j;
        step.args = args;
        emit(step);
        return true;
      }
    }
    return false;
  }
};

}  // namespace congruence

/**
 * What each of @b premise's literals became in the literal-wise simplification
 * @b u, in the order the premise's literals are in now, or empty where @b u
 * recorded nothing for this premise.
 *
 * The rule recorded literals rather than positions, since literal selection
 * reorders a clause after it is made; each record is taken once, so a literal
 * the premise holds twice is matched to its records in turn.
 */
std::vector<const InferenceStore::LiteralImage*> literalImagesOf(Unit* u, Clause* premise)
{
  std::vector<const InferenceStore::LiteralImage*> out;
  const InferenceStore::LiteralRewriting* rewriting =
    InferenceStore::instance()->literalImages(u);
  if (!rewriting)
    return out;
  // ALASCA's strong normalization of comparisons can make two literals of one,
  // so it records its procedure and no images: replay reads it by arithmetic.
  if (rewriting->procedure ==
      InferenceStore::LiteralProcedure::INEQUALITY_PREDICATE_NORMALIZATION)
    return out;
  if (rewriting->images.size() != premise->length())
    throw UserErrorException("unit " + std::to_string(u->number()) + " recorded " +
      std::to_string(rewriting->images.size()) + " literal images for a premise of " +
      std::to_string(premise->length()) + " literals");
  const Stack<InferenceStore::LiteralImage>* images = &rewriting->images;
  std::vector<bool> taken(images->size(), false);
  for (unsigned i = 0; i < premise->length(); i++) {
    const InferenceStore::LiteralImage* found = nullptr;
    for (unsigned k = 0; k < images->size() && !found; k++)
      if (!taken[k] && (*images)[k].from == (*premise)[i]) {
        taken[k] = true;
        found = &(*images)[k];
      }
    if (!found)
      throw UserErrorException("unit " + std::to_string(u->number()) +
        " recorded no image of its premise's literal " + std::to_string(i));
    out.push_back(found);
  }
  return out;
}

/**
 * The literals of the component an AVATAR definition `name <=> component`
 * names, as `Formula::fromClause` wrote them: the disjuncts of the component,
 * under its quantifier. False where @b definition is no such definition.
 */
static bool componentLiterals(Formula* definition, std::vector<Literal*>& lits)
{
  lits.clear();
  if (definition->connective() != IFF)
    return false;
  Formula* component = definition->left()->connective() == NAME
    ? definition->right() : definition->left();
  if (component->connective() == FORALL)
    component = component->qarg();
  std::vector<Formula*> parts;
  if (component->connective() == OR)
    for (const FormulaList* it = component->args(); it; it = it->tail())
      parts.push_back(it->head());
  else
    parts.push_back(component);
  for (Formula* part : parts) {
    if (part->connective() != LITERAL) {
      lits.clear();
      return false;
    }
    lits.push_back(part->literal());
  }
  return true;
}

struct Encoder {
  std::vector<uint32_t> sorts, terms, args, literals,
      formulas, subs, vars, units, unitLits, parents, varSorts, skolems, uses,
      bindings, splits, satClauses, satLits, satPremises, satOrder, namings, namingArgs,
      genStates, genLits, choices, congruences, congruenceArgs, placements,
      placementEntries, literalFactors, constraintLits, introducedLits,
      genPlacements, introducedTerms;
  /** The sort of each entry of `vars`, as `sorts` numbers them. */
  std::vector<uint32_t> varSortsOfVars;
  /** The formula each entry of `formulas` was made of. */
  std::vector<Formula*> formulaPtrs;
  std::string strings;
  /** The strategy this proof was found by, as `strategy` reads it. */
  uint32_t strategy = NONE;
  /**
   * How long that strategy itself ran for, in milliseconds.
   *
   * The schedule is worked through one strategy at a time, so the rest of
   * the search went on the ones that did not find it -- which is what naming
   * this one would save.
   */
  uint32_t strategyMs = 0;
  /**
   * What was spent before the schedule began: starting up and parsing.
   *
   * A run that names the strategy pays this too, so it is not part of what
   * naming it saves.
   */
  uint32_t setupMs = 0;
  /**
   * When the proof was found, in milliseconds since this process began.
   *
   * What the caller timed beyond this went on starting the process, which a
   * run naming the strategy pays as well.
   */
  uint32_t foundAtMs = 0;

  std::unordered_map<uint64_t, uint32_t> termSeen, sortSeen;
  std::unordered_map<const void*, uint32_t> literalSeen, formulaSeen, unitSeen,
      satSeen;
  std::unordered_map<uint32_t, uint32_t> genSeen;

  /** Where the inference was made, as a string of the table, or `NONE`. */
  uint32_t siteOf(const Inference& inference)
  {
    const char* file = inference.siteFile();
    if (!file) return NONE;
    std::string path = file;
    const std::string root = VAMPIRE_SOURCE_ROOT "/";
    if (path.rfind(root, 0) == 0) path = path.substr(root.size());
    return addString(path + ":" + std::to_string(inference.siteLine()));
  }

  uint32_t addString(const std::string& s)
  {
    uint32_t off = static_cast<uint32_t>(strings.size());
    strings.append(s);
    strings.push_back('\0');
    return off;
  }

  /**
   * Interns a sort, which must be an atomic type.
   *
   * The tactic declares every Lean type it translates as a nullary `$tType`,
   * and the arithmetic sorts TPTP builds in are nullary too, so a sort
   * variable or a type constructor applied to arguments means a problem this
   * encoding cannot describe: only the constructor's name is written, and
   * writing it anyway would conflate sorts that differ in their arguments.
   */
  uint32_t encodeSort(TermList sort)
  {
    auto seen = sortSeen.find(sort.content());
    if (seen != sortSeen.end())
      return seen->second;
    if (!sort.isTerm() || sort.term()->arity() != 0)
      throw UserErrorException("cannot encode the sort " + sort.toString() +
                               ": only atomic sorts are supported");
    std::string name = env.signature->typeConName(sort.term()->functor());
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
    formulaPtrs.push_back(f);

    uint32_t literal = NONE;
    uint32_t name = NONE;
    std::vector<uint32_t> subIdxs;
    std::vector<uint32_t> varNums;
    std::vector<uint32_t> varSortIdxs;

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
        for (const VSList* it = f->vars(); it; it = it->tail()) {
          varNums.push_back(it->head().first);
          varSortIdxs.push_back(encodeSort(it->head().second));
        }
        subIdxs.push_back(encodeFormula(f->qarg()));
        break;
      case NAME:
        name = addString(static_cast<const NamedFormula*>(f)->name());
        break;
      default:
        // TRUE, FALSE, BOOL_TERM and NOCONN carry no subformulas here.
        break;
    }

    uint32_t firstSub = static_cast<uint32_t>(subs.size());
    for (uint32_t s : subIdxs)
      subs.push_back(s);
    uint32_t firstVar = static_cast<uint32_t>(vars.size());
    for (uint32_t v : varNums)
      vars.push_back(v);
    for (uint32_t sort : varSortIdxs)
      varSortsOfVars.push_back(sort);

    formulas[7 * idx + 0] = static_cast<uint32_t>(f->connective());
    formulas[7 * idx + 1] = literal;
    formulas[7 * idx + 2] = subIdxs.empty() ? NONE : firstSub;
    formulas[7 * idx + 3] = static_cast<uint32_t>(subIdxs.size());
    formulas[7 * idx + 4] = varNums.empty() ? NONE : firstVar;
    formulas[7 * idx + 5] = static_cast<uint32_t>(varNums.size());
    formulas[7 * idx + 6] = name;
    return idx;
  }

  /** One state of a generalised clause, and the state it was reached from. */
  uint32_t encodeGenClauseState(unsigned id)
  {
    if (id == InferenceStore::stateNone)
      return NONE;
    auto seen = genSeen.find(id);
    if (seen != genSeen.end())
      return seen->second;
    const InferenceStore::GenClauseState* state =
      InferenceStore::instance()->genClauseState(id);
    if (!state)
      return NONE;

    uint32_t idx = static_cast<uint32_t>(genStates.size() / 11);
    genStates.resize(genStates.size() + 11, 0);
    genSeen.emplace(id, idx);

    uint32_t parent = encodeGenClauseState(state->parent);

    auto encodeLits = [&](const Stack<std::pair<Formula*, bool>>& lits) {
      uint32_t first = static_cast<uint32_t>(genLits.size() / 2);
      for (const auto& [f, sign] : lits) {
        genLits.push_back(encodeFormula(f));
        genLits.push_back(sign ? 1 : 0);
      }
      return first;
    };
    uint32_t firstLit = encodeLits(state->literals);
    uint32_t firstReplacement = encodeLits(state->replacement);
    uint32_t firstBinding = static_cast<uint32_t>(bindings.size() / 2);
    for (const auto& [var, term] : state->bindings) {
      bindings.push_back(var);
      bindings.push_back(encodeTerm(term));
    }

    uint32_t firstPlacement = static_cast<uint32_t>(genPlacements.size());
    for (unsigned placed : iterTraits(state->placement.iterFifo()))
      genPlacements.push_back(placed);

    genStates[11 * idx + 0] = parent;
    genStates[11 * idx + 1] =
      state->position == InferenceStore::positionNone ? NONE : state->position;
    genStates[11 * idx + 2] = state->literals.isEmpty() ? NONE : firstLit;
    genStates[11 * idx + 3] = static_cast<uint32_t>(state->literals.size());
    genStates[11 * idx + 4] =
      state->replacement.isEmpty() ? NONE : firstReplacement;
    genStates[11 * idx + 5] = static_cast<uint32_t>(state->replacement.size());
    genStates[11 * idx + 6] = state->bindings.isEmpty() ? NONE : firstBinding;
    genStates[11 * idx + 7] = static_cast<uint32_t>(state->bindings.size());
    genStates[11 * idx + 8] = state->how;
    genStates[11 * idx + 9] = state->placement.isEmpty() ? NONE : firstPlacement;
    genStates[11 * idx + 10] = static_cast<uint32_t>(state->placement.size());
    return idx;
  }

  /** A clause of the propositional problem, and how the solver derived it. */
  uint32_t encodeSatClause(SATClause* cl)
  {
    auto seen = satSeen.find(cl);
    if (seen != satSeen.end())
      return seen->second;

    uint32_t idx = static_cast<uint32_t>(satClauses.size() / 6);
    satClauses.resize(satClauses.size() + 6, 0);
    satSeen.emplace(cl, idx);

    uint32_t firstLit = static_cast<uint32_t>(satLits.size());
    std::vector<SATLiteral> lits;
    for (SATLiteral l : iterTraits(cl->iter())) {
      lits.push_back(l);
      satLits.push_back(addString(Splitter::getFormulaStringFromLiteral(l)));
    }
    // What each name stands for: a component split off in the proof has its
    // definition among the units leading to it, but one named only as a
    // theory conflict was converted has not, and replay needs every name's.
    for (SATLiteral l : lits) {
      std::string name = Splitter::getFormulaStringFromLiteral(l.positive() ? l : l.opposite());
      if (Unit* definition = InferenceStore::instance()->splitDefinition(name))
        encodeUnit(definition);
    }
    uint32_t numLits = static_cast<uint32_t>(cl->length());

    uint32_t origin = NONE;
    uint32_t firstOrder = NONE;
    std::vector<uint32_t> premiseIdxs;
    if (SATInference* inf = cl->inference()) {
      if (inf->getType() == SATInference::InfType::PROP_INF) {
        for (SATClause* p : iterTraits(inf->propInf()->getPremises()->iter()))
          premiseIdxs.push_back(encodeSatClause(p));
        // The premises were collected by pushing them onto a list, which
        // reverses them; the order the solver used them in is what matters.
        std::reverse(premiseIdxs.begin(), premiseIdxs.end());
      } else {
        Unit* originUnit = inf->foConversion()->getOrigin();
        origin = encodeUnit(originUnit);
        // A first-order clause's shadow (`SAT2FO::toSAT`) sorts its literals,
        // so which one each of the clause's became is written out: the one
        // whose name is defined as that literal, or as its complement for a
        // negated name.
        if (originUnit->isClause()) {
          Clause* ocl = originUnit->asClause();
          firstOrder = static_cast<uint32_t>(satOrder.size());
          for (unsigned i = 0; i < ocl->length(); i++) {
            Literal* lit = (*ocl)[i];
            uint32_t found = NONE;
            for (uint32_t j = 0; j < lits.size() && found == NONE; j++) {
              SATLiteral named = lits[j].positive() ? lits[j] : lits[j].opposite();
              Unit* definition = InferenceStore::instance()->splitDefinition(
                Splitter::getFormulaStringFromLiteral(named));
              if (!definition || definition->isClause())
                continue;
              Formula* f = definition->getFormula();
              if (f->connective() != IFF)
                continue;
              Formula* component = f->left()->connective() == NAME ? f->right() : f->left();
              if (component->connective() != LITERAL)
                continue;
              Literal* meant = component->literal();
              if (lits[j].positive() ? meant == lit
                                     : meant == Literal::complementaryLiteral(lit))
                found = j;
            }
            if (found == NONE)
              throw UserErrorException("a propositional clause of unit " +
                std::to_string(originUnit->number()) + " has no literal for its literal " +
                std::to_string(i));
            satOrder.push_back(found);
          }
        }
      }
    }
    uint32_t firstPremise = static_cast<uint32_t>(satPremises.size());
    for (uint32_t p : premiseIdxs)
      satPremises.push_back(p);

    satClauses[6 * idx + 0] = numLits == 0 ? NONE : firstLit;
    satClauses[6 * idx + 1] = numLits;
    satClauses[6 * idx + 2] = premiseIdxs.empty() ? NONE : firstPremise;
    satClauses[6 * idx + 3] = static_cast<uint32_t>(premiseIdxs.size());
    satClauses[6 * idx + 4] = origin;
    satClauses[6 * idx + 5] = firstOrder;
    return idx;
  }

  uint32_t encodeUnit(Unit* u)
  {
    auto seen = unitSeen.find(u);
    if (seen != unitSeen.end())
      return seen->second;

    uint32_t idx = static_cast<uint32_t>(units.size() / UNIT_WIDTH);
    units.resize(units.size() + UNIT_WIDTH, 0);
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
    for (auto [symbol, replacedVar, symTerm] : introduced) {
      (void)symbol;
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

    units[UNIT_WIDTH * idx + 0] = u->number();
    units[UNIT_WIDTH * idx + 1] = static_cast<uint32_t>(inference.rule());
    units[UNIT_WIDTH * idx + 2] = static_cast<uint32_t>(u->inputType());
    units[UNIT_WIDTH * idx + 3] = flags;
    units[UNIT_WIDTH * idx + 4] = payload;
    units[UNIT_WIDTH * idx + 5] = numLits;
    units[UNIT_WIDTH * idx + 6] = parentIdxs.empty() ? NONE : firstParent;
    units[UNIT_WIDTH * idx + 7] = static_cast<uint32_t>(parentIdxs.size());
    units[UNIT_WIDTH * idx + 9] = numVarSorts;
    units[UNIT_WIDTH * idx + 10] = numSkolems == 0 ? NONE : firstSkolem;
    units[UNIT_WIDTH * idx + 11] = numSkolems;
    units[UNIT_WIDTH * idx + 12] = nameOff;
    units[UNIT_WIDTH * idx + 34] = siteOf(inference);
    // The symbol the unit introduced, where vampire recorded one: which side
    // of a definition is the one being defined is otherwise a guess.
    {
      Signature::Symbol* sym = InferenceStore::instance()->firstIntroducedSymbol(u);
      units[UNIT_WIDTH * idx + 38] = sym ? addString(sym->name()) : NONE;
    }
    // The literals the inference built, as the conclusion's indices.
    units[UNIT_WIDTH * idx + 35] = NONE;
    units[UNIT_WIDTH * idx + 36] = 0;
    units[UNIT_WIDTH * idx + 37] = 0;
    units[UNIT_WIDTH * idx + 39] = NONE;
    units[UNIT_WIDTH * idx + 40] = 0;
    // A pure predicate removal's variant is how many predicates had been
    // found pure when it was made: it replaces those numbered below it.
    if (unsigned stage; InferenceStore::instance()->pureStage(u, stage))
      units[UNIT_WIDTH * idx + 37] = stage;
    if (const auto* introduced = InferenceStore::instance()->introduced(u);
        introduced && u->isClause()) {
      Clause* cl = u->asClause();
      units[UNIT_WIDTH * idx + 35] = static_cast<uint32_t>(introducedLits.size() / 2);
      units[UNIT_WIDTH * idx + 36] = static_cast<uint32_t>(introduced->literals.size());
      units[UNIT_WIDTH * idx + 37] = introduced->variant;
      if (!introduced->terms.isEmpty()) {
        units[UNIT_WIDTH * idx + 39] = static_cast<uint32_t>(introducedTerms.size());
        units[UNIT_WIDTH * idx + 40] = static_cast<uint32_t>(introduced->terms.size());
        for (TermList t : iterTraits(introduced->terms.iterFifo()))
          introducedTerms.push_back(t.isEmpty() ? NONE : encodeTerm(t));
      }
      // A literal made of a premise literal says which, by its index in the
      // first premise, as the literal is serialised.
      Inference::Iterator pit = inference.iterator();
      Unit* first = inference.hasNext(pit) ? inference.next(pit) : nullptr;
      for (unsigned i = 0; i < introduced->literals.size(); i++) {
        Literal* lit = introduced->literals[i];
        uint32_t entry = NONE;
        for (unsigned j = 0; j < cl->length() && entry == NONE; j++)
          if ((*cl)[j] == lit)
            entry = j;
        if (entry == NONE)
          throw UserErrorException("unit " + std::to_string(u->number()) +
            " recorded an introduced literal its conclusion does not have");
        uint32_t source = NONE;
        if (!introduced->sources.isEmpty() && first && first->isClause()) {
          Clause* premise = first->asClause();
          for (unsigned j = 0; j < premise->length() && source == NONE; j++)
            if ((*premise)[j] == introduced->sources[i])
              source = j;
          if (source == NONE)
            throw UserErrorException("unit " + std::to_string(u->number()) +
              " recorded an introduced literal of a literal its premise does not have");
        }
        introducedLits.push_back(entry);
        introducedLits.push_back(source);
      }
    }

    // Subsumption resolution has several implementations and none of them keeps
    // the substitution it found, so it is worked out here instead.
    if (inference.rule() == InferenceRule::FORWARD_SUBSUMPTION_RESOLUTION ||
        inference.rule() == InferenceRule::BACKWARD_SUBSUMPTION_RESOLUTION) {
      InferenceStore::instance()->recoverSubsumptionResolutionUses(u);
    }

    uint32_t firstUse = static_cast<uint32_t>(uses.size() / 8);
    uint32_t numUses = 0;
    if (const InferenceStore::Uses* recorded =
          InferenceStore::instance()->premiseUses(u)) {
      for (const auto& use : *recorded) {
        uint32_t firstBinding = static_cast<uint32_t>(bindings.size() / 2);
        for (const auto& [var, term] : use.bindings) {
          bindings.push_back(var);
          bindings.push_back(encodeTerm(term));
        }
        // Literal selection permutes a clause's literals in place after an
        // inference has run, so the store keeps the literal, never an index;
        // where it sits in the clause as serialised is settled here, with
        // nothing further to move it.
        uint32_t literal = NONE;
        if (use.on) {
          for (unsigned i = 0; i < use.in->length() && literal == NONE; i++)
            if ((*use.in)[i] == use.on)
              literal = i;
          if (literal == NONE)
            throw UserErrorException("unit " + std::to_string(u->number()) +
              " recorded a use of a literal its premise does not have");
        }
        uses.push_back(use.premise);
        uses.push_back(literal);
        uses.push_back(use.term.isEmpty() ? NONE : encodeTerm(use.term));
        uses.push_back(use.flags);
        uses.push_back(use.bindings.isEmpty() ? NONE : firstBinding);
        uses.push_back(static_cast<uint32_t>(use.bindings.size()));
        uses.push_back(use.other.isEmpty() ? NONE : encodeTerm(use.other));
        uses.push_back(use.factor.isEmpty() ? NONE : encodeTerm(use.factor));
        numUses++;
      }
    }

    // A unifier's image can mention a variable that neither the premise nor
    // the conclusion has, and reading that term back needs its sort as much as
    // any other variable's. These go after the unit's own variables, which are
    // the quantifier prefix its conclusion is rebuilt with, so that adding
    // them does not change that prefix.
    uint32_t numBoundSorts = 0;
    if (const InferenceStore::Uses* recorded =
          InferenceStore::instance()->premiseUses(u)) {
      DHMap<unsigned, TermList, FnvHash, IdentityHash> boundSorts;
      // The premises, by the number a use names them with: where an image is a
      // bare variable there is no term to walk, and the sort has to come from
      // the premise variable the image was bound to.
      DHMap<unsigned, Unit*> premiseByNumber;
      Inference::Iterator uit = inference.iterator();
      while (inference.hasNext(uit)) {
        Unit* premise = inference.next(uit);
        premiseByNumber.set(premise->number(), premise);
      }
      for (const InferenceStore::PremiseUse& use : *recorded) {
        // The premise's own variable sorts, read once and only where a bare
        // variable image asks for them.
        DHMap<unsigned, TermList, FnvHash, IdentityHash> premiseSorts;
        bool readPremiseSorts = false;
        auto premiseSortOf = [&](unsigned var) {
          if (!readPremiseSorts) {
            Unit* premise = nullptr;
            if (premiseByNumber.find(use.premise, premise) && premise)
              SortHelper::collectVariableSorts(premise, premiseSorts);
            readPremiseSorts = true;
          }
          TermList sort;
          return premiseSorts.find(var, sort) ? sort : TermList::empty();
        };
        for (const auto& [var, term] : use.bindings) {
          if (term.isTerm()) {
            SortHelper::collectVariableSorts(const_cast<Term*>(term.term()),
              boundSorts);
          } else if (term.isVar()) {
            // A variable is not a term, so there is nothing to walk: an
            // inference that renames a premise apart -- superposition from a
            // clause into itself, say -- binds a variable to a variable, and
            // that image occurs in no term of either premise or conclusion.
            // Substitution preserves sorts, so the image takes the sort the
            // premise gives the variable it replaces.
            TermList sort = premiseSortOf(var);
            if (sort.isNonEmpty())
              boundSorts.set(term.var(), sort);
          }
        }
        for (TermList t : {use.term, use.other, use.factor})
          if (t.isTerm())
            SortHelper::collectVariableSorts(const_cast<Term*>(t.term()),
              boundSorts);
      }
      DHMap<unsigned, TermList, FnvHash, IdentityHash>::Iterator it3(boundSorts);
      while (it3.hasNext()) {
        unsigned var;
        TermList sort;
        it3.next(var, sort);
        if (sortsOfVars.findPtr(var))
          continue;
        varSorts.push_back(var);
        varSorts.push_back(encodeSort(sort));
        numBoundSorts++;
      }
    }
    units[UNIT_WIDTH * idx + 8] =
      numVarSorts == 0 && numBoundSorts == 0 ? NONE : firstVarSort;
    units[UNIT_WIDTH * idx + 25] = numBoundSorts;
    // Where each constraint sits now, with nothing further to move it.
    uint32_t firstConstraint = static_cast<uint32_t>(constraintLits.size());
    uint32_t numConstraints = 0;
    if (const Stack<Literal*>* constraints =
          InferenceStore::instance()->constraints(u)) {
      Clause* clause = u->asClause();
      for (Literal* constraint : iterTraits(constraints->iter())) {
        uint32_t at = NONE;
        for (unsigned i = 0; i < clause->length() && at == NONE; i++)
          if ((*clause)[i] == constraint)
            at = i;
        if (at == NONE)
          throw UserErrorException("a unification constraint of unit " +
            std::to_string(u->number()) + " is not among its literals");
        constraintLits.push_back(at);
        numConstraints++;
      }
    }
    units[UNIT_WIDTH * idx + 26] = numConstraints == 0 ? NONE : firstConstraint;
    units[UNIT_WIDTH * idx + 27] = numConstraints;

    units[UNIT_WIDTH * idx + 13] = numUses == 0 ? NONE : firstUse;
    units[UNIT_WIDTH * idx + 14] = numUses;
    units[UNIT_WIDTH * idx + 15] = numSplits == 0 ? NONE : firstSplit;
    units[UNIT_WIDTH * idx + 16] = numSplits;
    units[UNIT_WIDTH * idx + 17] =
      inference.satPremise() ? encodeSatClause(inference.satPremise()) : NONE;

    uint32_t firstNaming = static_cast<uint32_t>(namings.size() / 4);
    uint32_t numNamings = 0;
    if (const Stack<InferenceStore::Naming>* named =
          InferenceStore::instance()->namings(u)) {
      for (const auto& naming : *named) {
        uint32_t firstArg = static_cast<uint32_t>(namingArgs.size());
        for (unsigned v : naming.arguments)
          namingArgs.push_back(v);
        namings.push_back(addString(naming.symbol->name()));
        namings.push_back(naming.arguments.isEmpty() ? NONE : firstArg);
        namings.push_back(static_cast<uint32_t>(naming.arguments.size()));
        namings.push_back(encodeFormula(naming.named));
        numNamings++;
      }
    }
    units[UNIT_WIDTH * idx + 18] = numNamings == 0 ? NONE : firstNaming;
    units[UNIT_WIDTH * idx + 19] = numNamings;
    units[UNIT_WIDTH * idx + 20] =
      encodeGenClauseState(InferenceStore::instance()->genClauseOfClause(u));

    uint32_t firstPlacement = static_cast<uint32_t>(placements.size() / 4);
    uint32_t numPlacements = 0;
    auto place = [&](uint32_t position, uint32_t useIndex,
                     const std::vector<Literal*>& from, Clause* into,
                     const InferenceStore::Bindings* useBindings,
                     const InferenceStore::Packed<InferenceStore::RewrittenLiteral>* rewritten) {
      struct Bound {
        DHMap<unsigned, TermList> map;
        TermList apply(unsigned v) {
          TermList t;
          return map.find(v, t) ? t : TermList(v, false);
        }
      } bound;
      if (useBindings)
        for (const auto& [var, term] : *useBindings)
          bound.map.set(var, term);
      uint32_t first = static_cast<uint32_t>(placementEntries.size());
      // A literal-wise simplification rewrote its literals rather than carried
      // them, and recorded what each became.
      std::vector<const InferenceStore::LiteralImage*> images;
      if (position == 0 && u->isClause()) {
        Inference::Iterator it = inference.iterator();
        Unit* first = inference.hasNext(it) ? inference.next(it) : nullptr;
        if (first && first->isClause())
          images = literalImagesOf(u, first->asClause());
      }
      if (!images.empty()) {
        for (const auto* image : images) {
          uint32_t entry = NONE;
          for (unsigned j = 0; image->to && j < into->length() && entry == NONE; j++)
            if ((*into)[j] == image->to)
              entry = j;
          // `NONE` says the literal was found false and dropped, and nothing
          // else: an image the conclusion does not have is a wrong record.
          if (image->to && entry == NONE)
            throw UserErrorException("unit " + std::to_string(u->number()) +
              " recorded a literal image its conclusion does not have");
          placementEntries.push_back(entry);
        }
        placements.push_back(position);
        placements.push_back(useIndex);
        placements.push_back(first);
        placements.push_back(static_cast<uint32_t>(from.size()));
        numPlacements++;
        return;
      }
      for (Literal* lit : from) {
        // A literal the inference rewrote became what it recorded; any other
        // is the premise's literal substituted into.
        const InferenceStore::RewrittenLiteral* became = nullptr;
        for (unsigned k = 0; rewritten && k < rewritten->size() && !became; k++)
          if ((*rewritten)[k].from == lit)
            became = &(*rewritten)[k];
        if (became) {
          uint32_t entry = NONE;
          for (unsigned j = 0; j < into->length() && entry == NONE; j++)
            if ((*into)[j] == became->to)
              entry = j;
          if (entry == NONE)
            throw UserErrorException("unit " + std::to_string(u->number()) +
              " recorded a rewritten literal its conclusion does not have");
          // Marked rewritten, so that replay applies the rewrite to exactly the
          // literals the inference rewrote.
          entry |= PLACED_REWRITTEN;
          placementEntries.push_back(became->turned ? entry | PLACED_TURNED : entry);
          continue;
        }
        Literal* image = SubstHelper::apply(lit, bound);
        // Polarity flipping made every literal of a flipped predicate its
        // complement (`Shuffling::polarityFlip`), which is where it went.
        if (inference.rule() == InferenceRule::POLARITY_FLIPPING && !lit->isEquality()
            && env.signature->getPredicate(lit->functor())->wasFlipped())
          image = Literal::complementaryLiteral(image);
        uint32_t entry = NONE;
        for (unsigned j = 0; j < into->length() && entry == NONE; j++)
          if ((*into)[j] == image)
            entry = j;
        // Vampire shares an equation with its sides either way round, so the
        // shared literal says nothing of which way the premise's own sides
        // come out; replay substitutes into those, so they are what decide.
        if (entry != NONE && lit->isEquality()) {
          Literal* there = (*into)[entry];
          TermList lhs = SubstHelper::apply(*lit->nthArgument(0), bound);
          if (lhs != *there->nthArgument(0))
            entry |= PLACED_TURNED;
        }
        placementEntries.push_back(entry);
      }
      placements.push_back(position);
      placements.push_back(useIndex);
      placements.push_back(first);
      placements.push_back(static_cast<uint32_t>(from.size()));
      numPlacements++;
    };
    // A split clause is a formula, of names, and what is placed for it is its
    // components' literals, into the clause it splits.
    if (u->isClause() || inference.rule() == InferenceRule::AVATAR_SPLIT_CLAUSE) {
      const InferenceStore::Uses* recorded =
        InferenceStore::instance()->premiseUses(u);
      // The uses recorded against a premise, in order.
      auto usesOf = [&](unsigned number) {
        std::vector<const InferenceStore::PremiseUse*> out;
        if (recorded)
          for (const auto& use : *recorded)
            if (use.premise == number)
              out.push_back(&use);
        return out;
      };
      std::vector<Unit*> premisesInOrder;
      Inference::Iterator pit = inference.iterator();
      while (inference.hasNext(pit))
        premisesInOrder.push_back(inference.next(pit));
      std::unordered_map<unsigned, uint32_t> occurrences;
      bool splitClause = inference.rule() == InferenceRule::AVATAR_SPLIT_CLAUSE;
      for (uint32_t pos = 0; pos < premisesInOrder.size(); pos++) {
        Unit* premise = premisesInOrder[pos];
        uint32_t occurrence = occurrences[premise->number()]++;
        auto premiseUses = usesOf(premise->number());
        if (premise->isClause() && !splitClause) {
          std::vector<Literal*> lits;
          for (unsigned i = 0; i < premise->asClause()->length(); i++)
            lits.push_back((*premise->asClause())[i]);
          const auto* use =
            occurrence < premiseUses.size() ? premiseUses[occurrence] : nullptr;
          place(pos, occurrence, lits, u->asClause(), use ? &use->bindings : nullptr,
                use ? &use->rewritten : nullptr);
        } else if (splitClause && !premise->isClause() && pos > 0
                   && premisesInOrder[0]->isClause()) {
          // A component's definition, `name <=> component`: its literals, under
          // each renaming recorded against it, into the clause being split.
          std::vector<Literal*> lits;
          if (!componentLiterals(premise->getFormula(), lits))
            continue;
          // A negative ground singleton is defined by its complement and named
          // negatively (`Splitter::buildAndInsertComponentClause`): what its
          // name asserts is the clause's literal itself.
          Clause* split = premisesInOrder[0]->asClause();
          if (lits.size() == 1 && lits[0]->ground()) {
            Literal* complement = Literal::complementaryLiteral(lits[0]);
            if (complement->isNegative())
              for (unsigned j = 0; j < split->length(); j++)
                if ((*split)[j] == complement) {
                  lits[0] = complement;
                  break;
                }
          }
          for (uint32_t k = 0; k < premiseUses.size(); k++)
            place(pos, k, lits, split, &premiseUses[k]->bindings, nullptr);
        } else if (inference.rule() == InferenceRule::CLAUSIFY && pos == 0
                   && !premise->isClause()
                   && InferenceStore::instance()->genClauseOfClause(u)
                        != InferenceStore::stateNone) {
          // A clause of the new clausifier is its last generalised clause
          // (`NewCNF::toClause`): each signed literal under the bindings,
          // complemented where negative, in order. Where each went, and whether
          // an equation's sides came out the other way round from the literal
          // it was made of, substituted.
          const auto* state = InferenceStore::instance()->genClauseState(
            InferenceStore::instance()->genClauseOfClause(u));
          Substitution subst;
          for (const auto& [var, term] : state->bindings)
            subst.bindUnbound(var, term);
          Clause* into = u->asClause();
          uint32_t first = static_cast<uint32_t>(placementEntries.size());
          for (const auto& [f, positive] : state->literals) {
            uint32_t entry = NONE;
            if (f->connective() == LITERAL) {
              Literal* made = f->literal()->apply(subst);
              if (!positive)
                made = Literal::complementaryLiteral(made);
              for (unsigned j = 0; j < into->length() && entry == NONE; j++)
                if ((*into)[j] == made)
                  entry = j;
              if (entry != NONE && made->isEquality()
                  && SubstHelper::apply(*f->literal()->nthArgument(0), subst)
                       != *(*into)[entry]->nthArgument(0))
                entry |= PLACED_TURNED;
            }
            placementEntries.push_back(entry);
          }
          placements.push_back(pos);
          placements.push_back(0);
          placements.push_back(first);
          placements.push_back(static_cast<uint32_t>(state->literals.size()));
          numPlacements++;
        } else if (inference.rule() == InferenceRule::AVATAR_COMPONENT && pos == 0
                   && !premise->isClause()) {
          // A component clause under its definition, `name <=> component`:
          // the component's literals are the clause's own (`Formula::fromClause`
          // of them), which is where each goes. A negative ground singleton is
          // defined by its complement, and goes nowhere: replay says why.
          std::vector<Literal*> lits;
          if (!componentLiterals(premise->getFormula(), lits))
            continue;
          // A negative ground singleton is defined by its complement
          // (`Splitter::buildAndInsertComponentClause`) and named negatively,
          // so what its name asserts is the clause's literal itself.
          Clause* cl = u->asClause();
          if (lits.size() == 1 && cl->length() == 1 && (*cl)[0]->ground()
              && (*cl)[0]->isNegative()
              && lits[0] == Literal::complementaryLiteral((*cl)[0]))
            lits[0] = (*cl)[0];
          place(pos, 0, lits, cl, nullptr, nullptr);
        }
      }
    }
    units[UNIT_WIDTH * idx + 28] = numPlacements == 0 ? NONE : firstPlacement;
    units[UNIT_WIDTH * idx + 29] = numPlacements;
    units[UNIT_WIDTH * idx + 30] = NONE;
    units[UNIT_WIDTH * idx + 31] = NONE;
    units[UNIT_WIDTH * idx + 32] = 0;
    units[UNIT_WIDTH * idx + 33] = NONE;
    std::vector<const InferenceStore::LiteralImage*> images;
    if (u->isClause()) {
      Inference::Iterator it = inference.iterator();
      Unit* first = inference.hasNext(it) ? inference.next(it) : nullptr;
      if (first && first->isClause())
        images = literalImagesOf(u, first->asClause());
    }
    // The procedure goes with its images, or on its own for the one that
    // records none (strong normalization, `literalImagesOf`).
    if (const auto* rewriting = InferenceStore::instance()->literalImages(u);
        rewriting && (!images.empty() || rewriting->procedure ==
          InferenceStore::LiteralProcedure::INEQUALITY_PREDICATE_NORMALIZATION))
      units[UNIT_WIDTH * idx + 33] = static_cast<uint32_t>(rewriting->procedure);
    {
      bool scaled = false;
      for (const auto* image : images)
        scaled = scaled || image->factor != RationalConstantType(1);
      if (scaled) {
        units[UNIT_WIDTH * idx + 31] = static_cast<uint32_t>(literalFactors.size());
        units[UNIT_WIDTH * idx + 32] = static_cast<uint32_t>(images.size());
        for (const auto* image : images)
        {
          std::ostringstream text;
          text << image->factor.numerator() << "/" << image->factor.denominator();
          literalFactors.push_back(addString(text.str()));
        }
      }
    }
    // Where a general splitting's name is: asserted in the component, denied
    // in what is left of the clause split.
    if (u->isClause() && (inference.rule() == InferenceRule::GENERAL_SPLITTING_COMPONENT
        || inference.rule() == InferenceRule::GENERAL_SPLITTING)) {
      Clause* cl = u->asClause();
      Literal* name = InferenceStore::instance()->splittingNameLiteral(u);
      for (unsigned j = 0; name && j < cl->length(); j++)
        if ((*cl)[j] == name)
          units[UNIT_WIDTH * idx + 30] = j;
      if (units[UNIT_WIDTH * idx + 30] == NONE)
        throw UserErrorException("general splitting step " +
          std::to_string(u->number()) + " has no recorded name literal");
    }

    uint32_t firstCongruence = static_cast<uint32_t>(congruences.size() / 5);
    uint32_t numCongruences = 0;
    if (u->isClause() &&
        inference.rule() == InferenceRule::THEORY_TAUTOLOGY_SAT_CONFLICT) {
      congruence::Proof derivation;
      if (derivation.of(u->asClause()))
        for (const congruence::Step& step : derivation.steps()) {
          uint32_t firstArg = static_cast<uint32_t>(congruenceArgs.size());
          for (uint32_t arg : step.args)
            congruenceArgs.push_back(arg);
          congruences.push_back(step.kind);
          if (step.kind == congruence::CONGRUENCE) {
            congruences.push_back(encodeTerm(step.lhs));
            congruences.push_back(encodeTerm(step.rhs));
          } else {
            congruences.push_back(step.a);
            congruences.push_back(step.b);
          }
          congruences.push_back(step.args.empty() ? NONE : firstArg);
          congruences.push_back(static_cast<uint32_t>(step.args.size()));
          numCongruences++;
        }
    }
    units[UNIT_WIDTH * idx + 23] = numCongruences == 0 ? NONE : firstCongruence;
    units[UNIT_WIDTH * idx + 24] = numCongruences;

    uint32_t firstChoice = static_cast<uint32_t>(choices.size() / 2);
    uint32_t numChoices = 0;
    if (const Stack<std::pair<Formula*, unsigned>>* chosen =
          InferenceStore::instance()->conjunctChoices(u)) {
      for (const auto& [f, argument] : *chosen) {
        choices.push_back(encodeFormula(f));
        choices.push_back(argument);
        numChoices++;
      }
    }
    units[UNIT_WIDTH * idx + 21] = numChoices == 0 ? NONE : firstChoice;
    units[UNIT_WIDTH * idx + 22] = numChoices;
    return idx;
  }
};

/** Whether @b s is a TPTP lower word, which is written without quotes. */
bool isLowerWord(const std::string& s)
{
  if (s.empty() || s[0] < 'a' || s[0] > 'z')
    return false;
  return std::all_of(s.begin(), s.end(), [](char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9') || c == '_';
  });
}

/** Whether @b s is a TPTP defined or system word: `$sum`, `$$name`. */
bool isDollarWord(const std::string& s)
{
  size_t dollars = s.compare(0, 2, "$$") == 0 ? 2 : s.compare(0, 1, "$") == 0 ? 1 : 0;
  return dollars != 0 && isLowerWord(s.substr(dollars));
}

/** @b s as a TPTP single-quoted atom. */
std::string quoted(const std::string& s)
{
  std::string out = "'";
  for (char c : s) {
    if (c == '\\' || c == '\'')
      out.push_back('\\');
    out.push_back(c);
  }
  out.push_back('\'');
  return out;
}

/** @b s as an atom of a general term: a lower word, or else quoted. */
std::string atom(const std::string& s) { return isLowerWord(s) ? s : quoted(s); }

/** @b s as a symbol of a formula, where `$sum` and `$$name` stand as they are. */
std::string symbol(const std::string& s)
{
  return isLowerWord(s) || isDollarWord(s) ? s : quoted(s);
}

/** The names `InferenceRule`'s enumerators are written by, in order, lower-cased. */
const std::vector<std::string>& ruleNames()
{
  static std::vector<std::string> names = [] {
    std::vector<std::string> out;
    std::string name;
    for (const char* c = VAMPIRE_RULE_NAMES;; c++) {
      if (*c == ',' || *c == '\0') {
        out.push_back(name);
        name.clear();
        if (*c == '\0')
          break;
      } else {
        name.push_back(static_cast<char>(std::tolower(static_cast<unsigned char>(*c))));
      }
    }
    return out;
  }();
  return names;
}

/** The TSTP rendering of what an `Encoder` collected; see the top of this file. */
class TstpWriter {
public:
  explicit TstpWriter(const Encoder& enc)
    : _enc(enc),
      _termText(enc.terms.size() / 4),
      _termDone(enc.terms.size() / 4, false),
      _formulaText(enc.formulas.size() / 7),
      _formulaDone(enc.formulas.size() / 7, false)
  {
    for (unsigned f = 0; f < env.signature->functions(); f++)
      _functors.push_back(describeFunctor(f));
  }

  std::string write(uint32_t reason, uint32_t refutation)
  {
    static const char* const reasons[] = {
      "refutation", "satisfiable", "refutation_not_found", "inappropriate",
      "unknown", "time_limit", "instruction_limit", "memory_limit",
      "activation_limit"};
    static const char* const szs[] = {
      "Unsatisfiable", "Satisfiable", "GaveUp", "Inappropriate", "Unknown",
      "Timeout", "ResourceOut", "MemoryOut", "ResourceOut"};
    const size_t numReasons = sizeof(reasons) / sizeof(reasons[0]);
    if (reason >= numReasons)
      throw UserErrorException("unknown termination reason " + std::to_string(reason));
    std::string out;
    out += "% SZS status " + std::string(szs[reason]) + " for problem\n";
    out += "% format: " + std::to_string(FORMAT) + "\n";
    out += "% termination: " + std::string(reasons[reason]) + "\n";
    out += "% rules: " + std::to_string(RULE_COUNT) + " " +
           std::to_string(VAMPIRE_RULE_FINGERPRINT) + "\n";
    out += "% polarity flip boundary: " +
           std::to_string(InferenceStore::instance()->polarityFlipBoundary()) + "\n";
    if (refutation != NONE)
      out += "% refutation: " + unitName(refutation) + "\n";
    if (_enc.strategy != NONE)
      out += "% strategy: " + string(_enc.strategy) + "\n% times: " +
             std::to_string(_enc.strategyMs) + " " + std::to_string(_enc.setupMs) + " " +
             std::to_string(_enc.foundAtMs) + "\n";
    if (refutation != NONE)
      out += "% SZS output start Refutation for problem\n";

    declarations(out);
    for (uint32_t i = 0; i < _enc.units.size() / UNIT_WIDTH; i++)
      unit(i, out);
    for (uint32_t i = 0; i < _enc.satClauses.size() / 6; i++)
      satClause(i, out);
    for (uint32_t i = 0; i < _enc.genStates.size() / 11; i++)
      genState(i, out);

    if (refutation != NONE)
      out += "% SZS output end Refutation for problem\n";
    return out;
  }

private:
  /** How a function symbol is written. */
  struct Functor {
    std::string text;
    /** ALASCA's multiplication by `text`, written `$$lin_mul(text, t)`. */
    bool linMul = false;
  };

  const Encoder& _enc;
  std::vector<Functor> _functors;
  std::vector<std::string> _termText;
  std::vector<bool> _termDone;
  std::vector<std::string> _formulaText;
  std::vector<bool> _formulaDone;

  std::string string(uint32_t off) const { return std::string(_enc.strings.data() + off); }

  std::string unitName(uint32_t idx) const
  {
    return "u" + std::to_string(_enc.units[UNIT_WIDTH * idx]);
  }

  static std::string optional(uint32_t v) { return v == NONE ? "none" : std::to_string(v); }

  /**
   * A numeral as TPTP writes one of its sort: `3`, `1/3`, and, since TPTP's
   * reals are decimals, `$to_real(1/3)`, which is also how vampire names it.
   */
  static Functor describeFunctor(unsigned f)
  {
    Signature::Symbol* sym = env.signature->getFunction(f);
    auto integer = [](IntegerConstantType const& n) {
      std::ostringstream o;
      o << n;
      return o.str();
    };
    auto rational = [](auto const& n) {
      std::ostringstream o;
      o << n.numerator() << "/" << n.denominator();
      return o.str();
    };
    if (sym->integerConstant())
      return {integer(sym->integerValue())};
    if (sym->rationalConstant())
      return {rational(sym->rationalValue())};
    if (sym->realConstant())
      return {"$to_real(" + rational(sym->realValue()) + ")"};
    if (auto n = env.signature->tryLinMul<IntegerConstantType>(f))
      return {integer(*n), true};
    if (auto n = env.signature->tryLinMul<RationalConstantType>(f))
      return {rational(*n), true};
    if (auto n = env.signature->tryLinMul<RealConstantType>(f))
      return {"$to_real(" + rational(*n) + ")", true};
    return {symbol(sym->name())};
  }

  /** An atomic sort's name, or empty for a sort this format cannot write. */
  static std::string sortName(TermList sort)
  {
    if (!sort.isTerm() || sort.term()->arity() != 0)
      return "";
    return env.signature->typeConName(sort.term()->functor());
  }

  std::string sortText(uint32_t sortIdx) const { return symbol(string(_enc.sorts[sortIdx])); }

  std::string sortAtom(uint32_t sortIdx) const { return atom(string(_enc.sorts[sortIdx])); }

  const std::string& term(uint32_t t)
  {
    if (_termDone[t])
      return _termText[t];
    const auto& T = _enc.terms;
    std::string out;
    if (T[4 * t] == 0) {
      out = "X" + std::to_string(T[4 * t + 1]);
    } else {
      const Functor& f = _functors[T[4 * t + 1]];
      uint32_t first = T[4 * t + 2];
      uint32_t arity = T[4 * t + 3];
      if (f.linMul) {
        out = "$$lin_mul(" + f.text + "," + term(_enc.args[first]) + ")";
      } else {
        out = f.text;
        if (arity != 0) {
          out += "(";
          for (uint32_t i = 0; i < arity; i++) {
            if (i)
              out += ",";
            out += term(_enc.args[first + i]);
          }
          out += ")";
        }
      }
    }
    _termText[t] = std::move(out);
    _termDone[t] = true;
    return _termText[t];
  }

  std::string fot(uint32_t t) { return "$fot(" + term(t) + ")"; }

  std::string optionalTerm(uint32_t t) { return t == NONE ? "none" : fot(t); }

  std::string literal(uint32_t l)
  {
    const auto& L = _enc.literals;
    uint32_t flags = L[5 * l + 1];
    uint32_t first = L[5 * l + 2];
    uint32_t arity = L[5 * l + 3];
    bool positive = flags & 1;
    if (flags & 2)
      return term(_enc.args[first]) + (positive ? " = " : " != ") +
             term(_enc.args[first + 1]);
    std::string out = symbol(env.signature->getPredicate(L[5 * l])->name());
    if (arity != 0) {
      out += "(";
      for (uint32_t i = 0; i < arity; i++) {
        if (i)
          out += ",";
        out += term(_enc.args[first + i]);
      }
      out += ")";
    }
    return positive ? out : "~" + out;
  }

  const std::string& formula(uint32_t f)
  {
    if (_formulaDone[f])
      return _formulaText[f];
    const auto& F = _enc.formulas;
    uint32_t firstSub = F[7 * f + 2];
    uint32_t numSubs = F[7 * f + 3];
    auto sub = [&](uint32_t i) -> const std::string& {
      return formula(_enc.subs[firstSub + i]);
    };
    std::string out;
    switch (F[7 * f]) {
      case LITERAL:
        out = literal(F[7 * f + 1]);
        break;
      case AND:
      case OR:
        if (numSubs < 2)
          throw UserErrorException("cannot write a junction of " +
                                   std::to_string(numSubs) + " formulas");
        out = "(";
        for (uint32_t i = 0; i < numSubs; i++) {
          if (i)
            out += F[7 * f] == AND ? " & " : " | ";
          out += sub(i);
        }
        out += ")";
        break;
      case IMP:
      case IFF:
      case XOR:
        out = "(" + sub(0) + (F[7 * f] == IMP ? " => " : F[7 * f] == IFF ? " <=> " : " <~> ") +
              sub(1) + ")";
        break;
      case NOT:
        out = "~ (" + sub(0) + ")";
        break;
      case FORALL:
      case EXISTS: {
        uint32_t firstVar = F[7 * f + 4];
        uint32_t numVars = F[7 * f + 5];
        out = F[7 * f] == FORALL ? "! [" : "? [";
        for (uint32_t i = 0; i < numVars; i++) {
          if (i)
            out += ", ";
          out += "X" + std::to_string(_enc.vars[firstVar + i]) + ": " +
                 sortText(_enc.varSortsOfVars[firstVar + i]);
        }
        out += "] : (" + sub(0) + ")";
        break;
      }
      case TRUE:
        out = "$true";
        break;
      case FALSE:
        out = "$false";
        break;
      case NAME:
        out = "$$name(" + atom(string(F[7 * f + 6])) + ")";
        break;
      case BOOL_TERM:
        // FOOL's boolean terms, which the tactic never sends and replay could
        // not state.
        throw UserErrorException("cannot write a formula that is a boolean term: "
                                 "FOOL is not supported");
      default:
        throw UserErrorException("cannot write a formula of connective " +
                                 std::to_string(F[7 * f]));
    }
    _formulaText[f] = std::move(out);
    _formulaDone[f] = true;
    return _formulaText[f];
  }

  /**
   * A formula of a record, which stands on its own and so may have variables
   * free -- a subformula of what was clausified -- together with their sorts.
   */
  std::string recordFormula(uint32_t f)
  {
    DHMap<unsigned, TermList, FnvHash, IdentityHash> sorts;
    SortHelper::collectVariableSorts(_enc.formulaPtrs[f], sorts);
    std::string scope;
    DHMap<unsigned, TermList, FnvHash, IdentityHash>::Iterator it(sorts);
    while (it.hasNext()) {
      unsigned var;
      TermList sort;
      it.next(var, sort);
      std::string name = sortName(sort);
      if (name.empty())
        throw UserErrorException("cannot write the sort " + sort.toString() +
                                 ": only atomic sorts are supported");
      scope += (scope.empty() ? "" : ",") + std::string("v(") + std::to_string(var) +
               "," + atom(name) + ")";
    }
    std::string body = "$tff(" + formula(f) + ")";
    return scope.empty() ? body : "scoped([" + scope + "]," + body + ")";
  }

  /**
   * The subformulas of @b f, in the order the formula tables give them: a
   * junction's arguments, an implication's two sides, a negation's or a
   * quantifier's body.
   */
  static std::vector<Formula*> subformulasOf(Formula* f)
  {
    std::vector<Formula*> out;
    switch (f->connective()) {
      case AND:
      case OR:
        for (const FormulaList* it = f->args(); it; it = it->tail())
          out.push_back(it->head());
        break;
      case IMP:
      case IFF:
      case XOR:
        out.push_back(f->left());
        out.push_back(f->right());
        break;
      case NOT:
        out.push_back(f->uarg());
        break;
      case FORALL:
      case EXISTS:
        out.push_back(f->qarg());
        break;
      default:
        break;
    }
    return out;
  }

  /** Every position at which @b target stands in @b f, as paths of subformula indices. */
  static void positionsOf(Formula* f, Formula* target, std::vector<unsigned>& path,
                          std::vector<std::vector<unsigned>>& found)
  {
    if (f == target)
      found.push_back(path);
    std::vector<Formula*> subs = subformulasOf(f);
    for (unsigned i = 0; i < subs.size(); i++) {
      path.push_back(i);
      positionsOf(subs[i], target, path, found);
      path.pop_back();
    }
  }

  std::string varSortList(uint32_t first, uint32_t count) const
  {
    std::string out = "[";
    for (uint32_t i = 0; i < count; i++) {
      if (i)
        out += ",";
      out += "v(" + std::to_string(_enc.varSorts[2 * (first + i)]) + "," +
             sortAtom(_enc.varSorts[2 * (first + i) + 1]) + ")";
    }
    return out + "]";
  }

  std::string bindingList(uint32_t first, uint32_t count)
  {
    std::string out = "[";
    for (uint32_t i = 0; i < count; i++) {
      if (i)
        out += ",";
      out += "bind(" + std::to_string(_enc.bindings[2 * (first + i)]) + "," +
             fot(_enc.bindings[2 * (first + i) + 1]) + ")";
    }
    return out + "]";
  }

  static std::string typeText(OperatorType* type, unsigned arity, const std::string& result)
  {
    if (arity == 0)
      return result;
    std::string args;
    for (unsigned i = 0; i < arity; i++) {
      std::string name = sortName(type->arg(i));
      if (name.empty())
        return "";
      args += (i ? " * " : "") + symbol(name);
    }
    return (arity == 1 ? args : "(" + args + ")") + " > " + result;
  }

  /**
   * The sorts and uninterpreted symbols, as TFF type declarations: TPTP's own
   * sorts, numerals and operations it declares itself. A symbol whose type
   * this format cannot write is left out, and fails to read where it is used.
   */
  void declarations(std::string& out)
  {
    for (unsigned i = 0; i < env.signature->typeCons(); i++) {
      std::string name = env.signature->typeConName(i);
      if (name.empty() || name[0] == '$' || env.signature->getTypeCon(i)->arity() != 0)
        continue;
      out += "tff(sort_" + std::to_string(i) + ", type, " + symbol(name) + ": $tType).\n";
    }
    for (unsigned f = 0; f < env.signature->functions(); f++) {
      Signature::Symbol* sym = env.signature->getFunction(f);
      if (sym->interpreted() || sym->linMul() || sym->name().empty() || sym->name()[0] == '$')
        continue;
      OperatorType* type = sym->type();
      if (type->numTypeArguments() != 0)
        continue;
      std::string result = sortName(type->result());
      if (result.empty())
        continue;
      std::string text = typeText(type, sym->arity(), symbol(result));
      if (text.empty())
        continue;
      out += "tff(func_" + std::to_string(f) + ", type, " + symbol(sym->name()) + ": " +
             text + ", unknown, [created(" + std::to_string(sym->created()) + ")]).\n";
    }
    for (unsigned p = 1; p < env.signature->predicates(); p++) {
      Signature::Symbol* sym = env.signature->getPredicate(p);
      if (sym->interpreted() || sym->name().empty() || sym->name()[0] == '$')
        continue;
      OperatorType* type = sym->type();
      if (type->numTypeArguments() != 0)
        continue;
      std::string text = typeText(type, sym->arity(), "$o");
      if (text.empty())
        continue;
      std::string info = "created(" + std::to_string(sym->created()) + ")";
      if (sym->wasFlipped())
        info += ", flipped";
      bool pureValue = false;
      unsigned pureOrder = 0;
      if (InferenceStore::instance()->purePredicate(p, pureValue, pureOrder))
        info += std::string(", pure(") + (pureValue ? "true" : "false") + "," +
                std::to_string(pureOrder) + ")";
      out += "tff(pred_" + std::to_string(p) + ", type, " + symbol(sym->name()) + ": " +
             text + ", unknown, [" + info + "]).\n";
    }
  }

  /** A placement entry: the literal's place, and how it got there. */
  static std::string placed(uint32_t entry)
  {
    if (entry == NONE)
      return "none";
    std::string out = std::to_string(entry & ~(PLACED_TURNED | PLACED_REWRITTEN));
    if (entry & PLACED_TURNED)
      out = "turned(" + out + ")";
    if (entry & PLACED_REWRITTEN)
      out = "rewritten(" + out + ")";
    return out;
  }

  void unit(uint32_t idx, std::string& out)
  {
    auto u = [&](unsigned off) { return _enc.units[UNIT_WIDTH * idx + off]; };
    bool isClause = u(3) & 1;
    uint32_t rule = u(1);
    const auto& names = ruleNames();
    if (rule >= names.size())
      throw UserErrorException("unit " + std::to_string(u(0)) + " has unknown rule " +
                               std::to_string(rule));
    std::vector<std::string> records;
    auto record = [&](const std::string& r) { records.push_back(r); };

    // The statement. A clause is universally quantified over its variables,
    // which are written in the order `varSorts` gives them.
    std::string statement;
    if (isClause) {
      uint32_t numLits = u(5);
      if (numLits == 0) {
        statement = "$false";
      } else {
        std::string lits;
        for (uint32_t i = 0; i < numLits; i++)
          lits += (i ? " | " : "") + literal(_enc.unitLits[u(4) + i]);
        statement = "(" + lits + ")";
      }
      if (u(9) != 0) {
        std::string prefix = "! [";
        for (uint32_t i = 0; i < u(9); i++) {
          uint32_t at = 2 * (u(8) + i);
          prefix += (i ? ", " : "") + std::string("X") + std::to_string(_enc.varSorts[at]) +
                    ": " + sortText(_enc.varSorts[at + 1]);
        }
        statement = prefix + "] : " + statement;
      }
    } else {
      statement = formula(u(4));
      if (u(9) != 0)
        record("var_sorts(" + varSortList(u(8), u(9)) + ")");
    }
    if (u(25) != 0)
      record("bound_sorts(" + varSortList(u(8) + u(9), u(25)) + ")");

    // Where it came from: an input formula by its name, as TSTP has it, and
    // anything else by its rule and premises.
    std::string parents;
    for (uint32_t i = 0; i < u(7); i++)
      parents += (i ? "," : "") + unitName(_enc.parents[u(6) + i]);
    std::string source;
    if (rule == toNumber(InferenceRule::INPUT) && u(7) == 0 && u(12) != NONE) {
      source = "file('problem.p'," + atom(string(u(12))) + ")";
    } else {
      source = "inference(" + names[rule] + ",[],[" + parents + "])";
      if (u(12) != NONE)
        record("input_name(" + atom(string(u(12))) + ")");
    }

    if (u(11) != 0) {
      std::string r = "skolems([";
      for (uint32_t i = 0; i < u(11); i++)
        r += (i ? "," : "") + std::string("skolem(") +
             std::to_string(_enc.skolems[2 * (u(10) + i)]) + "," +
             fot(_enc.skolems[2 * (u(10) + i) + 1]) + ")";
      record(r + "])");
    }
    if (u(14) != 0) {
      std::string r = "uses([";
      for (uint32_t i = 0; i < u(14); i++) {
        auto w = [&](unsigned off) { return _enc.uses[8 * (u(13) + i) + off]; };
        r += (i ? "," : "") + std::string("use(") + std::to_string(w(0)) + "," +
             optional(w(1)) + "," + optionalTerm(w(2)) + "," + std::to_string(w(3)) + "," +
             bindingList(w(4), w(5)) + "," + optionalTerm(w(6)) + "," + optionalTerm(w(7)) +
             ")";
      }
      record(r + "])");
    }
    if (u(16) != 0) {
      std::string r = "splits([";
      for (uint32_t i = 0; i < u(16); i++)
        r += (i ? "," : "") + atom(string(_enc.splits[u(15) + i]));
      record(r + "])");
    }
    if (u(17) != NONE)
      record("sat_premise(sat_" + std::to_string(u(17)) + ")");
    if (u(19) != 0) {
      std::string r = "namings([";
      for (uint32_t i = 0; i < u(19); i++) {
        auto w = [&](unsigned off) { return _enc.namings[4 * (u(18) + i) + off]; };
        std::string args;
        for (uint32_t k = 0; k < w(2); k++)
          args += (k ? "," : "") + std::to_string(_enc.namingArgs[w(1) + k]);
        r += (i ? "," : "") + std::string("naming(") + atom(string(w(0))) + ",[" + args +
             "]," + recordFormula(w(3)) + ")";
      }
      record(r + "])");
    }
    if (u(20) != NONE)
      record("gen_clause(gen_" + std::to_string(u(20)) + ")");
    if (u(22) != 0) {
      // Each conjunction by where it stands in the premise's formula, which
      // is what `CNF::clausify` walked: two conjunctions alike are still two.
      if (u(7) == 0 || _enc.units[UNIT_WIDTH * _enc.parents[u(6)] + 3] & 1)
        throw UserErrorException("clausification step " + std::to_string(u(0)) +
                                 " records conjunct choices but has no premise formula");
      Formula* premise =
        _enc.formulaPtrs[_enc.units[UNIT_WIDTH * _enc.parents[u(6)] + 4]];
      std::string r = "choices([";
      bool first = true;
      for (uint32_t i = 0; i < u(22); i++) {
        Formula* conjunction = _enc.formulaPtrs[_enc.choices[2 * (u(21) + i)]];
        std::vector<std::vector<unsigned>> found;
        std::vector<unsigned> path;
        positionsOf(premise, conjunction, path, found);
        if (found.empty())
          throw UserErrorException("clausification step " + std::to_string(u(0)) +
                                   " chose a conjunct of a conjunction its premise does not have");
        // Vampire can share one subformula at several positions, and the
        // choice is then the same at each.
        for (const auto& at : found) {
          std::string positions;
          for (size_t k = 0; k < at.size(); k++)
            positions += (k ? "," : "") + std::to_string(at[k]);
          r += (first ? "" : ",") + std::string("choice([") + positions + "]," +
               std::to_string(_enc.choices[2 * (u(21) + i) + 1]) + ")";
          first = false;
        }
      }
      record(r + "])");
    }
    if (u(24) != 0) {
      std::string r = "congruences([";
      for (uint32_t i = 0; i < u(24); i++) {
        auto w = [&](unsigned off) { return _enc.congruences[5 * (u(23) + i) + off]; };
        std::string args = "[";
        for (uint32_t k = 0; k < w(4); k++)
          args += (k ? "," : "") + optional(_enc.congruenceArgs[w(3) + k]);
        args += "]";
        std::string step;
        switch (w(0)) {
          case congruence::INPUT:
            step = "input(" + std::to_string(w(1)) + ")";
            break;
          case congruence::CONGRUENCE:
            step = "congruence(" + fot(w(1)) + "," + fot(w(2)) + "," + args + ")";
            break;
          case congruence::TRANS:
            step = "trans(" + std::to_string(w(1)) + "," + std::to_string(w(2)) + ")";
            break;
          case congruence::SYMM:
            step = "symm(" + std::to_string(w(1)) + ")";
            break;
          case congruence::GOAL_EQUALITY:
            step = "goal_equality(" + std::to_string(w(1)) + "," + optional(w(2)) + ")";
            break;
          default:
            step = "goal_literals(" + std::to_string(w(1)) + "," + std::to_string(w(2)) +
                   "," + args + ")";
            break;
        }
        r += (i ? "," : "") + step;
      }
      record(r + "])");
    }
    if (u(27) != 0) {
      std::string r = "constraints([";
      for (uint32_t i = 0; i < u(27); i++)
        r += (i ? "," : "") + std::to_string(_enc.constraintLits[u(26) + i]);
      record(r + "])");
    }
    if (u(29) != 0) {
      std::string r = "placements([";
      for (uint32_t i = 0; i < u(29); i++) {
        auto w = [&](unsigned off) { return _enc.placements[4 * (u(28) + i) + off]; };
        std::string entries;
        for (uint32_t k = 0; k < w(3); k++)
          entries += (k ? "," : "") + placed(_enc.placementEntries[w(2) + k]);
        r += (i ? "," : "") + std::string("placement(") + std::to_string(w(0)) + "," +
             std::to_string(w(1)) + ",[" + entries + "])";
      }
      record(r + "])");
    }
    if (u(30) != NONE)
      record("splitting_name(" + std::to_string(u(30)) + ")");
    if (u(32) != 0) {
      std::string r = "literal_factors([";
      for (uint32_t i = 0; i < u(32); i++)
        r += (i ? "," : "") + string(_enc.literalFactors[u(31) + i]);
      record(r + "])");
    }
    if (u(33) != NONE)
      record("procedure(" + std::to_string(u(33)) + ")");
    if (u(34) != NONE)
      record("site(" + quoted(string(u(34))) + ")");
    if (u(36) != 0) {
      std::string r = "introduced([";
      for (uint32_t i = 0; i < u(36); i++)
        r += (i ? "," : "") + std::string("lit(") +
             std::to_string(_enc.introducedLits[2 * (u(35) + i)]) + "," +
             optional(_enc.introducedLits[2 * (u(35) + i) + 1]) + ")";
      record(r + "])");
    }
    if (u(37) != 0)
      record("variant(" + std::to_string(u(37)) + ")");
    if (u(38) != NONE)
      record("introduced_symbol(" + atom(string(u(38))) + ")");
    if (u(40) != 0) {
      std::string r = "introduced_terms([";
      for (uint32_t i = 0; i < u(40); i++)
        r += (i ? "," : "") + optionalTerm(_enc.introducedTerms[u(39) + i]);
      record(r + "])");
    }

    out += std::string(isClause ? "tcf(" : "tff(") + unitName(idx) + ", " +
           role(idx) + ", " + statement + ", " + source;
    if (!records.empty()) {
      out += ", [";
      for (size_t i = 0; i < records.size(); i++)
        out += (i ? ", " : "") + records[i];
      out += "]";
    }
    out += ").\n";
  }

  std::string role(uint32_t idx) const
  {
    if (_enc.units[UNIT_WIDTH * idx + 1] != toNumber(InferenceRule::INPUT))
      return "plain";
    switch (static_cast<UnitInputType>(_enc.units[UNIT_WIDTH * idx + 2])) {
      case UnitInputType::ASSUMPTION:
        return "hypothesis";
      case UnitInputType::CONJECTURE:
        return "conjecture";
      case UnitInputType::NEGATED_CONJECTURE:
        return "negated_conjecture";
      default:
        return "axiom";
    }
  }

  /** A propositional literal: a component's name, or its negation. */
  static std::string satLiteral(const std::string& name)
  {
    if (!name.empty() && name[0] == '~')
      return "~$$name(" + atom(name.substr(1)) + ")";
    return "$$name(" + atom(name) + ")";
  }

  void satClause(uint32_t idx, std::string& out)
  {
    auto w = [&](unsigned off) { return _enc.satClauses[6 * idx + off]; };
    std::string lits;
    for (uint32_t i = 0; i < w(1); i++)
      lits += (i ? " | " : "") + satLiteral(string(_enc.satLits[w(0) + i]));
    std::string statement = w(1) == 0 ? "$false" : "(" + lits + ")";
    std::string source = "unknown";
    if (w(3) != 0) {
      std::string premises;
      for (uint32_t i = 0; i < w(3); i++)
        premises += (i ? "," : "") + std::string("sat_") +
                    std::to_string(_enc.satPremises[w(2) + i]);
      source = "inference(sat_resolution,[],[" + premises + "])";
    } else if (w(4) != NONE) {
      source = "inference(sat_conversion,[],[" + unitName(w(4)) + "])";
    }
    out += "cnf(sat_" + std::to_string(idx) + ", plain, " + statement + ", " + source;
    if (w(5) != NONE) {
      // One entry per literal of the clause it is the shadow of.
      uint32_t origin = w(4);
      uint32_t count = _enc.units[UNIT_WIDTH * origin + 3] & 1
        ? _enc.units[UNIT_WIDTH * origin + 5] : 0;
      std::string order;
      for (uint32_t i = 0; i < count; i++)
        order += (i ? "," : "") + std::to_string(_enc.satOrder[w(5) + i]);
      out += ", [order([" + order + "])]";
    }
    out += ").\n";
  }

  void genState(uint32_t idx, std::string& out)
  {
    auto w = [&](unsigned off) { return _enc.genStates[11 * idx + off]; };
    auto lits = [&](uint32_t first, uint32_t count) {
      std::string r = "[";
      for (uint32_t i = 0; i < count; i++)
        r += (i ? "," : "") + std::string(_enc.genLits[2 * (first + i) + 1] ? "pos(" : "neg(") +
             recordFormula(_enc.genLits[2 * (first + i)]) + ")";
      return r + "]";
    };
    std::string placements = "[";
    for (uint32_t i = 0; i < w(10); i++) {
      uint32_t placed = _enc.genPlacements[w(9) + i];
      std::string at = std::to_string(placed & 0x7FFFFFFFu);
      placements += (i ? "," : "") + (placed & 0x80000000u ? "turned(" + at + ")" : at);
    }
    placements += "]";
    out += "tff(gen_" + std::to_string(idx) + ", unknown, $true, unknown, [gen_state(" +
           (w(0) == NONE ? std::string("none") : "gen_" + std::to_string(w(0))) + "," +
           optional(w(1)) + "," + std::to_string(w(8)) + "," + lits(w(2), w(3)) + "," +
           lits(w(4), w(5)) + "," + bindingList(w(6), w(7)) + "," + placements + ")]).\n";
  }
};

/**
 * Writes @b text to @b path, aside and then renamed so that a half-written
 * file is never visible: in portfolio mode the process doing this can be
 * killed at any moment.
 */
void writeFile(const std::string& path, const std::string& text)
{
  std::string partial = path + ".part";
  std::ofstream out(partial, std::ios::binary | std::ios::trunc);
  if (!out)
    throw UserErrorException("cannot open output file " + partial);
  out.write(text.data(), static_cast<std::streamsize>(text.size()));
  out.close();
  if (!out) {
    std::remove(partial.c_str());
    throw UserErrorException("cannot write output file " + partial);
  }
  if (std::rename(partial.c_str(), path.c_str()) != 0) {
    std::string reason = std::strerror(errno);
    std::remove(partial.c_str());
    throw UserErrorException("cannot rename " + partial + " to " + path + ": " +
                             reason);
  }
}

/**
 * Where `emitProof` writes; set once from `main`, and absolute, since `main`
 * then moves into the problem's directory.
 */
std::string g_outPath;

/**
 * What had been spent when the search began, in milliseconds: starting up
 * and parsing the problem.
 *
 * Taken once the problem is parsed, whether one strategy runs or a schedule
 * of them. In portfolio mode that is before the slices are forked, so each of
 * them inherits it; their own timers start from zero. Measured from the top
 * of `main` rather than from vampire's timer, which is restarted for each
 * slice and so says nothing about what starting up cost.
 */
long g_setupMs = 0;

/**
 * What vampire's timer said when a single strategy began, in milliseconds.
 *
 * A single strategy runs on the timer started before parsing, so this is
 * taken off what the timer says to leave what the strategy itself spent, as
 * a portfolio slice's restarted timer does of itself. It stays zero in
 * portfolio mode.
 */
long g_timerAtStrategyMs = 0;

/** When this process began, for `g_setupMs`. */
std::chrono::steady_clock::time_point g_startedAt;

/**
 * Where a portfolio slice writes, beside `g_outPath`: several may run at once
 * and more than one succeed, and only the schedule knows which it settled on.
 */
std::string slicePath(pid_t slice)
{
  return g_outPath + "." + std::to_string(slice);
}

/** Encodes whatever proof this process has, if any, and writes it to `path`. */
void emitProofTo(const std::string& path)
{
  Encoder enc;
  uint32_t refutation = NONE;
  if (Unit* r = env.statistics->refutation) {
    refutation = enc.encodeUnit(r);
    // The options this process is running under are the strategy that found
    // the proof: in portfolio mode this is the winning slice itself, which is
    // the only process that knows which one it was.
    enc.strategy = enc.addString(env.options->generateEncodedOptions());
    // The timer is restarted for each slice, so this is what this strategy
    // spent, not what the schedule before it did; a single strategy takes off
    // what parsing spent on the same timer.
    long ran = Timer::elapsedMilliseconds() - g_timerAtStrategyMs;
    enc.strategyMs = ran < 0 ? 0 : static_cast<uint32_t>(ran);
    enc.setupMs = g_setupMs < 0 ? 0 : static_cast<uint32_t>(g_setupMs);
    long found = std::chrono::duration_cast<std::chrono::milliseconds>(
      std::chrono::steady_clock::now() - g_startedAt).count();
    enc.foundAtMs = found < 0 ? 0 : static_cast<uint32_t>(found);
  }
  writeFile(path, TstpWriter(enc).write(
    static_cast<uint32_t>(env.statistics->terminationReason), refutation));
}

void emitProof() { emitProofTo(g_outPath); }

void emitSliceProof() { emitProofTo(slicePath(getpid())); }

/**
 * Removes what the slices left beside `g_outPath`, once the winner's file has
 * been renamed into place.
 *
 * Every slice that succeeds writes its own proof before the schedule settles
 * on one, and a slice killed while writing leaves its `.part` behind. Only
 * names of exactly the forms `slicePath` and `write` make are removed:
 * `<out>.<digits>` and `<out>.<digits>.part`.
 */
void removeSliceFiles()
{
  namespace fs = std::filesystem;
  fs::path out(g_outPath);
  std::string prefix = out.filename().string() + ".";
  std::vector<fs::path> leftovers;
  std::error_code ec;
  for (fs::directory_iterator it(out.parent_path(), ec), end; !ec && it != end;
       it.increment(ec)) {
    std::string name = it->path().filename().string();
    if (name.compare(0, prefix.size(), prefix) != 0)
      continue;
    std::string rest = name.substr(prefix.size());
    const std::string part = ".part";
    if (rest.size() > part.size() &&
        rest.compare(rest.size() - part.size(), part.size(), part) == 0)
      rest.erase(rest.size() - part.size());
    if (!rest.empty() &&
        std::all_of(rest.begin(), rest.end(),
                    [](char c) { return c >= '0' && c <= '9'; }))
      leftovers.push_back(it->path());
  }
  for (const fs::path& leftover : leftovers)
    fs::remove(leftover, ec);
}

bool isPortfolioMode(Options::Mode mode)
{
  return mode == Options::Mode::PORTFOLIO || mode == Options::Mode::CASC
      || mode == Options::Mode::SMTCOMP;
}

}  // namespace

int main(int argc, char** argv)
{
  g_startedAt = std::chrono::steady_clock::now();
  if (argc < 3) {
    std::fprintf(stderr,
                 "usage: vampire-worker <problem.p> <out-file> "
                 "[name=value ...]\n");
    return 2;
  }

  try {
    // Made absolute before the move into the problem's directory below, which
    // would otherwise change what a relative path names.
    g_outPath = std::filesystem::absolute(argv[2]).string();
    std::remove(g_outPath.c_str());

    for (int i = 3; i < argc; i++) {
      std::string arg(argv[i]);
      size_t eq = arg.find('=');
      if (eq == std::string::npos)
        throw UserErrorException("expected name=value, got " + arg);
      env.options->set(arg.substr(0, eq), arg.substr(eq + 1));
    }

    // Run where the problem is, rather than being told where it is: vampire
    // writes the path it was given into the proof, and the caller's directory
    // has a different name every time. The caller cannot set our directory
    // for us -- doing that from a process holding gigabytes costs more than
    // the proof does, which is why it starts us with `posix_spawn`.
    std::string problem(argv[1]);
    size_t slash = problem.find_last_of('/');
    if (slash != std::string::npos) {
      std::string dir = slash == 0 ? "/" : problem.substr(0, slash);
      if (chdir(dir.c_str()) != 0) {
        std::fprintf(stderr, "cannot enter %s: %s\n", dir.c_str(),
                     std::strerror(errno));
        return 2;
      }
      problem = problem.substr(slash + 1);
    }

    Timer::reinitialise();
    UIHelper::parseFile(problem, env.options->inputSyntax(), false);
    Problem* prb = UIHelper::getInputProblem();

    // On reaching a limit vampire exits from its timer thread, skipping both
    // the code below and any atexit handler, and re-encoding from that thread
    // would race with the search. So write a proof-less result now: from here
    // on, however the search ends, the caller finds a decodable file rather
    // than none. What fails before this point -- a malformed option, a
    // directory that cannot be entered, a problem that does not parse --
    // leaves no file, and says why on stderr with a nonzero exit status.
    emitProof();

    // Starting up and parsing are behind us, and a run that names the
    // strategy pays for both of them too.
    g_setupMs = std::chrono::duration_cast<std::chrono::milliseconds>(
      std::chrono::steady_clock::now() - g_startedAt).count();

    if (isPortfolioMode(env.options->mode())) {
      // The slice that succeeds runs in a child of this process and exits
      // there, so it has to do the encoding itself; the parent never sees its
      // refutation. It writes to a file of its own, since with several slices
      // running more than one may succeed, and the schedule then says which
      // is kept. Portfolio mode preprocesses per slice, so not here.
      UIHelper::onProofFound = &emitSliceProof;
      CASC::PortfolioMode::perform(prb);
      if (pid_t winner = CASC::PortfolioMode::winner) {
        std::string won = slicePath(winner);
        if (std::rename(won.c_str(), g_outPath.c_str()) != 0) {
          std::string reason = std::strerror(errno);
          throw UserErrorException("cannot rename the winning slice's proof " +
                                   won + " to " + g_outPath + ": " + reason);
        }
      }
      removeSliceFiles();
    } else {
      g_timerAtStrategyMs = Timer::elapsedMilliseconds();
      env.options->setForcedOptionValues();
      env.options->checkGlobalOptionConstraints();
      Preprocess(*env.options).preprocess(*prb);
      ProvingHelper::runVampireSaturation(*prb, *env.options);
    }

    // A portfolio slice that refutes the problem or shows it satisfiable
    // reports for itself, and it is the only process that knows. When none
    // does, this process knows no better either: the slices' termination
    // reasons stay in the slices, and the schedule sets none here. So the
    // placeholder stands, saying `UNKNOWN`, and re-encoding would only write
    // it again.
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
