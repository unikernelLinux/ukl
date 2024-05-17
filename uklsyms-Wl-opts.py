'''
script to generate source for static libuklsyms.so

run as ld $(OBJS) `nm linux/vmlinx | python uklsyms.py`
'''

import sys
i = 0
for line in sys.stdin:
    if ' ukl_' not in line:
        continue
    val, _, name = line.strip().split(' ')
    print(f'-Wl,--defsym {name[4:]}=0x0',end=' ')


