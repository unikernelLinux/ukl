# Porting valkey to UKL

Simply add bypass init calls somwhere (ideally we should do this outside of the
application based on config, but did not yet set this up). E.g.: `valkey/valkey/src/ae.c`
```
/* extern void ukl_set_bypass_limit(int val); */
/* extern void ukl_set_bypass_syscall(int val); */
void aeMain(aeEventLoop *eventLoop) {
    /* ukl_set_bypass_limit(10); */
    /* ukl_set_bypass_syscall(1); */
    eventLoop->stop = 0;
    while (!eventLoop->stop) {
        aeProcessEvents(eventLoop, AE_ALL_EVENTS | AE_CALL_BEFORE_SLEEP | AE_CALL_AFTER_SLEEP);
    }
}
```

We also had to add a Makefile command which compiles the deps using `$(MAKE)`. We also added to the linker flags in `valkey/valkey/src/Makefile` to link with
the UKL syms:

```
FINAL_LDFLAGS=$(LDFLAGS) $(SERVER_LDFLAGS) $(DEBUG) \
	      -Wl,-rpath-link=$(shell pwd)/../../.. -L$(shell pwd)/../../.. \
	      -Wl,-rpath=/data -Wl,--dynamic-linker=/data/ld-linux-x86-64.so.2
FINAL_LIBS=-lm -luklsyms -lpthread
```
