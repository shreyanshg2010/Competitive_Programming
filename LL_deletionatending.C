Write a program to create a linked list with the given number of elements(follow the normal insertion process i.e., insert node at end evry time).If there are no elements given then the head of the linked list will be null. After completing the insertion of all you will be given a value of "k". Perform the deletion at ending k times. Print the elements in the linked list after successful completion of deletion.

Note: Intially the linked list will be empty. The k value always will be less than no.of elements in the list

Input Format

First Line contains number of elements(n) to be inserted and followed the n+1 elements the (n+1)th element denotes k value

Constraints

0<=n<=100

1<=element<=10000

0<=k<=1000

Output Format

Print the elements in the linked list

Sample Input 0

4
1
2
3
4
2
Sample Output 0

1->2



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void insert(struct node** headref, int val)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    struct node* temp= *headref;
    if(*headref==NULL)
    {
        *headref=newnode;
        newnode->next=NULL;
        return;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
    }
}
void deleteend(struct node** headref)
{
   struct node *toDelete, *secondLastNode;

    if(*headref == NULL)
    {
        return;
    }
    else
    {
        toDelete = *headref;
        secondLastNode = *headref;
        while(toDelete->next != NULL)
        {
            secondLastNode = toDelete;
            toDelete = toDelete->next;
        }
        if(toDelete == *headref)
        {
            *headref = NULL;
        }
        else
        {
            secondLastNode->next = NULL;
        }
        free(toDelete);
    }
}
void displayList(struct node** headref)
{
    struct node* temp=*headref;
    if(*headref == NULL)
    {
        return;
    }
    else
    {
        while(temp->next != NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }
}
int main() {
    struct node* head = NULL;
    int size;
    scanf("%d",&size);
    int i;
    for(i=0;i<size;i++)
    {
        int val;
        scanf("%d",&val);
        insert(&head,val);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        deleteend(&head);
    }
    displayList(&head);
    return 0;
}
