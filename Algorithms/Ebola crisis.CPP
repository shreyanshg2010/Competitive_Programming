There are people randomly seated in an NxN grid. 
In the grid a 0 means an empty seat. A positive integer denotes a person. 
A person can be numbered from 1 to 5, 1 meaning he is perfectly healthy whereas 5 meaning he is highly infected with the virus. 
Any person who is directly adjacent to an infected person (left-right-up-down-diagonally adjacent) is at a high risk. 
If a healthy person numbered 1 is adjacent to an infected person numbered 3, he is at high risk 3, and so on.

Your task is to calculate the number of infected-k people for k = {2,3,4,5} and also the number of high risk-k people for k = {2,3,4,5}

Note that if person is beside multiple infected people, he is at risk for the highest level of infection.

Input
First line contains the size of the grid N. 
Next contains the NxN grid.

Output
Print 8 integers in the following format :

infected-2 infected-3 infected-4 infected-5  
highrisk-2 highrisk-3 highrisk-4 highrisk-5
Sample Input 0

5
0 0 0 1 5
1 1 1 1 1
3 1 2 1 0
1 1 1 1 1
4 4 1 3 1
Sample Output 0

1 2 2 1
2 6 4 3




#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;
int infect[4];
int risk[4];
bool visited[MAX][MAX];
int row[8] = {-1,-1,-1,0,0,1,1,1};
int col[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
bool issafe(int arr[MAX][MAX], int i, int j, int n)
{
    if(i>=0 && i<n && j>=0 && j<n && arr[i][j])
        return true;
    return false;
}
int dfs(int arr[MAX][MAX], int i, int j, int n, int pi, int pj)
{
    if(arr[i][j] == 1 && pi != -1 && pj != -1 && arr[pi][pj] == 1)
        return 1;
    if(arr[i][j] != 1)
    {
        if(!visited[i][j])
        infect[arr[i][j]-2]++,visited[i][j] = true; 
        return arr[i][j];
    }
        
    int maxi = INT_MIN;
    if(pi != -1 && pj != -1 && arr[i][j] == 1 && arr[pi][pj] >1)
        maxi = arr[pi][pj];
    
    for(int k=0; k<8; k++)
    {
        int n_i = i + row[k];
        int n_j = j + col[k];
        
        if(n_i != pi && n_j != pj && issafe(arr,n_i,n_j,n))
        {
            maxi = max(maxi, dfs(arr, n_i, n_j, n, i, j));
        }
    }
    
    risk[maxi-2]++;
    return maxi;
        
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int arr[MAX][MAX];
    
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>arr[i][j];
    
    memset(infect, 0, sizeof(infect));
    memset(risk , 0, sizeof(risk));
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j])
            {
                dfs(arr,i,j,n, -1, -1);
            }
        }
    }
            
    for(int i=0; i<4; i++)
        cout<<infect[i]<<" ";
    cout<<"\n";
    for(int i=0 ;i<4; i++)
        cout<<risk[i]<<" ";
    
    return 0;
}
