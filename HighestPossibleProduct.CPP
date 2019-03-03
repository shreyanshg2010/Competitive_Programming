Given an array of N integers, your task is to print the highest possible product by multiplying any three numbers from the array.

Input Format

First line contains an integer N. 
Next line contains N space separated integers.

Constraints

1 <= N <= 106
0 <= |Ai| <= 103

Output Format

Output one numbers, the maximum product.

Sample Input 0

6
0 -1 3 100 70 50
Sample Output 0

350000


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<climits>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int res;
    res=a[n-1]*a[n-2]*a[n-3];
    cout<<res;
    
    return 0;
}
