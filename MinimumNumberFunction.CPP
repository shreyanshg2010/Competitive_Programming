Input Format

The input contains a single integer n (the number of integers to be compared).

Constraints

2 <= n <= 50

Output Format

Print the string on a single line. Each integer in the string should be written as 'int' and the string must accurately show how min functions can be called to find the smallest of n integers.

Sample Input 0

2
Sample Output 0

min(int, int)
Explanation 0

image

Sample Input 1

4
Sample Output 1

min(int, min(int, min(int, int)))



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
    for(i=0;i<n-1;i++)
        cout<<"min(int, ";
    cout<<"int";
    for(i=0;i<n-1;i++)
        cout<<")";
    return 0;
}
