PRINT THE BELOW MENTIONED PATTERN FOR ANY "N" VALUE. WHERE "N" INDICATES NO.OF ROWS.

Input Format

A SINGLE INTEGER DENOTING N VALUE

Constraints

1<=N<=100

N is only odd

Output Format

PATTERN AS SHOWN IN SAMPLE TEST CASE

Sample Input 0

5
Sample Output 0

1   5
 2 4
  3
  
  
  
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i,j,k,x;
    scanf("%d",&n);
    x=ceil(n/2.0);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        printf("%d ",i);
        for(k=i+1;k<n-i;k++)
        {
            printf(" ");
        }
        if(i!=n-i+1)
            printf("%d\n",n-i+1);
    }
    
    return 0;
}
