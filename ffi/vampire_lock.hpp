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
#include <mutex>
#include <set>
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

struct EntryGuard {
  std::lock_guard<std::recursive_mutex> lock;
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
