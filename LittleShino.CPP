Little Shino loves maths. Today her teacher gave her two integers. Shino is now wondering how many integers can divide both the numbers. She is busy with her assignments. Help her to solve the problem.

Input:
First line of the input file contains two integers, a and b.

Output:
Print the number of common factors of a and b.

Constraints:

SAMPLE INPUT 
10 15
SAMPLE OUTPUT 
2
Explanation
The common factors of 10 and 15 are 1 and 5.




#include<iostream> 
#include<math.h>
using namespace std; 

int gcd(int a, int b) 
{ 
	if (a == 0) 
		return b; 
	return gcd(b%a, a); 
} 
int commDiv(int a,int b) 
{ 
	// find gcd of a,b 
	int n = gcd(a, b); 

	// Count divisors of n. 
	int result = 0; 
	for (int i=1; i<=sqrt(n); i++) 
	{ 
		// if 'i' is factor of n 
		if (n%i==0) 
		{ 
			// check if divisors are equal 
			if (n/i == i) 
				result += 1; 
			else
				result += 2; 
		} 
	} 
	return result; 
} 

// Driver program to run the case 
int main() 
{ 
	int a,b; 
	cin>>a>>b;
	
	cout << commDiv(a, b); 
	return 0; 
} 

