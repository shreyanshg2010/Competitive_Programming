You are bored of solving coding problems. That's you came up with a game and decided to play it.

Given a sequence a consisting of n integers. Your can make several steps. In a single step you can choose an element of the sequence (let's denote it Ak) and delete it, and with that all elements equal to Ak+1 and Ak-1 also must be deleted from the sequence. That step brings Ak points to you.

This game continues untill the entire sequence is deleted.

Find out what the maximum score that you can achieve is.

INPUT
Input consists of multiple test cases. For every test case : 
The first line contains integer n (1 ≤ n ≤ 100000) that shows how many numbers are in the sequence.
The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 100000).

OUTPUT
For every test case, print a single integer — the maximum number of points that you can earn.

Sample Input 0

3
2
1 2
3
1 2 3
9
1 2 1 3 2 2 2 2 3
Sample Output 0

2
4
10





#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;++k)
    {
    int i,j;
    int n;
    long long x,y;
 
    //map to store value and its frequency
    map<int,int> mp;
    map<int, int> :: iterator it;
        cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>j;
 
        if(mp.find(j)!=mp.end())
        {
            //increase frequency by 1
            mp[j]++;
        }
 
        else
        {
            mp[j]=1;
        }
    }
 
    n=mp.size();
 
    //array to memoize values 
    vector<pair<int,long long int> > dp(mp.size()+1);
 
    //initialize
    dp[0].first=0;
    dp[0].second=0;
 
    for(it=mp.begin(),i=1;it!=mp.end();i++,it++)
    {
        dp[i].first=it->first;
 
        x=it->first;
        y=it->second;
 
        dp[i].second=x*y;
    }
 
    //implement DP in bottom up manner    
    for(i=2;i<=n;i++)
    {
        //select previous value
        j=i-1;
 
        if(dp[i].first==(dp[j].first+1))
        {
            j--;
        }
 
        //now add
        dp[i].second+=dp[j].second;
 
        //compare
        dp[i].second=max(dp[i].second,dp[i-1].second);
    }
 
    //result
    cout<<dp[n].second<<endl;
    }
    return 0;
}
