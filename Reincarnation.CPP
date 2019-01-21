In the world of numbers every number dies at some point and reincarnates. The newer generation will always surpass the previous generation and hence every number X upon incarnation will be promoted with a power Y i.e. X will now become X raised to the power Y. The god of the world of numbers needs a small break and hence has given you the task of reincarnating the incoming numbers after raising them to the power Y.

Input Format

Two numbers, X and Y.

Constraints

1 <= X <= 10
0 <= Y <= 10

Output Format

One number, X raised to the power Y.

Sample Input 0

2 4
Sample Output 0

16
Explanation 0

2 raised to the power 4 = 2 * 2 * 2 * 2 = 16



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int a,b,c;
    cin>>a>>b;
    c=a;
    if(b==0){
        cout<<"1";
    }
    else{
    for(int i=1;i<b;i++)
    {
        c=c*a;
        
    }
    cout<<c;}
    return 0;
}
