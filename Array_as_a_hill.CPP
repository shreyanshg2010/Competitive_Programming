Array of integers is a mountain, if:

it is strictly increasing in the beginning;
after that it is constant;
after that it is strictly decreasing.
The first block (increasing) and the last block (decreasing) may be absent. It is allowed that both of this blocks are absent.
For example, the following three arrays are a mountain: [5, 7, 11, 11, 2, 1], [4, 4, 2], [7],
but the following three are not unimodal: [5, 5, 6, 6, 1], [1, 2, 1, 2], [4, 5, 5, 6].

Write a program that checks if an array is a mountain.

Input Format

The first line contains integer n (1 ≤ n ≤ 100) — the number of elements in the array.

The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 1000) — the elements of the array.

Output Format

Print "yes" if the given array is a mountain. Otherwise, print "no".



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int n,a[100],i;
     cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    int f1=1;
    a[n+1]=a[0]=1<<30;
    int f=2;
    while(a[f]>a[f-1]) f++;
    while(a[f]==a[f-1]) f++;
    while(a[f]<a[f-1]) f++;
    if(f<=n) cout<<"no"<<endl;
    else cout<<"yes"<<endl;
    return 0;
}

