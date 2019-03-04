Robin Scherbatsky, a proud canadian wants to turn on all the light bulbs.
But since she is a Canadian and she is scared to go into the dark.

N light bulbs are connected by a wire. Each bulb has a switch associated with it, however due to faulty wiring, a switch also changes the state of all the bulbs to the right of current bulb. Given an initial state of all bulbs, find the minimum number of switches you have to press to turn on all the bulbs. You can press the same switch multiple times.

Note : 0 represents the bulb is off and 1 represents the bulb is on.

Input Format

First line contains an integer N.
Next line contains N binary integers (0 or 1).

Constraints

1 <= N <= 105

Output Format

Output the minimum number of switches you'll need to press.

Sample Input 0

4
0 1 0 1
Sample Output 0

4




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            count++;
            for(int j=i;j<n;j++)
            {
                if(a[j]==0)
                    a[j]=1;
                else
                    a[j]=0;
            }
        }
    }
    cout<<count;
    return 0;
}
