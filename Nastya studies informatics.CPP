Today on Informatics class Nastya learned about GCD and LCM (see links below). Nastya is very intelligent, so she solved all the tasks momentarily and now suggests you to solve one of them as well.

We define a pair of integers (a, b) good, if GCD(a, b) = x and LCM(a, b) = y, where GCD(a, b) denotes the greatest common divisor of a and b, and LCM(a, b) denotes the least common multiple of a and b.

You are given two integers x and y. You are to find the number of good pairs of integers (a, b) such that l ≤ a, b ≤ r. Note that pairs (a, b) and (b, a) are considered different if a ≠ b.

Input
The only line contains four integers l, r, x, y (1 ≤ l ≤ r ≤ 109, 1 ≤ x ≤ y ≤ 109).

Output
In the only line print the only integer — the answer for the problem.

Examples
inputCopy
1 2 1 2
outputCopy
2
inputCopy
1 12 1 12
outputCopy
4
inputCopy
50 100 3 30
outputCopy
0
Note
In the first example there are two suitable good pairs of integers (a, b): (1, 2) and (2, 1).

In the second example there are four suitable good pairs of integers (a, b): (1, 12), (12, 1), (3, 4) and (4, 3).

In the third example there are good pairs of integers, for example, (3, 30), but none of them fits the condition l ≤ a, b ≤ r.





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

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

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

