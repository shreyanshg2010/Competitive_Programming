There are N children standing in a line. Each child is assigned a rating value.

You are giving candies to these children subjected to the following requirements:
- Each child must have at least one candy.
- Children with a higher rating get more candies than their neighbors.

What is the minimum candies you must give?

Input Format

First line contains an integer N. 
Next line contains N space separated integers.

Constraints

1 <= N <= 106
1 <= Ai <= 103

Output Format

Output the minimum number of candies you can give out.

Sample Input 0

2
1 2
Sample Output 0

3
Explanation 0

The candidate with 1 rating gets 1 candy and candidate with rating cannot get 1 candy as 1 is its neighbor. So rating 2 candidate gets 2 candies. In total, 2+1 = 3 candies need to be given out.




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i;
    cin>>n;
    int ratings[n];
    for(i=0;i<n;i++)
        cin>>ratings[i];
    int candy[n],sum=0;
    for(i=0;i<n;i++)
        candy[i]=1;
    for(i=1;i<n;i++)
        if(ratings[i]>ratings[i-1])  
            candy[i]=candy[i-1]+1;
    for(i=n-1;i>0;i--)
        if(ratings[i-1]>ratings[i] && candy[i-1]<=candy[i])
            candy[i-1]=candy[i]+1;
    for(i=0;i<n;i++)
        sum+=candy[i];
    cout<<sum;
    return 0;
}
