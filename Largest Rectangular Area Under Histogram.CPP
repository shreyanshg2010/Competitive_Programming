You are given a histogram that consists of N vertical bars.
The ith bar from the left has height Hi.

Your task is to calculate the maximum area of any rectangle that lies completely within this histogram.

See the sample test case for clarity.

INPUT

First line contains the size of histogram N. (1 <= N <= 106)
Secone line contains N space separated integers denoting the height of the histogram bars. (1 <= Hi <= 106)

OUTPUT

Print one integer equal to the maximum area of any rectangle within the histogram.

Sample Input 0

7
6 2 5 4 5 1 6
Sample Output 0

12



#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

long long maxarea(long long a[],long long n)
{
    stack<long long>s;
    long long area=0;
    long long tp;
    long long ar;
    long long i=0;
    while(i<n)
    {
        if(s.empty()||a[s.top()]<=a[i])
            s.push(i++);
        else
        {
            tp=s.top();
            s.pop();
            ar=a[tp]*(s.empty()?i:i-s.top()-1);
            if(area<ar)
                area=ar;
        }
    }
    while(s.empty()==false)
    {
        tp=s.top();
            s.pop();
            ar=a[tp]*(s.empty()?i:i-s.top()-1);
            if(area<ar)
                area=ar;
    }
    return area;
}

int main() {
    long long n;
    cin>>n;
    long long a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<maxarea(a,n);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
