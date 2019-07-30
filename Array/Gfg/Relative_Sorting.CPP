Given two arrays A1[] and A2[] of size N and M respectively. 
The task is to sort A1 in such a way that the relative order among the elements will be same as those in A2. 
For the elements not present in A2, append them at last in sorted order. 
It is also given that the number of elements in A2[] are smaller than or equal to number of elements in A1[] and A2[] has all distinct elements.

Note: Expected time complexity is O(N log(N)).


#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    vector<int> brr(m);
	    for(int i=0;i<m;i++)
	    cin>>brr[i];
	    map<int,int> mp;
	    for(int i=0;i<n;i++)
	    {
	        mp[arr[i]]++;
	    }
	    for(int i=0;i<m;i++)
	    {
	        if(mp[brr[i]])
	        {
	            while(mp[brr[i]])
	            {
	                cout<<brr[i]<<" ";
	                mp[brr[i]]--;
	                
	            }
	        }
	    }
	   for(auto it=mp.begin();it!=mp.end();it++)
	   {
	       while(it->second)
	       {
	           cout<<it->first<<" ";
	           it->second--;
	       }
	   }
	   
	    cout<<endl;
	}
	return 0;
}
