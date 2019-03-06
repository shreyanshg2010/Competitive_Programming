Write a program to create a Circular linked list with the given number of elements(follow the normal insertion process i.e., insert node at end every time).If there are no elements given then the head of the linked list will be null. After completing the insertion of all you will be given a value of "k". Perform the deletion at ending k times. Print the elements in the linked list after successful completion of deletion.

Note: Intially the linked list will be empty. The k value always will be less than no.of elements in the list

Input Format

First Line contains number of elements(n) to be inserted and followed the n+1 elements the (n+1)th element denotes k value

Constraints

0<=n<=100

1<=element<=10000

0<=k<=1000

Output Format

Print the elements in the circular linked list

Sample Input 0

4
1
2
3
4
2
Sample Output 0

1 2
Explanation 0

    After successful insertion the list will be like 1->2->3->4->1

The given k value is 2.After two successful deletions at ending the list will become 
1->2->1





#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node{
    int data;
    node *next;
};

node *create(node *head,int x){
    node *new_node = new node;
    new_node->data = x;
    new_node->next = NULL;
    node *temp;
    if(head==NULL){
        head = new_node;
        new_node->next = head;
        return head;
    }
    else{
        node *temp = head;
        while(temp->next!=head){
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = head;
    }
    return head;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    node *head = NULL;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        head = create(head,x);
    }
    
    
    int k;
    cin>>k;
    while(k--){
        node *prev = head;
        node *temp = prev->next;
        while(temp->next!=head){
            prev = prev->next;
            temp = prev->next;
        }
        prev->next = head;
    }
    
    cout<<head->data<<" ";
    node *temp = head->next;
    while(temp!=head){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    return 0;
}





CASE-2:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct node{
    int data;
    struct node *prev;
    struct node *next;
}*temp,*last,*first;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,a,size;
    cin>>n;
    size=n;
    temp=new node;
    cin>>temp->data;
    temp->prev=NULL;
    temp->next=NULL;
    n--;
    first=temp;
    last=temp;
    while(n>0){
        temp=new node;
        cin>>temp->data;
        temp->prev=last;
        temp->next=NULL;
        last->next=temp;
        last=last->next;
        n--;
    }
    cin>>a;
    for(int i=0;i<size-a;i++){
        cout<<first->data<<" ";
        first=first->next;
    }
    return 0;
}
