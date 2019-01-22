#include<bits/stdc++.h>
using namespace std;
int main()
{
 stack<int> S;
 int N;
 cin>>N;
 int arr[N];
 for(int i=0;i<N;i++)
 {
 cin>>arr[i];
 }
 int p;
 int q,TOP;
 int sum=0;
 int k =0;
 cin>>p>>q;
 int count =0;
 while(p--)
 {
 
 string strr;
 cin>>strr;
 if(strr == "Harry")
 {
 S.push(arr[k]);
 sum+= arr[k];
 k++;
 
 }
 if(sum == q)
 {
 cout<<S.size()<<endl;
 break;
 }
 else if(strr == "Remove")
 {
 TOP = S.top();
 sum-= TOP;
 S.pop();
 }
 
 }
 if(sum != q)
 {
cout<<"-1"<<endl;
 }
 return 0;
}
