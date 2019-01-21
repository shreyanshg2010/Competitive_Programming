ou are given an array of N integers which is a permutation of the first N natural numbers. You can swap any two elements of the array. You can make at most K swaps. What is the largest permutation, in numerical order, you can make?

Input Format

The first line of the input contains two integers, N and K, the size of the input array and the maximum swaps you can make, respectively. The second line of the input contains a permutation of the first N natural numbers.

Constraints

1≤N≤10^5 1≤K≤10^9

Output Format

Print the lexicographically largest permutation you can make with at most K swaps

Sample Input 0

5 1
4 2 3 5 1
Sample Output 0

5 2 3 4 1



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n,k,max;
    cin>>n>>k;
    long long int a[n];
    for(long long int i=0;i<n;i++){
        cin>>a[i];
    }
    long long int j=0,index;
    while(k){
        max = a[j];
        for(long long int i=j+1;i<n;i++){
            if(a[i]>max){
                max=a[i];
                index = i;
            }
        }
        if(max > a[j]){
            int temp = a[j];
            a[j] = a[index];
            a[index] = temp;
            k--;
        }
        
        j++;
        if(j==n){
            break;
        }
    }
    for(long long int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
