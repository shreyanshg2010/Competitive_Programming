Your task is to print a stairs of numbers in the following format :

N = 1
1

N = 2
  1
2 3

N = 3
    1
  2 3
3 4 5
and so on.

Input
Input consists of only one integer N

Output
Print the required pattern

Notes
N is a non-negative integer less than or equal to 10

Sample Input 0

2
Sample Output 0

  1 
2 3 
Sample Input 1

3
Sample Output 1

    1 
  2 3 
4 5 6 


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j,k=1;
    cin>>n;
    for(i=1;i<n+1;i++)
    {
        for(j=n-i;j>0;j--)
            cout<<"  ";
        for(j=0;j<i;j++)
            cout<<k++<<" ";
        cout<<endl;
        
    }
    return 0;
}
