There are 2 positive integers a and b such that they have a sum of s and the bitwise XOR of the numbers is x. How many possible values exist for the ordered pair (a, b)?

Input Format

The first line of the input contains s and x, the sum and bitwise xor of the pair of positive integers, respectively.

Constraints

(2 ≤ s ≤ 1e12) where 1eN stands for Nth power of 10

(0 ≤ x ≤ 1e12) where 1eN stands for Nth power of 10

Output Format

Print a single integer, the number of solutions under the given conditions. If no solutions exist, then print 0.

Sample Input 0

9 5
Sample Output 0

4
Sample Input 1

3 3
Sample Output 1

2
Sample Input 2

5 2
Sample Output 2

0




#include<iostream>
#include<cstdio>
using namespace std;
typedef long long ll;
ll sum,XOR,AND;
ll one_bits,res;

int main()
{
    scanf("%lld%lld",&sum,&XOR);
    AND=(sum-XOR)/2;
    if((sum-XOR)%2!=0||sum<XOR||(AND&XOR)!=0)
        printf("0\n");
    else{
        one_bits=0;
        while(XOR){
            if(XOR&1)
                one_bits++;
            XOR>>=1;
        }
        res=(1ll<<one_bits);
        if(AND==0)
            res-=2;
        printf("%lld\n",res);
    }
    return 0;
}
