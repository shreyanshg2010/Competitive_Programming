Some prime numbers can be expressed as Sum of other consecutive prime numbers.

For example

5 = 2 + 3 
17 = 2 + 3 + 5 + 7 
41 = 2 + 3 + 5 + 7 + 11 + 13

Your task is to find out how many prime numbers which satisfy this property are present in the range 3 to N subject to a constraint that summation should always start with number 2.

Write code to find out number of prime numbers that satisfy the above mentioned property in a given range.

Input Format:
Each test case contains a number N <= 1000000000

Output Format:
Print the total number of all such prime numbers which are less than or equal to N.




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool isPrime(int n){
    if(n<=1)
        return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int sum=2,count=0;
    if(n<5){
        cout<<0;
        return 0;
    }
    for(int i=3;sum<=n;i++){
        if(isPrime(i)){
            sum+=i;
            if(sum<=n){
                if(isPrime(sum)){
                    count++;
                }
            }
            
        }
    }
    cout<<count;
    return 0;
}
