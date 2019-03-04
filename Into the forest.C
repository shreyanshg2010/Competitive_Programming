A tree is defined as a group of nodes such that for every pair of nodes in the tree it is possible to reach from one node to another. Note that this definition is applicable when the edges are bidirectional.

Size of a tree is defined as the number of nodes in a tree.

You are given a forest. A forest is a collection of multiple trees. Your task is to gather information about this forest.

Formally, you are supposed to find out three characteristics : 
* Size of the biggest tree in the forest * Size of the smallest tree in the forest * Number of trees in the forest

Input
First line contains two integers N and M where N denotes the number of nodes and M denotes the number of edges. 
The nodes are numbered from 1 to N. 
Next M lines each contain a pair of integers U and V denoting that there is an edge between the node with index U and the node with index V.

Output
Print three integers, the max size of a tree, the min size of a tree and the number of trees in the forest

Notes
1 ≤ N, M< ≤ 1000
There may be multiple edges or self edges
Sample Input 0

5 3
1 2
2 3
4 5
Sample Output 0

3 2 2






#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int *v;
int min=1001,max=0,c=1,n;
void dfs(int i,int a[][n])
{
    v[i]=1;
    for(int j=0;j<n;j++)
    {
        if(v[j]==0&&a[i][j]==1){
            c++;
            dfs(j,a);
          }
    }
    if(c<min)min=c;
    if(c>max)max=c;
    
}
int main() {
    int m;
    scanf("%d%d",&n,&m);
    v=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        v[i]=0;
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            a[i][j]=0;
    for(int i=0;i<m;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        
        a[x-1][y-1]=1;
        a[y-1][x-1]=1;
    }
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0){c=1;dfs(i,a);x++;}
    }
    if(c<min)min=c;
    if(c>max)max=c;
    if(x==1)min=max;
    printf("%d %d %d",max,min,x);
        return 0;
}
