Print the following pattern :

N = 1
1

N = 2
2 2 2
2 1 2
2 2 2

N = 3

3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3

and so on.
Input Format

One number N

Constraints

1 <= N <= 10

Output Format

The pattern

Sample Input 0

2
Sample Output 0

2 2 2
2 1 2
2 2 2



#include <stdio.h>
 
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    for (i=n;i>=1;i--) {
        for (j=n;j>=i;j--)
              printf("%d ",j);
        for (j=1;j<(i*2)-1;j++)
              printf("%d ",i);
        for (j=i+1;j<=n;j++)
              printf("%d ",j);
        printf("\n"); 
    }
    for (i=2;i<=n;i++) {
        for (j=n;j>=i;j--)
              printf("%d ",j);
        for (j=1;j<(i*2)-1;j++)
              printf("%d ",i);
        for (j=i+1;j<=n;j++)
              printf("%d ",j);
        printf("\n");
    }
    return 0;
}
