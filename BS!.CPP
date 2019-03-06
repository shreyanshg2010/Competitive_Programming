You are given two arrays of integers a and b. For each element of the second array bj you should find the number of elements in array a that are less than or equal to the value bj.

Input Format

The first line contains two integers n, m — the sizes of arrays a and b. The second line contains n integers — the elements of array a.

The third line contains m integers — the elements of array b.

Constraints

1 <= n, m <= 200
- 10^9 <= ai <= 10^9
- 10^9 <= bj <= 10^9

Output Format

Print m integers, separated by spaces: the j-th of which is equal to the number of such elements in array a that are less than or equal to the value bj.

Sample Input 0

5 4
1 3 5 7 9
6 4 2 8
Sample Output 0

3 2 1 4 




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,m;
    cin>>n>>m;
    long long int i,arr[n],brr[m],count[m],j;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<m;i++)
        cin>>brr[i];
    sort(arr,arr+n);
    for(i=0;i<m;i++)
        count[i]=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(brr[i]>=arr[j])
                count[i]++;
            else
                break;
        }
    }
    for(i=0;i<m;i++)
        cout<<count[i]<<" ";
    return 0;
}
