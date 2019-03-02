In math, GCD, the greatest common divisor is an easy task to calculate for 2 positive numbers.

A common divisor of two positive numbers is a number which divides both numbers.

However your teacher decides to give you a more difficult task, in this task you need to find the largest divisor d between two integers a and b that is in a given range from low to high (inclusive), i.e. low ≤ d ≤ high. It is possible that there is no common divisor in the given range.

You will be given the two integers a and b, then n queries. Each query is a range from low to high and you have to answer each query.

Input Format

The first line has a and b, the two integers as described above.

The second line contains one integer n, representing the number of queries.

In the n lines that follow, each line contains one query consisting of two integers, low and high.

Constraints

(1 ≤ a, b ≤ 1e9)

(1 ≤ n ≤ 1e4)

(1 ≤ low ≤ high ≤ 1e9)

Output Format

Print n lines.

The i-th of them should have the result of the i-th query in the input.

If there is no common divisor in the given range for any query, print -1.

Sample Input 0

9 27
3
1 5
10 11
9 11
Sample Output 0

3
-1
9




#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int gcd = __gcd(a, b);
    vector <int> div;
    for (int i = 1; i*i <= gcd; ++i) {
        if (gcd%i == 0) {
            div.push_back(i);
            if (i != gcd/i) div.push_back(gcd/i);
        }
    }
    sort(div.begin(), div.end(), greater <int> ());

    int Q;
    scanf("%d", &Q);
    while (Q--) {
        int m, n, res = -1;
        scanf("%d%d", &m, &n);
        for (int i : div) {
            if (i >= m && i <= n) {
                res = i;
                break;
            }
        }
        printf("%d\n", res);
    }

}
