You are given two integer sequences A and B,

Your task is to make the sequence A exactly identical to B.

You can perform three operations on the sequence A :

Insert an integer at some position
Remove an integer from some position
Modify an integer i.e. give a new value to an integer at some position
Every operation takes 1 unit of cost.

Your task is, given A and B, find the minimum cost to convert A to B.

Input

First line contains the number of elements in A 
Second line contains the elements of the array A 
Third line contains the number of elements in B 
Fourth line contains the elements of the array B

Output

Print the minimum cost of converting A to B

Notes

Size of the sequences will not exceed 1000 
All elements of the sequences fit in a 32-bit integer.

Sample Input 0

6
1 2 3 4 5 6
8
1 5 7 2 8 4 5 6
Sample Output 0

3






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
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
        cin>>b[i];
    int p = n+1;
    int q = m+1;
    int c[p][q];
    
    
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            c[i][j] = 0;
        }
    }
    //c[0][0] = 0;
    for(int j=0;j<q;j++)
    {
        c[0][j] = j; 
    }
    for(int i=0;i<p;i++)
    {
        c[i][0] = i; 
    }
    for(int i=1;i<p;i++)
    {
        for(int j=1;j<q;j++)
        {
            if(a[i-1] == b[j-1])
                c[i][j] = c[i-1][j-1];
            else
                c[i][j] = min( c[i-1][j] , min(c[i-1][j-1] , c[i][j-1]) ) + 1;
        }
    }
    /*for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }*/    
    cout<<c[n][m];
    
    return 0;
}
