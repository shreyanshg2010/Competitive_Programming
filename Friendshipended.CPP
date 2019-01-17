Ramesh is learning to chat on Facebook and he wants to say “Goodbye” (no space between Good and bye) to his friend Suresh. Ramesh typed the word w. It is considered that Ramesh managed to say “Goodbye” if several letters can be deleted from the typed word w so that it results in the word "Goodbye". For example, if Ramesh types the word "btaGpotodbqqyeekje", it will be considered that he said “Goodbye”, and if he types "pngodtbeyz", it will be considered that he didn't manage to say Goodbye. Determine whether Ramesh managed to say “Goodbye” by the given word w to Suresh.

Input
Input contains one string. 
Input string consists of small and capital alphabets only.

Output
Output 'Yes' if he managed to say goodbye. else output 'No'.

Sample Input 0

btaGpotodbqqyeekje
Sample Output 0

Yes


#include <string.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    int i,c=0;
    string s1="Goodbye";
    int len=s.length();
    int k=0;
    for(i=0;i<len;i++)
    {
        if(s[i]==s1[k])
        {
            c++;
            k++;
        }
    }
    if(c==7)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}

