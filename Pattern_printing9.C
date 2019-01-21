Given a number N, print a pattern as shown below :

n = 1
*

n = 2
 *
***
 *

 n = 3
   *
  ***
 *****
  ***
   *
and so on..
Hint : Print the upper triangle and the lower reverse triangle separately.

Input Format

Only one integer, the number n.

Constraints

1 <= n <= 100

Output Format

The required pattern

Sample Input 0

1
Sample Output 0

*


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n, c, k, space = 1;
 
  //printf("Enter number of rows\n");
  scanf("%d", &n);
 
  space = n - 1;
 
  for (k = 1; k <= n; k++)
  {
    for (c = 1; c <= space; c++)
      printf(" ");
 
    space--;
 
    for (c = 1; c <= 2*k-1; c++)
      printf("*");
 
    printf("\n");
  }
 
  space = 1;
 
  for (k = 1; k <= n - 1; k++)
  {
    for (c = 1; c <= space; c++)
      printf(" ");
 
    space++;
 
    for (c = 1 ; c <= 2*(n-k)-1; c++)
      printf("*");
 
    printf("\n");
  }
 
  return 0;

}
