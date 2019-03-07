Ivan unexpectedly saw a present from one of his previous birthdays. It is array of n numbers from 1 to 200. Array is old and some numbers are hard to read. Ivan remembers that for all elements at least one of its neighbours ls not less than it, more formally:

a1≤a2,

an≤an−1 and

ai≤max(ai−1,ai+1) for all i from 2 to n−1.

Ivan does not remember the array and asks to find the number of ways to restore it. Restored elements also should be integers from 1 to 200. Since the number of ways can be big, print it modulo 998244353.

Input
First line of input contains one integer n (2≤n≤105) — size of the array.

Second line of input contains n integers ai — elements of array. Either ai=−1 or 1≤ai≤200. ai=−1 means that i-th element can't be read.

Output
Print number of ways to restore the array modulo 998244353.

Examples
input
3
1 -1 2
output
1
input
2
-1 -1
output
200
Note
In the first example, only possible value of a2 is 2.

In the second example, a1=a2 so there are 200 different values because all restored elements should be integers between 1 and 200.


#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
const int mod = 998244353;
int a[maxn];
long long dp[maxn][205][3];
int main() {
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
		scanf("%d", &a[i]);
	if(a[0] != -1) 
		dp[0][a[0]][0] = 1;
	else {
		for(int i = 1; i <= 200; ++i)
			dp[0][i][0] = 1;
	}
	for(int i = 1; i < n; ++i) {
		int sum = 0;
		for(int j = 1; j <= 200; ++j) {
			if(a[i] == -1 || j == a[i]) {
				dp[i][j][0] = sum;
			}
			
			sum = (sum+dp[i-1][j][1]+dp[i-1][j][0]+dp[i-1][j][2])%mod;
		}
		sum = 0;
		for(int j = 1; j <= 200; ++j) {
			if(a[i] == -1 || j == a[i]) {
				dp[i][j][1] = (dp[i-1][j][0]+dp[i-1][j][1]+dp[i-1][j][2])%mod;
			}
			
		}
		for(int j = 200; j >= 1; --j) {
			if(a[i] == -1 || j == a[i]) {
				dp[i][j][2] = sum;
			}
			sum = (sum+dp[i-1][j][2]+dp[i-1][j][1])%mod;
		}
	}
	long long ans = 0;
	for(int i = 1; i <= 200; ++i) {
		ans = (ans+dp[n-1][i][1]+dp[n-1][i][2])%mod;
	}
	printf("%lld\n", ans);
	return 0;
}
