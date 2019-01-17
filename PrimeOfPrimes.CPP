A number is super prime if the sum of all its divisors except itself is a prime number. 
A prime number is a number which can only be divided by two numbers, 1 and itself. 
1 is neither prime nor composite. 
For this task, you are to write a program to find out whether a given number is super prime or not. 
See the sample case for clarity

Input
Input consists of multiple test cases. 
First line contains T the number of test cases. 
Then T lines follow. Each test case contains one integer only, N.

Output
For every test case print "yes" if N is a super prime and "no" otherwise.

Notes
1 ≤ T ≤ 10000
1 ≤ N, ≤ 106
Your code must be efficient and optimal
Sample Input 0

4
1
2
4
6
Sample Output 0

no
no
yes
no
Explanation 0

1 : sum = 0 : not prime 
2 : sum = 1 : not prime 
4 : sum = 1 + 2 = 3 : prime 
6 : sum = 1 + 2 + 3 = 6 : not prime



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int divSum(int num) 
{ 
    // Final result of summation of divisors 
    int result = 0; 
  
    // find all divisors which divides 'num' 
    for (int i=2; i<=sqrt(num); i++) 
    { 
        // if 'i' is divisor of 'num' 
        if (num%i==0) 
        { 
            // if both divisors are same then add 
            // it only once else add both 
            if (i==(num/i)) 
                result += i; 
            else
                result += (i + num/i); 
        } 
    } 
  
    // Add 1 to the result as 1 is also a divisor 
    return (result + 1); 
} 

int isprime(long long int x) 
{
    long long int i;
    if(x==0 || x==1) return 0; 
    else {
    for (int i=2; i*i<=x; i++) 
        if (x%i == 0) 
            return 0; 
    return 1; 
         }
} 

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long int t;
    scanf("%ld", &t);
    while(t--){
        int a;
        scanf("%d", &a);
        int sum = divSum(a);
        if(isprime(sum))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
