A postfix expression is of the form instead of the traditional infix expression which follows the form .

Your task is to write a program that takes advantage of the stack data structure and converts a given infix expression into its postfix expression.

INPUT

There will be only a single line of input, the string that denotes the infix expression to be converted into its postfix counterpart.

There are four arithmetic operations and capital letters used as variables/operands.

Look at the sample Input/Output for clarity

OUTPUT

Output the final postfix expression after converting it to postfix from infix.

Sample Input 0

A+B
Sample Output 0

AB+




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int prec(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 
void infixToPostfix(string s) 
{ 
    stack<char> st; 
    st.push('N'); 
    int l = s.length(); 
    string ns; 
    for(int i = 0; i < l; i++) 
    { 
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')) 
           ns+=s[i];  
        else if(s[i] == '(') 
           st.push('('); 
        else if(s[i] == ')') 
        { 
            while(st.top() != 'N' && st.top() != '(') 
            { 
                char c = st.top(); 
                st.pop(); 
               ns += c; 
            } 
            if(st.top() == '(') 
            { 
                char c = st.top(); 
                st.pop(); 
            } 
        } 
        else{ 
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top())) 
            { 
                char c = st.top(); 
                st.pop(); 
                ns += c; 
            } 
            st.push(s[i]); 
        } 
  
    } 
    while(st.top() != 'N') 
    { 
        char c = st.top(); 
        st.pop(); 
        ns += c; 
    } 
      
    cout << ns << endl; 
  
} 
  

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string exp;
    cin>>exp;
    infixToPostfix(exp);
    return 0;
}
