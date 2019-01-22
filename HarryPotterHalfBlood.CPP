#include<bits/stdc++.h>
using namespace std;
int main()
{
 stack<int> s;
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
 cin>>a[i];
 }
 int t;
 int x,top1;
 int sum=0;
 int k =0;
 cin>>t>>x;
 int count =0;
 while(t--)
 {
 
 string s1;
 cin>>s1;
 if(s1 == "Harry")
 {
 s.push(a[k]);
 sum+= a[k];
 k++;
 
 }
 if(sum == x)
 {
 cout<<s.size()<<endl;
 break;
 }
 else if(s1 == "Remove")
 {
 top1 = s.top();
 sum-= top1;
 s.pop();
 }
 
 }
 if(sum!= x)
 {
 cout<<"-1"<<endl;
 }
 return 0;
}
