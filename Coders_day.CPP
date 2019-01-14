Input Format

A single integer denoting the year y.

Constraints

1700 <= y <= 2700

Output Format

Print the full date of Day of the Programmer during year y in the format dd.mm.yyyy, where dd is the two-digit day, mm is the two-digit month, and yyyy is y.

Sample Input 0

2017
Sample Output 0

13.09.2017


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,s;
    s=0;
    cin>>n;
    if(n>=1700&&n<=1917)
    {
    if(n%4==0)
    {
        s=s+31+29+31+30+31+30+31+31;
       // cout<<s;
        int diff=256-s;
        cout<<diff<<".09."<<n;
    }
    else
        {
        s=s+31+28+31+30+31+30+31+31;
        //cout<<s;
        int diff=256-s;
        cout<<diff<<".09."<<n;
    }
    }
     if(n>=1919)
    {
        if((n%400==0)||(n%4==0 && n%100!=0))
            {
        s=s+31+29+31+30+31+30+31+31;
       // cout<<s;
        int diff=256-s;
        cout<<diff<<".09."<<n;
    }
    else
        {
        s=s+31+28+31+30+31+30+31+31;
        //cout<<s;
        int diff=256-s;
        cout<<diff<<".09."<<n;
    }
    }
    if(n==1918)
    {
        
        cout<<"26.09."<<n; 
    }
        
    return 0;
}
