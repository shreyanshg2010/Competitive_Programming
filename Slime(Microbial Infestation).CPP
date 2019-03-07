There are n slimes in a row. Each slime has an integer value (possibly negative or zero) associated with it.

Any slime can eat its adjacent slime (the closest slime to its left or to its right, assuming that this slime exists).

When a slime with a value x eats a slime with a value y, the eaten slime disappears, and the value of the remaining slime changes to x−y.

The slimes will eat each other until there is only one slime left.

Find the maximum possible value of the last slime.

Input
The first line of the input contains an integer n (1≤n≤500000) denoting the number of slimes.

The next line contains n integers ai (−109≤ai≤109), where ai is the value of i-th slime.

Output
Print an only integer — the maximum possible value of the last slime.

Examples
input
4
2 1 2 1
output
4
input
5
0 -1 -1 -1 -1
output
4
Note
In the first example, a possible way of getting the last slime with value 4 is:

Second slime eats the third slime, the row now contains slimes 2,−1,1
Second slime eats the third slime, the row now contains slimes 2,−2
First slime eats the second slime, the row now contains 4
In the second example, the first slime can keep eating slimes to its right to end up with a value of 4.



#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	long long int ans=a[n-1];
	if(n>1)
	ans=ans-a[0];
	for(int i=1;i<n-1;i++)
	{
		ans=ans+abs(a[i]);
	}
	cout<<ans<<endl;
}
