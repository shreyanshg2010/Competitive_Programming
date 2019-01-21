Write a program to create a linked list with the given number of elements(follow the normal insertion process i.e., insert node at end evry time).If there are no elements given then the head of the linked list will be null. After completing the insertion of all you will be given a value of "k". Perform the deletion at k position. Print the elements in the linked list after successful completion of deletion.

Note: Intially the linked list will be empty. The k value always will be less than no.of elements in the list.Assume that A position of 0 indicates head, a position of 1 indicates one node away from the head and so on

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
1
Sample Output 0

1->3->4
Explanation 0

After successful insertion the list will be like 1->2->3->4->NULL

The given k value is 2.After successful deletion of data at position-1 i.e., 2  will become 1->3->4->NULL



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct Node 
{ 
    int data; 
    struct Node *next; 
}; 
void push(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data=new_data;
    struct Node* temp=*head_ref;
    if(*head_ref==NULL)
    {
        *head_ref=new_node;
        new_node->next=NULL;
        return;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
        new_node->next=NULL;
    }
} 
void deleteNode(struct Node **head_ref, int position) 
{  
   if (*head_ref == NULL) 
      return; 
   struct Node* temp = *head_ref; 
    if (position == 0) 
    { 
        *head_ref = temp->next;   
        free(temp);                
        return; 
    } 
    for (int i=0; temp!=NULL && i<position-1; i++) 
         temp = temp->next; 
    if (temp == NULL || temp->next == NULL) 
         return; 
    struct Node *next = temp->next->next;
    free(temp->next);  
    temp->next = next; 
} 
void printList(struct Node *node) 
{ 
    while (node->next!= NULL) 
    { 
        printf("%d->", node->data); 
        node = node->next; 
    } 
    printf("%d",node->data);
} 
int main() 
{ 
    struct Node* head = NULL; 
    int size;
    scanf("%d",&size);
    int i;
    for(i=0;i<size;i++)
    {
        int val;
        scanf("%d",&val);
        push(&head,val);
    }
    int pos;
    scanf("%d",&pos);
    deleteNode(&head,pos);
    printList(head); 
    return 0; 
} 
