Igor has fallen in love with Tanya. Now Igor wants to show his feelings and write a number on the fence opposite to Tanya's house. Igor thinks that the larger the number is, the more chance to win Tanya's heart he has.

Unfortunately, Igor could only get v liters of paint. He did the math and concluded that digit d requires ad liters of paint. Besides, Igor heard that Tanya doesn't like zeroes. That's why Igor won't use them in his number.

Help Igor find the maximum number he can write on the fence.

Input
The first line contains a positive integer v (0 ≤ v ≤ 106). The second line contains nine positive integers a1, a2, ..., a9 (1 ≤ ai ≤ 105).

Output
Print the maximum number Igor can write on the fence. If he has too little paint for any digit (so, he cannot write anything), print -1.

Examples
input
5
5 4 3 2 1 2 3 4 5
output
55555

input
2
9 11 1 12 5 8 9 10 6
output
33

input
0
1 1 1 1 1 1 1 1 1
output
-1



#include<bits/stdc++.h>
using namespace std ;
int a[10]  , l , m = 1e9 ;
int main()
{
	int n ;
	cin >> n ;
	for ( int i = 1 ; i<=9 ; i++)
		cin >> a[i], m = min( m , a[i] ) ;
	l = n/m;
	if ( l== 0 ) 
	{
		cout << -1 ;
		return 0 ;
	}
	while ( l-- ) 
		for ( int i =9 ; i>= 0 ; i--)
			if ((n-a[i]) / m == l && n>=a[i]) 
			{
				cout << i ;
				n-=a[i] ;
				break ;
			}

}
