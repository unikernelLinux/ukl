'''

script to generate source for static libuklsyms.so

run as nm linux/vmlinx | python uklsyms.py > uklsyms-static.c

'''

import sys
i = 0
for line in sys.stdin:
    if ' ukl_' not in line:
        continue
    val, _, name = line.strip().split(' ')
    print(f'--defsym {name[4:]}=0x{val}',end=' ')
