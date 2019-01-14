Given a number N, print a pattern as shown below :

n = 1
*

n = 2
 *
***
 *

 n = 3
   *
  ***
 *****
  ***
   *
and so on..
Hint : Print the upper triangle and the lower reverse triangle separately.

Input Format

Only one integer, the number n.

Constraints

1 <= n <= 100

Output Format

The required pattern

Sample Input 0

1
Sample Output 0

*




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
                cout<<"*"<<" ";
                t++;
            }
            for(l=t-1;l>=1;l--){
                cout<<"*"<<" ";
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
                cout<<"*""<<" ";
                t++;
            }
            for(l=t-1;l>=1;l--){
                cout<<""*""<<" ";
            }
            space+=2;
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
