Problem Description

An integer is said to be a palindrome if its value is the same when read from both the right and left side. For a given positive Integer X , write a program that outputs the value of the smallest palindrome greater than X.

Input
Integer X such that X<10000.

Output
Output the smallest palindrome larger than X.Note : Numbers are always displayed without leading zeros.

Test Case 1
Input (stdin)
606

Expected Output
616

Test Case 2
Input (stdin)
303

Expected Output
313



#include <stdio.h>
#include<string.h>
int main()
{char i,j,len,str[50];
 scanf("%s",str);
 len=strlen(str);
 j = len;
  i = -1;
 while(++i <= --j) {
    if(str[i] != str[j]) {
          break;
       }
    }
 if(j < i) {
   if(len & 1) {
     if(str[len/2] < '9'){
           str[len/2]++;
           printf("%s\n",str);
                }

                else {
                    str[len/2] = '0';}
   }
 }   
	return 0;
}
