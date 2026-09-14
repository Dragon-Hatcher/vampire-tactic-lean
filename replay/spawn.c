/*
 * Starting the worker without copying the address space.
 *
 * Lean's `IO.Process.spawn` goes through libuv, which forks. Forking costs
 * time in proportion to the memory the parent has mapped, and a Lean process
 * with Mathlib imported has gigabytes of it: measured here, a spawn from a
 * 6 GiB process costs 117 ms on Linux, where the same spawn from a small
 * process costs a fraction of a millisecond. On macOS it is seconds, which is
 * more than most calls to the tactic spend proving anything.
 *
 * `posix_spawn` never duplicates the address space -- on Linux it clones with
 * CLONE_VFORK, on macOS it is one syscall -- so it costs the same whatever
 * the parent is holding: 0.2 ms from that same 6 GiB process.
 *
 * The child's output goes to files rather than pipes, so that nothing here
 * has to pump them while the worker runs.
 */
#include <lean/lean.h>

#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <spawn.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

extern char **environ;

static lean_obj_res vampire_spawn_error(const char *what, int code) {
  char message[512];
  snprintf(message, sizeof(message), "%s: %s", what, strerror(code));
  return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string(message)));
}

/*
 * Runs `exe` with `args`, its output going to `outPath` and `errPath`, and
 * waits for it. Gives back what it exited with, or 128 + the signal that
 * stopped it, which is the shell's convention.
 */
LEAN_EXPORT lean_obj_res vampire_spawn(b_lean_obj_arg exe, b_lean_obj_arg args,
                                       b_lean_obj_arg outPath,
                                       b_lean_obj_arg errPath,
                                       lean_obj_arg world) {
  (void)world;
  size_t count = lean_array_size(args);
  char **argv = (char **)calloc(count + 2, sizeof(char *));
  if (argv == NULL) return vampire_spawn_error("spawning the worker", ENOMEM);
  argv[0] = (char *)lean_string_cstr(exe);
  for (size_t i = 0; i < count; i++)
    argv[i + 1] = (char *)lean_string_cstr(lean_array_get_core(args, i));
  argv[count + 1] = NULL;

  posix_spawn_file_actions_t actions;
  int rc = posix_spawn_file_actions_init(&actions);
  if (rc != 0) {
    free(argv);
    return vampire_spawn_error("spawning the worker", rc);
  }
  int flags = O_WRONLY | O_CREAT | O_TRUNC;
  /* Nothing to read: the child is given its problem as a file. */
  posix_spawn_file_actions_addopen(&actions, 0, "/dev/null", O_RDONLY, 0);
  posix_spawn_file_actions_addopen(&actions, 1, lean_string_cstr(outPath), flags, 0600);
  posix_spawn_file_actions_addopen(&actions, 2, lean_string_cstr(errPath), flags, 0600);

  posix_spawnattr_t attr;
  posix_spawnattr_init(&attr);
#ifdef POSIX_SPAWN_CLOEXEC_DEFAULT
  /* Hand the child nothing of ours but the three it was given. `fork` closed
     what it should; `posix_spawn` keeps whatever is not marked close-on-exec,
     and this asks for the same tidiness where the flag exists. */
  posix_spawnattr_setflags(&attr, POSIX_SPAWN_CLOEXEC_DEFAULT);
#endif

  pid_t child;
  rc = posix_spawn(&child, argv[0], &actions, &attr, argv, environ);
  posix_spawnattr_destroy(&attr);
  posix_spawn_file_actions_destroy(&actions);
  free(argv);
  if (rc != 0) return vampire_spawn_error("spawning the worker", rc);

  int status = 0;
  while (waitpid(child, &status, 0) < 0) {
    if (errno != EINTR) return vampire_spawn_error("waiting for the worker", errno);
  }
  uint32_t code = 1;
  if (WIFEXITED(status)) code = (uint32_t)WEXITSTATUS(status);
  else if (WIFSIGNALED(status)) code = 128u + (uint32_t)WTERMSIG(status);
  return lean_io_result_mk_ok(lean_box_uint32(code));
}
