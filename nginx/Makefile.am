# Unikernel Linux
# Copyright (C) 2018-2022 Red Hat Inc., Boston University,
# Ali Raza, Tommy Unger, Eric Munson, Richard W.M. Jones.
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

# ./configure --without-pcre --without-http_rewrite_module


CLEANFILES = *~ *.o *.a

clean-local:
	cd nginx && $(MAKE) clean

distclean-local:
	rm -rf nginx

# Libraries built in the top build directory.
CRT_STARTS  = $(abs_top_builddir)/crt1.o $(abs_top_builddir)/crti.o \
	      $(abs_top_builddir)/crtbeginT.o
CRT_ENDS    = $(abs_top_builddir)/crtend.o $(abs_top_builddir)/crtn.o
C_LIB       = $(abs_top_builddir)/libc.a 
PTHREAD_LIB = $(abs_top_builddir)/libpthread.a
RT_LIB      = $(abs_top_builddir)/librt.a
MATH_LIB    = $(abs_top_builddir)/libm.a
GCC_LIBS    = $(abs_top_builddir)/libgcc.a $(abs_top_builddir)/libgcc_eh.a
CRYPT_LIB   = $(abs_top_builddir)/libcrypt.a

AM_CFLAGS   = -ggdb -mno-red-zone -mcmodel=kernel -static

noinst_DATA = UKL.a

UKL.a: nginx.o undefined_sys_hack.o
	rm -f $@
	ar cr UKL.a $^
	objcopy --prefix-symbols=ukl_ UKL.a
	objcopy --redefine-syms=$(top_srcdir)/redef_sym_names UKL.a

# Build zlib.
zlib.a: stamp-zlib-dir
	rm -f $@
	-cd zlib && $(MAKE) clean
	cd zlib && \
	CFLAGS='-ggdb -mno-red-zone -mcmodel=kernel' ./configure --static && \
	make --trace
	ar cr $@ zlib/*.o

# Build nginx.
nginx.o: stamp-nginx-dir zlib.a
	rm -f $@
	-cd nginx && $(MAKE) clean
	cd nginx && \
	CFLAGS='-ggdb -mno-red-zone -mcmodel=kernel' ./configure --without-pcre --without-http_rewrite_module && \
	make --trace
	cd nginx && \
	ld -r -o ../$@ --allow-multiple-definition \
	    $(CRT_STARTS) \
	    	objs/src/core/nginx.o objs/src/core/ngx_log.o objs/src/core/ngx_palloc.o objs/src/core/ngx_array.o \
		objs/src/core/ngx_list.o objs/src/core/ngx_hash.o objs/src/core/ngx_buf.o objs/src/core/ngx_queue.o \
		objs/src/core/ngx_output_chain.o objs/src/core/ngx_string.o objs/src/core/ngx_parse.o objs/src/core/ngx_parse_time.o \
		objs/src/core/ngx_inet.o objs/src/core/ngx_file.o objs/src/core/ngx_crc32.o objs/src/core/ngx_murmurhash.o \
		objs/src/core/ngx_md5.o objs/src/core/ngx_sha1.o objs/src/core/ngx_rbtree.o objs/src/core/ngx_radix_tree.o \
		objs/src/core/ngx_slab.o objs/src/core/ngx_times.o objs/src/core/ngx_shmtx.o objs/src/core/ngx_connection.o \
		objs/src/core/ngx_cycle.o objs/src/core/ngx_spinlock.o objs/src/core/ngx_rwlock.o objs/src/core/ngx_cpuinfo.o \
		objs/src/core/ngx_conf_file.o objs/src/core/ngx_module.o objs/src/core/ngx_resolver.o objs/src/core/ngx_open_file_cache.o \
		objs/src/core/ngx_crypt.o objs/src/core/ngx_proxy_protocol.o objs/src/core/ngx_syslog.o objs/src/event/ngx_event.o \
		objs/src/event/ngx_event_timer.o objs/src/event/ngx_event_posted.o objs/src/event/ngx_event_accept.o objs/src/event/ngx_event_udp.o \
		objs/src/event/ngx_event_connect.o objs/src/event/ngx_event_pipe.o objs/src/os/unix/ngx_time.o objs/src/os/unix/ngx_errno.o \
		objs/src/os/unix/ngx_alloc.o objs/src/os/unix/ngx_files.o objs/src/os/unix/ngx_socket.o objs/src/os/unix/ngx_recv.o \
		objs/src/os/unix/ngx_readv_chain.o objs/src/os/unix/ngx_udp_recv.o objs/src/os/unix/ngx_send.o objs/src/os/unix/ngx_writev_chain.o \
		objs/src/os/unix/ngx_udp_send.o objs/src/os/unix/ngx_udp_sendmsg_chain.o objs/src/os/unix/ngx_channel.o \
		objs/src/os/unix/ngx_shmem.o objs/src/os/unix/ngx_process.o objs/src/os/unix/ngx_daemon.o objs/src/os/unix/ngx_setaffinity.o \
		objs/src/os/unix/ngx_setproctitle.o objs/src/os/unix/ngx_posix_init.o objs/src/os/unix/ngx_user.o objs/src/os/unix/ngx_dlopen.o \
		objs/src/os/unix/ngx_process_cycle.o objs/src/os/unix/ngx_linux_init.o objs/src/event/modules/ngx_epoll_module.o \
		objs/src/os/unix/ngx_linux_sendfile_chain.o objs/src/http/ngx_http.o \
		objs/src/http/ngx_http_core_module.o \
		objs/src/http/ngx_http_special_response.o \
		objs/src/http/ngx_http_request.o \
		objs/src/http/ngx_http_parse.o \
		objs/src/http/modules/ngx_http_log_module.o \
		objs/src/http/ngx_http_request_body.o \
		objs/src/http/ngx_http_variables.o \
		objs/src/http/ngx_http_script.o \
		objs/src/http/ngx_http_upstream.o \
		objs/src/http/ngx_http_upstream_round_robin.o \
		objs/src/http/ngx_http_file_cache.o \
		objs/src/http/ngx_http_write_filter_module.o \
		objs/src/http/ngx_http_header_filter_module.o \
		objs/src/http/modules/ngx_http_chunked_filter_module.o \
		objs/src/http/modules/ngx_http_range_filter_module.o \
		objs/src/http/modules/ngx_http_gzip_filter_module.o \
		objs/src/http/ngx_http_postpone_filter_module.o \
		objs/src/http/modules/ngx_http_ssi_filter_module.o \
		objs/src/http/modules/ngx_http_charset_filter_module.o \
		objs/src/http/modules/ngx_http_userid_filter_module.o \
		objs/src/http/modules/ngx_http_headers_filter_module.o \
		objs/src/http/ngx_http_copy_filter_module.o \
		objs/src/http/modules/ngx_http_not_modified_filter_module.o \
		objs/src/http/modules/ngx_http_static_module.o \
		objs/src/http/modules/ngx_http_autoindex_module.o \
		objs/src/http/modules/ngx_http_index_module.o \
		objs/src/http/modules/ngx_http_mirror_module.o \
		objs/src/http/modules/ngx_http_try_files_module.o \
		objs/src/http/modules/ngx_http_auth_basic_module.o \
		objs/src/http/modules/ngx_http_access_module.o \
		objs/src/http/modules/ngx_http_limit_conn_module.o \
		objs/src/http/modules/ngx_http_limit_req_module.o \
		objs/src/http/modules/ngx_http_geo_module.o \
		objs/src/http/modules/ngx_http_map_module.o \
		objs/src/http/modules/ngx_http_split_clients_module.o \
		objs/src/http/modules/ngx_http_referer_module.o \
		objs/src/http/modules/ngx_http_proxy_module.o \
		objs/src/http/modules/ngx_http_fastcgi_module.o \
		objs/src/http/modules/ngx_http_uwsgi_module.o \
		objs/src/http/modules/ngx_http_scgi_module.o \
		objs/src/http/modules/ngx_http_memcached_module.o \
		objs/src/http/modules/ngx_http_empty_gif_module.o \
		objs/src/http/modules/ngx_http_browser_module.o \
		objs/src/http/modules/ngx_http_upstream_hash_module.o \
		objs/src/http/modules/ngx_http_upstream_ip_hash_module.o \
		objs/src/http/modules/ngx_http_upstream_least_conn_module.o \
		objs/src/http/modules/ngx_http_upstream_random_module.o \
		objs/src/http/modules/ngx_http_upstream_keepalive_module.o \
		objs/src/http/modules/ngx_http_upstream_zone_module.o \
		objs/ngx_modules.o \
	    --start-group \
	    ../zlib.a \
	    --whole-archive $(PTHREAD_LIB) $(C_LIB) $(MATH_LIB) $(CRYPT_LIB) $(RT_LIB) --no-whole-archive \
	    $(GCC_LIBS) \
	    --end-group \
	    $(CRT_ENDS)

# Check out a local copy of zlib.
stamp-zlib-dir:
	rm -f $@
	if ! test -d zlib; then \
	    	wget https://www.zlib.net/zlib-1.2.12.tar.gz; \
		tar -zxf zlib-1.2.12.tar.gz; \
		rm -rf zlib-1.2.12.tar.gz; \
		mv zlib-1.2.12 zlib; \
	fi
	touch $@

# Check out a local copy of nginx.
stamp-nginx-dir:
	rm -f $@
	if ! test -d nginx; then \
	    	wget http://nginx.org/download/nginx-1.22.0.tar.gz; \
		tar -zxf nginx-1.22.0.tar.gz; \
		rm -rf nginx-1.22.0.tar.gz; \
		mv nginx-1.22.0 nginx; \
	fi
	touch $@

undefined_sys_hack.c: $(top_builddir)/undefined_sys_hack.c
	cp $< $@

# automake doesn't add this rule unless we were to specify a C program
# to compile, which we don't want to do because of the very special
# linking requirements.
.c.o:
	$(CC) $(CFLAGS) $(AM_CFLAGS) -c $< -o $@

     
   
    
