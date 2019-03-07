Jaime the Tailor's new customer wants to add n distinct clusters of buttons to her dress, where each cluster is filled with a distinct number of buttons of a certain color.

The customer also has specific ideas about how much she wants to pay for each cluster in that for some cluster i, she wants to pay at least ai dollars. In addition, she wants each cluster to contain a distinct number of buttons. And, finally, she wants to minimize her total cost.

Jaime stocks an infinite number of buttons in an infinite number of colors at his shop, and each button costs p dollars. Given n, p, and the amount of money that the customer wants to pay for each respective cluster, help Jaime by finding and printing a long integer denoting the minimum number of buttons he can use to satisfy her request.

Input Format

The first line contains two space-separated integers denoting the respective values of n and p.

The second line contains n space-separated integers where each integer i denotes the value of ai (i.e., the minimum amount of money she wants to spend on cluster i).

Constraints

1 <= n,p,a <= 105

Output Format

Print a single long integer denoting the minimum number of buttons required for Jaime to satisfy his customer's request.

Sample Input 0

3 2
4 6 6
Sample Output 0

9
Sample Input 1

2 3
4 5
Sample Output 1

5




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<assert.h>
using namespace std;

long long arr[100005];
int main() {
/* Enter your code here. Read input from STDIN. Print output to STDOUT */  

int n, p;
long long ans;

cin>>n>>p;

for(int i=0; i<n; i++)
{
   cin>>arr[i];
   arr[i] = ceil((double)arr[i]/(double)p);
}

sort(arr, arr+n);

ans = (long long)arr[0];

for(int i=1; i<n; i++)
{
   if(arr[i]<=arr[i-1])
   arr[i] = arr[i-1]+1;
   ans += (long long)arr[i];
}

cout<<ans<<endl;

return 0;
}
