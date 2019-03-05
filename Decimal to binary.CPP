Write a program that takes as input one decimal number N, and prints its binary form.

Input Format

One number N.

Constraints

0 <= N <= 10^18

Output Format

Binary representation of the number N.

Sample Input 0

2
Sample Output 0

10



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n;
    cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
    string s;
    while(n!=0){
        int rem = n%2;
        s+=to_string(rem);
        n=n/2;
    }
    for(int i=s.length()-1;i>=0;i--){
        cout<<s[i];
    }
    return 0;
}
