t=int(input())
l=[]
for i in range(t):
    l.append(int(input()))
x=(max(l)//2)-2
j=0
s=['0','1','1','0']
while (j<t):
    p=len(s)
    if p>=l[j]:
        print(s[l[j]])
    else:
        for i in range(p):
            if s[i]=='0':
                s.append('1')
            else:
                s.append('0')
        continue
    j+=1
