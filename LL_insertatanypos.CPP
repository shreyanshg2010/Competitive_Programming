#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct node{
    int data;
    struct node* next;
}*head;
struct val{
    int p;
    int x;
    
};
void insert(int p,int x){
    struct node *n=new node();
    n->data=x;
    n->next=NULL;
    if(head==NULL)
        head=n;
    else if(p==0){
        n->next=head;
        head=n;
    }
    else{
     struct node *t=new node();
        t=head;
        p-=1;
        while(p-->0){
        t=t->next;    
        }
        n->next=t->next;
        t->next=n;
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    head=new node();
 struct val v[n];
    for(int i=0;i<n;i++){
        cin>>v[i].p>>v[i].x;
        insert(v[i].p,v[i].x);
    }
    
    while(head->next->next!=NULL){
        
        cout<<head->data<<"->";
        head=head->next;
        
    }
    cout<<head->data;
    return 0;
}
