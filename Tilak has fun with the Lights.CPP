There are n lights in a row such that they are numbered 1 to n from left to right. Initially some of the lights are switched on. Tilak intends to switch all the lights on. At every step he can switch a light on (this light should be switched off at that moment) if and only if there's at least one adjacent light which is already switched on.

He knows the initial state of each of the lights and he's wants to know how many different ways exist to switch all the lights on. Please find the required number of ways modulo 1000000007 (1e9 + 7). (where 1eN means Nth power of 10)

Input Format

The first line of the input contains two integers n and m where n is the number of lights in the sequence and m is the number of lights which are initially switched on.

The second line contains m distinct integers, each between 1 to n inclusive, denoting the indices of lights which are initially switched on.

Constraints

(1 ≤ n ≤ 1000)

( 1 ≤ m ≤ n)

Output Format

In the only line of the output print the number of different possible ways to switch on all the lights modulo 1000000007 (1e9 + 7). (where 1eN means Nth power of 10)

Sample Input 0

3 1
1
Sample Output 0

1
Sample Input 1

4 2
1 4
Sample Output 1

2
Sample Input 2

11 2
4 8
Sample Output 2

6720



#include <iostream>
#include <cstdio>
#include <algorithm>

#define N 1100
#define M 1000000007

using namespace std;

long long n, m, a[N], f[N][N], p[N], ans = 1, s;

int main(){
    cin >> n >> m;
    for (int i = 0; i < m; i++) cin >> a[i];

    for (int i = 0; i <= n + 1; i++) f[0][i] = 1;
    for (int i = 1; i <= n + 1; i++)
        for (int j = 1; j <= n + 1; j++)
            f[i][j] = (f[i - 1][j] + f[i][j - 1]) % M;
    p[0] = 1;
    for (int i = 1; i <= n; i++) p[i] = (p[i - 1] * 2) % M;

    sort(a, a + m);
    s = a[0] - 1;
    for (int i = 1; i < m; i++){
        int l = a[i] - a[i - 1] - 1;
        if (l == 0) continue;
        ans = (ans * f[l][s + 1]) % M;
        ans = (ans * p[l - 1]) % M;
        s += l;
    }
    ans = (ans * f[n - a[m - 1]][s + 1]) % M;

    cout << ans;
}
