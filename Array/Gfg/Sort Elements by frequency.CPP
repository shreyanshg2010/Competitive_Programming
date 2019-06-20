Input : arr[] = {2, 3, 2, 4, 5, 12, 2, 3, 3, 3, 12}
Output : 3 3 3 3 2 2 2 12 12 4 5
Explanation :
No. Freq
2  : 3
3  : 4
4  : 1
5  : 1
12 : 2



#include <bits/stdc++.h> 
using namespace std;
bool compare(pair<int,int> &p1, 
			pair<int, int> &p2) 
{ 
	if (p1.second == p2.second) 
		return p1.first < p2.first; 
	return p1.second > p2.second; 
} 
void printSorted(int arr[], int n) 
{ 
	map<int, int> m; 
	for (int i = 0; i < n; i++) 
		m[arr[i]]++; 
	int s = m.size(); 
	pair<int, int> p[s]; 
	int i = 0; 
	for (auto it = m.begin(); it != m.end(); ++it) 
		p[i++] = make_pair(it->first, it->second); 
	sort(p, p + s, compare); 

	cout << "Elements sorted by frequency are: "; 
	for (int i = 0; i < s; i++) 
	{ 
		int freq = p[i].second; 
		while (freq--) 
			cout << p[i].first << " "; 
	} 
} 
int main() 
{ 
	int arr[] = {2, 3, 2, 4, 5, 12, 2, 3, 
				3, 3, 12}; 
	int n = sizeof(arr)/ sizeof(arr[0]); 
	printSorted(arr, n); 
	return 0; 
} 
