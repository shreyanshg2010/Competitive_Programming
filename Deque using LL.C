A deque is a data structure based on queues. Instead of inserting at the back and removing from the front, a deque allows insertion and deletion both from the back and the front.

Your task is to implement a deque using Structures and Pointers.

Your implementation must include the following functionalities :

DequeNode* head, tail - global nodes to heads and tails of the linkedlist Deque
void push_back(int element) - push element to the back of the queue
void push_front(int element) - push element to the front of the queue
void pop_back() - remove one element from the back of the queue
void pop_front() - remove one element from the front of the queue
int back() - return the element at the back of the queue
int front() - return the element at the front of the queue
int empty() - returns 1 if queue is empty and zero otherwise.
You are allowed to add global variables/arrays to the body of the code.
All the functions must have an O(1) running complexity.
You are not responsible for taking any input or output. 
You are not supposed to modify any part of the code except the BODY of the code. 
Only edit the body of the code and implement the required functions. 

Sample Input 0

10
psb 6
psf 4
psb 8
psf 2
ppb
ppb
ppb
b
f
psb 10
Sample Output 0

2
2



//HEAD

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"


struct dequeNode
{
    int data;
    struct dequeNode* next;
    struct dequeNode* prev;
}
typedef struct dequeNode dequeNode;

dequeNode* newNode(int val)
{
    dequeNode* t = (dequeNode*) malloc(sizeof(dequeNode));
    t->next = t->prev = NULL;
    return t;
}

//BODY

dequeNode* head, tail;
void push_back(int val)
{
}
void push_front(int val)
{
}
int back()
{
}
int front()
{
}
void pop_back()
{
}
void pop_front()
{
}
int empty()
{
}

// TAIL

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char s[50];
        scanf(" %s", s);
        if (s[0] == 'b')
        {
            if (empty()) printf("invalid\n");
            else printf("%d\n", back());
        }
        if (s[0] == 'f')
        {
            if (empty()) printf("invalid\n");
            else printf("%d\n", front());
        }
        if (s[0] == 'p')
        {
            if (s[1] == 's')
            {
                if (s[2] == 'b')
                {
                    int x; scanf(" %d", &x);
                    push_back(x);
                }
                if (s[2] == 'f')
                {
                    int x; scanf(" %d", &x);
                    push_front(x);
                }       
            }
            else
            {
                if (s[2] == 'b')
                {
                    if (empty()) printf("invalid\n");
                    else pop_back();
                }
                if (s[2] == 'f')
                {
                    if (empty()) printf("invalid\n");
                    else pop_front();
                }
            }
        }
    }
    return 0;
}
