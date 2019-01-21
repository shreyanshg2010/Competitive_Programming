You are given an array A[N] of size N.
We define a 7-Divisible Pair as a pair of integers (i,j) such that Ai + Aj is divisible by 7.
Formally, a pair of integers (i,j) is a 7-Divisible pair if ( Ai + Aj ) % 7 = 0.
Your task is to find the total number of 7-Divisible pairs from the given array.

INPUT

First line contains N the size of the array. (1 ≤ N ≤ 105).
Second line contains the array elements that all lie between 1 and 105.

OUTPUT

Output a single integer that denotes the number of pairs divisible by 7.

Sample Input 0

5
9 3 7 4 14
Sample Output 0

2



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int t;
    int rem[7] = {0};
    for(int i=0;i<n;i++){
        cin>>t;
        rem[t%7]++;
    }
    int count = 0;
    count+=(rem[1]*rem[6]);
    count+=(rem[2]*rem[5]);
    count+=(rem[3]*rem[4]);
    count+=(rem[0]*(rem[0]-1)/2);
    cout<<count;
    return 0;
}
