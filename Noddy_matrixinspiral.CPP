The city of toyland can be represented as a N*M matrix.
Our beloved Noddy rides his car around the town.
He starts at (0,0), then goes towards right. Upon reaching a dead end he will always take a right turn. Noddy will never visit a block that he has already visited before.
Upon returning home Noddy has forgotten everything that he saw during is drive. Help him by printing the numbers on the blocks of the town in the order that Noddy visited.

Input Format

First line contains two integers, N and M.
Next N lines contain M integers each, collectively they denote the N*M matrix.

Constraints

1 <= N,M <= 10

Output Format

Output N*M integers on one line with a space between every two consecutive integers. These must be the numbers written on the blocks of toyland in order that Noddy visited.

Sample Input 0

3 3
1 2 3
4 5 6
7 8 9
Sample Output 0

1 2 3 6 9 8 7 4 5
Explanation 0

Noddy's Journey : 
- Start at (0,0) which is 1. 
- Move right to (0,1) which is 2. 
- Move right to 3. 
- Dead end, so Noddy turns right and moves to 6. 
- Move further down to 9 
- Dead end so Noddy turns right and moves to 8 
- Move further left to 7 
- Dead end so Noddy turns right and moves to 4 
- Dead end ahead so Noddy turns right and moves to 5 
- his journey ends here as now he has seen all the blocks.



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b;
    cin>>a>>b;
    int arr[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>arr[i][j];
        }
    }
    
int k=0,l=0,m=a,n=b;    
while (k < m && l < n) 
    { 
        for (int i = l; i < n; ++i) 
        { 
            printf("%d ", arr[k][i]); 
        } 
        k++; 
  
        for (int i = k; i < m; ++i) 
        { 
            printf("%d ", arr[i][n-1]); 
        } 
        n--; 
  
        if ( k < m) 
        { 
            for (int i = n-1; i >= l; --i) 
            { 
                printf("%d ", arr[m-1][i]); 
            } 
            m--; 
        } 
  
        if (l < n) 
        { 
            for (int i = m-1; i >= k; --i) 
            { 
                printf("%d ", arr[i][l]); 
            } 
            l++;     
        }         
    } 
    return 0;
    
} 
