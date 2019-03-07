Jason is trapped in a forest with n hungry monsters and must use his trusty blaster to defend himself! Each monster i has a health value,h(i) .
Jason can discharge his blaster at a monster once per second and reduce its health points by hit units. Once a monster's health points become <=0, it dies.
Given the health values for each monster and an integer, t, can you determine the maximum number of monsters he can kill in t seconds? Assume Jason always hits his target!

Input Format

The first line consists of three space-separated integers describing the respective values of n,hit , and t. 
The second line consists of  space-separated integers describing the values of h(0),h(1),...,h(n-1).

Constraints

Output Format

Print an integer denoting the maximum number of monsters Jason can kill in  seconds.

Sample Input 0

7 8 6
16 19 7 11 23 8 16
Sample Output 0

4
Explanation 0

We want to find the maximum number of monsters we can kill in t=6 seconds using a blaster that does hit=8 units of damage per second. The diagram below depicts the array of initial health values, :
h=[16,19,7,11,23,8,16]
The optimal approach is as follows:

Shoot monster 2 so h=7-8=-1, monster 2 dies, and  becomes [16,19,-1,11,23,8,16]:
Shoot monster 5 so h=8-8=0, monster  dies, and  becomes [16,19,-1,11,23,0,16]:
Shoot monster 3 so h=11-8=3, monster  dies, and  becomes [16,19,-1,3,23,0,16]:
Shoot monster 3 so h=3-8=-5, monster  dies, and  becomes [16,19,-1,-5,23,0,16]:
Shoot monster 0 so h=16-8=8, monster  dies, and  becomes [8,19,-1,-5,23,0,16]:
Shoot monster 0 so h=8-8=0, monster  dies, and  becomes [0,19,-1,-5,23,0,16]:

Thus, we print 4 as the maximum number of monsters we can kill in the given time period.




#include <bits/stdc++.h>

using namespace std;

const int maxn = 100005;

int a[maxn],n,l,t;

int main()
{
    scanf("%d%d%d", &n, &l, &t);
    for(int i = 1;i <= n;i ++) scanf("%d", &a[i]);
    sort(a + 1,a + n + 1);
    int ans = 0;
    for(int i = 1;i <= n;i ++)
    {
        int ned = a[i] / l;
        if (l * ned < a[i]) ++ ned;
        t -= ned;
        if (t < 0) break;
        ans ++;
    }
    printf("%d\n", ans);
    return 0;
}








