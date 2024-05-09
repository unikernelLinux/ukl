/* Copyright (C) 1998-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Zack Weinberg <zack@rabi.phys.columbia.edu>, 1998.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#include <errno.h>
#include <fcntl.h>
#include <limits.h>
#include <pty.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include <sys/types.h>


/* Return the result of ptsname_r in the buffer pointed to by PTS,
   which should be of length BUF_LEN.  If it is too long to fit in
   this buffer, a sufficiently long buffer is allocated using malloc,
   and returned in PTS.  0 is returned upon success, -1 otherwise.  */
static int
pts_name (int fd, char **pts, size_t buf_len)
{
  int rv;
  char *buf = *pts;

  for (;;)
    {
      char *new_buf;

      if (buf_len)
	{
	  rv = ptsname_r (fd, buf, buf_len);

	  if (rv != 0 || memchr (buf, '\0', buf_len))
	    /* We either got an error, or we succeeded and the
	       returned name fit in the buffer.  */
	    break;

	  /* Try again with a longer buffer.  */
	  buf_len += buf_len;	/* Double it */
	}
      else
	/* No initial buffer; start out by mallocing one.  */
	buf_len = 128;		/* First time guess.  */

      if (buf != *pts)
	/* We've already malloced another buffer at least once.  */
	new_buf = realloc (buf, buf_len);
      else
	new_buf = malloc (buf_len);
      if (! new_buf)
	{
	  rv = -1;
	  __set_errno (ENOMEM);
	  break;
	}
      buf = new_buf;
    }

  if (rv == 0)
    *pts = buf;		/* Return buffer to the user.  */
  else if (buf != *pts)
    free (buf);		/* Free what we malloced when returning an error.  */

  return rv;
}

/* Create pseudo tty master slave pair and set terminal attributes
   according to TERMP and WINP.  Return handles for both ends in
   AMASTER and ASLAVE, and return the name of the slave end in NAME.  */
int
openpty (int *amaster, int *aslave, char *name,
	 const struct termios *termp, const struct winsize *winp)
{
#ifdef PATH_MAX
  char _buf[PATH_MAX];
#else
  char _buf[512];
#endif
  char *buf = _buf;
  int master, ret = -1, slave = -1;

  *buf = '\0';

  master = getpt ();
  if (master == -1)
    return -1;

  if (grantpt (master))
    goto on_error;

  if (unlockpt (master))
    goto on_error;

#ifdef TIOCGPTPEER
  /* Try to allocate slave fd solely based on master fd first. */
  slave = ioctl (master, TIOCGPTPEER, O_RDWR | O_NOCTTY);
#endif
  if (slave == -1)
    {
      /* Fallback to path-based slave fd allocation in case kernel doesn't
       * support TIOCGPTPEER.
       */
      if (pts_name (master, &buf, sizeof (_buf)))
        goto on_error;

      slave = open (buf, O_RDWR | O_NOCTTY);
      if (slave == -1)
        goto on_error;
    }

  /* XXX Should we ignore errors here?  */
  if (termp)
    tcsetattr (slave, TCSAFLUSH, termp);
#ifdef TIOCSWINSZ
  if (winp)
    ioctl (slave, TIOCSWINSZ, winp);
#endif

  *amaster = master;
  *aslave = slave;
  if (name != NULL)
    {
      if (*buf == '\0')
        if (pts_name (master, &buf, sizeof (_buf)))
          goto on_error;

      strcpy (name, buf);
    }

  ret = 0;

 on_error:
  if (ret == -1) {
    close (master);

    if (slave != -1)
      close (slave);
  }

  if (buf != _buf)
    free (buf);

  return ret;
}
libutil_hidden_def (openpty)
