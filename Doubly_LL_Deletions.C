You will be implementing functions to delete nodes from a doubly linkedlist.

You will have to copy the part for inserting nodes from the previous problem

The following is the structure of the linked list node :

struct LinkedListNode {
	int val;
    struct LinkedListNode* next;
    struct LinkedListNode* prev;
};
typedef struct LinkedListNode LinkedListNode;
Additionally, here are the details of the functions that you are expected to implement :

LinkedListNode* deleteAtBeginning(LinkedListNode* head)
/* 
 * Deletes the node at the beginning of the linked list and
 * returns a pointer to the head of the new linked list.
 * returns NULL if head is NULL
 */
 
LinkedListNode* deleteAtEnd(LinkedListNode* head)
/*
 * Deletes the node at the end of the linked list and
 * returns a pointer to the head of the new list
 * returns NULL if no last node present
 */
 
LinkedListNode* deleteAtPosition(LinkedListNode* head, int pos)
/*
 * Deletes the node at "pos" position of the linked list
 * "pos" = 1 indicates delete the first node
 * return the head of the original linked list if "pos" is invalid
 * Must return a pointer to the head of the new list after deletion
 */
Input
Not Needed

Output
Not Needed

Instructions
You are only allowed to edit the Body of the code
The Head and the Tail of the code must remain as it is
You are not responsible for taking any input/output
You must write the function with names exactly as given above
You must not create any global variables
Sample Input 0

10 10 
Sample Output 0

correct




//-------------------- head of the code ------------------------

#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define in(x) scanf(" %d", &x);
#define LinkedListNode LinkedListNode
typedef struct LinkedListNode LinkedListNode;
struct LinkedListNode {
	int val;
	struct LinkedListNode* next;
	struct LinkedListNode* prev;
};


//-------------------- body of the code ------------------------

LinkedListNode* insertAtBeginning(LinkedListNode* head, int val) {
    struct LinkedListNode* newnode = (struct LinkedListNode*)malloc(sizeof(struct LinkedListNode));
    newnode->val=val;
    if(head==NULL)
    {
        newnode->next=NULL;
        newnode->prev=NULL;
        head=newnode;
    }
    else
    {
        newnode->next=head;
        newnode->prev=NULL;
        head->prev=newnode;
        head=newnode;
    }
    return head;
}
LinkedListNode* insertAtEnd(LinkedListNode* head, int val) {
    struct LinkedListNode* newnode=(struct LinkedListNode*)malloc(sizeof(struct LinkedListNode));
    newnode->val=val;
    if(head==NULL)
    {
        newnode->next=NULL;
        newnode->prev=NULL;
        head=newnode;
    }
    else
    {
        struct LinkedListNode* temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=NULL;
    }
    return head;
}

LinkedListNode* insertAtPosition(LinkedListNode* head, int val, int pos) {
    struct LinkedListNode* newnode=(struct LinkedListNode*)malloc(sizeof(struct LinkedListNode));
    newnode->val=val;
    if(head==NULL&&pos==1)
    {
        newnode->next=NULL;
        newnode->prev=NULL;
        head=newnode;
    }
    else if(pos==1)
    {
        head = insertAtBeginning(head,val);
    }
    else
    {
        struct LinkedListNode* previous = head;
        while(pos>2)
        {
            previous=previous->next;
            pos--;
        }
        if(previous->next==NULL)
            head = insertAtEnd(head,val);
        else
        {
        previous->next->prev=newnode;
        newnode->next=previous->next;
        newnode->prev=previous;
        previous->next=newnode;
        }
    }
    return head;
}
LinkedListNode* deleteAtBeginning(LinkedListNode* head) {
    if(head==NULL)
    {
        return NULL;
    }
    else if(head->next==NULL)
    {
        struct LinkedListNode* temp=head;
        free(temp);
        head=NULL;
    }
    else
    {
        struct LinkedListNode* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        free(temp);
    }
    return head;
}
LinkedListNode* deleteAtEnd(LinkedListNode* head) {
    if(head==NULL)
    {
        return NULL;
    }
    else if(head->next==NULL)
    {
        struct LinkedListNode* temp=head;
        free(temp);
        head=NULL;
    }
    else
    {
        struct LinkedListNode* temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->prev->next=NULL;
        free(temp);
    }
    return head;
}
LinkedListNode* deleteAtPosition(LinkedListNode* head, int pos) {
    if(head==NULL)
    {
        return NULL;
    }
    else if(pos==1)
    {
        head = deleteAtBeginning(head);
    }
    else
    {
        struct LinkedListNode* previous = head;
        while(pos>2)
        {
            previous=previous->next;
            pos--;
        }
        if(previous->next->next==NULL)
        {
            head=deleteAtEnd(head);
        }
        else
        {
            struct LinkedListNode* todelete = previous->next;
            previous->next=todelete->next;
            todelete->next->prev=previous;
            free(todelete);
        }
    }
    return head;
}

//-------------------- tail of the code ------------------------


int rng(int lim) {
	if (lim == 0) return 0;
	return rand()%lim;
}
int a[1005], sz = 0;
void insertt(int val, int pos) {
	if (pos < 0) return;
	if (pos > sz + 1) return;
	sz += 1;
	for (int i = sz; i > pos; i--)
		a[i] = a[i - 1];
	a[pos] = val;
}
void erasee(int pos) {
	if (pos > sz) return;
	if (pos < 1) return;
	sz--;
	for (int i = pos; i <= sz; i++)
		a[i] = a[i + 1];
}
int check(LinkedListNode* head) {
	if (head == NULL && sz == 0) return 1;
	if (head == NULL || sz == 0) return 0;
	LinkedListNode* node = head;
	for (int i = 1; i <= sz; i++) {
		if (node == NULL) return 0;
		if (node->val != a[i]) return 0;
		node = node->next;
	}	
	if (node != NULL) return 0;

	node = head;
	while (node->next)
		node = node->next;

	for (int i = sz; i >= 1; i--) {
		if (node == NULL) return 0;
		if (node->val != a[i]) return 0;
		node = node->prev;
	}
	if (node != NULL) return 0;
	return 1;
}
int main() {
	srand(time(NULL));
	int t, n; in(t); in(n);
	while (t--) {
		LinkedListNode* head = NULL;
		sz = 0;
		for (int i = 0; i < n; i++) {
			int type = rng(6);
			if (type == 0) {
				int val = rng(1000);
				head = insertAtBeginning(head, val);
				insertt(val, 1);
				if (!check(head)) {
					printf("incorrect insertAtBeginning");
					return 0;
				}
			}

			if (type == 1) {
				int val = rng(1000);
				head = insertAtEnd(head, val);
				insertt(val, sz + 1);
				if (!check(head)) {
					printf("incorrect insertAtEnd");
					return 0;
				}
			}

			if (type == 2) {
				int val = rng(1000);
				int pos = rng(sz + 1) + 1;
				head = insertAtPosition(head, val, pos);
				insertt(val, pos);
				if (!check(head)) {
					printf("incorrect insertAtPosition");
					return 0;
				}
			}

			if (type == 3) {
				head = deleteAtBeginning(head);
				erasee(1);
				if (!check(head)) {
					printf("incorrect deleteAtBeginning");
					return 0;
				}
			}

			if (type == 4) {
				head = deleteAtEnd(head);
				erasee(sz);
				if (!check(head)) {
					printf("incorrect deleteAtEnd");
					return 0;
				}
			}

			if (type == 5) {
				int pos = rng(sz)+1;
				head = deleteAtPosition(head, pos);
				erasee(pos);
				if (!check(head)) {
					printf("incorrect deleteAtPosition");
					return 0;
				}
			}
		}
	}
	printf("correct");
}
