Given two values, they can be integer or floating point numbers, add them.

Input Format

Two values separated by a space.

Constraints

No constraints.

Output Format

One value, the result of sum of two input values.

Sample Input 0

5 4
Sample Output 0

9
Explanation 0

5 + 4 = 9



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double a,b;
    cin>>a>>b;
    a=a+b;
    long int c=ceil(a);
    if(c>a){
        cout<<fixed<<showpoint;
        cout<<setprecision(2);
        cout<<a;}
    else
        cout<<c;
    return 0;
}
