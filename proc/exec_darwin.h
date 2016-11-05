#include "proc_darwin.h"

#include <unistd.h>
#include <sys/ptrace.h>
#include <errno.h>
#include <stdlib.h>
#include <fcntl.h>

int
fork_exec(char *, char **, int, char *, task_t*, mach_port_t*, mach_port_t*, mach_port_t*);

int
fork_exec2(char *, char **, int, char *);
