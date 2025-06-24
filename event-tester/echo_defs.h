#ifndef _ECHO_DEFS_H_
#define _ECHO_DEFS_H_

#ifndef DEFAULT_PORT
#define DEFAULT_PORT 1072
#endif

#ifndef DEFAULT_STATS
#define DEFAULT_STATS 1073
#endif

#ifndef DEFAULT_ERROR
#define DEFAULT_ERROR 1074
#endif

#ifndef PAYLOAD_SIZE
#define PAYLOAD_SIZE 32
#endif

#ifndef BACKLOG
#define BACKLOG 20
#endif

#ifndef MAX_CONNS
#define MAX_CONNS 1024
#endif

#define TOTAL_EVENTS 5
#define CONN_EVENT (uint64_t)(1)

#define CONNECT 0
#define WAITING 1
#define READING 2
#define WRITING 3
#define CLOSING 4

#endif
