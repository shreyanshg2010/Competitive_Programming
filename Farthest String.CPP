We define the Palindromic Distance of a String as the minimum number of characters that need to be modified in order to turn the String into a palindrome. 

For example :

"cook" -> "cooc" (Palindrome),
Hence Distance("cook") = 1. 

"fluffy" -> "flufff" -> "ffufff" -> "ffffff" (Palindrome), 
Hence Distance("fluffy") = 3.

Now, you are given N number of strings, and your task is to find out which string has the farthest Distance from being a palindrome and print it.

INPUT
First line contains number of strings N. 
Next N lines each contain one string.

OUTPUT
Print one string that is the farthest out of all strings from being a palindrome.

CONSTRAINTS
1 ≤ N ≤ 103 
Each string has length of atmost 1000 
Strings consists of lowercase english characters only

Sample Input 0

7
philosopher
chamber
prisoner
goblet
phoenix
halfbloodprince
deathlyhallows
Sample Output 0

halfbloodprince





#include <cmath>
#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,p,m;
    cin>>n;
    
    m=-999999;
    string s[n];
    
    for(int i=0;i<n;i++)
        cin>>s[i];
    
    for(int w=0;w<n;w++)
    {
        
        
        //string h=s[w];
        //cout<<s[w]<<"\n";
        string h;
        h=s[w];
        int i=0;
        int j=h.length()-1;
        
        int c=0;
        
        while(i<j)
        {
            if(h[i]!=h[j])
                c++;
            i++;
            j--;
        }
        
        
        if(m<c)
        {
            m=c;
            p=w;
        }
        //cout<<p<<" ";
    }
    
    cout<<s[p];
    return 0;
}
