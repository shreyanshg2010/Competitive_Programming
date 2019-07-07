A square is kept inside a circle. It keeps expanding untill all four of its vertices touch the circumfernce of the circle. Another smaller circle is kept inside the square now and it keeps expanding untill its circumference touches all four sides of the square. The outer and the inner circle form a ring. Find the area of this ring.

Input
Input consists of multiple test cases. 
Each test case contains one integer a denoting the side-length of the square between the two circles.

Output
Print the area of the ring.

Sample Input 0

3
3
4
5
Sample Output 0

7.068583
12.566371
19.634954



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        double n;
        cin>>n;
        double r=n/sqrt(2);
        double r1=n/2;
        double a=M_PI*(r*r-r1*r1);
        printf("%.6f\n",a);
        
    }
    return 0;
}
