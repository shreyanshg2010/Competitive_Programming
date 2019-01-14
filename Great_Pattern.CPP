Your task is simple, write a program in Java to print the following pattern :

N = 1
1

N = 2
  1
1 2 1
  1
  
N = 3
    1
  1 2 1
1 2 3 2 1
  1 2 1
    1
    
and so on..
INPUT
Input consists of many test cases. 
First line contains the number of test case T. 
Each of the test case lines consists of one number N for that test case.

OUTPUT
Print the pattern corresponding to the N value of each test case. 
Print a blank line between two test case outputs.

CONSTRAINTS
1 ≤ T, N ≤ 10

Sample Input 0

3
1
2
3
Sample Output 0

1

  1
1 2 1
  1
  
    1
  1 2 1
1 2 3 2 1
  1 2 1
    1
Contest ends in 39 minutes 24 seconds
Submissions: 277
Max Score: 50
Rate This Challenge:

    





#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,j,k,l,t,test;
    cin>>test;
    while(test--){
        cin>>n;
        int space = 2*(n-1);
        for(i=1;i<=n;i++){
            t=0;
            for(k=1;k<=space;k++){
                cout<<" ";
            }

            for(j=1;j<=i;j++){  
                cout<<j<<" ";
                t++;
            }
            for(l=t-1;l>=1;l--){
                cout<<l<<" ";
            }
            space-=2;
            cout<<endl;
        }
     //   int len=i;
        space = 2;

        for(int i=n-1;i>=1;i--){
            t=0;
            for(k=1;k<=space;k++){
                cout<<" ";
            }
            for(j=1;j<=i;j++){  
                cout<<j<<" ";
                t++;
            }
            for(l=t-1;l>=1;l--){
                cout<<l<<" ";
            }
            space+=2;
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
