/*
 * One vampire proof attempt, written out for the Lean side.
 *
 * Usage: vampire-worker <problem.p> <out-file> [name=value ...]
 *
 * The problem is read as TPTP, saturation runs once, and the result is written
 * to <out-file>. Vampire's own chatter is left on stdout/stderr for
 * diagnostics, which is why the result goes to a file rather than a pipe.
 *
 * The file is the SZS status line and a header, as comments, and then -- where
 * there is a refutation -- vampire's proof as `--proof tptp --proof_extra full`
 * writes it, between the SZS output markers. `Kernel/TPTPProofExtra.hpp`
 * describes that proof. The header says what only the run knows, each line
 * `VAMPIRE key: value` (the SZS ontology standardises only the status line and
 * the output markers):
 *
 *   % SZS status <status> for problem
 *   % VAMPIRE termination: R
 *   % VAMPIRE strategy: ...
 *   % VAMPIRE times: Strategy Setup FoundAt
 *   % SZS output start Refutation for problem
 *   ...the proof...
 *   % SZS output end Refutation for problem
 *
 * `termination` is vampire's termination reason, `refutation_not_found` and so
 * on, which SZS cannot tell all apart. The last two are there with a
 * refutation only: the strategy that found it, from which alone the same run
 * can be had again, and what that strategy ran for, what starting up and
 * parsing took and when the proof was found, in milliseconds.
 */

#include <algorithm>
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
#include <vector>

#include <unistd.h>

#include "CASC/PortfolioMode.hpp"
#include "Kernel/InferenceStore.hpp"
#include "Kernel/Problem.hpp"
#include "Kernel/Unit.hpp"
#include "Lib/Environment.hpp"
#include "Lib/Exception.hpp"
#include "Lib/Timer.hpp"
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

/** Writes whatever result this process has, and its proof if any, to `path`. */
void emitProofTo(const std::string& path)
{
  static const char* const reasons[] = {
    "refutation", "satisfiable", "refutation_not_found", "inappropriate",
    "unknown", "time_limit", "instruction_limit", "memory_limit",
    "activation_limit"};
  static const char* const szs[] = {
    "Unsatisfiable", "Satisfiable", "GaveUp", "Inappropriate", "Unknown",
    "Timeout", "ResourceOut", "MemoryOut", "ResourceOut"};
  unsigned reason = static_cast<unsigned>(env.statistics->terminationReason);
  if (reason >= sizeof(reasons) / sizeof(reasons[0]))
    throw UserErrorException("unknown termination reason " + std::to_string(reason));
  std::ostringstream out;
  out << "% SZS status " << szs[reason] << " for problem\n";
  out << "% VAMPIRE termination: " << reasons[reason] << "\n";
  if (Unit* r = env.statistics->refutation) {
    // The options this process is running under are the strategy that found
    // the proof: in portfolio mode this is the winning slice itself, which is
    // the only process that knows which one it was.
    // The worker asks for the proof format itself, so the strategy is said
    // without it: what it names is the search.
    env.options->set("proof_extra", "off");
    std::string strategy = env.options->generateEncodedOptions();
    env.options->set("proof_extra", "full");
    out << "% VAMPIRE strategy: " << strategy << "\n";
    // The timer is restarted for each slice, so this is what this strategy
    // spent, not what the schedule before it did; a single strategy takes off
    // what parsing spent on the same timer.
    long ran = Timer::elapsedMilliseconds() - g_timerAtStrategyMs;
    long found = std::chrono::duration_cast<std::chrono::milliseconds>(
      std::chrono::steady_clock::now() - g_startedAt).count();
    out << "% VAMPIRE times: " << std::max(ran, 0L) << " " << std::max(g_setupMs, 0L)
        << " " << std::max(found, 0L) << "\n";
    out << "% SZS output start Refutation for problem\n";
    InferenceStore::instance()->outputProof(out, r);
    out << "% SZS output end Refutation for problem\n";
  }
  writeFile(path, out.str());
}

void emitProof() { emitProofTo(g_outPath); }

/**
 * Writes the winning slice's proof. Vampire prints the proof itself next, to
 * a file the schedule passes on; that would write it a second time, so this
 * slice's proof output is switched off once the worker has it.
 */
void emitSliceProof()
{
  emitProofTo(slicePath(getpid()));
  env.options->setProof(Options::Proof::OFF);
}

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
    // The proof the Lean side reads (`Kernel/TPTPProofExtra.hpp`).
    env.options->set("proof", "tptp");
    env.options->set("proof_extra", "full");

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
