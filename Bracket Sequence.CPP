A bracket sequence is called regular, if by inserting '+' and '1' into it we can get a correct mathematical expression. For example, sequences '(())()', '()' and '(()(()))' are regular, while ')(', '(()' and '(()))(' are not.

Since, ((1+(1+1))+(1+1)) is a valid mathematical expression hence, '((())())' is valid sequence.

You are given a string of '(' and ')' characters. You are to find its longest substring that is a regular bracket sequence. You are to find the number of such substrings as well.

Input Format

The first line of the input file contains a non-empty string, consisting of '(' and ')' characters.

Constraints

Length of given sequence does not exceed .

Output Format

Print the length of the longest substring that is a regular bracket sequence, and the number of such substrings. If there are no such substrings, write the only line containing "0 1".

Sample Input 0

)((())))(()())
Sample Output 0

6 2
Sample Input 1

((((()(((
Sample Output 1

2 1



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    cin>>s;
    stack<int>st;
    st.push(-1);
    vector<int>v;
    int num=INT_MIN;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push(i);
        }
        else{
            st.pop();
            if(!st.empty() && num<=i-st.top()){
                num = i-st.top();
                v.push_back(num);
            }
            if(st.empty()){
                st.push(i);
            }
        }
    }
    int count[1000000] = {0};
    
    for(int i=0;i<v.size();i++){
        count[v[i]]++;
    }
    
    cout<<num<<" "<<count[num];
    return 0;
}
