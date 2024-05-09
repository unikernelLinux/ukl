import os
from sys import argv


with open(f'ukl/{argv[1]}') as fp:
    lines = fp.readlines()

hidden_def = False

for i,line in lines:
    if 'libc_hidden_def' in line:
        hidden_def = True
    if 'strong_alias' in line:
        lines.pop(i)
        name = line[line.find('(')+1:line.find(',')]
        if hidden_def:
            lines.append(f'libc_hidden_def({name})')



