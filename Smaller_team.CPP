The coach from the previous problem has now changed his mind. He only wants to take n-k people into the team. He asks the first person in the line to go find the shortest person and switch places with him. He then asks the second person in line to go find the second shortest person and switch places with him. So on, until the kth person has switched with the Kth shortest person in front of the line.

Formally, swap the first element of the array with the smallest element of the array, then second element of the array with the second smallest element in the array and so on. Repeat this process k times.

INPUT

The first line of input is n (1≤n≤100), the number of applicants for the basketball team The second line of input is the heights of the n players (distinct positive numbers) each separated by a space. The third line of input is the number k (1≤k≤n)

OUTPUT

Print the heights of the players in a line after the k switches are complete.

Sample Input 0

7
4 9 6 3 1 7 5
4
Sample Output 0

1 3 4 5 6 7 9 



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    int temp=0,index;
    int b[n];
    for(i=0;i<n;i++)
        b[i]=arr[i];
    sort(b,b+n);
    while(k--)
    {
        for(i=0;i<n;i++)
        {
            if(b[temp]==arr[i])
            {
                index=i;
            }
        }
        swap(arr[temp],arr[index]);
        temp++;
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
