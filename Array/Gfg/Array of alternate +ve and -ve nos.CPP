Given an unsorted array of positive and negative numbers. 
Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.

Input:
First line of input contains an integer T denoting the number of test cases. For each testcase, first line contains N, size of array. The subsequent line contains N array elements.

Output:
Print the modified array.
Note: Array should start with positive number.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
-106 ≤ a[] ≤ 107

Example:
Input:
1
9
9 4 -2 -1 5 0 -5 -3 2

Output:
9 -2 4 -1 5 -5 0 -3 2



#include<iostream>
#include <queue>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        
        queue<int> q1, q2;
        for(int i = 0; i < n; i++) {
            if(arr[i] < 0) 
                q2.push(arr[i]);
            else
                q1.push(arr[i]);
        }
        
        int i = 0;
        while(i < n && (q1.size() &&  q2.size()))
        {
            if(! (i & 1)) {
                arr[i++] = q1.front();
                q1.pop();
            }
            else {
                arr[i++] = q2.front();
                q2.pop();
            }
        }
        while(q1.size()) {
            arr[i++] = q1.front();
            q1.pop();
        }
        
        while(q2.size()) {
            arr[i++] = q2.front();
            q2.pop();
        }
        
        for(int i = 0; i < n; i++) 
            cout << arr[i] << ' ';
            
        cout << endl;
    }
	return 0;
}



Approach 2:

#include<iostream>
using namespace std;

#include<vector>

int main()
{
    int t,i,n,data;
    cin>>t;
    while(t>0)
    {
        int count=0;
    vector<int>odd;
    vector<int>even;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>data;
        if(data>=0)
        {
            even.push_back(data);
        }
        else
        {
            odd.push_back(data);
        }
    }
    for(i=0;i<even.size();i++)
    {
        cout<<even[i]<<" ";
        if(i<=odd.size()-1)
        {
            cout<<odd[i]<<" ";
            count++;
        }
    }
    if(count!=odd.size()-1)
    {
        for(int j=i;j<odd.size();j++)
        {
            cout<<odd[j]<<" ";
        }
    }
    cout<<endl;
    t--;
    }
    
}
