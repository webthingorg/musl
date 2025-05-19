#include <sys/socket.h>
#include <fcntl.h>
#include <errno.h>
#include "syscall.h"

int socketpair(int domain, int type, int protocol, int fd[2])
{
	return socketcall(socketpair, domain, type, protocol, fd, 0, 0);
}
