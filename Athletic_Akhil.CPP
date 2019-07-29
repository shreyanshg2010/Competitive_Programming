Akhil is an athlete.

As a part of his training he started working on his jumping skills recently. Currently he's located at point 0. He needs to get to the point x as a part of his training regime.

To make the training more fruitful, he has decided that he'll first jump by only one unit, and each subsequent jump will be exactly one longer than the previous one. He can go either left or right with each jump. He wonders how many jumps he needs to reach the point x.

Input Format

The input data consists of only one integer x

Constraints

( - 1e9 ≤ x ≤ 1e9) where 1eN stands for Nth power of 10

Output Format

Output the minimal number of jumps that Akhil requires to reach x.

Sample Input 0

2
Sample Output 0

3
Sample Input 1

6
Sample Output 1

3
Sample Input 2

0
Sample Output 2

0



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  


    long long x;
    scanf("%lld",&x);
    if(x<0)x=-x;
    int n= 0;
    int current = 0;
    while(current<x||(current-x)%2)
    {
        n++;
        current = current + n;
    }
    cout<<n<<endl;
}
