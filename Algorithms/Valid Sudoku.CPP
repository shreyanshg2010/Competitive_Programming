You will be given a completely filled sudoku. You have to verify whether the given sudoku's are correctly filled or not.

Rules of sudoku: 1.Each of the nine blocks has to contain all the numbers 1-9 within its squares. 2.Each number can only appear once in a row, column or box.

Input Format

First line contains "T" which denotes no.of test cases

Followed by T number of sudoku's and sudoku is a 9x9 matrix which contains all the elements ranging in between 1 to 9

Constraints

1<=T<=10

Output Format

If the sudoku is valid print as "Valid" else "inValid"

print every ans in new line

Sample Input 0

1
4 3 5 2 6 9 7 8 1
6 8 2 5 7 1 4 9 3
1 9 7 8 3 4 5 6 2
8 2 6 1 9 5 3 4 7
3 7 4 6 8 2 9 1 5
9 5 1 7 4 3 6 2 8
5 1 9 3 2 6 8 7 4
2 4 8 9 5 7 1 3 6
7 6 3 4 1 8 2 5 9
Sample Output 0

Valid




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t)
    {
        int mat[10][10];
        bool flag;
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
                cin>>mat[i][j];
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                int cnt_row[10],cnt_col[10];
                int sum1=0,sum2=0;
                flag = true;
                for(int x=0;x<10;x++)
                    cnt_row[x]=0;
                for(int x=0;x<10;x++)
                    cnt_col[x]=0;
                for(int k=0;k<9;k++)
                {
                    cnt_row[mat[i][k]]+=1;
                    cnt_col[mat[k][j]]+=1;
                }
                for(int l=1;l<10;l++)
                { 
                    if(cnt_row[l]!=1 || cnt_col[l]!=1)
                        flag=false;
                }
                if(!flag)
                    break;
            }
            if(!flag)
                break;
        }
        bool flag2;
        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3)
            {
                int cnt[10];
                flag2=true;
                for(int x=0;x<10;x++)
                    cnt[x]=0;
                for(int k=i;k<i+3;k++)
                {
                    for(int l=j;l<j+3;l++)
                    {
                        cnt[mat[k][l]]+=1;
                    }
                }
                for(int m=1;m<10;m++)
                    if(cnt[m]!=1)
                        flag2=false;
                if(!flag2)
                    break;
            }
            if(!flag2)
                break;
        }
        if(flag && flag2)
            cout<<"Valid\n";
        else
            cout<<"inValid\n";
        t--;
    }
return 0;
}
