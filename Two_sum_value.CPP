For any given Array A[N], its TwoSum Value with respect to a number K is denoted by the number of ordered pairs {i, j} such that A[i] + A[j] = K. 
i and j must satisfy the following : 
1 <= i <= N and 1 <= j <= N.
i may be equal to j at times.
You are given the Array A[N] and the number K.
Find and print the TwoSum value for the array.

Hint : You may want to use binary search algorithm for efficient implementation.
Hint2 : BinarySearch works only on sorted Arrays. So you may want to use library sort (qsort in C and sort in C++) function to sort the array first.

INPUT

The first line contains a number N(1 <= N <= 10^5), the size of array A[N].
The second line contains N space separated integers denoting the elements of the array A. (1 <= A[i] <= 10^9).
The third line contains one number K(1 <= K <= 10^9), with respect to which the TwoSum value of the array A is to be found.

OUTPUT

Output one number that is equal to the TwoSum value of the given input array A[N] with respect to K.

Sample Input 0

10
1 2 3 4 5 6 7 8 9 10
10
Sample Output 0

9



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int binarysearch(long long int arr[],long long int l,long long int r,long long int x) 
{ 
    while (l <= r) 
    { 
        long long int m = l + (r - l) / 2;
        if (arr[m] == x) 
            return 1; 
        if (arr[m] < x) 
            l = m + 1;
        else
            r = m - 1; 
    } 
    return 0; 
} 
long long int print(long long int arr[],long long int n,long long int sum)
{
    long long int i,l=0,r=n-1,c=0,key;
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        key=sum-arr[i];
        if(binarysearch(arr,l,r,key)==1)
            c++;
    }
    return c;
}
int main() {
    long long int n;
    cin>>n;
    long long int i,arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    long long int key;
    cin>>key;
    cout<<print(arr,n,key);
    return 0;
}
