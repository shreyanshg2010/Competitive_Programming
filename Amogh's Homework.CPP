Today Amogh learnt about GCD and LCM in his math class. Amogh likes studying, so he started solving all the questions in the homework immediately. However he is stuck on one of them and needs your help.

We say that a pair of integers (a, b) if good, if GCD(a, b) = x and LCM(a, b) = y, where GCD(a, b) denotes the greatest common divisor of a and b, and LCM(a, b) denotes the least common multiple of a and b.

Given two integers x and y, you need to find the total number of good pairs of integers (a, b) such that l ≤ a, b ≤ r. Note that pairs (a, b) and (b, a) are considered different if a ≠ b (i.e the pairs are ordered).

Input Format

The only line contains four integers l, r, x, y.

Constraints

(1 ≤ l ≤ r ≤ 1e9) where 1eN stands for Nth power of 10

(1 ≤ x ≤ y ≤ 1e9) where 1eN stands for Nth power of 10

Output Format

In the only line print the only integer — the answer for the problem.

Sample Input 0

1 2 1 2
Sample Output 0

2
Sample Input 1

1 12 1 12
Sample Output 1

4
Sample Input 2

50 100 3 30
Sample Output 2

0



#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    int l, r, x, y;
    cin >> l >> r >> x >> y;
    if (y % x != 0){
        cout << 0 << '\n';
        return 0;
    }
    int ans = 0;
    int n = y / x;
    for (int d = 1; d * d <= n; ++d) {
        if (n % d == 0) {
            int c = n / d;
            if (l <= c * x && c * x <= r && l <= d * x && d * x <= r && gcd(c, d) == 1) {
                if (d * d == n) ++ans;
                else ans += 2;
            }
        }
    }

    cout << ans << '\n';
    return 0;
}
