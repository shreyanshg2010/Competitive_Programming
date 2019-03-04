You are given N tasks.

The ith task has deadline Ti and generates a profit of Pi. Every task takes one second to complete. Time starts at t = 0.

Your task is to find an optimal way to do the tasks so as to generate the maximum amount of total profit.

You have to print the maximum possible profit that you were able to make.

INPUT
First line contains the number of test cases T.
For every test case : 
First line contains the integer N.
Next line contains N integers denoting the array T.
Last line contains N integers denoting the array P.

OUTPUT
Print one number, the maximum profit that you can make for every test case on a new line

NOTES
1 ≤ N, Ti, Pi ≤ 1000

Sample Input 0

2
4
4 1 1 1
20 10 40 30
5
2 1 2 1 3
100 19 27 25 15
Sample Output 0

60
142





#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000
struct job{
    int dead;
    int prof;
};
bool cmp(struct job a,struct job b)
{
        return (a.prof>b.prof);
}
void jobSequencing(job obj[],int n)
{
    int i, j, k, maxprofit;
    int timeslot[MAX];
    int filledTimeSlot = 0;
    int dmax = 0;
    for(i = 0; i < n; i++) 
    {
        if(obj[i].dead > dmax) 
        {
            dmax = obj[i].dead;
        }
    }
    for(i = 1; i <= dmax; i++) 
    {
        timeslot[i] = -1;
    }
    for(i = 1; i <= n; i++) 
    {
        k = min(dmax,obj[i - 1].dead);
        while(k >= 1) 
        {
            if(timeslot[k] == -1) 
            {
                timeslot[k] = i-1;
                filledTimeSlot++;
                break;
            }
            k--; 
        }
        if(filledTimeSlot == dmax)
            break;
    }
    maxprofit = 0;
    for(i = 1; i <= dmax; i++) 
    {
        if(timeslot[i]>=0)
        {
        maxprofit += obj[timeslot[i]].prof;
        }
    }
    cout<<maxprofit<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,j;
        struct job obj[n];
        for(i=0;i<n;i++)
            cin>>obj[i].dead;
        for(i=0;i<n;i++)
            cin>>obj[i].prof;
        sort(obj,obj+n,cmp);
        jobSequencing(obj,n);
    }
    return 0;
}
