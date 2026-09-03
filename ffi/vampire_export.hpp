// The proof exporter, as seen from the entry point that drives a whole run.
//
// Build, solve and export happen in one FFI call. The entry lock makes a call atomic
// but not a sequence of them, and Vampire's environment is process-global, so a run
// spread over three calls can be interleaved by another elaboration thread: one
// thread's build followed by another's, and then the first thread's solve against the
// wrong problem. Splitting the results out into per-thread buffers is not enough — the
// prover state itself is shared — so the sequence is not split at all.

#ifndef VAMPIRE_FFI_EXPORT_HPP
#define VAMPIRE_FFI_EXPORT_HPP

#include <string>
#include <vector>

namespace vampire_ffi {

/// Export the refutation in `env.statistics`. Returns 0 on success, 1 if there is none,
/// 2 on an exception, 3 if something in it cannot be exported yet.
uint32_t exportRefutation(std::vector<uint32_t> &code,
                          std::vector<std::string> &names,
                          std::string &error);

/// A one-line-per-step outline of the refutation, for diagnostics.
std::string proofOutline();

} // namespace vampire_ffi

#endif // VAMPIRE_FFI_EXPORT_HPP
