/-!
Starting a process without copying the address space.

Lean's `IO.Process.spawn` goes through libuv, which forks, and forking costs
time in proportion to what the parent has mapped. A Lean process with Mathlib
imported has gigabytes of it, so the fork costs more than most calls to the
tactic spend proving anything: measured from a 6 GiB process, 117 ms on Linux
and seconds on macOS, against 0.2 ms for the same spawn by `posix_spawn`.

This lives here, away from what uses it, because a function with a native
implementation can only be called from interpreted code if its module was
compiled into a library the interpreter loads, and this is the package that is
precompiled.

It is also why the tactic has to be run the way lake runs it. Lake names the
libraries in each module's setup, so a build, a test and an editor all load
them; `lean` started by hand loads nothing and stops at the first call,
saying it cannot find the native implementation of what is below.
`scripts/trace-problem.sh` shows which flags to pass when running it by hand.
-/

namespace VampireReplay

/--
Runs `exe` with `args`, its output going to the files named, and waits for it.

Gives back what the process exited with, or 128 plus the signal that stopped
it, which is the shell's convention. The output goes to files rather than
pipes so that nothing here has to pump them while the process runs.

The process starts in this one's working directory: setting the child's
directory is what makes libuv fall back to forking on macOS, and it is not
needed -- the worker goes to where its problem is.
-/
@[extern "vampire_spawn"]
opaque spawn (exe : String) (args : Array String)
    (outPath errPath : String) : IO UInt32

end VampireReplay
