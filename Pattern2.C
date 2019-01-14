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
01
101
0101
10101
Sample Input 1

3
Sample Output 1

1
01
101



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==1){
            for(int j=1;j<=i;j++){
                printf("%d",j%2);
            }
        }
        else{
            for(int j=0;j<i;j++){
                printf("%d",j%2);
            }
        }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
