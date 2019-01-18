You’re given the pointer to the head nodes of two sorted linked lists. The data in both lists will be sorted in ascending order. Change the next pointers to obtain a single, merged linked list which also has data in ascending order. Either head pointer given may be null meaning that the corresponding list is empty.

Input Format

You have to complete the LinkedListNode* MergeLists(LinkedListNode* headA, LinkedListNode* headB) method which takes two arguments - the heads of the two sorted linked lists to merge. You should NOT read any input from stdin/console.

Output Format

Change the next pointer of individual nodes so that nodes from both lists are merged into a single list. Then return the head of this merged list. Do NOT print anything to stdout/console.



#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
typedef struct LinkedListNode LinkedListNode;

struct LinkedListNode {
    int val;
    LinkedListNode *next;
};

LinkedListNode* _insert_node_into_singlylinkedlist(LinkedListNode *head, LinkedListNode *tail, int val) {
    if(head == NULL) {
        head = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        head->val = val;
        head->next = NULL;
        tail = head;
    }
    else {
        LinkedListNode *node = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        node->val = val;
        node->next = NULL;
        tail->next = node;
        tail = tail->next;
    }
    return tail;
}

//BODY STARTS HERE


/*
 * Complete the function below.
 */
/*
For your reference:
LinkedListNode {
    int val;
    LinkedListNode *next;
};
*/
LinkedListNode* MergeLists(LinkedListNode* headA, LinkedListNode* headB) {
    LinkedListNode *a = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
    LinkedListNode *b = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
    a=headA;
    b=headB;
    int s[1000],i=-1;
    while(a!=NULL)
    {
       s[++i]=a->val;
        a=a->next;
    }
    while(b!=NULL)
    {
       s[++i]=b->val;
        b=b->next;
    }
    int j,k,t;
    for(j=0;j<=i;j++)
    {
        for(k=0;k<=i;k++)
        {
            if(s[j]<s[k])
            {
                t=s[j];
                s[j]=s[k];
                s[k]=t;
            }
        }
    }
    LinkedListNode *c = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
    LinkedListNode *p = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
    for(j=0;j<=i;j++)
    {
        if(j==0)
        {
            c->val=s[j];
            c->next=NULL;
            p=c;
        }
        else
        {
            LinkedListNode *temp = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
            temp->val=s[j];
            p->next=temp;
            temp->next=NULL;
            p=temp;
        }
    }
    return c;

}


//BODY ENDS HERE

int main()
{
    FILE *f = stdout;
    char *output_path = getenv("OUTPUT_PATH");
    if (output_path) {
        f = fopen(output_path, "w");
    }

    LinkedListNode* res;
    int headA_size = 0;

    LinkedListNode* headA = NULL;
    LinkedListNode* headA_tail = NULL;

    scanf("%d", &headA_size);
    for(int i = 0; i < headA_size; i++) {
        int headA_item;
        scanf("%d", &headA_item);
        headA_tail = _insert_node_into_singlylinkedlist(headA, headA_tail, headA_item);

        if(i == 0) {
            headA = headA_tail;
        }
    }


    int headB_size = 0;

    LinkedListNode* headB = NULL;
    LinkedListNode* headB_tail = NULL;

    scanf("%d", &headB_size);
    for(int i = 0; i < headB_size; i++) {
        int headB_item;
        scanf("%d", &headB_item);
        headB_tail = _insert_node_into_singlylinkedlist(headB, headB_tail, headB_item);

        if(i == 0) {
            headB = headB_tail;
        }
    }


    res = MergeLists(headA, headB);
    while (res != NULL) {
        fprintf(f, "%d ", res->val);

        res = res->next;
    }

    fclose(f);
    return 0;
}
