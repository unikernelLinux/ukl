#ifndef _LINUX_TSC_LOGGER_H
#define _LINUX_TSC_LOGGER_H

#ifdef UKL_USER
#define L1_CACHE_BYTES 64
/* This is an ugly hack */
static struct pid_container {
	uint32_t pid;
} my_pid;
#define current (&my_pid)
/* end ugly hack */
#else
#include <asm/cache.h>
#endif

#define TscLogValue_t uint64_t
struct TscLogEntry {
  uint32_t	cpu;
  uint32_t	tid;
  uint64_t	tsc;
  TscLogValue_t values[];
};

#define TscLogEntrySize(numvals) ((sizeof(struct TscLogEntry) + (numvals * sizeof(TscLogValue_t))))

struct TscLog {
	union Header {
		char raw[L1_CACHE_BYTES];
		struct Info {
			void *		cur;
			void *		end;
			uint32_t		overflow;
			uint32_t		valperentry;
		} info;
	} hdr;
	uint8_t entries[];
} __attribute__ ((aligned (L1_CACHE_BYTES)));;

static inline void write_nti64(void *p, const uint64_t v)
{
	asm volatile(	"movnti %0, (%1)\n\t"
			:
			: "r"(v), "r"(p)
			: "memory");
}

static inline void write_nti32(void *p, const uint32_t v)
{
	asm volatile(	"movnti %0, (%1)\n\t"
			:
			: "r"(v), "r"(p)
			: "memory");
}

static uint64_t inline __attribute__((always_inline)) now(void)
{
	uint32_t high, low;
	asm volatile(	"rdtsc;"
			"mov %%edx, %0;"
			"mov %%eax, %1;"
			"cpuid;"
			: "=r"(high), "=r"(low):
			: "%rax", "%rbx", "%rcx", "%rdx");
	return (((uint64_t)high << 32 | low));
}

static uint64_t inline __attribute__((always_inline)) now_with_procid(uint32_t *cpuid)
{
	uint32_t high, low, tsc_sig;
	asm volatile(	"rdtscp;"
			"mov %%edx, %0;"
			"mov %%eax, %1;"
			"mov %%ecx, %2;"
			"cpuid;"
			: "=r"(high), "=r"(low), "=r"(tsc_sig):
			: "%rax", "%rbx", "%rcx", "%rdx");
	write_nti32(cpuid, tsc_sig);
	return (((uint64_t)high << 32 | low));
}

static inline void tsclog_hdr(struct TscLogEntry *e, uint64_t now, uint32_t cpuid)
{
	write_nti64(&(e->tsc), now);
	write_nti32(&(e->cpu), cpuid);
	write_nti32(&(e->tid), current->pid);
}

static inline void * tsc_buffer_reserve(uint32_t bytes, void * volatile *cur, void *end)
{
	uint8_t *old, *fresh;
retry:
	old = *cur;
	fresh = old + bytes;
	if ((uint64_t)fresh > (uint64_t)end)
		return NULL;
	if (!__sync_bool_compare_and_swap(cur, (void *)old, (void *)fresh))
		goto retry;
	return (void *)old;
}

static inline int tsc_buffer_try_set(void * volatile *cur, void * fresh)
{
	void *old = *cur;
	return __sync_bool_compare_and_swap(cur, old, fresh);
}

static inline struct TscLogEntry *
tsclog_getentry(struct TscLog *lptr, uint32_t numvals)
{
	struct TscLogEntry *e;
	e = tsc_buffer_reserve(TscLogEntrySize(numvals), &(lptr->hdr.info.cur),
				lptr->hdr.info.end);
	if (e == NULL)
		lptr->hdr.info.overflow = 1;
	return e;
}

#define TSCLOG_INFO(log, n, ...)				\
	uint32_t cpuid;						\
	uint64_t now            = now_with_procid(&cpuid);	\
	struct TscLogEntry *e;					\
	e = tsclog_getentry(log, n);				\
	if (e == NULL) return;					\
	tsclog_hdr(e, now, cpuid)

static inline void tsclog_0(struct TscLog *lptr)
{
	TSCLOG_INFO(lptr, 0);
}

static inline void tsc_writeval(struct TscLogEntry *e, int i, TscLogValue_t v)
{
	write_nti64(&(e->values[i]), v);
}

static inline void tsclog_1(struct TscLog *log, TscLogValue_t v0)
{
	TSCLOG_INFO(log,1);
	tsc_writeval(e,0,v0);
}

static inline void tsclog_2(struct TscLog *log, TscLogValue_t v0, TscLogValue_t v1) {
	TSCLOG_INFO(log,2);
	tsc_writeval(e,0,v0);
	tsc_writeval(e,1,v1);
}

static inline void tsclog_3(struct TscLog *log, TscLogValue_t v0, TscLogValue_t v1,
	 			TscLogValue_t v2) {
	TSCLOG_INFO(log,3);
	tsc_writeval(e,0,v0);
	tsc_writeval(e,1,v1);
	tsc_writeval(e,2,v2);
}

static inline void tsclog_4(struct TscLog *log, TscLogValue_t v0, TscLogValue_t v1,
	 			TscLogValue_t v2, TscLogValue_t v3) {
	TSCLOG_INFO(log,4);
	tsc_writeval(e,0,v0);
	tsc_writeval(e,1,v1);
	tsc_writeval(e,2,v2);
	tsc_writeval(e,3,v3);
}

#endif
