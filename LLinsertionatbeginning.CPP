Write a program to create a linked list with the given number of elements by inserting every element at the beginning.If there are no elements given then the head of the linked list will be null. After completing the insertion of all elements print the elements in the linked list at the end. If no elements are inserted then print null on the standard output.

Note: Intially the linked list will be empty

Input Format

First Line contains number of elements(n) to be inserted and followed the n elements

Constraints

0<=n<=100

1<=element<=10000

Output Format

Print the elements in the linkedlist

Sample Input 0

5
5
4
3
2
1
Sample Output 0

1->2->3->4->5
Explanation 0

Initially the list will be empty and then we will add 5. After that we will add 4 infront of 5. Similarly 3 infront of 4 and so on.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insertbefore(struct node** headref,int data)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = *headref;
    *headref = newnode;
}
void print(struct node* Node)
{
    while(Node->next!=NULL)
    {
        printf("%d->",Node->data);
        Node = Node->next;
    }
    printf("%d",Node->data);
}
int main() {
    struct node* head = NULL;
    int size;
    scanf("%d",&size);
    int i,val;
    for(i=0;i<size;i++)
    {
        scanf("%d",&val);
        insertbefore(&head,val);
    }
    print(head);
    return 0;
}
