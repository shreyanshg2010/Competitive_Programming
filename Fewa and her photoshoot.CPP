Ms. Fewa is a model and gets N chocolates per photo shoot. She neither wants to put on weight nor wants to cut down the chocolate consumption. She gets more calories per chocolate as she increases the consumption. Given N chocolates, ith chocolate has A[i] calories.

Lets say she is currently eating the chocolate with index k, and she has eaten c chocolates before this one, then the amount of calories she'll gain from eating the chocolate will be = (c + 1) * k.

While the chocolates can be eaten in any order, calculate the minimum number of calories she might get with the consumption of all N chocolates.

Print the minimum amount of calories gained while eating all N chocolates.

Input Format

First line contains an integer N. 
Second line contains N space separated integers, ith of them denoting A[i].

Constraints

1<= N,A[i] <=1000

Output Format

Print one integer equal to the minimum amount of calories that she can gain while eating all the chocolates

Sample Input 0

3
2 3 2
Sample Output 0

13


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int a[n],i,j,t,s=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++){
        s+=(i+1)*a[i];
    }
    cout<<s;
    return 0;
}
