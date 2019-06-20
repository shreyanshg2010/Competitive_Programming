 Input : arr[] = { 4, 2, 1, 8 }
Output : 18
Rearrange given array as : { 1, 8, 2, 4 }
Sum of difference between consecutive element
= |1 - 8| + |8 - 2| + |2 - 4| + |4 - 1|
= 7 + 6 + 2 + 3
= 18.

Input : arr[] = { 10, 12, 15 }
Output : 10


#include <bits/stdc++.h> 
using namespace std; 

int maxSum(int arr[], int n) 
{ 
	int sum = 0; 

	sort(arr, arr + n); 

	for (int i = 0; i < n/2; i++) 
	{ 
		sum -= (2 * arr[i]); 
		sum += (2 * arr[n - i - 1]); 
	} 

	return sum; 
} 
int main() 
{ 
	int arr[] = { 4, 2, 1, 8 }; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	cout << maxSum(arr, n) << endl; 
	return 0; 
} 
