Given a permutation of number from 1 to N. Among all the subarrays, find the number of unique pairs (a,b) such that a≠b and a is maximum and b is second maximum in that subarray.

Input Format

First line contains an integer, N. 
Second line contains N space separated distinct integers, Ai, denoting the permutation.

Constraints

1≤N≤10^5
1≤Ai≤N

Output Format

Print the required answer.

Sample Input 0

5
1 2 3 4 5
Sample Output 0

4
Explanation 0

All possible subarrays are :
1
1 2
1 2 3 
1 2 3 4 
1 2 3 4 5
2
2 3
2 3 4
2 3 4 5
3
3 4
3 4 5
4
4 5
5

The 4 unique pairs are : 
(2, 1)
(3, 2)
(4, 3)
(5, 4)



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    stack<int> s;
    int ans = 0,temp;
    for(int i = 0;i < n;i++)
    {
        cin >> temp;
        while(!s.empty() && temp > s.top())
        {
            s.pop();
            ans++;
        }
        if(!s.empty()) ans++;
        s.push(temp);
    }
    cout << ans;
}
