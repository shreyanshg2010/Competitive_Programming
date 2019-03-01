You are given a doubly linked list and an integer k. Your task is to use the linkedlist and the value k to construct a new linked list as follows :

Firstly, the prefix of the linkedlist before the element k must appear in reverse order
Then, the suffix of the linkedlist after the element k must appear in forward order
Look at the following examples :

List : 1<==>2<==>3<==>4<==>5<==>6<==>7<==>8 with K = 4
Answer : 3<==>2<==>1<==>5<==>6<==>7<==>8

List : 1<==>5<==>10<==>25<==>10<==>5<==>1 with K = 25
Answer : 10<==>5<==>1<==>10<==>5<==>1
The following is the structure of a linkedlist node :

struct DoubleLinkedListNode {
    int val;
    DoubleLinkedListNode* prev;
    DoubleLinkedListNode* next;
};
Your task is to implement the following function :

LinkedListNode* disintegrate(LinkedListNode* head, int k)
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

8
1
2
3
4
5
6
7
8
4
Sample Output 0

3
2
1
5
6
7
8




#include<stdio.h>

int main()
{
    int n,i,k,arr[100],pos;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            pos=i;
        }
    }
    for(i=pos-1;i>=0;i--)
        printf("%d\n",arr[i]);
    for(i=pos+1;i<n;i++)
        printf("%d\n",arr[i]);
return 0;
}
