You are given an empty bag that is supposed to be filled with gold, and it can carry at max W kgs of gold in it.

You are given N samples of gold, with the ith of them weighing Wi and having value Vi.

Your task is to fill the bag with atmost W kgs of gold such that the total value of the gold inside the bag is maximum.

Unlike last time, this time whenever you choose to pick a sample of gold, you have to take it completely, i.e. you cannot break down samples. You either pick the entire sample of gold, or you dont pick the sample at all.

INPUT
First line contains two integers, N and W. 
Second onwards, there are N lines with each of them containing two integers, first one being the weight of the sample and the second one being the value of the sample

OUTPUT
Print one number, the maximum attainable value when the bag is filled with atmost W kgs of gold.

CONSTRAINTS
1 ≤ N ≤ 103 
1 ≤ W ≤ 103 
1 ≤ weights, values ≤ 103 

Sample Input 0

1
3 50
10 60
20 100
30 120
Sample Output 0

220





#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int max(int a, int b) { return (a > b)? a : b; } 
  
// Returns the maximum value that can be put in a knapsack of capacity W 
int knapSack(int W, int wt[], int val[], int n) 
{ 
   int i, w; 
   int K[n+1][W+1]; 

   for (i = 0; i <= n; i++) 
   { 
       for (w = 0; w <= W; w++) 
       { 
           if (i==0 || w==0) 
               K[i][w] = 0; 
           else if (wt[i-1] <= w) 
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]); 
           else
                 K[i][w] = K[i-1][w]; 
       } 
   } 
  
   return K[n][W]; 
} 
int main() 
{ 
    int val[10000],wt[10000],n,t,W; 
    scanf("%d",&t);
    for(int i=1;i<=t;++i)
    {
        scanf("%d %d",&n,&W);
        for(int j=0;j<n;++j)
        {
           scanf("%d %d",&wt[j],&val[j]);
        }
        printf("%d\n", knapSack(W, wt, val, n)); 
    }
    
    return 0; 
} 
