#include<bits/stdc++.h>
using namespace std;
struct fileTable{
    char name[20];
    int nob,blocks[30];
};
int main(){
    struct fileTable ft[30];
    int i,j,n;
    char s[20];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ft[i].name;
        cin>>ft[i].nob;
        for(j=0;j<ft[i].nob;j++)
            cin>>ft[i].blocks[j];
    }
    cin>>s;
    for(i=0;i<n;i++){
        if(strcmp(s,ft[i].name)==0){
            break;
        }
    }
    if(i==n)
       cout<<"file nt found";
    else{
        cout<<"Blocks occupied";
        cout<<"\n"<<ft[i].name<<" "<<ft[i].nob;
        for(j=0;j<ft[i].nob;j++)
            cout<<ft[i].blocks[j];
    }
    return 0;
}
    
   
        
