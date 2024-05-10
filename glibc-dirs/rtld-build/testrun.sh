#!/bin/bash
builddir=`dirname "$0"`
GCONV_PATH="${builddir}/iconvdata"

usage () {
  echo "usage: $0 [--tool=strace] PROGRAM [ARGUMENTS...]" 2>&1
  echo "       $0 --tool=valgrind PROGRAM [ARGUMENTS...]" 2>&1
  exit 1
}

toolname=default
while test $# -gt 0 ; do
  case "$1" in
    --tool=*)
      toolname="${1:7}"
      shift
      ;;
    --*)
      usage
      ;;
    *)
      break
      ;;
  esac
done

if test $# -eq 0 ; then
  usage
fi

case "$toolname" in
  default)
    exec   env GCONV_PATH="${builddir}"/iconvdata LOCPATH="${builddir}"/localedata LC_ALL=C  "${builddir}"/elf/ld-linux-x86-64.so.2 --library-path "${builddir}":"${builddir}"/math:"${builddir}"/elf:"${builddir}"/dlfcn:"${builddir}"/nss:"${builddir}"/nis:"${builddir}"/rt:"${builddir}"/resolv:"${builddir}"/mathvec:"${builddir}"/support:"${builddir}"/crypt:"${builddir}"/nptl ${1+"$@"}
    ;;
  strace)
    exec strace  -EGCONV_PATH=/home/vraiti/ukl/ukl/glibc/rtld-build/iconvdata  -ELOCPATH=/home/vraiti/ukl/ukl/glibc/rtld-build/localedata  -ELC_ALL=C  /home/vraiti/ukl/ukl/glibc/rtld-build/elf/ld-linux-x86-64.so.2 --library-path /home/vraiti/ukl/ukl/glibc/rtld-build:/home/vraiti/ukl/ukl/glibc/rtld-build/math:/home/vraiti/ukl/ukl/glibc/rtld-build/elf:/home/vraiti/ukl/ukl/glibc/rtld-build/dlfcn:/home/vraiti/ukl/ukl/glibc/rtld-build/nss:/home/vraiti/ukl/ukl/glibc/rtld-build/nis:/home/vraiti/ukl/ukl/glibc/rtld-build/rt:/home/vraiti/ukl/ukl/glibc/rtld-build/resolv:/home/vraiti/ukl/ukl/glibc/rtld-build/mathvec:/home/vraiti/ukl/ukl/glibc/rtld-build/support:/home/vraiti/ukl/ukl/glibc/rtld-build/crypt:/home/vraiti/ukl/ukl/glibc/rtld-build/nptl ${1+"$@"}
    ;;
  valgrind)
    exec env GCONV_PATH=/home/vraiti/ukl/ukl/glibc/rtld-build/iconvdata LOCPATH=/home/vraiti/ukl/ukl/glibc/rtld-build/localedata LC_ALL=C valgrind  /home/vraiti/ukl/ukl/glibc/rtld-build/elf/ld-linux-x86-64.so.2 --library-path /home/vraiti/ukl/ukl/glibc/rtld-build:/home/vraiti/ukl/ukl/glibc/rtld-build/math:/home/vraiti/ukl/ukl/glibc/rtld-build/elf:/home/vraiti/ukl/ukl/glibc/rtld-build/dlfcn:/home/vraiti/ukl/ukl/glibc/rtld-build/nss:/home/vraiti/ukl/ukl/glibc/rtld-build/nis:/home/vraiti/ukl/ukl/glibc/rtld-build/rt:/home/vraiti/ukl/ukl/glibc/rtld-build/resolv:/home/vraiti/ukl/ukl/glibc/rtld-build/mathvec:/home/vraiti/ukl/ukl/glibc/rtld-build/support:/home/vraiti/ukl/ukl/glibc/rtld-build/crypt:/home/vraiti/ukl/ukl/glibc/rtld-build/nptl ${1+"$@"}
    ;;
  container)
    exec env GCONV_PATH=/home/vraiti/ukl/ukl/glibc/rtld-build/iconvdata LOCPATH=/home/vraiti/ukl/ukl/glibc/rtld-build/localedata LC_ALL=C  /home/vraiti/ukl/ukl/glibc/rtld-build/elf/ld-linux-x86-64.so.2 --library-path /home/vraiti/ukl/ukl/glibc/rtld-build:/home/vraiti/ukl/ukl/glibc/rtld-build/math:/home/vraiti/ukl/ukl/glibc/rtld-build/elf:/home/vraiti/ukl/ukl/glibc/rtld-build/dlfcn:/home/vraiti/ukl/ukl/glibc/rtld-build/nss:/home/vraiti/ukl/ukl/glibc/rtld-build/nis:/home/vraiti/ukl/ukl/glibc/rtld-build/rt:/home/vraiti/ukl/ukl/glibc/rtld-build/resolv:/home/vraiti/ukl/ukl/glibc/rtld-build/mathvec:/home/vraiti/ukl/ukl/glibc/rtld-build/support:/home/vraiti/ukl/ukl/glibc/rtld-build/crypt:/home/vraiti/ukl/ukl/glibc/rtld-build/nptl /home/vraiti/ukl/ukl/glibc/rtld-build/support/test-container env GCONV_PATH=/home/vraiti/ukl/ukl/glibc/rtld-build/iconvdata LOCPATH=/home/vraiti/ukl/ukl/glibc/rtld-build/localedata LC_ALL=C  /home/vraiti/ukl/ukl/glibc/rtld-build/elf/ld-linux-x86-64.so.2 --library-path /home/vraiti/ukl/ukl/glibc/rtld-build:/home/vraiti/ukl/ukl/glibc/rtld-build/math:/home/vraiti/ukl/ukl/glibc/rtld-build/elf:/home/vraiti/ukl/ukl/glibc/rtld-build/dlfcn:/home/vraiti/ukl/ukl/glibc/rtld-build/nss:/home/vraiti/ukl/ukl/glibc/rtld-build/nis:/home/vraiti/ukl/ukl/glibc/rtld-build/rt:/home/vraiti/ukl/ukl/glibc/rtld-build/resolv:/home/vraiti/ukl/ukl/glibc/rtld-build/mathvec:/home/vraiti/ukl/ukl/glibc/rtld-build/support:/home/vraiti/ukl/ukl/glibc/rtld-build/crypt:/home/vraiti/ukl/ukl/glibc/rtld-build/nptl ${1+"$@"}
    ;;
  *)
    usage
    ;;
esac
