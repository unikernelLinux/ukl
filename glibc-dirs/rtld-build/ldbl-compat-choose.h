#ifndef _LDBL_COMPAT_CHOOSE_H
#define _LDBL_COMPAT_CHOOSE_H
#ifndef LONG_DOUBLE_COMPAT
# error LONG_DOUBLE_COMPAT not defined
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___mbrlen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___mbrlen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___mbrtowc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___mbrtowc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__Exit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__Exit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_2_1_stdin_(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_2_1_stdin_(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_2_1_stdout_(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_2_1_stdout_(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_2_1_stderr_(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_2_1_stderr_(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_adjust_column(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_adjust_column(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_clearerr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_clearerr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_default_doallocate(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_default_doallocate(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_adjust_wcolumn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_adjust_wcolumn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_free_wbackup_area(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_free_wbackup_area(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_init_wmarker(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_init_wmarker(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_default_finish(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_default_finish(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_default_pbackfail(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_default_pbackfail(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_default_uflow(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_default_uflow(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_default_xsgetn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_default_xsgetn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_default_xsputn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_default_xsputn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_do_write(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_do_write(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_attach(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_attach(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_close_it(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_close_it(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_finish(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_finish(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_doallocbuf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_doallocbuf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fclose(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fclose(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fdopen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fdopen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_feof(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_feof(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_ferror(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_ferror(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fopen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fopen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_popen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_popen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___asprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___asprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fflush(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fflush(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fgetc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fgetc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fgetpos(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fgetpos(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fgets(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fgets(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fgetpos64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fgetpos64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fsetpos(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fsetpos(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fsetpos64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fsetpos64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_close(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_close(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_doallocate(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_doallocate(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_fopen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_fopen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_init(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_init(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_jumps(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_jumps(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_open(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_open(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_overflow(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_overflow(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_seekoff(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_seekoff(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_read(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_read(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_seek(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_seek(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_setbuf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_setbuf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_stat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_stat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_sync(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_sync(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_underflow(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_underflow(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_write(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_write(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_xsputn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_file_xsputn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fileno(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fileno(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_flockfile(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_flockfile(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_proc_open(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_proc_open(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_proc_close(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_proc_close(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_flush_all(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_flush_all(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_flush_all_linebuffered(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_flush_all_linebuffered(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fputs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fputs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fread(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fread(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_free_backup_area(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_free_backup_area(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_freopen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_freopen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fseek(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fseek(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_ftell(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_ftell(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_ftrylockfile(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_ftrylockfile(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_funlockfile(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_funlockfile(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fwrite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_fwrite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_getc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_getc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_getline(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_getline(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_gets(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_gets(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_peekc_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_peekc_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_putc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_putc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_getline_info(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_getline_info(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_init(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_init(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_init_marker(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_init_marker(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_link_in(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_link_in(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_marker_delta(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_marker_delta(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_iter_begin(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_iter_begin(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_iter_end(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_iter_end(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_iter_next(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_iter_next(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_iter_file(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_iter_file(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_least_wmarker(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_least_wmarker(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_seekwmark(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_seekwmark(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_sputbackwc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_sputbackwc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_sungetwc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_sungetwc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_list_all(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_list_all(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_stderr_(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_stderr_(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_stdin_(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_stdin_(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_stdout_(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_stdout_(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_list_lock(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_list_lock(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_list_unlock(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_list_unlock(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_list_resetlock(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_list_resetlock(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_marker_difference(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_marker_difference(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_padn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_padn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_pclose(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_pclose(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_peekc_locked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_peekc_locked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_perror(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_perror(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_printf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_printf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_puts(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_puts(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_remove_marker(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_remove_marker(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_rewind(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_rewind(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_scanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_scanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_seekmark(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_seekmark(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_seekoff(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_seekoff(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_seekpos(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_seekpos(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_setb(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_setb(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_setbuf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_setbuf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_setbuffer(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_setbuffer(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_setlinebuf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_setlinebuf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_setvbuf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_setvbuf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_sgetn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_sgetn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_sprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_sprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_sputbackc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_sputbackc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_sscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_sscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_str_init_readonly(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_str_init_readonly(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_str_init_static(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_str_init_static(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_str_overflow(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_str_overflow(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_str_pbackfail(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_str_pbackfail(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_str_seekoff(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_str_seekoff(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_str_underflow(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_str_underflow(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_sungetc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_sungetc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_switch_to_get_mode(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_switch_to_get_mode(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_un_link(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_un_link(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_ungetc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_ungetc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_switch_to_main_wget_area(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_switch_to_main_wget_area(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_switch_to_wbackup_area(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_switch_to_wbackup_area(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_switch_to_wget_mode(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_switch_to_wget_mode(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_unsave_wmarkers(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_unsave_wmarkers(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdefault_doallocate(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdefault_doallocate(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_unsave_markers(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_unsave_markers(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_vfprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_vfprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_vfscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_vfscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_vsprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_vsprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdefault_finish(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdefault_finish(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdefault_pbackfail(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdefault_pbackfail(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdefault_setbuf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdefault_setbuf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdefault_uflow(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdefault_uflow(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdefault_xsgetn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdefault_xsgetn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdefault_xsputn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdefault_xsputn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdo_write(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdo_write(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wfile_jumps(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wfile_jumps(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wfile_overflow(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wfile_overflow(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wfile_seekoff(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wfile_seekoff(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdoallocbuf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wdoallocbuf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wmarker_delta(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wmarker_delta(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wsetb(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wsetb(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___woverflow(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___woverflow(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wuflow(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wuflow(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wfile_setbuf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wfile_setbuf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wfile_sync(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wfile_sync(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wfile_underflow(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wfile_underflow(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wfile_xsputn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__IO_wfile_xsputn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc____brk_addr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc____brk_addr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___curbrk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___curbrk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___progname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___progname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___progname_full(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___progname_full(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___adjtimex(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___adjtimex(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___argz_count(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___argz_count(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___argz_stringify(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___argz_stringify(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___argz_next(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___argz_next(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___assert(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___assert(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___assert_fail(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___assert_fail(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___assert_perror_fail(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___assert_perror_fail(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___backtrace(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___backtrace(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___backtrace_symbols(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___backtrace_symbols(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___backtrace_symbols_fd(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___backtrace_symbols_fd(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___bsd_getpgrp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___bsd_getpgrp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getpgid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getpgid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___setpgid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___setpgid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___bzero(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___bzero(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtok_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtok_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___clone(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___clone(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___cmsg_nxthdr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___cmsg_nxthdr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___connect(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___connect(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___send(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___send(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype32_tolower(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype32_tolower(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype32_toupper(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype32_toupper(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype_b(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype_b(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype32_b(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype32_b(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype_tolower(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype_tolower(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype_toupper(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype_toupper(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype_get_mb_cur_max(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype_get_mb_cur_max(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___cxa_atexit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___cxa_atexit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___cxa_finalize(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___cxa_finalize(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___cyg_profile_func_enter(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___cyg_profile_func_enter(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___cyg_profile_func_exit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___cyg_profile_func_exit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___daylight(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___daylight(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___timezone(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___timezone(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___tzname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___tzname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___dcgettext(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___dcgettext(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___dgettext(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___dgettext(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___dup2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___dup2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___pipe(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___pipe(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___endmntent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___endmntent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getmntent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getmntent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___setmntent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___setmntent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___statfs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___statfs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sysctl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sysctl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___environ(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___environ(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__environ(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__environ(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___errno_location(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___errno_location(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fbufsize(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fbufsize(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___freading(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___freading(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fwriting(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fwriting(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___freadable(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___freadable(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fwritable(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fwritable(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___flbf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___flbf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ffs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ffs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___mempcpy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___mempcpy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___stpncpy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___stpncpy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___stpcpy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___stpcpy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcasecmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcasecmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strdup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strdup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fpu_control(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fpu_control(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fpurge(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fpurge(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fpending(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fpending(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fsetlocking(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fsetlocking(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__flushlbf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__flushlbf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getdelim(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getdelim(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___gmtime_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___gmtime_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___gettimeofday(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___gettimeofday(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___h_errno_location(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___h_errno_location(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isalnum_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isalnum_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isalpha_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isalpha_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isascii_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isascii_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isblank_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isblank_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iscntrl_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iscntrl_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isdigit_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isdigit_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isgraph_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isgraph_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___islower_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___islower_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isprint_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isprint_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ispunct_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ispunct_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isinf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isinf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isinff(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isinff(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isinfl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isinfl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isnan(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isnan(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isnanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isnanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isnanl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isnanl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___finitef(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___finitef(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___finitel(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___finitel(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isspace_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isspace_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isupper_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isupper_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswalnum_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswalnum_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswalpha_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswalpha_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswblank_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswblank_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswcntrl_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswcntrl_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswctype_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswctype_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswdigit_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswdigit_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswgraph_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswgraph_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswlower_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswlower_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswctype(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswctype(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswprint_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswprint_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswpunct_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswpunct_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswspace_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswspace_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswupper_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswupper_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswxdigit_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___iswxdigit_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isxdigit_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isxdigit_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcasecmp_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcasecmp_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcoll_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcoll_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strfmon_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strfmon_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strncasecmp_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strncasecmp_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ivaliduser(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ivaliduser(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___check_rhosts_file(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___check_rhosts_file(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___rcmd_errstr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___rcmd_errstr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___key_decryptsession_pk_LOCAL(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___key_decryptsession_pk_LOCAL(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___key_encryptsession_pk_LOCAL(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___key_encryptsession_pk_LOCAL(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___key_gendes_LOCAL(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___key_gendes_LOCAL(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_calloc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_calloc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_free(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_free(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_mallinfo(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_mallinfo(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_malloc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_malloc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_current_sigrtmin(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_current_sigrtmin(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_current_sigrtmax(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_current_sigrtmax(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_allocate_rtsig(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_allocate_rtsig(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_freeres(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_freeres(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_init_first(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_init_first(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_start_main(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_start_main(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_mallopt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_mallopt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_memalign(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_memalign(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_pvalloc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_pvalloc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_realloc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_realloc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_sa_len(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_sa_len(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_valloc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___libc_valloc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___lseek(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___lseek(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___open(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___open(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___read(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___read(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___malloc_initialize_hook(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___malloc_initialize_hook(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___free_hook(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___free_hook(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___malloc_hook(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___malloc_hook(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___realloc_hook(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___realloc_hook(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___malloc_initialized(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___malloc_initialized(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___default_morecore(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___default_morecore(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___morecore(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___morecore(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___memalign_hook(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___memalign_hook(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___after_morecore_hook(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___after_morecore_hook(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___mempcpy_small(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___mempcpy_small(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___stpcpy_small(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___stpcpy_small(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcspn_c1(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcspn_c1(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcspn_c2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcspn_c2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcspn_c3(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcspn_c3(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___monstartup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___monstartup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__mcleanup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__mcleanup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___profile_frequency(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___profile_frequency(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___newlocale(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___newlocale(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___duplocale(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___duplocale(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___freelocale(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___freelocale(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nl_langinfo_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nl_langinfo_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nss_configure_lookup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nss_configure_lookup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nss_database_lookup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nss_database_lookup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nss_hostname_digits_dots(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nss_hostname_digits_dots(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nss_passwd_lookup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nss_passwd_lookup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nss_group_lookup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nss_group_lookup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nss_hosts_lookup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nss_hosts_lookup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nss_next(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nss_next(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___open64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___open64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___pread64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___pread64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___pwrite64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___pwrite64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___printf_fp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___printf_fp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vfscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vfscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___rawmemchr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___rawmemchr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcasestr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcasestr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___res_randomid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___res_randomid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___res_state(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___res_state(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___res_init(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___res_init(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___res_nclose(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___res_nclose(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___res_ninit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___res_ninit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__res_hconf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__res_hconf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___rpc_thread_svc_fdset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___rpc_thread_svc_fdset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___rpc_thread_createerr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___rpc_thread_createerr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___rpc_thread_svc_pollfd(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___rpc_thread_svc_pollfd(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___rpc_thread_svc_max_pollfd(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___rpc_thread_svc_max_pollfd(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sbrk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sbrk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getpagesize(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getpagesize(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_get_priority_max(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_get_priority_max(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_get_priority_min(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_get_priority_min(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_getparam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_getparam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_getscheduler(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_getscheduler(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_setscheduler(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_setscheduler(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_yield(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_yield(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fork(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fork(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getpid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getpid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wait(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wait(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___secure_getenv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___secure_getenv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___select(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___select(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sigaction(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sigaction(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sigaddset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sigaddset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sigdelset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sigdelset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sigismember(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sigismember(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___signbit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___signbit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___signbitf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___signbitf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___signbitl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___signbitl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sigpause(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sigpause(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sysv_signal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sysv_signal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sigsuspend(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sigsuspend(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcpy_small(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcpy_small(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strspn_c1(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strspn_c1(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strspn_c2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strspn_c2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strspn_c3(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strspn_c3(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strpbrk_c2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strpbrk_c2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strerror_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strerror_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strndup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strndup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strpbrk_c3(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strpbrk_c3(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strsep_1c(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strsep_1c(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strsep_2c(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strsep_2c(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strsep_3c(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strsep_3c(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strsep_g(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strsep_g(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtod_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtod_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtof_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtof_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtold_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtold_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtod_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtod_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtof_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtof_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtol_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtol_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtold_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtold_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtoll_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtoll_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtoul_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtoul_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtok_r_1c(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtok_r_1c(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtol_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtol_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtoll_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtoll_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtoq_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtoq_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtouq_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtouq_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtoul_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtoul_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtoull_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtoull_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtoull_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtoull_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strxfrm_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strxfrm_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___toascii_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___toascii_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___tolower_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___tolower_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___toupper_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___toupper_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sysconf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sysconf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___towctrans(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___towctrans(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___towctrans_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___towctrans_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___towlower_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___towlower_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___towupper_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___towupper_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcscasecmp_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcscasecmp_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcscoll_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcscoll_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___uflow(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___uflow(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___underflow(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___underflow(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___overflow(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___overflow(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vfork(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vfork(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vsscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vsscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vsnprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vsnprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___waitpid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___waitpid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcsncasecmp_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcsncasecmp_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstod_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstod_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstof_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstof_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstol_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstol_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstold_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstold_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstod_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstod_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstof_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstof_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstold_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstold_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstol_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstol_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstoll_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstoll_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstoll_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstoll_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstoul_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstoul_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstoull_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstoull_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcsxfrm_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcsxfrm_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wctype_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wctype_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstoul_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstoul_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstoull_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstoull_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wctrans_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wctrans_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wunderflow(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wunderflow(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___xpg_basename(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___xpg_basename(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___xpg_sigpause(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___xpg_sigpause(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___xstat64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___xstat64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fxstat64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fxstat64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___lxstat64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___lxstat64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___poll(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___poll(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___xstat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___xstat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fxstat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fxstat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___lxstat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___lxstat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___xmknod(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___xmknod(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___write(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___write(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___close(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___close(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fcntl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fcntl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__authenticate(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__authenticate(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__dl_mcount_wrapper(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__dl_mcount_wrapper(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__dl_mcount_wrapper_check(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__dl_mcount_wrapper_check(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__exit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__exit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__libc_intl_domainname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__libc_intl_domainname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__longjmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__longjmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sigsetjmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sigsetjmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__setjmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__setjmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__mcount(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__mcount(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__nl_msg_cat_cntr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__nl_msg_cat_cntr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__nl_default_dirname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__nl_default_dirname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__nl_domain_bindings(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__nl_domain_bindings(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__null_auth(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__null_auth(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__obstack(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__obstack(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__obstack_allocated_p(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__obstack_allocated_p(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__obstack_begin(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__obstack_begin(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__obstack_begin_1(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__obstack_begin_1(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__obstack_free(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__obstack_free(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__obstack_memory_used(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__obstack_memory_used(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__obstack_newchunk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__obstack_newchunk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__res(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__res(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__rpc_dtablesize(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__rpc_dtablesize(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__seterr_reply(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__seterr_reply(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__sys_errlist(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__sys_errlist(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__sys_nerr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__sys_nerr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__sys_siglist(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__sys_siglist(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sys_errlist(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sys_errlist(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sys_nerr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sys_nerr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sys_siglist(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sys_siglist(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sys_sigabbrev(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sys_sigabbrev(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__tolower(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__tolower(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__toupper(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc__toupper(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_a64l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_a64l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_abort(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_abort(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_abs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_abs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_atexit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_atexit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_atof(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_atof(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_atoi(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_atoi(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_atol(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_atol(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_atoll(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_atoll(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_accept(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_accept(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_access(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_access(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_acct(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_acct(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_addmntent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_addmntent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_advance(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_advance(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_addseverity(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_addseverity(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_adjtime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_adjtime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_adjtimex(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_adjtimex(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_asctime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_asctime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_asctime_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_asctime_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_alarm(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_alarm(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_alphasort64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_alphasort64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_alphasort(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_alphasort(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_arch_prctl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_arch_prctl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___arch_prctl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___arch_prctl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_err_exit_status(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_err_exit_status(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_program_bug_address(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_program_bug_address(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_program_version(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_program_version(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_error(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_error(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_failure(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_failure(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_help(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_help(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_parse(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_parse(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_state_help(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_state_help(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_program_version_hook(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_program_version_hook(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_usage(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argp_usage(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_add(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_add(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_add_sep(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_add_sep(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_append(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_append(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_count(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_count(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_create_sep(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_create_sep(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_delete(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_delete(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_extract(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_extract(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_insert(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_insert(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_next(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_next(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_replace(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_replace(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_stringify(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_argz_stringify(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_asprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_asprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_authdes_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_authdes_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_authdes_getucred(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_authdes_getucred(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_authdes_pk_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_authdes_pk_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_authnone_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_authnone_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_authunix_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_authunix_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_authunix_create_default(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_authunix_create_default(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_backtrace(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_backtrace(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_backtrace_symbols(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_backtrace_symbols(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_backtrace_symbols_fd(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_backtrace_symbols_fd(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_basename(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_basename(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bcmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bcmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bcopy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bcopy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bzero(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bzero(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bdflush(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bdflush(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bind(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bind(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bind_textdomain_codeset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bind_textdomain_codeset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bindresvport(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bindresvport(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bindtextdomain(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bindtextdomain(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_brk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_brk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bsd_signal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bsd_signal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bsearch(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_bsearch(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_btowc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_btowc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_calloc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_calloc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cfree(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cfree(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_callrpc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_callrpc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_canonicalize_file_name(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_canonicalize_file_name(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clearenv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clearenv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_capget(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_capget(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_capset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_capset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_catclose(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_catclose(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_catgets(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_catgets(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_catopen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_catopen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cbc_crypt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cbc_crypt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clntunix_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clntunix_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cfgetispeed(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cfgetispeed(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cfgetospeed(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cfgetospeed(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cfmakeraw(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cfmakeraw(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cfsetispeed(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cfsetispeed(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cfsetospeed(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cfsetospeed(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cfsetspeed(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cfsetspeed(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_chdir(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_chdir(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_chmod(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_chmod(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_chown(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_chown(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_close(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_close(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_creat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_creat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_chflags(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_chflags(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_chroot(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_chroot(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_closelog(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_closelog(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clearerr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clearerr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clearerr_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clearerr_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnt_broadcast(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnt_broadcast(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnt_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnt_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnt_pcreateerror(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnt_pcreateerror(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnt_perrno(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnt_perrno(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnt_perror(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnt_perror(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnt_spcreateerror(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnt_spcreateerror(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnt_sperrno(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnt_sperrno(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnt_sperror(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnt_sperror(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clntraw_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clntraw_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnttcp_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clnttcp_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clntudp_bufcreate(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clntudp_bufcreate(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clntudp_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clntudp_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clock(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clock(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ctime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ctime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ctime_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ctime_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clock_getres(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clock_getres(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clock_gettime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clock_gettime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clock_settime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clock_settime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clock_getcpuclockid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clock_getcpuclockid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clock_nanosleep(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clock_nanosleep(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clone(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clone(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_create_module(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_create_module(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_closedir(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_closedir(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_confstr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_confstr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_connect(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_connect(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_copysign(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_copysign(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_copysignf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_copysignf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_copysignl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_copysignl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_creat64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_creat64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ctermid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ctermid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cuserid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_cuserid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_daemon(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_daemon(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dirname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dirname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_daylight(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_daylight(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_timezone(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_timezone(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tzname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tzname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dcgettext(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dcgettext(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dgettext(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dgettext(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gettext(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gettext(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dcngettext(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dcngettext(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dngettext(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dngettext(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_delete_module(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_delete_module(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_des_setparity(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_des_setparity(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_difftime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_difftime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dysize(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dysize(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dirfd(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dirfd(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_div(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_div(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_drand48(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_drand48(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_drand48_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_drand48_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dl_iterate_phdr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dl_iterate_phdr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dup2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dup2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ecb_crypt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ecb_crypt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ecvt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ecvt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ecvt_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ecvt_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endfsent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endfsent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endmntent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endmntent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endttyent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endttyent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endusershell(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endusershell(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endaliasent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endaliasent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endhostent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endhostent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endnetent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endnetent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endnetgrent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endnetgrent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endprotoent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endprotoent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endservent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endservent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endgrent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endgrent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endpwent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endpwent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endrpcent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endrpcent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endspent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endspent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endutent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endutent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endutxent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endutxent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_environ(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_environ(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_optarg(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_optarg(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_opterr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_opterr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_optind(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_optind(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_optopt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_optopt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_envz_add(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_envz_add(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_envz_entry(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_envz_entry(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_envz_get(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_envz_get(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_envz_merge(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_envz_merge(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_envz_remove(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_envz_remove(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_envz_strip(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_envz_strip(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_erand48(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_erand48(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_erand48_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_erand48_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_exit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_exit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_err(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_err(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_error(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_error(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_error_at_line(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_error_at_line(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_errx(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_errx(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_error_message_count(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_error_message_count(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_error_one_per_line(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_error_one_per_line(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_error_print_progname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_error_print_progname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ether_aton(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ether_aton(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ether_aton_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ether_aton_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ether_hostton(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ether_hostton(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ether_line(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ether_line(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ether_ntoa(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ether_ntoa(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ether_ntoa_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ether_ntoa_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ether_ntohost(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ether_ntohost(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_euidaccess(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_euidaccess(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_execl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_execl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_execle(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_execle(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_execlp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_execlp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_execv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_execv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_execve(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_execve(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_execvp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_execvp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fexecve(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fexecve(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fattach(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fattach(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fdetach(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fdetach(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getmsg(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getmsg(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpmsg(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpmsg(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isastream(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isastream(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putmsg(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putmsg(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putpmsg(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putpmsg(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fchdir(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fchdir(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fchmod(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fchmod(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fchown(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fchown(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fcntl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fcntl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_flock(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_flock(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fstatfs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fstatfs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts_children(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts_children(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts_close(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts_close(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fchflags(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fchflags(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fcvt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fcvt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fcvt_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fcvt_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fdatasync(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fdatasync(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fsync(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fsync(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftruncate(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftruncate(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fclose(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fclose(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fcloseall(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fcloseall(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fdopen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fdopen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_feof(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_feof(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_feof_locked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_feof_locked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_feof_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_feof_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ferror(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ferror(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ferror_locked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ferror_locked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ferror_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ferror_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fflush(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fflush(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fflush_locked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fflush_locked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fflush_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fflush_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ffs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ffs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ffsl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ffsl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ffsll(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ffsll(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetpos(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetpos(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgets(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgets(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fileno(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fileno(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fileno_locked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fileno_locked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fileno_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fileno_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetgrent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetgrent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetgrent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetgrent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetpos64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetpos64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fopen64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fopen64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_freopen64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_freopen64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fseeko(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fseeko(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fseeko64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fseeko64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fsetpos64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fsetpos64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftello(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftello(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetwc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetwc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetwc_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetwc_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetws(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetws(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetws_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetws_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetpwent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetpwent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetpwent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetpwent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgets_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgets_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputs_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputs_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetc_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetc_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetspent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetspent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetspent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetspent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_finitef(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_finitef(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_finitel(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_finitel(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_frexp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_frexp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_frexpf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_frexpf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_frexpl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_frexpl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_flockfile(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_flockfile(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftrylockfile(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftrylockfile(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_funlockfile(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_funlockfile(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fmtmsg(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fmtmsg(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fnmatch(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fnmatch(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fork(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fork(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fpathconf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fpathconf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_freeaddrinfo(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_freeaddrinfo(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fopen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fopen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fopencookie(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fopencookie(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputc_locked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputc_locked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputc_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputc_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputwc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputwc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputwc_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputwc_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputws(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputws(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputws_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fputws_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fsetpos(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fsetpos(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fread(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fread(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_freopen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_freopen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fseek(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fseek(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftell(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftell(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fwrite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fwrite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_free(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_free(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fstatfs64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fstatfs64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fstatvfs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fstatvfs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fstatvfs64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fstatvfs64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftw64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftw64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftello64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftello64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fread_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fread_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fwrite_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fwrite_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftok(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftok(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftruncate64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftruncate64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts_open(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts_open(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts_read(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts_read(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts_set(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts_set(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftw(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ftw(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fwide(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fwide(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fwprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fwprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fwscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fwscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fmemopen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fmemopen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gai_strerror(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gai_strerror(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnameinfo(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnameinfo(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_glob64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_glob64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_globfree64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_globfree64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gcvt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gcvt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_get_avphys_pages(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_get_avphys_pages(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_get_nprocs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_get_nprocs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_get_nprocs_conf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_get_nprocs_conf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_get_phys_pages(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_get_phys_pages(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_get_current_dir_name(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_get_current_dir_name(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getcwd(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getcwd(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getwd(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getwd(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_get_kernel_syms(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_get_kernel_syms(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getresgid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getresgid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getresuid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getresuid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_get_myaddress(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_get_myaddress(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpublickey(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpublickey(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsecretkey(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsecretkey(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getaddrinfo(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getaddrinfo(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdtablesize(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdtablesize(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getegid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getegid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_geteuid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_geteuid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getopt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getopt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getopt_long(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getopt_long(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getaliasbyname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getaliasbyname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getaliasbyname_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getaliasbyname_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getaliasent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getaliasent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getaliasent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getaliasent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostbyaddr_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostbyaddr_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostbyname2_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostbyname2_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getc_locked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getc_locked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getc_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getc_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getchar(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getchar(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getchar_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getchar_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdelim(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdelim(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getcontext(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getcontext(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdate(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdate(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdate_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdate_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdate_err(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdate_err(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdirentries64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdirentries64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdirentries(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdirentries(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdomainname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdomainname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostbyaddr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostbyaddr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostbyname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostbyname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getenv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getenv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsubopt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsubopt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getfsent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getfsent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getfsfile(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getfsfile(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getfsspec(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getfsspec(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getmntent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getmntent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgrent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgrent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgrent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgrent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgrgid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgrgid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgrgid_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgrgid_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgrnam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgrnam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgrnam_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgrnam_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgrouplist(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgrouplist(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgroups(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getgroups(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostbyname2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostbyname2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostbyname_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostbyname_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gethostent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetbyaddr_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetbyaddr_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetbyname_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetbyname_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetbyaddr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetbyaddr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetbyname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetbyname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getitimer(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getitimer(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gettimeofday(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gettimeofday(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gmtime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gmtime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gmtime_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gmtime_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getline(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getline(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getw(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getw(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getloadavg(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getloadavg(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getlogin(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getlogin(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getlogin_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getlogin_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutid_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutid_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutline(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutline(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getmntent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getmntent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpagesize(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpagesize(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpass(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpass(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getttyent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getttyent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getttynam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getttynam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getusershell(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getusershell(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetgrent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetgrent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetgrent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetgrent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getprotobyname_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getprotobyname_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getprotobynumber_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getprotobynumber_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getnetname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getopt_long_only(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getopt_long_only(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpgid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpgid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpgrp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpgrp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getppid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getppid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getuid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getuid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_glob(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_glob(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpeername(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpeername(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsockname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsockname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsockopt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsockopt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpriority(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpriority(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrlimit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrlimit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrusage(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrusage(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getprotobyname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getprotobyname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getprotobynumber(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getprotobynumber(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getprotoent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getprotoent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getprotoent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getprotoent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getservbyname_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getservbyname_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutxent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutxent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutxid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutxid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutxline(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutxline(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_grantpt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_grantpt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpw(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpw(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpwent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpwent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpwent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpwent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpwnam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpwnam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpwnam_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpwnam_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpwuid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpwuid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpwuid_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getpwuid_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrlimit64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrlimit64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrpcbyname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrpcbyname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrpcbyname_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrpcbyname_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrpcbynumber(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrpcbynumber(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrpcbynumber_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrpcbynumber_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrpcent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrpcent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrpcent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrpcent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrpcport(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrpcport(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gets(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gets(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getservbyname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getservbyname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getservbyport(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getservbyport(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getservbyport_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getservbyport_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getservent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getservent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getservent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getservent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getspent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getspent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getspent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getspent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getspnam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getspnam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getspnam_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getspnam_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutline_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutline_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutmpx(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutmpx(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getutmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getwc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getwc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getwc_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getwc_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getwchar(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getwchar(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getwchar_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getwchar_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_glob_pattern_p(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_glob_pattern_p(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_globfree(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_globfree(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_group_member(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_group_member(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gnu_get_libc_release(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gnu_get_libc_release(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gnu_get_libc_version(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gnu_get_libc_version(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gsignal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gsignal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gtty(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gtty(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_h_errlist(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_h_errlist(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_h_nerr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_h_nerr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_hasmntopt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_hasmntopt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_hcreate(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_hcreate(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_hcreate_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_hcreate_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_hdestroy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_hdestroy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_hdestroy_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_hdestroy_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_hsearch(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_hsearch(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_hsearch_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_hsearch_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_herror(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_herror(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_hstrerror(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_hstrerror(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_host2netname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_host2netname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_htonl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_htonl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_htons(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_htons(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iconv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iconv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iconv_open(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iconv_open(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iconv_close(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iconv_close(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_if_freenameindex(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_if_freenameindex(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_if_indextoname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_if_indextoname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_if_nameindex(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_if_nameindex(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_if_nametoindex(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_if_nametoindex(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_imaxabs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_imaxabs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_imaxdiv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_imaxdiv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_in6addr_any(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_in6addr_any(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_in6addr_loopback(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_in6addr_loopback(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_index(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_index(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_addr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_addr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_aton(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_aton(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_lnaof(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_lnaof(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_makeaddr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_makeaddr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_netof(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_netof(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_network(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_network(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_nsap_addr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_nsap_addr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_nsap_ntoa(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_nsap_ntoa(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_ntoa(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_ntoa(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_ntop(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_ntop(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_pton(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet_pton(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_innetgr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_innetgr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_init_module(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_init_module(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_initgroups(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_initgroups(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_initstate(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_initstate(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_initstate_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_initstate_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_insque(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_insque(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ioctl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ioctl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ioperm(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ioperm(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iopl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iopl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iruserok(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iruserok(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iruserok_af(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iruserok_af(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isalnum(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isalnum(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isalpha(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isalpha(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isascii(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isascii(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isblank(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isblank(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iscntrl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iscntrl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isdigit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isdigit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isgraph(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isgraph(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_islower(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_islower(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isatty(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isatty(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isfdtype(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isfdtype(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isinf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isinf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isinff(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isinff(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isinfl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isinfl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isnan(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isnan(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isnanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isnanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isnanl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isnanl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ldexp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ldexp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ldexpf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ldexpf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ldexpl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ldexpl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isprint(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isprint(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ispunct(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ispunct(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isspace(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isspace(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isupper(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isupper(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isxdigit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isxdigit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswalnum(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswalnum(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswalpha(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswalpha(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswcntrl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswcntrl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswctype(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswctype(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswdigit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswdigit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswgraph(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswgraph(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswlower(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswlower(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswblank(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswblank(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswprint(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswprint(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswpunct(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswpunct(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswspace(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswspace(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswupper(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswupper(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswxdigit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswxdigit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_jrand48(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_jrand48(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_jrand48_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_jrand48_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lfind(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lfind(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lsearch(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lsearch(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_decryptsession(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_decryptsession(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_decryptsession_pk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_decryptsession_pk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_encryptsession(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_encryptsession(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_encryptsession_pk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_encryptsession_pk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_gendes(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_gendes(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_get_conv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_get_conv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_secretkey_is_set(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_secretkey_is_set(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_setnet(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_setnet(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_setsecret(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_key_setsecret(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_kill(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_kill(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_killpg(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_killpg(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_klogctl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_klogctl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_l64a(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_l64a(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_labs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_labs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lcong48(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lcong48(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lcong48_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lcong48_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ldiv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ldiv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_llabs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_llabs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lldiv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lldiv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lrand48(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lrand48(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lrand48_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lrand48_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lchown(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lchown(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_link(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_link(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lockf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lockf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lseek(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lseek(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lckpwdf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lckpwdf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_listen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_listen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_llseek(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_llseek(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_loc1(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_loc1(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_loc2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_loc2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_locs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_locs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_localeconv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_localeconv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_localtime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_localtime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_localtime_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_localtime_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lockf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lockf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lseek64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lseek64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_longjmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_longjmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_madvise(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_madvise(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkstemp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkstemp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mktemp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mktemp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mlock(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mlock(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mlockall(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mlockall(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mmap(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mmap(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mount(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mount(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mprotect(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mprotect(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_msync(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_msync(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_makecontext(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_makecontext(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mallinfo(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mallinfo(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_malloc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_malloc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_malloc_get_state(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_malloc_get_state(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_malloc_set_state(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_malloc_set_state(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_malloc_stats(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_malloc_stats(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_malloc_trim(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_malloc_trim(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_malloc_usable_size(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_malloc_usable_size(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mallopt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mallopt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memalign(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memalign(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mprobe(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mprobe(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mtrace(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mtrace(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mallwatch(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mallwatch(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_obstack_alloc_failed_handler(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_obstack_alloc_failed_handler(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_obstack_exit_failure(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_obstack_exit_failure(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mblen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mblen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbrlen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbrlen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbrtowc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbrtowc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbsinit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbsinit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbsnrtowcs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbsnrtowcs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbsrtowcs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbsrtowcs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbstowcs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbstowcs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbtowc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbtowc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mcheck(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mcheck(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mcount(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mcount(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mrand48(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mrand48(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mrand48_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mrand48_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mcheck_check_all(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mcheck_check_all(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mcheck_pedantic(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mcheck_pedantic(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memccpy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memccpy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memchr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memchr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memcmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memcmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memcpy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memcpy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memfrob(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memfrob(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memmem(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memmem(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memmove(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memmove(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mempcpy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mempcpy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memrchr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memrchr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mincore(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mincore(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkdtemp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkdtemp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkstemp64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkstemp64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkdir(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkdir(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkfifo(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkfifo(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mktime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mktime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mmap64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mmap64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_modf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_modf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_modff(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_modff(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_modfl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_modfl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_modify_ldt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_modify_ldt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_moncontrol(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_moncontrol(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_monstartup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_monstartup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mremap(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mremap(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_msgctl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_msgctl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_msgget(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_msgget(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_msgrcv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_msgrcv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_msgsnd(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_msgsnd(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_munlock(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_munlock(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_munlockall(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_munlockall(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_munmap(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_munmap(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_muntrace(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_muntrace(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nanosleep(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nanosleep(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_netname2host(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_netname2host(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_netname2user(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_netname2user(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nfsservctl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nfsservctl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nftw(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nftw(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nftw64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nftw64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ngettext(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ngettext(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nice(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nice(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nl_langinfo(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nl_langinfo(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nrand48(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nrand48(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nrand48_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nrand48_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ntohl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ntohl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ntohs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ntohs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ntp_adjtime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ntp_adjtime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ntp_gettime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ntp_gettime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_obstack_free(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_obstack_free(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_on_exit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_on_exit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_open64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_open64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_open(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_open(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_open_memstream(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_open_memstream(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_obstack_printf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_obstack_printf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_obstack_vprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_obstack_vprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_opendir(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_opendir(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_openlog(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_openlog(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_parse_printf_format(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_parse_printf_format(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_perror(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_perror(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_printf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_printf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putw(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putw(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_passwd2des(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_passwd2des(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pathconf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pathconf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pause(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pause(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pselect(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pselect(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pclose(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pclose(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_popen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_popen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putc_locked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putc_locked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putc_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putc_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putchar(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putchar(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_personality(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_personality(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_prctl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_prctl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pipe(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pipe(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_poll(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_poll(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pivot_root(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pivot_root(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pmap_getmaps(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pmap_getmaps(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pmap_getport(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pmap_getport(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pmap_rmtcall(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pmap_rmtcall(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pmap_set(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pmap_set(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pmap_unset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pmap_unset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_fadvise(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_fadvise(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_fadvise64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_fadvise64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_fallocate(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_fallocate(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_fallocate64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_fallocate64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_madvise(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_madvise(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_memalign(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_memalign(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_openpt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_openpt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_getschedpolicy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_getschedpolicy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawn_file_actions_addclose(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawn_file_actions_addclose(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawn_file_actions_addopen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawn_file_actions_addopen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawn_file_actions_adddup2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawn_file_actions_adddup2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawn_file_actions_init(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawn_file_actions_init(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawn_file_actions_destroy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawn_file_actions_destroy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_getflags(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_getflags(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_setflags(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_setflags(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_getpgroup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_getpgroup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_setpgroup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_setpgroup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_getsigdefault(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_getsigdefault(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_setsigdefault(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_setsigdefault(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_init(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_init(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_destroy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_destroy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_setschedparam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_setschedparam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_setschedpolicy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_setschedpolicy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_getschedparam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_getschedparam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_setsigmask(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_setsigmask(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_getsigmask(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawnattr_getsigmask(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pread(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pread(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pread64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pread64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pwrite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pwrite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pwrite64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pwrite64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_printf_size(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_printf_size(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_printf_size_info(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_printf_size_info(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_profil(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_profil(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_profil_counter(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_profil_counter(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_program_invocation_name(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_program_invocation_name(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_program_invocation_short_name(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_program_invocation_short_name(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_psignal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_psignal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_destroy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_destroy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_init(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_init(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_getdetachstate(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_getdetachstate(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_setdetachstate(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_setdetachstate(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_getinheritsched(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_getinheritsched(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_setinheritsched(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_setinheritsched(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_getschedparam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_getschedparam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_setschedparam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_setschedparam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_getschedpolicy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_getschedpolicy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_setschedpolicy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_setschedpolicy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_getscope(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_getscope(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_setscope(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_attr_setscope(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_cond_broadcast(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_cond_broadcast(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_cond_destroy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_cond_destroy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_cond_init(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_cond_init(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_cond_signal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_cond_signal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_cond_wait(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_cond_wait(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_cond_timedwait(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_cond_timedwait(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_condattr_destroy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_condattr_destroy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_condattr_init(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_condattr_init(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_equal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_equal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_exit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_exit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_getschedparam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_getschedparam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_setschedparam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_setschedparam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_mutex_destroy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_mutex_destroy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_mutex_init(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_mutex_init(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_mutex_lock(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_mutex_lock(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_mutex_unlock(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_mutex_unlock(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_self(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_self(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_setcancelstate(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_setcancelstate(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_setcanceltype(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pthread_setcanceltype(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ptrace(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ptrace(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ptsname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ptsname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ptsname_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ptsname_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pututxline(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pututxline(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putchar_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putchar_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_puts(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_puts(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putenv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putenv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putgrent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putgrent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putpwent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putpwent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setpwent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setpwent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putspent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putspent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pututline(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pututline(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putwc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putwc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putwc_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putwc_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putwchar(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putwchar(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putwchar_unlocked(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putwchar_unlocked(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pvalloc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pvalloc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_qecvt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_qecvt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_qecvt_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_qecvt_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_qfcvt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_qfcvt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_qfcvt_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_qfcvt_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_qgcvt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_qgcvt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_qsort(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_qsort(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_query_module(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_query_module(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_quotactl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_quotactl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_raise(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_raise(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rand(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rand(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rand_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rand_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_random(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_random(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_random_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_random_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_realpath(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_realpath(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rpmatch(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rpmatch(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rawmemchr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rawmemchr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rcmd(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rcmd(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rexec(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rexec(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rresvport(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rresvport(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ruserok(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ruserok(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ruserpass(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ruserpass(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rcmd_af(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rcmd_af(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rexec_af(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rexec_af(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rresvport_af(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rresvport_af(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ruserok_af(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ruserok_af(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_comp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_comp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_compile_fastmap(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_compile_fastmap(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_compile_pattern(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_compile_pattern(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_exec(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_exec(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_match(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_match(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_match_2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_match_2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_search(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_search(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_search_2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_search_2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_set_registers(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_set_registers(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_set_syntax(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_set_syntax(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_max_failures(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_max_failures(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_syntax_options(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_re_syntax_options(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_read(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_read(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_readlink(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_readlink(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rmdir(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rmdir(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_readdir64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_readdir64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_readdir64_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_readdir64_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_readdir(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_readdir(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_readdir_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_readdir_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rewinddir(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rewinddir(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_readv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_readv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_reboot(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_reboot(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_remque(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_remque(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_revoke(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_revoke(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_realloc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_realloc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_recv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_recv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_recvfrom(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_recvfrom(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_recvmsg(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_recvmsg(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_regcomp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_regcomp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_regerror(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_regerror(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_regexec(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_regexec(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_regfree(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_regfree(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_register_printf_function(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_register_printf_function(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_remove(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_remove(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rename(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rename(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_registerrpc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_registerrpc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_res_init(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_res_init(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rewind(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rewind(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rexecoptions(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rexecoptions(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rindex(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rindex(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rpc_createerr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rpc_createerr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_fdset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_fdset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcauthdes_stats(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcauthdes_stats(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rtime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_rtime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sbrk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sbrk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_select(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_select(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setdomainname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setdomainname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setfsent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setfsent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sethostent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sethostent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sethostid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sethostid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sethostname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sethostname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scalbln(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scalbln(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scalblnf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scalblnf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scalblnl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scalblnl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scalbn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scalbn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scalbnf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scalbnf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scalbnl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scalbnl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scandir64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scandir64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scandir(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scandir(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_seekdir(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_seekdir(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_snprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_snprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_get_priority_max(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_get_priority_max(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_get_priority_min(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_get_priority_min(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_getparam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_getparam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_getscheduler(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_getscheduler(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_rr_get_interval(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_rr_get_interval(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_setparam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_setparam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_setscheduler(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_setscheduler(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_yield(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_yield(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setegid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setegid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_seteuid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_seteuid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setgid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setgid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_seed48(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_seed48(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_seed48_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_seed48_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setcontext(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setcontext(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setenv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setenv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setstate(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setstate(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setstate_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setstate_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_srand(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_srand(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_srand48(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_srand48(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_semctl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_semctl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_semget(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_semget(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_semop(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_semop(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_shmat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_shmat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_shmctl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_shmctl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_shmdt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_shmdt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_shmget(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_shmget(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_send(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_send(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sendmsg(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sendmsg(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sendto(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sendto(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setsockopt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setsockopt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_shutdown(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_shutdown(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_socket(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_socket(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_socketpair(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_socketpair(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sendfile(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sendfile(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setaliasent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setaliasent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setnetent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setnetent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setnetgrent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setnetgrent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setprotoent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setprotoent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setservent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setservent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setbuf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setbuf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setbuffer(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setbuffer(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setlinebuf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setlinebuf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setvbuf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setvbuf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setfsgid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setfsgid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setfsuid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setfsuid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setgrent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setgrent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setgroups(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setgroups(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setitimer(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setitimer(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_settimeofday(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_settimeofday(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_stime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_stime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strftime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strftime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strptime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strptime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setjmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setjmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setlocale(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setlocale(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setlogin(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setlogin(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setlogmask(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setlogmask(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setmntent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setmntent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setregid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setregid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setreuid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setreuid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setttyent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setttyent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setusershell(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setusershell(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sstk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sstk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setpgid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setpgid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setpgrp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setpgrp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setsid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setsid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setuid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setuid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sleep(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sleep(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sysconf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sysconf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setpriority(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setpriority(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setrlimit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setrlimit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setresgid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setresgid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setresuid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setresuid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_swapoff(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_swapoff(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_swapon(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_swapon(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sysctl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sysctl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sysinfo(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sysinfo(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setrlimit64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setrlimit64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setrpcent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setrpcent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setspent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setspent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setutent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setutent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setutxent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setutxent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sgetspent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sgetspent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sgetspent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sgetspent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigaction(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigaction(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigaddset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigaddset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigaltstack(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigaltstack(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigandset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigandset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigblock(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigblock(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigdelset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigdelset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigemptyset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigemptyset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigfillset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigfillset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_siggetmask(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_siggetmask(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_siginterrupt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_siginterrupt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigisemptyset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigisemptyset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sighold(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sighold(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigrelse(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigrelse(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigignore(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigignore(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sysv_signal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sysv_signal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigismember(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigismember(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_siglongjmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_siglongjmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_signal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_signal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigorset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigorset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigpause(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigpause(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigpending(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigpending(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigprocmask(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigprocmask(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigreturn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigreturn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigsetmask(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigsetmask(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigstack(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigstack(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigsuspend(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigsuspend(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigvec(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigvec(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigqueue(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigqueue(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigtimedwait(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigtimedwait(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigwaitinfo(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigwaitinfo(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigwait(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sigwait(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ssignal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ssignal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sockatmark(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sockatmark(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sprofil(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sprofil(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_srand48_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_srand48_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_srandom(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_srandom(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_srandom_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_srandom_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_step(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_step(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfmon(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfmon(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtod(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtod(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtol(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtol(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_statfs64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_statfs64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_statvfs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_statvfs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_statvfs64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_statvfs64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_statfs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_statfs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_symlink(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_symlink(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_stderr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_stderr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_stdin(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_stdin(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_stdout(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_stdout(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_stpcpy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_stpcpy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_stpncpy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_stpncpy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcasecmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcasecmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strchr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strchr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcoll(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcoll(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcpy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcpy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcasestr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcasestr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strverscmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strverscmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strchrnul(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strchrnul(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strverscmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strverscmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcspn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcspn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strdup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strdup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strerror(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strerror(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strerror_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strerror_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfry(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfry(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strlen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strlen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strncasecmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strncasecmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strncat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strncat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strncmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strncmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strncpy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strncpy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strndup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strndup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strnlen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strnlen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strpbrk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strpbrk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strrchr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strrchr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strsep(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strsep(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strsignal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strsignal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strspn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strspn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strstr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strstr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtok(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtok(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtok_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtok_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strxfrm(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strxfrm(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_swab(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_swab(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoimax(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoimax(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoumax(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoumax(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_swapcontext(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_swapcontext(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtold(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtold(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoll(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoll(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoq(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoq(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoul(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoul(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoull(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoull(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtouq(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtouq(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_system(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_system(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_stty(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_stty(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sync(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sync(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_syscall(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_syscall(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_syslog(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_syslog(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_exit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_exit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_getreq(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_getreq(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_getreqset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_getreqset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_register(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_register(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_run(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_run(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_getreq_common(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_getreq_common(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_getreq_poll(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_getreq_poll(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_max_pollfd(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_max_pollfd(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_pollfd(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_pollfd(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_sendreply(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_sendreply(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_unregister(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svc_unregister(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcerr_auth(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcerr_auth(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcerr_decode(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcerr_decode(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcerr_noproc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcerr_noproc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcerr_noprog(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcerr_noprog(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcerr_progvers(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcerr_progvers(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcerr_systemerr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcerr_systemerr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcerr_weakauth(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcerr_weakauth(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcfd_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcfd_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcraw_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcraw_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svctcp_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svctcp_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcudp_bufcreate(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcudp_bufcreate(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcudp_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcudp_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcudp_enablecache(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcudp_enablecache(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcunix_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcunix_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcunixfd_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_svcunixfd_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_swprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_swprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_swscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_swscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcdrain(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcdrain(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcflow(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcflow(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcflush(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcflush(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcgetattr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcgetattr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcgetpgrp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcgetpgrp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcsendbreak(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcsendbreak(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcsetattr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcsetattr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcgetsid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcgetsid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcsetpgrp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tcsetpgrp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tdelete(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tdelete(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tfind(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tfind(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_truncate(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_truncate(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tsearch(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tsearch(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ttyslot(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ttyslot(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_twalk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_twalk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tdestroy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tdestroy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_truncate64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_truncate64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_telldir(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_telldir(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tempnam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tempnam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tmpfile(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tmpfile(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tmpnam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tmpnam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tmpnam_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tmpnam_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_textdomain(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_textdomain(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_time(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_time(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_timegm(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_timegm(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_timelocal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_timelocal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tzset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tzset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_times(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_times(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tmpfile64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tmpfile64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_toascii(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_toascii(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tolower(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tolower(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_toupper(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_toupper(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_towctrans(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_towctrans(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_towlower(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_towlower(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_towupper(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_towupper(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tr_break(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tr_break(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ttyname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ttyname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ttyname_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ttyname_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ualarm(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ualarm(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_usleep(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_usleep(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ustat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ustat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_utimes(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_utimes(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ulckpwdf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ulckpwdf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ulimit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ulimit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_umask(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_umask(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_unlink(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_unlink(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_utime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_utime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_umount2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_umount2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_umount(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_umount(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_uselib(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_uselib(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_uname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_uname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ungetc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ungetc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ungetwc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ungetwc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_unlockpt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_unlockpt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_updwtmpx(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_updwtmpx(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_utmpxname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_utmpxname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_unsetenv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_unsetenv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_updwtmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_updwtmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_utmpname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_utmpname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_user2netname(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_user2netname(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_valloc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_valloc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vasprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vasprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vdprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vdprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vsnprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vsnprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vsprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vsprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vsscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vsscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_verr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_verr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_verrx(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_verrx(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vhangup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vhangup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vsyslog(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vsyslog(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vwarn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vwarn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vwarnx(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vwarnx(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_versionsort(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_versionsort(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_versionsort64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_versionsort64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vfork(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vfork(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vfprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vfprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vfscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vfscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vfwprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vfwprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vswprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vswprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vwprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vwprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vfwscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vfwscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vswscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vswscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vwscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vwscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vlimit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vlimit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vtimes(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vtimes(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wait(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wait(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wait3(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wait3(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wait4(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wait4(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_waitpid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_waitpid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_waitid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_waitid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wordexp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wordexp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wordfree(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wordfree(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_warn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_warn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_warnx(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_warnx(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcpcpy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcpcpy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcpncpy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcpncpy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcrtomb(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcrtomb(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcscat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcscat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcschr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcschr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcscmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcscmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcscoll(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcscoll(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcscasecmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcscasecmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsncasecmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsncasecmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsnlen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsnlen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoll(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoll(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcschrnul(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcschrnul(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wmempcpy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wmempcpy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcscpy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcscpy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcscspn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcscspn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsdup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsdup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcslen(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcslen(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsncat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsncat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsncmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsncmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsftime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsftime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsncpy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsncpy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsnrtombs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsnrtombs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcspbrk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcspbrk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsrchr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsrchr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsrtombs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsrtombs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsspn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsspn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsstr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsstr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstod(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstod(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstok(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstok(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstol(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstol(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstold(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstold(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoq(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoq(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoul(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoul(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoimax(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoimax(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoumax(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoumax(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoull(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoull(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcswcs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcswcs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wmemrtombs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wmemrtombs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wmemrtowcs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wmemrtowcs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstombs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstombs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wctomb(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wctomb(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstouq(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstouq(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcswidth(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcswidth(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsxfrm(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsxfrm(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wctob(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wctob(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wctrans(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wctrans(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wctype(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wctype(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcwidth(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcwidth(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wmemchr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wmemchr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wmemcmp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wmemcmp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wmemcpy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wmemcpy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wmemmove(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wmemmove(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wmemset(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wmemset(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wprintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wprintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_write(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_write(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_writev(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_writev(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdecrypt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdecrypt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_authdes_cred(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_authdes_cred(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_authdes_verf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_authdes_verf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_accepted_reply(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_accepted_reply(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_array(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_array(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_authunix_parms(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_authunix_parms(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_bool(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_bool(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_bytes(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_bytes(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_callhdr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_callhdr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_callmsg(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_callmsg(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_char(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_char(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_cryptkeyarg(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_cryptkeyarg(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_cryptkeyarg2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_cryptkeyarg2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_cryptkeyres(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_cryptkeyres(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_des_block(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_des_block(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_double(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_double(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_enum(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_enum(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_float(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_float(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_free(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_free(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_int(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_int(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_key_netstarg(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_key_netstarg(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_key_netstres(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_key_netstres(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_keybuf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_keybuf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_getcredres(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_getcredres(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_int16_t(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_int16_t(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_int32_t(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_int32_t(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_int8_t(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_int8_t(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_hyper(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_hyper(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_u_hyper(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_u_hyper(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_longlong_t(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_longlong_t(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_u_longlong_t(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_u_longlong_t(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_int64_t(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_int64_t(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_uint64_t(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_uint64_t(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_keystatus(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_keystatus(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_long(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_long(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_netobj(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_netobj(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_opaque(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_opaque(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_opaque_auth(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_opaque_auth(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_netnamestr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_netnamestr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_sizeof(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_sizeof(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_pmap(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_pmap(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_pmaplist(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_pmaplist(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_pointer(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_pointer(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_reference(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_reference(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_rejected_reply(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_rejected_reply(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_replymsg(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_replymsg(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_rmtcall_args(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_rmtcall_args(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_rmtcallres(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_rmtcallres(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_short(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_short(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_string(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_string(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_u_char(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_u_char(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_u_int(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_u_int(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_u_long(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_u_long(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_u_short(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_u_short(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_union(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_union(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_vector(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_vector(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_uint16_t(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_uint16_t(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_uint32_t(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_uint32_t(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_uint8_t(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_uint8_t(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_unixcred(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_unixcred(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_void(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_void(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_wrapstring(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_wrapstring(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdrmem_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdrmem_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdrrec_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdrrec_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdrrec_endofrecord(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdrrec_endofrecord(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdrrec_eof(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdrrec_eof(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdrrec_skiprecord(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdrrec_skiprecord(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdrstdio_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdrstdio_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xencrypt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xencrypt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xprt_register(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xprt_register(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xprt_unregister(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xprt_unregister(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_2_6)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nanosleep(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___nanosleep(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype_b_loc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype_b_loc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype_tolower_loc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype_tolower_loc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype_toupper_loc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ctype_toupper_loc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strftime_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strftime_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcsftime_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcsftime_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___uselocale(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___uselocale(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetxattr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetxattr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_flistxattr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_flistxattr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fremovexattr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fremovexattr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fsetxattr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fsetxattr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_freeifaddrs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_freeifaddrs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_futimes(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_futimes(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getifaddrs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getifaddrs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getxattr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getxattr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isalnum_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isalnum_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isalpha_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isalpha_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isascii_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isascii_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isblank_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isblank_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iscntrl_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iscntrl_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isctype(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isctype(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isctype(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isctype(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isdigit_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isdigit_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isgraph_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isgraph_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_islower_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_islower_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isprint_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isprint_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ispunct_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ispunct_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isspace_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isspace_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isupper_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isupper_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswalnum_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswalnum_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswalpha_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswalpha_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswblank_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswblank_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswcntrl_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswcntrl_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswctype_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswctype_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswdigit_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswdigit_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswgraph_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswgraph_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswlower_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswlower_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswprint_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswprint_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswpunct_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswpunct_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswspace_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswspace_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswupper_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswupper_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswxdigit_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_iswxdigit_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isxdigit_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_isxdigit_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcasecmp_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcasecmp_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcoll_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strcoll_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfmon_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfmon_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strncasecmp_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strncasecmp_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lgetxattr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lgetxattr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_llistxattr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_llistxattr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lremovexattr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lremovexattr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lsetxattr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lsetxattr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_listxattr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_listxattr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lutimes(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lutimes(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_newlocale(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_newlocale(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_duplocale(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_duplocale(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_freelocale(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_freelocale(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_uselocale(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_uselocale(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_readahead(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_readahead(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_removexattr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_removexattr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sendfile64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sendfile64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setxattr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setxattr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strftime_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strftime_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtod_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtod_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtol_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtol_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtold_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtold_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoul_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoul_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strxfrm_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strxfrm_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_toascii_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_toascii_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tolower_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tolower_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_toupper_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_toupper_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_towctrans_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_towctrans_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_towlower_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_towlower_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_towupper_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_towupper_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcscasecmp_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcscasecmp_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcscoll_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcscoll_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsftime_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsftime_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsncasecmp_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsncasecmp_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstod_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstod_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstol_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstol_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstold_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstold_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoll_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoll_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoul_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoul_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoull_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstoull_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsxfrm_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcsxfrm_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wctype_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wctype_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wctrans_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wctrans_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nl_langinfo_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_nl_langinfo_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_2)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___register_atfork(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___register_atfork(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_2)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_epoll_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_epoll_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_2)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_epoll_ctl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_epoll_ctl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_2)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_epoll_wait(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_epoll_wait(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_2)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lchmod(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_lchmod(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_2)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strptime_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strptime_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gnu_dev_major(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gnu_dev_major(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gnu_dev_minor(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gnu_dev_minor(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gnu_dev_makedev(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gnu_dev_makedev(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_option_alloc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_option_alloc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_option_next(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_option_next(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_option_find(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_option_find(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_option_space(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_option_space(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_option_init(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_option_init(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_option_append(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_option_append(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_remap_file_pages(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_remap_file_pages(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_getaffinity(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_getaffinity(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_setaffinity(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_setaffinity(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_semtimedop(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_semtimedop(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoll_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoll_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_3)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoull_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtoull_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___chk_fail(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___chk_fail(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___gets_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___gets_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___memcpy_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___memcpy_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___memmove_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___memmove_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___mempcpy_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___mempcpy_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___memset_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___memset_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___stpcpy_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___stpcpy_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___printf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___printf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vfprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vfprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vsprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vsprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___snprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___snprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vsnprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vsnprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcat_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcat_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcpy_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strcpy_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strncat_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strncat_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strncpy_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strncpy_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___xpg_strerror_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___xpg_strerror_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getipv4sourcefilter(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getipv4sourcefilter(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setipv4sourcefilter(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setipv4sourcefilter(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsourcefilter(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsourcefilter(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setsourcefilter(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setsourcefilter(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_quad_t(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_quad_t(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_3_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_u_quad_t(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_xdr_u_quad_t(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___confstr_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___confstr_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getgroups_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getgroups_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ttyname_r_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ttyname_r_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fgets_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fgets_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fgets_unlocked_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fgets_unlocked_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fxstatat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fxstatat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fxstatat64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fxstatat64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___gethostname_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___gethostname_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getdomainname_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getdomainname_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcrtomb_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcrtomb_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___mbsnrtowcs_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___mbsnrtowcs_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getlogin_r_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getlogin_r_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ptsname_r_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ptsname_r_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___read_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___read_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___pread_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___pread_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___pread64_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___pread64_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___readlink_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___readlink_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getcwd_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getcwd_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getwd_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getwd_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___realpath_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___realpath_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wctomb_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wctomb_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___recv_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___recv_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___recvfrom_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___recvfrom_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___stack_chk_fail(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___stack_chk_fail(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___stpncpy_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___stpncpy_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___swprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___swprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vswprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vswprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fwprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fwprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___syslog_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___syslog_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vsyslog_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vsyslog_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vwprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vwprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vfwprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vfwprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fgetws_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fgetws_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fgetws_unlocked_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fgetws_unlocked_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcscpy_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcscpy_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wmemcpy_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wmemcpy_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wmemmove_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wmemmove_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wmempcpy_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wmempcpy_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcpcpy_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcpcpy_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcsncpy_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcsncpy_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcscat_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcscat_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcsncat_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcsncat_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wmemset_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wmemset_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcpncpy_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcpncpy_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcsnrtombs_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcsnrtombs_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___mbsrtowcs_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___mbsrtowcs_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcsrtombs_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcsrtombs_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___mbstowcs_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___mbstowcs_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstombs_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstombs_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_eaccess(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_eaccess(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_faccessat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_faccessat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fchmodat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fchmodat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fchownat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fchownat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fdopendir(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fdopendir(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_futimesat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_futimesat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inotify_init(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inotify_init(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inotify_add_watch(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inotify_add_watch(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inotify_rm_watch(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inotify_rm_watch(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_linkat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_linkat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkdirat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkdirat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkfifoat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkfifoat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___xmknodat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___xmknodat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_open_wmemstream(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_open_wmemstream(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_openat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_openat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_openat64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_openat64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ppoll(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ppoll(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_readlinkat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_readlinkat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_renameat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_renameat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_symlinkat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_symlinkat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_unlinkat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_unlinkat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_4)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_unshare(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_unshare(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___readlinkat_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___readlinkat_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_opt_init(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_opt_init(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_opt_append(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_opt_append(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_opt_finish(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_opt_finish(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_opt_set_val(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_opt_set_val(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_opt_next(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_opt_next(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_opt_find(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_opt_find(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_opt_get_val(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_opt_get_val(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_rth_segments(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_rth_segments(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_rth_getaddr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_rth_getaddr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_rth_space(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_rth_space(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_rth_init(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_rth_init(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_rth_add(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_rth_add(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_rth_reverse(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inet6_rth_reverse(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_splice(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_splice(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tee(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tee(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vmsplice(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_vmsplice(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_6)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_cpucount(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_cpucount(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_6)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_epoll_pwait(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_epoll_pwait(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_6)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sync_file_range(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sync_file_range(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_6)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_getcpu(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sched_getcpu(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_6)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strerror_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strerror_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_6)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_utimensat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_utimensat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_6)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_futimens(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_futimens(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fread_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fread_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fread_unlocked_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fread_unlocked_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_fwscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_fwscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_swscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_swscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_vfwscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_vfwscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_vswscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_vswscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_scanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_scanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_vscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_vscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_fscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_fscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_vfscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_vfscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_sscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_sscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_vsscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_vsscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_vwscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_vwscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_wscanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___isoc99_wscanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___open_2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___open_2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___open64_2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___open64_2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___openat_2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___openat_2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___openat64_2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___openat64_2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_cpualloc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_cpualloc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_cpufree(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___sched_cpufree(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_eventfd(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_eventfd(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_eventfd_read(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_eventfd_read(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_eventfd_write(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_eventfd_write(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_signalfd(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_signalfd(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkostemp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkostemp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_7)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkostemp64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkostemp64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_8)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___asprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___asprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_8)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vasprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vasprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_8)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___dprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___dprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_8)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vdprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___vdprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_8)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___obstack_printf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___obstack_printf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_8)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___obstack_vprintf_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___obstack_vprintf_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_8)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_qsort_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_qsort_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_8)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_timerfd_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_timerfd_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_8)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_timerfd_settime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_timerfd_settime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_8)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_timerfd_gettime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_timerfd_gettime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_9)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dup3(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_dup3(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_9)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pipe2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pipe2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_9)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_epoll_create1(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_epoll_create1(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_9)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inotify_init1(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_inotify_init1(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___posix_getopt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___posix_getopt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_accept4(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_accept4(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endsgent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_endsgent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fallocate64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fallocate64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fallocate(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fallocate(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetsgent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetsgent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetsgent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fgetsgent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsgent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsgent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsgent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsgent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsgnam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsgnam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsgnam_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getsgnam_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_malloc_info(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_malloc_info(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_preadv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_preadv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_preadv64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_preadv64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pwritev(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pwritev(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pwritev64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pwritev64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_psiginfo(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_psiginfo(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putsgent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_putsgent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_quick_exit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_quick_exit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___cxa_at_quick_exit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___cxa_at_quick_exit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_register_printf_modifier(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_register_printf_modifier(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_register_printf_type(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_register_printf_type(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_register_printf_specifier(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_register_printf_specifier(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setsgent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setsgent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sgetsgent(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sgetsgent(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_10)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sgetsgent_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sgetsgent_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_11)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___longjmp_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___longjmp_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_11)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_execvpe(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_execvpe(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_11)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkstemps(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkstemps(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_11)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkstemps64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkstemps64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_11)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkostemps(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkostemps(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_11)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkostemps64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mkostemps64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_12)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ntp_gettimex(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_ntp_gettimex(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_12)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_recvmmsg(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_recvmmsg(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_13)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fentry__(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fentry__(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_13)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fanotify_init(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fanotify_init(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_13)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fanotify_mark(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fanotify_mark(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_13)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_prlimit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_prlimit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_13)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_prlimit64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_prlimit64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_14)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clock_adjtime(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_clock_adjtime(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_14)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_name_to_handle_at(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_name_to_handle_at(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_14)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_open_by_handle_at(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_open_by_handle_at(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_14)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sendmmsg(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_sendmmsg(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_14)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setns(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_setns(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_14)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_syncfs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_syncfs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fdelt_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fdelt_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fdelt_warn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___fdelt_warn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_process_vm_readv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_process_vm_readv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_process_vm_writev(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_process_vm_writev(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scandirat(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scandirat(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scandirat64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_scandirat64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_16)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getauxval(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___getauxval(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_16)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getauxval(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getauxval(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_16)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___poll_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___poll_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_16)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ppoll_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___ppoll_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_16)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_aligned_alloc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_aligned_alloc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_16)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_c16rtomb(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_c16rtomb(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_16)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_c32rtomb(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_c32rtomb(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_16)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbrtoc16(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbrtoc16(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_16)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbrtoc32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mbrtoc32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_16)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_timespec_get(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_timespec_get(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_17)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_secure_getenv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_secure_getenv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_18)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___cxa_thread_atexit_impl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___cxa_thread_atexit_impl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_23)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts64_children(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts64_children(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_23)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts64_close(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts64_close(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_23)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts64_open(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts64_open(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_23)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts64_read(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts64_read(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_23)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts64_set(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fts64_set(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___explicit_bzero_chk(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___explicit_bzero_chk(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_explicit_bzero(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_explicit_bzero(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrandom(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getrandom(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getentropy(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getentropy(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfromd(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfromd(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfromf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfromf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfroml(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfroml(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtof128_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___strtof128_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstof128_internal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc___wcstof128_internal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_preadv2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_preadv2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_preadv64v2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_preadv64v2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pwritev2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pwritev2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pwritev64v2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pwritev64v2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_reallocarray(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_reallocarray(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfromf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfromf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof128_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof128_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof128_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof128_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_copy_file_range(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_copy_file_range(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memfd_create(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_memfd_create(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mlock2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_mlock2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pkey_alloc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pkey_alloc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pkey_free(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pkey_free(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pkey_set(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pkey_set(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pkey_get(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pkey_get(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pkey_mprotect(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_pkey_mprotect(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfromf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfromf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfromf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfromf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfromf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfromf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfromf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strfromf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof32_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof32_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof64_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof64_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof32x_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof32x_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof64x_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_strtof64x_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof32_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof32_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof64_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof64_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof32x_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof32x_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof64x_l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_wcstof64x_l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fcntl64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_fcntl64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_renameat2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_renameat2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_statx(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_statx(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_thrd_current(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_thrd_current(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_thrd_equal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_thrd_equal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_thrd_sleep(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_thrd_sleep(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_thrd_yield(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_thrd_yield(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_29)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getcpu(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getcpu(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_29)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawn_file_actions_addchdir_np(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawn_file_actions_addchdir_np(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_29)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawn_file_actions_addfchdir_np(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_posix_spawn_file_actions_addfchdir_np(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_30)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdents64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_getdents64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_30)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gettid(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_gettid(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_30)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tgkill(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_tgkill(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libc, GLIBC_2_30)
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_twalk_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libc_twalk_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm__LIB_VERSION(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm__LIB_VERSION(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_signgam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_signgam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___clog10(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___clog10(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___clog10f(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___clog10f(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___clog10l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___clog10l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___finitef(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___finitef(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___finitel(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___finitel(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___fpclassify(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___fpclassify(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___fpclassifyf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___fpclassifyf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___fpclassifyl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___fpclassifyl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___signbit(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___signbit(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___signbitf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___signbitf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___signbitl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___signbitl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acos(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acos(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acosf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acosf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acosl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acosl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acosh(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acosh(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acoshf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acoshf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acoshl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acoshl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asin(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asin(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinh(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinh(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinhf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinhf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinhl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinhl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan2f(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan2f(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan2l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan2l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanh(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanh(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanhf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanhf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanhl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanhl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cabs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cabs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cabsf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cabsf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cabsl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cabsl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacos(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacos(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacosf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacosf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacosl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacosl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacosh(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacosh(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacoshf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacoshf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacoshl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacoshl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_carg(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_carg(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cargf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cargf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cargl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cargl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casin(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casin(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinh(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinh(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinhf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinhf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinhl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinhl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catan(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catan(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanh(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanh(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanhf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanhf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanhl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanhl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cbrt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cbrt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cbrtf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cbrtf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cbrtl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cbrtl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccos(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccos(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccosf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccosf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccosl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccosl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccosh(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccosh(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccoshf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccoshf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccoshl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccoshl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ceil(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ceil(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ceilf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ceilf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ceill(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ceill(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cexp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cexp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cexpf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cexpf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cexpl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cexpl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cimag(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cimag(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cimagf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cimagf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cimagl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cimagl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog10(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog10(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog10f(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog10f(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog10l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog10l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clogf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clogf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clogl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clogl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_conj(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_conj(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_conjf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_conjf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_conjl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_conjl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_copysign(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_copysign(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_copysignf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_copysignf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_copysignl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_copysignl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cos(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cos(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cosf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cosf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cosl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cosl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_coshf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_coshf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cosh(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cosh(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_coshl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_coshl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cpow(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cpow(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cpowf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cpowf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cpowl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cpowl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cproj(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cproj(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cprojf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cprojf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cprojl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cprojl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_creal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_creal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_crealf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_crealf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_creall(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_creall(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csin(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csin(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinh(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinh(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinhf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinhf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinhl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinhl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csqrt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csqrt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csqrtf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csqrtf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csqrtl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csqrtl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctan(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctan(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanh(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanh(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanhf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanhf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanhl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanhl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_drem(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_drem(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_dremf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_dremf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_dreml(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_dreml(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erff(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erff(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfcf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfcf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfcl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfcl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp10(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp10(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp10f(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp10f(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp10l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp10l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp2f(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp2f(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp2l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp2l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expm1(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expm1(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expm1f(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expm1f(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expm1l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expm1l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fabs(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fabs(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fabsf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fabsf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fabsl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fabsl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdim(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdim(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdimf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdimf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdiml(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdiml(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_feclearexcept(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_feclearexcept(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fegetenv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fegetenv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fegetexceptflag(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fegetexceptflag(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_feraiseexcept(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_feraiseexcept(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_feenableexcept(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_feenableexcept(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fedisableexcept(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fedisableexcept(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fegetexcept(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fegetexcept(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fegetround(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fegetround(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_feholdexcept(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_feholdexcept(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fesetenv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fesetenv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fesetexceptflag(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fesetexceptflag(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fesetround(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fesetround(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_feupdateenv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_feupdateenv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fetestexcept(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fetestexcept(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_finitef(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_finitef(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_finitel(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_finitel(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_floor(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_floor(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_floorf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_floorf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_floorl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_floorl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fma(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fma(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmax(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmax(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmin(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmin(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmod(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmod(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmodf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmodf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmodl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmodl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_frexp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_frexp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_frexpf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_frexpf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_frexpl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_frexpl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_gamma(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_gamma(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_gammaf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_gammaf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_gammal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_gammal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_gamma_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_gamma_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_gammaf_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_gammaf_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_gammal_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_gammal_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_hypot(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_hypot(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_hypotf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_hypotf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_hypotl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_hypotl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ilogb(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ilogb(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ilogbf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ilogbf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ilogbl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ilogbl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j0(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j0(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j0f(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j0f(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j0l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j0l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j1(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j1(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j1f(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j1f(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j1l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j1l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_jn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_jn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_jnf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_jnf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_jnl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_jnl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ldexp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ldexp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ldexpf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ldexpf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ldexpl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ldexpl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgamma(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgamma(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgamma_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgamma_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammal_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammal_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llrint(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llrint(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llrintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llrintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llrintl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llrintl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llround(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llround(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llroundf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llroundf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llroundl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llroundl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log10(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log10(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log10f(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log10f(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log10l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log10l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log1p(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log1p(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log1pf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log1pf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log1pl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log1pl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log2(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log2(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log2f(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log2f(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log2l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log2l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logb(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logb(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logbf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logbf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logbl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logbl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lrint(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lrint(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lrintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lrintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lrintl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lrintl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lround(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lround(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lroundf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lroundf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lroundl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lroundl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_matherr(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_matherr(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_modf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_modf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_modff(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_modff(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_modfl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_modfl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nan(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nan(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nanl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nanl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nearbyint(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nearbyint(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nearbyintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nearbyintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nearbyintl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nearbyintl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextafter(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextafter(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextafterf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextafterf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextafterl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextafterl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nexttoward(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nexttoward(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nexttowardf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nexttowardf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nexttowardl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nexttowardl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_pow10(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_pow10(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_pow10f(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_pow10f(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_pow10l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_pow10l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_pow(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_pow(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_powf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_powf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_powl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_powl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remainder(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remainder(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remainderf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remainderf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remainderl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remainderl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remquo(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remquo(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remquof(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remquof(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remquol(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remquol(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_rint(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_rint(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_rintf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_rintf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_rintl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_rintl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_round(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_round(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalb(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalb(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbln(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbln(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalblnf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalblnf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalblnl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalblnl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbnf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbnf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbnl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbnl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_significand(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_significand(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_significandf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_significandf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_significandl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_significandl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sin(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sin(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sincos(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sincos(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sincosf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sincosf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sincosl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sincosl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinh(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinh(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinhf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinhf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinhl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinhl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sqrt(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sqrt(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sqrtf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sqrtf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sqrtl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sqrtl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tan(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tan(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanh(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanh(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanhf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanhf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanhl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanhl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tgamma(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tgamma(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tgammaf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tgammaf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tgammal(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tgammal(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_trunc(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_trunc(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_truncf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_truncf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_truncl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_truncl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y0(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y0(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y0f(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y0f(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y0l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y0l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y1(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y1(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y1f(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y1f(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y1l(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y1l(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_yn(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_yn(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ynf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ynf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_2_5)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ynl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ynl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___acos_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___acos_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___acosf_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___acosf_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___acosl_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___acosl_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___acosh_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___acosh_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___acoshf_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___acoshf_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___acoshl_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___acoshl_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___asin_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___asin_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___asinf_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___asinf_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___asinl_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___asinl_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___atan2_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___atan2_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___atan2f_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___atan2f_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___atan2l_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___atan2l_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___atanh_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___atanh_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___atanhf_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___atanhf_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___atanhl_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___atanhl_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___cosh_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___cosh_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___coshf_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___coshf_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___coshl_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___coshl_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp10_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp10_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp10f_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp10f_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp10l_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp10l_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp2_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp2_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp2f_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp2f_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp2l_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp2l_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___expf_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___expf_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___expl_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___expl_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___fmod_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___fmod_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___fmodf_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___fmodf_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___fmodl_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___fmodl_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___gamma_r_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___gamma_r_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___gammaf_r_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___gammaf_r_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___gammal_r_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___gammal_r_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___hypot_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___hypot_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___hypotf_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___hypotf_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___hypotl_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___hypotl_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___j0_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___j0_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___j0f_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___j0f_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___j0l_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___j0l_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___j1_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___j1_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___j1f_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___j1f_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___j1l_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___j1l_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___jn_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___jn_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___jnf_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___jnf_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___jnl_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___jnl_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___lgamma_r_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___lgamma_r_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___lgammaf_r_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___lgammaf_r_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___lgammal_r_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___lgammal_r_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log10_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log10_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log10f_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log10f_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log10l_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log10l_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log2_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log2_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log2f_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log2f_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log2l_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log2l_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___logf_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___logf_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___logl_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___logl_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___pow_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___pow_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___powf_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___powf_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___powl_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___powl_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___remainder_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___remainder_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___remainderf_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___remainderf_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___remainderl_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___remainderl_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___scalb_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___scalb_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___scalbf_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___scalbf_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___scalbl_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___scalbl_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___sinh_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___sinh_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___sinhf_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___sinhf_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___sinhl_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___sinhl_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___sqrt_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___sqrt_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___sqrtf_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___sqrtf_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___sqrtl_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___sqrtl_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___y0_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___y0_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___y0f_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___y0f_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___y0l_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___y0l_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___y1_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___y1_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___y1f_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___y1f_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___y1l_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___y1l_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___yn_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___yn_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___ynf_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___ynf_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_15)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___ynl_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___ynl_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_18)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___issignaling(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___issignaling(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_18)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___issignalingf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___issignalingf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_18)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___issignalingl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___issignalingl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_23)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___signgam(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___signgam(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_24)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextdown(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextdown(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_24)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextdownf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextdownf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_24)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextdownl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextdownl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_24)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextup(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextup(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_24)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextupf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextupf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_24)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextupl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextupl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___iscanonicall(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___iscanonicall(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___iseqsigf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___iseqsigf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___iseqsig(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___iseqsig(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___iseqsigl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___iseqsigl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_canonicalize(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_canonicalize(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_canonicalizef(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_canonicalizef(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_canonicalizel(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_canonicalizel(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fesetexcept(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fesetexcept(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fetestexceptflag(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fetestexceptflag(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fegetmode(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fegetmode(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fesetmode(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fesetmode(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxmag(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxmag(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxmagf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxmagf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxmagl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxmagl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminmag(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminmag(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminmagf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminmagf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminmagl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminmagl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfp(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfp(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpx(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpx(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpxf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpxf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpxl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpxl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpx(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpx(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpxf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpxf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpxl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpxl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_getpayload(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_getpayload(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_getpayloadf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_getpayloadf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_getpayloadl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_getpayloadl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llogb(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llogb(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llogbf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llogbf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llogbl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llogbl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundeven(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundeven(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundevenf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundevenf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundevenl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundevenl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayload(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayload(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadsig(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadsig(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadsigf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadsigf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadsigl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadsigl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalorder(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalorder(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalorderf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalorderf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalorderl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalorderl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalordermag(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalordermag(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalordermagf(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalordermagf(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_25)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalordermagl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalordermagl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___acosf128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___acosf128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___acoshf128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___acoshf128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___asinf128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___asinf128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___atan2f128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___atan2f128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___atanhf128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___atanhf128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___coshf128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___coshf128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp10f128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp10f128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp2f128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___exp2f128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___expf128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___expf128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___finitef128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___finitef128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___fmodf128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___fmodf128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___fpclassifyf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___fpclassifyf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___gammaf128_r_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___gammaf128_r_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___hypotf128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___hypotf128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___iseqsigf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___iseqsigf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___isinff128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___isinff128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___isnanf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___isnanf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___issignalingf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___issignalingf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___j0f128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___j0f128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___j1f128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___j1f128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___jnf128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___jnf128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___lgammaf128_r_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___lgammaf128_r_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log10f128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log10f128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log2f128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___log2f128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___logf128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___logf128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___powf128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___powf128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___remainderf128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___remainderf128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___signbitf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___signbitf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___sinhf128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___sinhf128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___sqrtf128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___sqrtf128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___y0f128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___y0f128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___y1f128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___y1f128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___ynf128_finite(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm___ynf128_finite(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acosf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acosf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acoshf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acoshf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinhf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinhf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan2f128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan2f128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanhf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanhf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cabsf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cabsf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacosf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacosf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacoshf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacoshf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_canonicalizef128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_canonicalizef128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cargf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cargf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinhf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinhf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanhf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanhf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cbrtf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cbrtf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccosf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccosf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccoshf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccoshf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ceilf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ceilf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cexpf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cexpf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cimagf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cimagf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog10f128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog10f128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clogf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clogf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_conjf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_conjf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_copysignf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_copysignf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cosf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cosf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_coshf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_coshf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cpowf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cpowf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cprojf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cprojf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_crealf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_crealf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinhf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinhf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csqrtf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csqrtf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanhf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanhf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfcf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfcf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erff128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erff128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp10f128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp10f128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp2f128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp2f128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expm1f128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expm1f128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fabsf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fabsf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdimf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdimf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_floorf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_floorf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxmagf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxmagf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminmagf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminmagf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmodf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmodf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_frexpf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_frexpf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpxf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpxf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_getpayloadf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_getpayloadf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_hypotf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_hypotf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ilogbf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ilogbf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j0f128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j0f128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j1f128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j1f128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_jnf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_jnf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ldexpf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ldexpf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf128_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf128_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llogbf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llogbf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llrintf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llrintf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llroundf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llroundf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log10f128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log10f128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log1pf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log1pf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log2f128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log2f128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logbf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logbf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lrintf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lrintf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lroundf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lroundf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_modff128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_modff128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nanf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nanf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nearbyintf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nearbyintf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextafterf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextafterf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextdownf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextdownf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextupf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextupf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_powf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_powf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remainderf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remainderf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remquof128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remquof128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_rintf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_rintf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundevenf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundevenf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalblnf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalblnf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbnf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbnf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadsigf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadsigf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sincosf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sincosf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinhf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinhf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sqrtf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sqrtf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanhf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanhf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tgammaf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tgammaf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalorderf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalorderf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalordermagf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalordermagf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_truncf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_truncf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpxf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpxf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y0f128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y0f128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y1f128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y1f128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_26)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ynf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ynf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acosf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acosf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acosf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acosf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acosf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acosf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acosf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acosf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acoshf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acoshf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acoshf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acoshf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acoshf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acoshf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acoshf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_acoshf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinhf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinhf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinhf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinhf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinhf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinhf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinhf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_asinhf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan2f32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan2f32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan2f64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan2f64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan2f32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan2f32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan2f64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atan2f64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanhf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanhf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanhf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanhf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanhf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanhf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanhf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_atanhf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cabsf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cabsf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cabsf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cabsf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cabsf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cabsf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cabsf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cabsf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacosf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacosf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacosf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacosf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacosf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacosf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacosf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacosf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacoshf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacoshf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacoshf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacoshf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacoshf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacoshf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacoshf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cacoshf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_canonicalizef32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_canonicalizef32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_canonicalizef64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_canonicalizef64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_canonicalizef32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_canonicalizef32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_canonicalizef64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_canonicalizef64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cargf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cargf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cargf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cargf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cargf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cargf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cargf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cargf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinhf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinhf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinhf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinhf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinhf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinhf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinhf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_casinhf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanhf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanhf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanhf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanhf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanhf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanhf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanhf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_catanhf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cbrtf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cbrtf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cbrtf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cbrtf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cbrtf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cbrtf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cbrtf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cbrtf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccosf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccosf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccosf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccosf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccosf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccosf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccosf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccosf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccoshf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccoshf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccoshf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccoshf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccoshf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccoshf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccoshf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ccoshf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ceilf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ceilf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ceilf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ceilf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ceilf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ceilf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ceilf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ceilf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cexpf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cexpf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cexpf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cexpf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cexpf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cexpf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cexpf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cexpf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cimagf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cimagf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cimagf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cimagf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cimagf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cimagf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cimagf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cimagf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog10f32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog10f32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog10f64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog10f64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog10f32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog10f32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog10f64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clog10f64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clogf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clogf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clogf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clogf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clogf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clogf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clogf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_clogf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_conjf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_conjf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_conjf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_conjf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_conjf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_conjf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_conjf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_conjf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_copysignf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_copysignf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_copysignf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_copysignf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_copysignf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_copysignf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_copysignf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_copysignf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cosf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cosf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cosf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cosf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cosf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cosf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cosf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cosf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_coshf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_coshf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_coshf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_coshf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_coshf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_coshf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_coshf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_coshf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cpowf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cpowf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cpowf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cpowf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cpowf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cpowf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cpowf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cpowf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cprojf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cprojf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cprojf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cprojf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cprojf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cprojf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cprojf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_cprojf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_crealf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_crealf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_crealf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_crealf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_crealf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_crealf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_crealf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_crealf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinhf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinhf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinhf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinhf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinhf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinhf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinhf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csinhf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csqrtf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csqrtf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csqrtf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csqrtf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csqrtf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csqrtf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csqrtf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_csqrtf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanhf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanhf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanhf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanhf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanhf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanhf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanhf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ctanhf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfcf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfcf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfcf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfcf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfcf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfcf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfcf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erfcf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erff32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erff32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erff64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erff64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erff32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erff32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erff64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_erff64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp10f32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp10f32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp10f64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp10f64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp10f32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp10f32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp10f64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp10f64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp2f32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp2f32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp2f64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp2f64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp2f32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp2f32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp2f64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_exp2f64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expm1f32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expm1f32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expm1f64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expm1f64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expm1f32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expm1f32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expm1f64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_expm1f64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fabsf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fabsf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fabsf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fabsf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fabsf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fabsf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fabsf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fabsf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdimf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdimf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdimf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdimf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdimf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdimf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdimf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdimf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_floorf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_floorf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_floorf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_floorf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_floorf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_floorf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_floorf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_floorf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxmagf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxmagf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxmagf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxmagf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxmagf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxmagf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxmagf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmaxmagf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminmagf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminmagf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminmagf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminmagf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminmagf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminmagf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminmagf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fminmagf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmodf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmodf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmodf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmodf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmodf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmodf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmodf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmodf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_frexpf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_frexpf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_frexpf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_frexpf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_frexpf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_frexpf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_frexpf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_frexpf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpxf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpxf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpxf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpxf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpxf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpxf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpxf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fromfpxf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_getpayloadf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_getpayloadf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_getpayloadf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_getpayloadf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_getpayloadf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_getpayloadf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_getpayloadf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_getpayloadf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_hypotf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_hypotf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_hypotf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_hypotf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_hypotf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_hypotf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_hypotf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_hypotf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ilogbf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ilogbf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ilogbf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ilogbf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ilogbf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ilogbf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ilogbf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ilogbf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j0f32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j0f32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j0f64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j0f64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j0f32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j0f32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j0f64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j0f64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j1f32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j1f32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j1f64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j1f64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j1f32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j1f32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j1f64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_j1f64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_jnf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_jnf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_jnf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_jnf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_jnf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_jnf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_jnf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_jnf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ldexpf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ldexpf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ldexpf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ldexpf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ldexpf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ldexpf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ldexpf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ldexpf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf32_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf32_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf64_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf64_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf32x_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf32x_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf64x_r(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lgammaf64x_r(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llogbf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llogbf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llogbf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llogbf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llogbf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llogbf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llogbf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llogbf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llrintf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llrintf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llrintf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llrintf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llrintf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llrintf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llrintf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llrintf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llroundf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llroundf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llroundf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llroundf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llroundf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llroundf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llroundf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_llroundf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log10f32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log10f32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log10f64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log10f64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log10f32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log10f32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log10f64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log10f64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log1pf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log1pf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log1pf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log1pf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log1pf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log1pf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log1pf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log1pf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log2f32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log2f32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log2f64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log2f64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log2f32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log2f32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log2f64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_log2f64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logbf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logbf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logbf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logbf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logbf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logbf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logbf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logbf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_logf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lrintf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lrintf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lrintf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lrintf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lrintf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lrintf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lrintf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lrintf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lroundf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lroundf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lroundf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lroundf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lroundf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lroundf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lroundf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_lroundf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_modff32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_modff32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_modff64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_modff64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_modff32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_modff32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_modff64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_modff64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nanf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nanf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nanf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nanf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nanf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nanf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nanf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nanf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nearbyintf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nearbyintf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nearbyintf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nearbyintf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nearbyintf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nearbyintf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nearbyintf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nearbyintf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextafterf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextafterf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextafterf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextafterf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextafterf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextafterf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextafterf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextafterf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextdownf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextdownf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextdownf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextdownf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextdownf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextdownf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextdownf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextdownf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextupf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextupf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextupf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextupf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextupf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextupf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextupf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_nextupf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_powf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_powf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_powf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_powf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_powf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_powf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_powf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_powf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remainderf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remainderf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remainderf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remainderf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remainderf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remainderf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remainderf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remainderf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remquof32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remquof32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remquof64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remquof64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remquof32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remquof32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remquof64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_remquof64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_rintf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_rintf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_rintf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_rintf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_rintf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_rintf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_rintf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_rintf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundevenf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundevenf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundevenf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundevenf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundevenf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundevenf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundevenf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundevenf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_roundf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalblnf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalblnf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalblnf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalblnf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalblnf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalblnf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalblnf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalblnf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbnf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbnf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbnf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbnf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbnf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbnf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbnf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_scalbnf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadsigf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadsigf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadsigf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadsigf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadsigf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadsigf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadsigf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_setpayloadsigf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sincosf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sincosf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sincosf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sincosf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sincosf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sincosf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sincosf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sincosf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinhf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinhf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinhf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinhf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinhf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinhf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinhf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sinhf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sqrtf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sqrtf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sqrtf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sqrtf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sqrtf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sqrtf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sqrtf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_sqrtf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanhf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanhf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanhf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanhf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanhf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanhf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanhf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tanhf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tgammaf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tgammaf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tgammaf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tgammaf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tgammaf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tgammaf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tgammaf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_tgammaf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalorderf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalorderf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalorderf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalorderf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalorderf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalorderf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalorderf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalorderf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalordermagf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalordermagf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalordermagf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalordermagf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalordermagf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalordermagf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalordermagf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_totalordermagf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_truncf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_truncf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_truncf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_truncf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_truncf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_truncf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_truncf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_truncf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpxf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpxf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpxf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpxf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpxf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpxf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpxf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ufromfpxf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y0f32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y0f32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y0f64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y0f64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y0f32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y0f32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y0f64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y0f64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y1f32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y1f32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y1f64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y1f64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y1f32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y1f32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y1f64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_y1f64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ynf32(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ynf32(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ynf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ynf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ynf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ynf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_27)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ynf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ynf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32addf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32addf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32addf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32addf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xaddf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xaddf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32addf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32addf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32addf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32addf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32divf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32divf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32divf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32divf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xdivf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xdivf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32divf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32divf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32divf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32divf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32mulf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32mulf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32mulf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32mulf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xmulf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xmulf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32mulf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32mulf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32mulf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32mulf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32subf32x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32subf32x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32subf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32subf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xsubf64(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xsubf64(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32subf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32subf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32subf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32subf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xaddf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xaddf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xaddf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xaddf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64addf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64addf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64addf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64addf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xdivf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xdivf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xdivf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xdivf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64divf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64divf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64divf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64divf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xmulf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xmulf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xmulf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xmulf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64mulf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64mulf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64mulf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64mulf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xsubf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xsubf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xsubf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f32xsubf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64subf64x(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64subf64x(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64subf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64subf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64xaddf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64xaddf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64xdivf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64xdivf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64xmulf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64xmulf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64xsubf128(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_f64xsubf128(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fadd(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fadd(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_faddl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_faddl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_daddl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_daddl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdiv(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdiv(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdivl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fdivl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ddivl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_ddivl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmul(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmul(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmull(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fmull(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_dmull(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_dmull(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fsub(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fsub(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fsubl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_fsubl(a, b) b
#endif
#if LONG_DOUBLE_COMPAT (libm, GLIBC_2_28)
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_dsubl(a, b) a
#else
# define LONG_DOUBLE_COMPAT_CHOOSE_libm_dsubl(a, b) b
#endif
#endif /* ldbl-compat-choose.h */
