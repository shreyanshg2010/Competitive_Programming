Find the XOR of two numbers and print it.

Hint : Input the numbers as strings.

Input Format

First line contains first number X and second line contains second number Y.
The numbers will be given to you in binary form.

Constraints

0 <= X <= 2^1000
0 <= Y <= 2^1000

Output Format

Output one number in binary format, the XOR of two numbers.

Sample Input 0

11011
10101
Sample Output 0

01110

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void helper(string s1,string s2,string &s,int n)
{
    s="";
    for(int i=0;i<n;i++)
    {
        if(s1[i]== s2[i])
            s=s+"0";
        else
            s=s+"1";
    }
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    string s1,s2,s;
    cin>>s1>>s2;
    int n;
    string x,y,res;
    
    if(s1.size() > s2.size())
    {
        n = s1.size() - s2.size();
        x="";
        while(n!=0)
        {
            x = x+"0";
            n--;
        }
        x=x+s2;
        helper(s1,x,s,s1.size());
    }
    
    else if(s1.size()==s2.size())
        helper(s1,s2,s,s1.size());
    
    else
    {
        n = s2.size() - s1.size();
        x="";
        while(n!=0)
        {
            x = x+"0";
            n--;
        }
        x=x+s1;
        helper(x,s2,s,s2.size());
    }
    cout<<s;
    return 0;
}
