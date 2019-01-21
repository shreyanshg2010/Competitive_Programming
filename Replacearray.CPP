#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
        cin>>a[i];
    int max = a[n-1];
    a[n-1] = 0;
    for(int i=n-2;i>=0;i--)
    {
        int temp = a[i];
        a[i] = max;
        
        if (max<temp)
            max = temp;
    }
    for(int i = 0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
