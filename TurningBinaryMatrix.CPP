Consider a binary matrix A of size N X N.
Now, consider the following matrices : 
A90 - obtained by rotating A clockwise by 90 degrees.
A180 - obtained by rotating A clockwise by 180 degrees.
A270 - obtained by rotating A clockwise by 270 degrees.

Note : Binary matrix implies that every element will be either 0 or 1.

Your task is to construct another binary matrix B of size N X N such that :
B(i,j) = 1 iff either A(i,j) = 1 OR A90(i,j) = 1 OR A180(i,j) = 1 OR A270(i,j) = 1
B(i,j) = 0 otherwise


INPUT

First line contains the size of the matrix N (1 ≤ N ≤ 100)
Next N lines contain N integers each (Only 0 or 1) denoting the matrix A


OUTPUT

Print N X N integers, denoting the matrix B.

Sample Input 0

4
0 0 0 0
0 0 0 0
0 0 1 0
1 0 0 0
Sample Output 0

1 0 0 1
0 1 1 0
0 1 1 0
1 0 0 1



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int arr[2];
void rotate(int i,int j, int n, int angle){
    if(angle==0){
        arr[0]=i;
        arr[1]=j;
    }
    else{
        arr[0]=n-j-1;
        arr[1]=i;
        rotate(arr[0],arr[1],n,angle-90);
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j;
    cin>>n;
    int mat[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int barr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            int ax,ay,bx,by,cx,cy;
            rotate(i,j,n,90);
            ax=arr[0];
            ay=arr[1];
            rotate(i,j,n,180);
            bx=arr[0];
            by=arr[1];
            rotate(i,j,n,270);
            cx=arr[0];
            cy=arr[1];
            //cout<<ax<<" "<<ay<<" "<<bx<<" "<<by<<" "<<cx<<" "<<cy<<endl;
            if(mat[i][j]==1||mat[ax][ay]==1||mat[bx][by]==1||mat[cx][cy]==1){
                barr[i][j]=1;
            }
            else{
                barr[i][j]=0;
            }
        }
        
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<barr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
