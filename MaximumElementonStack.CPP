Output Format

image

Sample Input 0

10
1 97
2
1 20
2
1 26
1 20
2
3
1 91
3
Sample Output 0

26
91




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    stack<int> s,ma;
    int m = -1;
    int q,t,v;
    cin >> q;
    while(q--)
    {
        cin >> t;
        if(t == 1)
        {
            cin >> v;
            if(ma.empty())
                ma.push(v);
            else if(v > ma.top())
            {
                ma.push(v);
            }
            s.push(v);
        }
        else if(t == 2)
        {
            if(s.top() == ma.top())
            {
                ma.pop();
            }
            s.pop();
        }
        else if(t == 3)
        {
            cout << ma.top() << endl;
        }
    }
    return 0;
}

