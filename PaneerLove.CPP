Chappu is addicted to Paneer! Nikau wants to keep her happy for n days. In order to be happy in i-th day, she needs to eat exactly a[i] kilograms of Paneer.

There is a big shop uptown and Nikau wants to buy Paneer for her from there. In i-th day, they sell Paneer for pi dollars per kilogram.

Nikau knows all numbers a1,...,an and p1,...,pn. In each day, he can buy arbitrary amount of Paneer, also he can keep some Paneer he has for the future.

Nikau is a little tired from cooking Paneer, so he asked for your help. Help him to minimize the total money he spends to keep Chappu happy for n days.

Input Format

The first line of input contains integer n (1<=n<=10^5), the number of days.

In the next n lines, i-th line contains two integers ai and pi (1<=ai, pi<=100), the amount of Paneer Chappu needs and the cost of Paneer in that day.

Constraints

1 <= n <= 10^5

Output Format

Print the minimum money needed to keep Chappu happy for n days, in one line.

Sample Input 0

3
1 3
2 2
3 1
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
    int t;
    cin>>t;
    int ai[t],pi[t];
    for(int i=0;i<t;i++)
    {
        cin>>ai[i]>>pi[i];
    }
    int cost=0,min;
    cost=ai[0]*pi[0];
    min=pi[0];
    for(int i=1;i<t;i++)
    {
        if(pi[i]<min)
        {
            min=pi[i];
           cost=cost+ai[i]*pi[i]; 
        }
        else
        {
            cost=cost+ai[i]*min;
        }
    }
    cout<<cost;
    return 0;
}

