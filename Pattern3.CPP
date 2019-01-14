PRINT THE BELOW MENTIONED PATTERN FOR ANY "N" VALUE. WHERE "N" INDICATES NO.OF ROWS.

Input Format

A SINGLE INTEGER DENOTING N VALUE

Constraints

1<=N<=100

Output Format

PATTERN AS SHOWN IN SAMPLE TEST CASE

Sample Input 0

5
Sample Output 0

    1
   12
  123
 1234
12345



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(k=1;k<=i;k++){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
