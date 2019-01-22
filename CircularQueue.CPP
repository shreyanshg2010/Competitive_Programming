#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"
struct queueNode{
    int data;
    struct queueNode* next;
};
typedef struct queueNode queueNode;
queueNode* head = NULL;
queueNode* newNode(int val)
{
    queueNode* t = (queueNode*) malloc(sizeof(queueNode));
    t->data = val;
    t->next = NULL;
    return t;
}

void push(int val)
{
    queueNode* p,*p1;
    p=newNode(val);
   
      if(head==NULL)
        head=p;
    else
    {
        p1=head;
    while(p1->next!=NULL)
    {
    p1=p1->next;
    }
    p1->next=p;
    }
}
void pop()
{
     queueNode* p1;
      
     p1=head;
    head=head->next;
    p1->next=NULL;
}
int top()
{
    return head->data;
}
int empty()
{
    return (head==NULL);

}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char s[50];
        int x;
        scanf(" %s", s);
        if (s[0] == 't')
        {
            if (empty()) printf("Invalid\n");
            else                
                printf("%d\n", top());
        }
        else if (s[0] == 'p' && s[1] == 'o')
        {
            if (empty()) printf("Invalid\n");
            else    pop();
        }
        else
        {
            scanf(" %d", &x);
            push(x);
        }
    }
    return 0;
}
