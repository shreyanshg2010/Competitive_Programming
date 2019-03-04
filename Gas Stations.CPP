There are N gas stations along a circular route, where the amount of gas at station i is gas[i].

You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from station i to its next station (i+1). You begin the journey with an empty tank at one of the gas stations.

Print the minimum starting gas station’s index if you can travel around the circuit once, otherwise print -1.

You can only travel in one direction. i to i+1, i+2, ... n-1, 0, 1, 2.. Completing the circuit means starting at i and ending up at i again.

Input Format

First line contains the number of gas stations N.
Second line contains N integers, the ith of them denoting gas[i].
Third line contains N integers, the ith of them denoting cost[i].

Constraints

1 <= N <= 105

Output Format

Print the minimum starting gas station’s index if you can travel around the circuit once, otherwise print -1.

Sample Input 0

2
1 2
2 1
Sample Output 0

1



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    long long int gas[n],cost[n];
    for(int i=0;i<n;i++)
        cin>>gas[i];
    for(int i=0;i<n;i++)
        cin>>cost[i];
    int k=0;
    while(k<n)
    {
        if(gas[k]<cost[k])
        {
            k++;
            continue;
        }
        long long int g=0,c=0,l;
        for(l=k;l<n;l++)
        {
        g+=gas[l];
        c+=cost[l];
        if(g<c)
        {
            break;
        }
        }
        if(l!=n)
        {
            k++;
            continue;
        }
        for(l=0;l<k;l++)
        {
            g+=gas[l];
            c+=cost[l];
            if(g<c)
            {
                break;
            }
        }
        if(l!=k)
        {
            k++;
            continue;
        }
        cout<<k;
        break;
    }
    if(k==n)
        cout<<"-1";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}




