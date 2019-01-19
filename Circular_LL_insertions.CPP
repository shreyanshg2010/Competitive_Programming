You will be implementing functions to insert nodes into a circular linkedlist.

Note that unlike previous times where we stores the head nodes of the linkedlist, we store the tail node of the linked list while using a circular linkedlist to make insertion operations more efficient.

The following is the structure of the linked list node :

struct LinkedListNode {
	int val;
    struct LinkedListNode* next;
};
typedef struct LinkedListNode LinkedListNode;
Here are the details of the functions that you are expected to implement :

LinkedListNode* insertAtBeginning(LinkedListNode* tail, int value)
/* 
 * Inserts a node at the beginning of the circular linked list and
 * returns a pointer to the tail of the new list
 */
 
LinkedListNode* insertAtEnd(LinkedListNode* tail, int value)
/*
 * Inserts a node at the end of the circular linked list and
 * returns a pointer to the tail of the new list
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
};


//-------------------- body of the code ------------------------


LinkedListNode* insertAtBeginning(LinkedListNode* tail, int val) {
    LinkedListNode* temp= (LinkedListNode*)malloc(sizeof(LinkedListNode));
    temp->val = val;
    temp->next=NULL;
    if(tail==NULL){
        tail=temp;
        tail->next=temp;
    }
    else{
    temp->next = tail->next;
    tail->next = temp;}
    return tail;
}
LinkedListNode* insertAtEnd(LinkedListNode* tail, int val) {
    LinkedListNode* temp= (LinkedListNode*)malloc(sizeof(LinkedListNode));
    temp->val=val;
    temp->next=NULL;
    if(tail==NULL){
        tail=temp;
        tail->next=temp;
    }
    else{
    temp->next = tail->next;
    tail->next = temp;
    tail=temp;}
    return tail;

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
int check(LinkedListNode* tail) {
	if (tail == NULL && sz == 0) return 1;
	if (tail == NULL || sz == 0) return 0;
	if (tail->val != a[sz]) return 0;
	LinkedListNode* ii = tail->next;
	for (int i = 1; i < sz; i++) {
		if (ii == NULL) return 0;
		if (a[i] != ii->val) return 0;
		ii = ii->next;
	}
	return 1;
}
int main() {
	srand(time(NULL));
	int t, n; in(t); in(n);
	while (t--) {
		LinkedListNode* head = NULL;
		sz = 0;
		for (int i = 0; i < n; i++) {
			int type = rng(4);
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

		}
	}
	printf("correct");
}
