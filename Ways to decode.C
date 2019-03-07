A numeric string can be converted to an alphabetic string in the following manner :

replace '0' by 'A', '1' by 'B' ... '25' by 'Z'.

Unfortunately, this method of encoding and decoding is not very robust as some strings can result in multiple outputs and hence cause ambiguity, for example, the string "1101" can be read as "LB", "BBAB", "BKB", "LAB" etc etc.

Your task is, given a numeric string, give the number of distinct alphabetic strings that it can be decoded to.

Since this number can be very large, output it modulo 1e9 + 7

Note that you can only consider either 1 or 2 contiguous characters and convert them to alphabets while decoding if possible

Input

Input consists of one string only

Output

Print the number of ways module 1e9+7

Notes

The length of the input string does not exceed 1e6

Sample Input 0

1101
Sample Output 0

5





#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long m=1e9+7;
long  numDecodings(char* A)
{
int *count,i,n;    
if(!A)    return 0;    
n=strlen(A);    
if(n==1)    return 1;    
count = (int*)malloc(sizeof(int)*(n+1));    
count[0] = count[1] = 1;     
for (i = 2; i <= n; i++)    
{        
count[i] = 0; 
if (A[i-1] >= '0')    count[i] = count[i-1]; 
if (A[i-2]=='0'||A[i-2] == '1' || (A[i-2] == '2' && A[i-1] < '6') ) count[i] = (count[i]+count[i-2])%m;    
}    
return count[n]%m;}

int main()
{
    char ch[1000005];
    scanf("%s",ch);
    long x=numDecodings(ch);
    printf("%ld",x);
}
