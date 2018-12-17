Problem Description

How to find highest frequency character in a string using loop in C programming.Find frequency of each characters in the string and store it in some array of integers.
Find maximum element in the array. Maximum element in the array will the be maximum occurring character in the string.

Test Case 1
Input (stdin)
aaabbcd

Expected Output
a=3
b=2
c=1
d=1

Test Case 2
Input (stdin)
aabbccdd

Expected Output
a=2
b=2
c=2
d=2




#include <stdio.h>
#include <string.h>
 
int main()
{
   char string[100];
   int c = 0, count[26] = {0}, x;

   scanf("%s",string);
 
   while (string[c] != '\0') {

 
      if (string[c] >= 'a' && string[c] <= 'z') {
         x = string[c] - 'a';
         count[x]++;
      }
 
      c++;
   }
 
   for (c = 0; c <26; c++)
   { if(count[c]!=0)
         printf("%c=%d\n",c+'a',count[c]);
   }
   return 0;
}
