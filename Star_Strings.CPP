Input Format

A single string denoting w.

Constraints

1 <= strlen(w) <= 100 w contains only alphabets a-z (lowercase).

Output Format

Print "Yes" if it is beautiful otherwise "No".

Sample Input 0

abacaba
Sample Output 0

Yes
Explanation 0

Every pair of consecutive characters consists of one vowel and one consonant, so the word is beautiful and we print Yes.

Sample Input 1

badd
Sample Output 1

No
Explanation 1

There are two consecutive occurrences of d, so it is not beautiful and we print No.

Sample Input 2

yes
Sample Output 2

No
Explanation 2

The first pair of letters (y and e) both appear in our set of vowel characters, so the word is not beautiful and we print No.



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int flag=0,i;
    string s;
    getline(cin,s);
    
    for(i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1])
        {
            flag=1;
            cout<<"No";
return 0;
        }
        
        if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')&&(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'||s[i+1]=='y'))
           {
               cout<<"No";
               return 0;
               
           }
          
           }
        
           
           cout<<"Yes";
    return 0;
}
