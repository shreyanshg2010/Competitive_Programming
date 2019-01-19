Tisha and her Orange Sorting

You have seen Tisha and he oranges in the previous question. Her eldest son on the other hand, sees what his mother does and decides to help her sort out the oranges in increasing order of size. He is also quick to realize that they should be following the quicksort algorithm and finds this pseudocode from this Data Structures text book. Assume the oranges are neatly stacked in a row.

Quicksort Pseudocode :

Quicksort(arr, l, r) : 
	if (l < r) : 
		p = partition(arr, l, r)
		print(p)
		print(arr from l to r)
		Quicksort(arr, l, p - 1)
		Quicksort(arr, p + 1, r)
INPUT

The first line of input is n (1≤n≤100), the number of oranges Tisha plucked from the orchard 
The second line of input are the diameters of the oranges you just took (positive numbers) each separated by a space. Assume the first orange in the row to be the pivot element each time.

OUTPUT

Print the sizes of the oranges in a row after the sorting has been done

Sample Input 0

10
2 4 6 8 10 1 3 5 7 9
Sample Output 0

8
2 4 6 8 1 3 5 7 9 10 
6
2 4 6 1 3 5 7 8 
4
2 4 1 3 5 6 
2
2 1 3 4 
0
1 2 





#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void swap(int *a, int *b){ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
int partition (int a[], int l, int r) 
{ 
    int x = a[r];
    int i = (l - 1); 
    for (int j = l; j <= r-1; j++) 
    { 
        if (a[j] <= x) 
        { 
            i++; 
            swap (&a[i], &a[j]); 
        } 
    } 
    swap (&a[i + 1],&a[r]); 
    return (i + 1); 
} 
void Quicksort(int a[], int l, int r)
{
    int i,p;
    if (l < r)
    {
        p = partition(a, l, r);
        cout<<p<<endl;
        for(i=l;i<=r;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        Quicksort(a, l, p - 1);
        Quicksort(a, p + 1, r);
        }
}
int main() {
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
      Quicksort(a,0,n-1);
   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
