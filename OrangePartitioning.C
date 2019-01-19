Tisha went to her orchard and plucked a bunch of oranges. Now she wants to keep aside some of the oranges to for herself and her children but also sell the biggest ones on the market. She takes a look at the last orange in her hand and decides that she would like to eat it. She seems to think it fair that all the oranges smaller than the orange in her hand can go to her children. All the oranges bigger than this one will be sold on the market. Write a program to help Tisha do this partition. Assume the oranges are neatly stacked in a row.

Tisha does the following to partition the oranges :

k = 0
Check orange number i = 0,1,2,3.. n - 1 : 
for ith orange :
		if (orange[i] is smaller than or equal to orange[n-1]) :
			swap orange[i] with orange[k]
			k++
swap orange[k] with orange[n-1]
Simulate the process used by Tisha and print the resultant array of the size of oranges.

INPUT

The first line of input is n (1≤n≤100), the number of oranges Tisha plucked from the orchard
The second line of input are the diameters of the oranges you just took (positive numbers) each separated by a space. Assume the last orange (orange[n - 1]) to be the one Tisha took in her hand.

OUTPUT

Print the sizes of the oranges in a row after the partition has been done

Sample Input 0

8
4 3 8 6 1 1 9 5
Sample Output 0

4 3 1 1 5 6 9 8 




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int k=0;
    for(int i=0; i<n-1; i++)
        {
            if (a[i]<= a[n-1])
            {
                int t = a[i];
                a[i]= a[k];
                a[k++] = t;
            }
        }
        int t = a[n-1];
        a[n-1]= a[k];
        a[k] = t;
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
