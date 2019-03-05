An antidote has been developed for the ebola crisis. This antidote is conjuctive, i.e. If it is given to a person, then the person who is connected to this person will also be cured. Two people X and Y are connected if X and Y are adjacent or if there exists a person Z such that X and Z are connected and Z and Y are connected.

So, for every connected group of people we need one antidote. This antidotes strength must be equal to the highest infected person in the group.

Your task is to calculate the number of antidotes of different strengths needed.

Input
First line contains the size of the grid N. 
Next contains the NxN grid.

Output
Print 4 integers, the number of antidotes required of strength 2, 3, 4 and 5.

Sample Input 0

5
0 0 0 1 5
1 1 0 1 1
3 1 0 0 0
1 1 0 1 1
4 4 0 3 1
Sample Output 0

0 1 1 1 



#include<bits/stdc++.h>
using namespace std;

int vis(vector<vector<int> > &a,vector<vector<bool> > &v,int i,int j){
    v[i][j]=1;
    int mx=a[i][j];
    if(i-1>=0 && !v[i-1][j] && a[i-1][j]) mx=max(mx,vis(a,v,i-1,j));
    if(j-1>=0 && !v[i][j-1] && a[i][j-1]) mx=max(mx,vis(a,v,i,j-1));
    if(i+1<v.size() && !v[i+1][j] && a[i+1][j]) mx=max(mx,vis(a,v,i+1,j));
    if(j+1<v.size() && !v[i][j+1] && a[i][j+1]) mx=max(mx,vis(a,v,i,j+1));
    
    if(i-1>=0 && j-1>=0 && !v[i-1][j-1] && a[i-1][j-1]) mx=max(mx,vis(a,v,i-1,j-1));
    if(j-1>=0 && i+1<v.size() && !v[i+1][j-1] && a[i+1][j-1]) mx=max(mx,vis(a,v,i+1,j-1));
    if(i+1<v.size() && j+1<v.size() && !v[i+1][j+1] && a[i+1][j+1]) mx=max(mx,vis(a,v,i+1,j+1));
    if(j+1<v.size() && i-1>=0 && !v[i-1][j+1] && a[i-1][j+1]) mx=max(mx,vis(a,v,i-1,j+1));
    return mx;
}

int main() {
    int n;  cin>>n;
    vector<vector<int> > a(n,vector<int> (n));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)    cin>>a[i][j];
    
    vector<vector<bool> > v(n,vector<bool> (n,0));
    vector<int> c(6,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!v[i][j] && a[i][j]){
                int mx=vis(a,v,i,j);
                c[mx]++;
            }
        }
    }
    for(int i=2;i<6;i++)
        cout<<c[i]<<' ';
    return 0;
}
