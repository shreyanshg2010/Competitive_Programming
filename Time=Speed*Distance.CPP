You are given a graph with N nodes and M edges. There may be multiple edges between the same pair of nodes and there may be self loops. Nodes are indexed from 1 to N. Mario resides in node indexed P while Luigi lives in the node with index Q. It takes T amount of time to go from one node to an adjacent node. Your task is to calculate the minimum time that it will take for Mario to go visit Luigi.

Input
First line contains 5 integers : N, M, P, Q, T. 
Next M lines each contain two integers U and V denoting an edge between the vertex with index U and the vertex with index V.

Output
Print the minimum time it takes for mario to go meet luigi 
If it is not possible for mario to go visit luigi, print -1.

Notes
All input values are less than or equal to 1000

Sample Input 0

5 6 1 5 2
1 2
1 3
1 4
2 4
3 4
4 5
Sample Output 0

4




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<queue>
#include<map>
using namespace std;

struct node{
    int p;
    map<int,node*> edges;
    node(int P){
        p=P;
    }
};
int main() {
    int n,m,p,q,t;
    cin>>n>>m>>p>>q>>t;
    if(p==q){
        cout<<0;
        return 0;
    }
    node* graph[n+1];
    bool visited[n+1]={0};
    for(int i=1;i<=n;i++){
        graph[i]=new node(i);
    }
    while(m--){
        int u,v;
        cin>>u>>v;
        if(u!=v){
        graph[u]->edges[v]=graph[v];
        graph[v]->edges[u]=graph[u];
        }
    }
    queue<node*>que;
    que.push(graph[p]);
    visited[p]=true;
    que.push(NULL);
    int tt=0;
    bool flag=0;
    while(!que.empty()){
        node* cur=que.front();
        que.pop();
        if(cur==NULL && !que.empty()){
                    tt+=t;
            que.push(NULL);
            continue;
        }
        else if(cur==NULL)
            break;
       // cout<<cur->p;
        if(cur==graph[q])
        {flag=1; break;}
        for(auto it:cur->edges){
            if(!visited[it.second->p]){
            que.push(it.second);
            visited[it.second->p]=true;
            }
        }
    }
    if(flag)
        cout<<tt;
    else cout<<-1;
    return 0;
}
