Jayraj attended the campus placement drive conducted by Amazon. In the technical round the interviewer asked the candidate to write an algorithm to count the number of primes in a given range. Jayaraj wrote an algorithm as he is good at logic building. But the interviewer asked him to code it. But Jayaraj was not good at coding. So please help him in writing the code by submitting your solution to this problem

Input Format

Two space seperated Integers indicating the first and last values

Constraints

1<=first<=last<=10^12

Output Format

The count of prime number in that range

Sample Input 0

1 10
Sample Output 0

4
Explanation 0

The primes from 1 to 10 are 2,3,5,7




#include <stdio.h>

#define N 100000005
#define long long long
#define max(x, y) ((x > y) ? x : y)

char comp[N], sieve[N];

int main()
{
    long a, b, i, j, ans = 0;
    scanf("%lld %lld", &a, &b);
    for(j = 2; j*j <= b; ++j)
    {
        if(sieve[j])
            continue;
        for(i = j+j; i*i <= b; i += j)
            sieve[i] = 1;
        for(i = j*max(2, a/j + (a%j > 0)); i <= b; i += j)
            comp[i-a+1] = 1;
    }
    for(i = max(2, a); i <= b; ++i)
        if(!comp[i-a+1])
            ans++;
    printf("%lld", ans);
    return 0;
}
