Our beloved integer X is confused. He was told that he is a positive integer which fits in a 32 bit signed integer that can be expressed as A^P where P > 1 and A > 0 where A and P both should be integers. Now he wonders, there is a possibility that he does not exist at all because he does not satisfy the A^P expressibility condition. Given the values of A and P, find out if X exists or not.

Input Format

Input contains the value of integer X.

Constraints

0 < X < 2x10^9

Output Format

Output "yes" if X can be expressed as A^P and "no" otherwise.

Sample Input 0

4
Sample Output 0

yes
Explanation 0

Yes as 2^2 = 4


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x,flag=0;
    cin>>x;
    if (x<2)
    {cout<<"yes";
        flag=1;}
  
    for (auto i = 2; i<=sqrt(x); i++)
    {
        for (auto j = 2; j<=32; j++)
        {
            if(pow(i, j)==x)
            {cout<<"yes";
                flag=1;}
        }
    }
    if(flag==0)
        cout<<"no";
    return 0;
}
