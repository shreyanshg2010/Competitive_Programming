Write a program to create a linked list with the given number of elements(follow the normal insertion process i.e., insert node at end evry time).If there are no elements given then the head of the linked list will be null. After completing the insertion of all you will be given an element you have to search for that element in the linked list. Display "yes" if it is found else "no".

Note: Intially the linked list will be empty

Input Format

First Line contains number of elements(n) to be inserted and followed the n+1 elements the (n+1)th element is the element to be searched

Constraints

0<=n<=100

1<=element<=10000

Output Format

"yes" or "no"

Sample Input 0

4
1
2
3
4
4
Sample Output 0

yes



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long int t;
    int i,val;
    scanf("%ld",&t);
    struct node* head;
    for(i=0;i<t;i++)
    {
        scanf("%d",&val);
        struct node* temp1=(struct node *)malloc(sizeof(struct node*));
        temp1->data=val;
        temp1->next=NULL;
        if(i==0)
        {
            head=temp1;
        }
        else 
        {
            struct node* temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=temp1;
        }
    }
    scanf("%d",&val);
    struct node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==val)
        {
            printf("yes");
            return 0;
        }
        temp=temp->next;
    }
    printf("no");
    return 0;
}
