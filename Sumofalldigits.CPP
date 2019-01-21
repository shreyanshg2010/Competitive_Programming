You are given an integer I in the following format : 
You are given two integers P and Q. 
Integer I can be obtained by appending Q instances of P together. 
For example, if P = 619 and Q = 4, then I = 619619619619.

Your task is, given P and Q find the sum of all the digits of I.
That sounds too simple, so lets take it up a notch.
Lets say the sum of all digits is S, then run the following pseudocode : 

int SumOfDigits(S) :
	K <- Sum of Digits of S
    if K is a single digit number, return K
    else return SumOfDigits(K)
INPUT
Input consist of two numbers P and Q separated by a space.

OUTPUT
Print a single digit, the final digit when the numbers of I are continuously added.

CONSTRAINTS
1 ≤ P ≤ 10100000 
**1 ≤ Q ≤ **105 

Sample Input 0

148 3
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
    int a[100001],k,r;
    char str[100001];
    cin>>str;
        cin>>k;
        long long i=0,s=0;
        while(str[i]){
            a[i]=(int)str[i]-48;
        //    cout<<a[i]<<" ";
        s+=a[i];
            i++;
        }
  
    long long tot=s*k;
    s=0;
    while(1){
        s=0;
        while(tot>0){
            r=tot%10;
            tot/=10;
            s+=r;
        }
        //cout<<s<<endl;
        tot=s;
        if(s<10)
            break;
    }
   cout<<s;
 return 0;
}
