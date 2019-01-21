from itertools import permutations
s = input()
l = list(map("".join,permutations(s)))
c=0
for i in l:
    if(l.count(i)>1):
        c=1
        break;
if(c==1):
    print("\n".join(l))
else:
    l.sort()
    print("\n".join(l))
