// The lock that every FFI entry point must take.
//
// Lean elaborates declarations concurrently (`Elab.async` is on in the language server
// and the cmdline driver), and Vampire's state is process-global. Measured on a file of
// 16 goals, the tactic was entered from 7 OS threads with 3 calls in flight at once.
//
// This lives in a header rather than one translation unit because the boundary is split
// across several: a guard that only some entry points take is worse than none, since it
// looks correct. Every `extern "C"` function in ffi/ opens with `EntryGuard guard;`.

#ifndef VAMPIRE_FFI_LOCK_HPP
#define VAMPIRE_FFI_LOCK_HPP

#include <atomic>
#include <iostream>
#include <mutex>
#include <set>
#include <sstream>
#include <string>
#include <thread>

namespace vampire_ffi {

/// Recursive so an entry point may call another without deadlocking.
inline std::recursive_mutex &mutex() {
  static std::recursive_mutex m;
  return m;
}

// Instrumentation, kept so the serialisation is testable rather than assumed.
inline std::atomic<int> &inFlight() { static std::atomic<int> v{0}; return v; }
inline std::atomic<int> &maxInFlight() { static std::atomic<int> v{0}; return v; }
inline std::mutex &threadsMutex() { static std::mutex m; return m; }
inline std::set<std::thread::id> &threads() { static std::set<std::thread::id> s; return s; }

/// Whatever the prover wrote to `cout`/`cerr` during the calls so far, most recent last.
inline std::string &proverOutput() {
  static thread_local std::string s;
  return s;
}

/// Keep the prover's chatter out of the host's streams.
///
/// Vampire writes warnings, progress and statistics straight to `cout` and `cerr`. In a
/// binary that is the point; embedded in Lean's elaborator it surfaces as "Lean server
/// printed an error" in the editor, for something that is often not an error at all.
/// The text is kept so it can still be shown on request rather than thrown away.
struct CaptureOutput {
  std::streambuf *savedOut;
  std::streambuf *savedErr;
  std::ostringstream sink;

  CaptureOutput() {
    savedOut = std::cout.rdbuf(sink.rdbuf());
    savedErr = std::cerr.rdbuf(sink.rdbuf());
  }

  ~CaptureOutput() {
    std::cout.rdbuf(savedOut);
    std::cerr.rdbuf(savedErr);
    std::string &log = proverOutput();
    log += sink.str();
    // A long-lived elaborator would otherwise accumulate this without bound.
    if (log.size() > 64 * 1024) log.erase(0, log.size() - 64 * 1024);
  }
};

struct EntryGuard {
  // Declaration order matters: the lock is taken before the streams are redirected,
  // because redirecting them is itself not thread-safe.
  std::lock_guard<std::recursive_mutex> lock;
  CaptureOutput capture;
  EntryGuard() : lock(mutex()) {
    int now = ++inFlight();
    int prev = maxInFlight().load();
    while (now > prev && !maxInFlight().compare_exchange_weak(prev, now)) {}
    std::lock_guard<std::mutex> l(threadsMutex());
    threads().insert(std::this_thread::get_id());
  }
  ~EntryGuard() { --inFlight(); }
};

} // namespace vampire_ffi

#endif // VAMPIRE_FFI_LOCK_HPP
