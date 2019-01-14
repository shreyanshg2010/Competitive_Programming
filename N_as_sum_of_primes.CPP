Given a number N, print "YES" if N can be expressed as a sum of 2 prime numbers and "NO" otherwise.

Input Format

One number, N.

Constraints

1 <= N <= 10^5.

Output Format

"YES" or "NO"

Sample Input 0

5
Sample Output 0

YES
Explanation 0

5 = 2 + 3

Sample Input 1

11
Sample Output 1

NO



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int power(int a, unsigned int n, int p){
    int res = 1;
    a = a % p;
    while (n>0){
        if (n & 1)
            res = (res*a)%p;
        n = n >> 1;
        a = (a*a)%p;
    }
    return res;
}

bool isPrime(int n, int k){
    if (n==1 || (n%2==0 && n!=2))
        return false;
    if (n<=3)
        return true;
    while (k>0){
        int a = 2 + rand()%(n-4);
        if(power(a, n-1, n) != 1)
            return false;
        k--;
    }
    return true;
}


int main() {
    int n;
    cin >> n;
    if (n%2==0)
        cout << "YES";
    else if(isPrime(n-2, 10))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
