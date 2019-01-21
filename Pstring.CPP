A string is called a pString if it can be represented as p concatenated copies of some string. For example, the string "aabaabaabaab" is at the same time a 1String, a 2String and a 4String, but it is not a 3String, a 5String, or a 6String and so on. Obviously any string is a 1String.

You are given a string s, consisting of lowercase English letters and a positive integer p. Your task is to find if it is possible to reorder the letters in the string s in such a way that the resulting string is a pString.

Input Format

The first input line contains integer p. 
The second line contains s, all characters in s are lowercase English letters.

Constraints

1 ≤ p ≤ 1000
1 ≤ |s| ≤ 1000

Output Format

Print "YES" if it is possible to rearrange the letters in string s in such a way that the result is a pString. Print the result on a single output line. If it is not possible print "NO". (without quotes).

Sample Input 0

2
aazz
Sample Output 0

YES
Explanation 0

aazz can be rearranged to azaz which is a 2String



#include <cmath>
#include <cstdio>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int p;
    cin>>p;
    string s;
    cin>>s;
    int b[123];
    for(int i=97;i<=122;i++)
        b[i]=0;
    for(int i=0;i<s.length();i++){
        char c=s.at(i);
        int n=(int)c;
        b[n]++;
    }
    int c=0,k=0;
    for(int i=97;i<=122;i++){
        if(b[i]!=0){
            k++;
            if(b[i]%p==0)
                c++;
            
        }
    }
    if(c!=k){
        cout<<"NO";
    }
    else
        cout<<"YES";
    return 0;
}
