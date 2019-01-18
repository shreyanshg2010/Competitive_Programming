You are not allowed to make any changes to the code other than the find_loop function body.

In the function, you will be given a head node to a linked list.

Two types of linked lists are :
Terminating Lists :

1 -> 2 -> 7 -> 8 -> 9 -> NULL
Non-Terminating Lists(Loop in the list) :

1 -> 2 -> 5 -> 15 -> 7--------
	 ^	 	     |
	 |                   |
	 ---- 3 <- 10 <- 9<--
In the second type of list, you can traverse forever and never reach the end.

Modify the find_loop function so that given the head of the linked list, it returns 1 if the list has a loop and 0 otherwise.

Your code's memory consumption must not be dependant on the size of the linked list.

Input Format

Not Needed

Constraints

None

Output Format

Not Needed




#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"

struct Node{
	int value;
	struct Node* next;
};
typedef struct Node Node;
Node links[105];

void add_link(int from, int to){
	links[from].next = &links[to];
}
void set_value(int index, int val){
	links[index].value = val;
}


//BODY BEGINS HERE

int find_loop(struct Node* head){
    /***
    Your Code Here
    It must return 1 if a loop exists and zero otherwise.
    ***/    
    struct Node *slow = head;
    struct Node *fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow==fast)
            return 1;
    }
    return 0;
}
	/***
	Your Code Here
    
	It must return 1 if a loop exists and zero otherwise.
	***/	

//BODY ENDS HERE

//TAIL BEGINS HERE
int main(){
	int i,n,m,tmp,tmp1,tmp2;
	scanf("%d %d", &n, &m);
	for(i = 0; i < n; i++){
		scanf("%d", &tmp);
		set_value(i, tmp);
	}
	for(i = 0; i < m; i++){
		scanf("%d %d", &tmp1, &tmp2);
		add_link(tmp1,tmp2);
	}
	if(find_loop(&links[0]) == 1) printf("Loop Found");
	else printf("No Loop Found");
	return 0;
}
