The server is finally happy that he sorted the line and now he gets to sell his portable chargers. But alas, a new person enters with a battery percentage of k comes to the store and stands at the back of the queue. Now he has to fit him in this already ascending ordered queue. He asks for your help.

Formally, you are given an array of size n where the first n - 1 elements are sorted in ascending order and the last element can be any value. Sort this array by sliding the last element into its correct position.

INPUT

The first line of input is n (1≤n≤100), the number of customers in the queue. The second line of input is the battery percentages of the n customers (positive numbers less than 100) 
the first n - 1 of which are standing in ascending order according to their battery percentage.

OUTPUT

Print the battery percentages of the customers in a line after the new person has been put in his right place in the queue.

Sample Input 0

6
1 3 5 7 9 4
Sample Output 0

1 3 4 5 7 9 



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n],i,j;
    for(i=0;i<n;i++)
        cin>>arr[i];
    int key;
    for(j=1;j<n;j++)
    {
        key=arr[j];
        i=j-1;
        while(i>0&&arr[i]>key)
        {
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=key;
    }
    
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
