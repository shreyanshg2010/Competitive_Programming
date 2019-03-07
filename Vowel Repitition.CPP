Luffy likes to repeat vowel letters when he writes word.For example instead of the word "onepiece" he can write "oneeepiiiceeee"
Zoro does not like this bhevior so he wants to write the program to the format words written by luffy.This program must convert all consecutive vowels to single vowels
The vowel letters include "a","e","i","o","u" and "y".
There are exceptions if letters "e" or "o" repeat in a row exactly 2 times like in words "feet" and "foot",the program must skip them and do not transform them into the vowel.



Sample Input0
13
pobeeeedaaaaa

Sample Output0
pobeda


Sample Input1
22
iiiimpleeemeentatiioon

Sample Output1
implemeentatioon


#include<iostream>
#include<cstring>
using namespace std;

int main(){
string s;
int n,k;
cin>>n;
cin>>s;
for(int i=0;i<n;i++){
    if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
    {
    cout<<s[i];
    }
    else if(s[i]=='a' || s[i]=='i' || s[i]=='u'){
    cout<<s[i];
    k=i;
    while(s[k]==s[i])
    {
    i++;
    }
    i--;
    }
    else if(s[i]=='e' || s[i]=='o')
    {
    if(s[i]!=s[i+2] && s[i]==s[i+1])
    {
    cout<<s[i]<<s[i+1];
    i=i+1;
    }
    else
    {
    cout<<s[i];
    k=i;
    while(s[k]==s[i]){
    i++;
    }
    i--;
    }
    }
} 
return 0;
}
