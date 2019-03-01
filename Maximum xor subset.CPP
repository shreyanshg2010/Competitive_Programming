Given an array of size at most 18, write a program that prints the maximum XOR (Bitwise Exclusive-Or ) of any non-empty subset of the array.

XOR of two numbers A and B is done by A^B.

Non-empty subset means a set that has atleast one element and all its elements are present in the original array.

Input Format

First line contains a number N, size of the array. Next N lines contain one integer each.

Constraints

1 <= N <= 18 1 <= A[i] <= 1000

Output Format

Output One number, the maximum possible XOR among the XORs of all subsets.

Sample Input 0

1
1
Sample Output 0

1
Sample Input 1

3
2
4
1
Sample Output 1

7
Explanation 1

Maximum Xor is obtained when the subset is {1,2,4} as 1^2^4 - 7. A higher value isnt possible.




#include<bits/stdc++.h> 
using namespace std;  
#define INT_BITS 32 
int maxSubarrayXOR(int set[], int n) 
{ 
    int index = 0; 
    for (int i = INT_BITS-1; i >= 0; i--) 
    { 
        int maxInd = index; 
        int maxEle = INT_MIN; 
        for (int j = index; j < n; j++) 
        {  
            if ( (set[j] & (1 << i)) != 0  
                     && set[j] > maxEle ) 
                maxEle = set[j], maxInd = j; 
        } 
        if (maxEle == INT_MIN) 
        continue; 
        swap(set[index], set[maxInd]); 
        maxInd = index; 
        for (int j=0; j<n; j++) 
        { 
            if (j != maxInd && 
               (set[j] & (1 << i)) != 0) 
                set[j] = set[j] ^ set[maxInd]; 
        } 
        index++; 
    } 
    int res = 0; 
    for (int i = 0; i < n; i++) 
        res ^= set[i]; 
    return res; 
}   
int main() 
{ 
    int n;
    cin>>n;
    int a[n];
      for(int i =0;i<n;i++)
          cin>>a[i];
    cout << maxSubarrayXOR(a, n); 
    return 0; 
}
