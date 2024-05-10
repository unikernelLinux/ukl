#!/bin/bash

SOURCE_DIR="/home/vraiti/ukl/ukl/glibc/rtld"
BUILD_DIR="/home/vraiti/ukl/ukl/glibc/rtld-build/"
CMD_FILE="/home/vraiti/ukl/ukl/glibc/rtld-build/debugglibc.gdb"
CONTAINER=false
DIRECT=true
STATIC=false
SYMBOLSFILE=true
unset TESTCASE
unset BREAKPOINTS
unset ENVVARS

usage()
{
cat << EOF
Usage: $0 [OPTIONS] <program>

   Or: $0 [OPTIONS] -- <program> [<args>]...

  where <program> is the path to the program being tested,
  and <args> are the arguments to be passed to it.

Options:

  -h, --help
	Prints this message and leaves.

  The following options require one argument:

  -b, --breakpoint
	Breakpoints to set at the beginning of the execution
	(each breakpoint demands its own -b option, e.g. -b foo -b bar)
  -e, --environment-variable
	Environment variables to be set with 'exec-wrapper env' in GDB
	(each environment variable demands its own -e option, e.g.
	-e FOO=foo -e BAR=bar)

  The following options do not take arguments:

  -c, --in-container
	Run the test case inside a container and automatically attach
	GDB to it.
  -i, --no-direct
	Selects whether to pass the --direct flag to the program.
	--direct is useful when debugging glibc test cases. It inhibits the
	tests from forking and executing in a subprocess.
	Default behaviour is to pass the --direct flag, except when the
	program is run with user specified arguments using the "--" separator.
  -s, --no-symbols-file
	Do not tell GDB to load debug symbols from the program.
EOF
}

# Parse input options
while [[ $# > 0 ]]
do
  key="$1"
  case $key in
    -h|--help)
      usage
      exit 0
      ;;
    -b|--breakpoint)
      BREAKPOINTS="break $2\n$BREAKPOINTS"
      shift
      ;;
    -e|--environment-variable)
      ENVVARS="$2 $ENVVARS"
      shift
      ;;
    -c|--in-container)
      CONTAINER=true
      ;;
    -i|--no-direct)
      DIRECT=false
      ;;
    -s|--no-symbols-file)
      SYMBOLSFILE=false
      ;;
    --)
      shift
      TESTCASE=$1
      COMMANDLINE="$@"
      # Don't add --direct when user specifies program arguments
      DIRECT=false
      break
      ;;
    *)
      TESTCASE=$1
      COMMANDLINE=$TESTCASE
      ;;
  esac
  shift
done

# Check for required argument and if the testcase exists
if [ ! -v TESTCASE ] || [ ! -f ${TESTCASE} ]
then
  usage
  exit 1
fi

# Expand environment setup command
if [ -v ENVVARS ]
then
  ENVVARSCMD="set exec-wrapper env $ENVVARS"
fi

# Expand direct argument
if [ "$DIRECT" == true ]
then
  DIRECT="--direct"
else
  DIRECT=""
fi

# Check if the test case is static
if file ${TESTCASE} | grep "statically linked" >/dev/null
then
  STATIC=true
else
  STATIC=false
fi

# Expand symbols loading command
if [ "$SYMBOLSFILE" == true ]
then
  SYMBOLSFILE="add-symbol-file ${TESTCASE}"
else
  SYMBOLSFILE=""
fi

# GDB commands template
template ()
{
cat <<EOF
set environment C -E -x c-header
set auto-load safe-path ${BUILD_DIR}/nptl_db:\$debugdir:\$datadir/auto-load
set libthread-db-search-path ${BUILD_DIR}/nptl_db
__ENVVARS__
__SYMBOLSFILE__
break _dl_start_user
run --library-path /home/vraiti/ukl/ukl/glibc/rtld-build:/home/vraiti/ukl/ukl/glibc/rtld-build/math:/home/vraiti/ukl/ukl/glibc/rtld-build/elf:/home/vraiti/ukl/ukl/glibc/rtld-build/dlfcn:/home/vraiti/ukl/ukl/glibc/rtld-build/nss:/home/vraiti/ukl/ukl/glibc/rtld-build/nis:/home/vraiti/ukl/ukl/glibc/rtld-build/rt:/home/vraiti/ukl/ukl/glibc/rtld-build/resolv:/home/vraiti/ukl/ukl/glibc/rtld-build/mathvec:/home/vraiti/ukl/ukl/glibc/rtld-build/support:/home/vraiti/ukl/ukl/glibc/rtld-build/crypt:/home/vraiti/ukl/ukl/glibc/rtld-build/nptl:${BUILD_DIR}/nptl_db __COMMANDLINE__ __DIRECT__
__BREAKPOINTS__
EOF
}

# Generate the commands file for gdb initialization
template | sed -e "s|__ENVVARS__|$ENVVARSCMD|" -e "s|__SYMBOLSFILE__|$SYMBOLSFILE|" -e "s|__COMMANDLINE__|$COMMANDLINE|" -e "s|__DIRECT__|$DIRECT|" -e "s|__BREAKPOINTS__|$BREAKPOINTS|" > $CMD_FILE

echo
echo "Debugging glibc..."
echo "Build directory  : $BUILD_DIR"
echo "Source directory : $SOURCE_DIR"
echo "GLIBC Testcase   : $TESTCASE"
echo "GDB Commands     : $CMD_FILE"
echo "Env vars         : $ENVVARS"
echo

if [ "$CONTAINER" == true ]
then
# Use testrun.sh to start the test case with WAIT_FOR_DEBUGGER=1, then
# automatically attach GDB to it.
WAIT_FOR_DEBUGGER=1 /home/vraiti/ukl/ukl/glibc/rtld-build/testrun.sh --tool=container ${TESTCASE} &
gdb -x ${TESTCASE}.gdb
elif [ "$STATIC" == true ]
then
gdb ${TESTCASE}
else
# Start the test case debugging in two steps:
#   1. the following command invokes gdb to run the loader;
#   2. the commands file tells the loader to run the test case.
gdb -q -x ${CMD_FILE} -d ${SOURCE_DIR} ${BUILD_DIR}/elf/ld.so
fi
