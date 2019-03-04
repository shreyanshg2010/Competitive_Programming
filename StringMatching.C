Write a program that takes two strings as input and prints "yes" if the second string is a substring of the first string and "no" otherwise.

Sample Input 0

Hello World!
Hello
Sample Output 0

yes




#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ char s[10000000];
 scanf("%[^\n]s ",s);
char sec[1000000];
 scanf("%s",sec);
 long long int n,m;
 n=strlen(s);
 m=strlen(sec);
 for(long long int i=0;i<=n-m;i++){
     long long int j;
     for(j=0;j<m;j++){
         if(s[i+j]!=sec[j])
             break;
     }
     if(j==m){
         printf("yes");
         return 0;
     }
 }
 printf("no");
 return 0;
}
