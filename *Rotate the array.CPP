Given an array of integers of size n, rotate it's elements towards right K times.

Note: One rotation of the array (a0, a1, a2... an-1, an) results into (an, a1, a2...., an-2, an-1).

Explanation for a Sample i/o

Sample Input: 5 1 3 5 7 9 3

Sample Output: 5 7 9 1 3

Explanation: We have to perform 3 rotations : 1st rotation : 9 1 3 5 7 2nd rotation : 7 9 1 3 5 3rd rotation : 5 7 9 1 3

    
Input Format

First line contains an integer n. Second line contains n integers, denoting the array a[n]. Third line contains one integer k, the number of times the array is to be rotated.

Constraints

1 <= n <= 1000

Output Format

Output n integers, denoting the array a[n] after rotation.

Sample Input 0

5
1 3 5 7 9
3
Sample Output 0

5 7 9 1 3 



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int k;
    scanf("%d",&k);
    
    int b[n];
    for(int i=n-1;i>=0;i--){
        if(i+k>=n) {
            int p=(i+k)%n;
            b[p]=a[i];
        }else b[i+k]=a[i];
    }
    
    
    for(int i=0;i<n;i++)
        printf("%d ",b[i]);
    return 0;
}
