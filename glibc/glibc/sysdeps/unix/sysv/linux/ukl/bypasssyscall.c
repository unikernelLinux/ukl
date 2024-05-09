#include <errno.h>
#include <unistd.h>
#include <stddef.h>
#include <sysdep.h>
#include <stdio.h>
#include <stdarg.h>
#include <poll.h>

extern long __ukl_getpid(void);
extern long __ukl_write(int fd, const void *buf, size_t nbytes);
extern long __ukl_mmap(void *addr, size_t len, int prot, int flags, int fd, off_t offset);
extern long __ukl_read (int fd, void *buf, size_t nbytes);
extern long __ukl_munmap (void *addr, size_t len);
extern long __ukl_select (int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, struct timeval *timeout);
extern long __ukl_poll(struct pollfd *fds, nfds_t nfds, int timeout);

long int syscall (long int __sysno, ...){
	va_list args;

	va_start(args, __sysno);
	
			void * p;// = va_arg(args, void *);
			size_t l;
			int a;// = va_arg(args, int);
			int b;// = va_arg(args, int);
			int c;// = va_arg(args, int);
			off_t d;// = va_arg(args, off_t);

			fd_set *fd_a, *fd_b, *fd_c;
			struct timeval *tv;
			struct pollfd *p_fd;
			nfds_t nfds;

	switch(__sysno){
		case 39: // gitpid
			return __ukl_getpid();
			break;
		case 9: // mmap
			p = va_arg(args, void *);
			l = va_arg(args, size_t);
			a = va_arg(args, int);
			b = va_arg(args, int);
			c = va_arg(args, int);
			d = va_arg(args, off_t);
			return __ukl_mmap(p, l, a, b, c, d);
			break;
		case 1: // write
			a = va_arg(args, int);
			// XXX I'm removing const here.
			p = va_arg(args, void *);
			l = va_arg(args, size_t);

			return __ukl_write(a, (const void *) p, l);
			break;

		case 0: // read
			a = va_arg(args, int);
			p = va_arg(args, void *);
			l = va_arg(args, size_t);
			return __ukl_read(a, p, l);
			break;
		case 11: // munmap
			p = va_arg(args, void *);
			l = va_arg(args, size_t);
			return __ukl_munmap(p, l);
			break;
		case 23: // select

			a = va_arg(args, int);
			fd_a = va_arg(args, fd_set *);
			fd_b = va_arg(args, fd_set *);
			fd_c = va_arg(args, fd_set *);
		       	tv = va_arg(args, struct timeval *);
			return __ukl_select(a, fd_a, fd_b, fd_c, tv);
			break;
		case 7: // poll
			p_fd = va_arg(args, struct pollfd *);
			nfds = va_arg(args, nfds_t);
			a = va_arg(args, int);
			return __ukl_poll(p_fd, nfds, a);
			break;
		default:
			printf("unexpected syscall number\n");
			return -1;
	}

	va_end(args);
}
