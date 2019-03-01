Jessy, the P.E instructor for Middle Vale High School has to arrange his students in line for aerobics. Thankfully, his class of students already came to the court in a line of increasing order of heights. Not so thankfully, James, another P.E instructor is on leave again. So she has to take care of his class right now as well. The second class of students also came in a line of increasing order of heights. But Jessy feels that is useless since she has to make both classes stand together in a single line for her exercises. But you, the janitor (and also a computer science graduate with no other job), sees that this is the right place to use the merge technique. So write a program to help Jessy arrange the students in ascending order of their heights.

Formally, given two sorted arrays, merge them into one sorted array and print the result.

INPUT

The first line of input is n (1

OUTPUT

Print the heights of the students in a row after both the lines have been merged.

Sample Input 0

5
2 4 6 8 10
5
1 3 5 7 9
Sample Output 0

1 2 3 4 5 6 7 8 9 10 




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void mergeArrays(long long int arr1[],long long int arr2[],long long int n1, 
                             long long int n2,long long int arr3[]) 
{ 
    int i = 0, j = 0, k = 0; 
    while (i<n1 && j <n2) 
    { 
        if (arr1[i] < arr2[j]) 
            arr3[k++] = arr1[i++]; 
        else
            arr3[k++] = arr2[j++]; 
    } 
    while (i < n1) 
        arr3[k++] = arr1[i++]; 
    while (j < n2) 
        arr3[k++] = arr2[j++]; 
} 

int main() {
    long long int i,n,m;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    long long int b[m];
    for(i=0;i<m;i++)
        cin>>b[i];
     long long int c[n+m]; 
    mergeArrays(a, b, n, m, c); 
    for (int i=0; i < n+m; i++) 
        cout << c[i] << " ";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
