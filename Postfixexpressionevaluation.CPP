A postfix expression is of the form instead of the traditional infix expression which follows the form .

Your task is to write a program that takes advantage of the stack data structure and calculates the value of a given postfix expression.

INPUT

First line contains one string denoting the postfix expression.
Second line contains space separated integers, each integer denotes the value of a variable, where the first integer denotes the value of the 'A', second integer denotes the value of 'B' and so on. 
It is guaranteed that there will be as many integers on second line as there are distinct variables in the postfix expression and that they will be the initial characters of the capital letter alphabet.

Look at the sample Input/Output for clarity

OUTPUT

Output one number denoting the final value of the expression.

Sample Input 0

AB+
3 7
Sample Output 0

10




#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string exp;
    cin >> exp;
    stack<int> st;
    int temp;
    for(auto it : exp)
    {
        if(isalpha(it))
        {
            cin >> temp;
            st.push(temp);
        }
        else
        {
            if(it == '+')
            {
                int k = st.top();
                st.pop();
                k += st.top();
                st.pop();
                st.push(k);
            }
            else if(it == '-')
            {
                int k = st.top();
                st.pop();
                k -= st.top();
                st.pop();
                st.push(k);
            }
            else if(it == '*')
            {
                int k = st.top();
                st.pop();
                k *= st.top();
                st.pop();
                st.push(k);
            }
            else if(it == '/')
            {
                int k = st.top();
                st.pop();
                k /= st.top();
                st.pop();
                st.push(k);
            }
        }
    }
    cout << st.top();
    return 0;
}
