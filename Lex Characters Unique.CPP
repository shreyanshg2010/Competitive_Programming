Given a string consisting of lowercase english letters only, print all the unique characters in it in lexicographically increasing order.

Input Format

One string S.

Constraints

1 <= strlen(S) <= 1000

Output Format

One string consisting of the unique characters of string S in alphabetic order.

Sample Input 0

alohamora
Sample Output 0

ahlmor




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    cin>>s;
    int flag;
    string str="";
    str+=s[0];
    for(int i=1;i<s.length();i++){
        flag = 0;
        for(int j=0;j<str.length();j++){
            if(str[j] == s[i]){
                flag = 1;
                break;
            }
        }
        if(!flag){
            str+=s[i];
        }
    }
    
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<str.length();j++){
            if(str[i]>str[j]){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    
    cout<<str;
    return 0;
}
