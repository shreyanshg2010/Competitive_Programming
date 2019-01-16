Find the XOR of two numbers and print it.

Hint : Input the numbers as strings.

Input Format

First line contains first number X and second line contains second number Y.
The numbers will be given to you in binary form.

Constraints

0 <= X <= 2^1000
0 <= Y <= 2^1000

Output Format

Output one number in binary format, the XOR of two numbers.

Sample Input 0

11011
10101
Sample Output 0

01110


a=input()
b=input()
if(len(a)>len(b)):
    b='0'*(len(a)-len(b))+b
elif(len(b)>len(a)):
    a='0'*(len(b)-len(a))+a
for i in range(len(a)):
    if((a[i]=='1' and b[i]=='1')or(a[i]=='0' and b[i]=='0')):
        print("0",end="")
    else:
        print("1",end="")
