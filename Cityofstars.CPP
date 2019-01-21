Mia loves stars. She loves stars the most when they assume the shape of a diamond. She is also very particular about the size of the stars that she wants.

Look at the following cases :

N = 1
*

N = 2
 *
***
 *
 
N = 3
  *
 ***
*****
 ***
  *
Sebastian wants to gift mia a design of stars of her favourite size. However he is a performer and not a programmer and hence has asked you for help.

Write a program that accepts an integer and creates a pattern accordingly.

Input
Only one integer N

Output
Print the design as shown in the examples

Notes
0 ≤ N ≤ 10

Sample Input 0

3
Sample Output 0

  *
 ***
*****
 ***
  *
Sample Input 1

4
Sample Output 1

   *
  ***
 *****
*******
 *****
  ***
   *
   
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j,k;
    cin>>n;
    for(i=1;i<n+1;i++)
    {
        for(j=n-i;j>0;j--)
            cout<<" ";
        for(j=0;j<i;j++)
            cout<<"*";
        for(j=i-1;j>0;j--)
            cout<<"*";
        cout<<endl;
        
    }
    for(i=n-1;i>0;i--)
    {
        for(j=n-i;j>0;j--)
            cout<<" ";
        for(j=0;j<i;j++)
            cout<<"*";
        for(j=i-1;j>0;j--)
            cout<<"*";
        cout<<endl;
        
    }
    return 0;
}
