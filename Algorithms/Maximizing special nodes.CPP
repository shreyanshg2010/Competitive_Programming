You are given a directed acyclic graph. We define a sink node to be a node that has zero edges coming out of it. We define a special node to be a node that has a direct edge to a sink node. 
You are given a power to reverse the direction of every single edge. 
You can either choose to use this power or not use this power at all. Your goal is to maximize the number of special nodes.

Write a program to print the maximum number of special nodes that you can get either by reversing all the edges or by leaving the graph as it is.

Input
First line contains the number of nodes N. 
Next N-1 lines contains the information of edges. 
Each line contains two integers U and V denoting that there is an edge from U to V.

Output
Print the maximum number of special nodes that you can get.

Sample Input 0

5 6
1 2
1 3
1 4
2 5
3 5
3 5
Sample Output 0

3
Explanation 0

In both the reverse graph and the original graph the special nodes remain same : 2, 3 and 4. Hence the answer is 3




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector <int> g[1005],rg[1005];
int n;
int solve(vector<int>G[])
{
    int a[1005]={0};
    for(int i=1;i<=n;i++)
    {
        for(auto node:G[i]){
        if(G[node].size()==0)
            a[i]=1;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
        ans+=a[i];
    return ans;
}

int main() {
    int e,c=0,c1=0;
    cin>>n>>e;
    for(int i=1;i<=e;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        rg[y].push_back(x);
    }
    int a=solve(g);
    int b=solve(rg);
    cout<<max(a,b);
    return 0;
}
