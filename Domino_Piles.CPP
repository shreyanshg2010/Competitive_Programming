You are given a rectangular board of M × N squares. Also you are given an unlimited number of standard domino pieces of 2 × 1 squares. You are allowed to rotate the pieces. You are asked to place as many dominoes as possible on the board so as to meet the following conditions:

1.Each domino completely covers two squares.

2.No two dominoes overlap.

3.Each domino lies entirely inside the board. It is allowed to touch the edges of the board.

Find the maximum number of dominoes, which can be placed under these restrictions.

Input Format

In a single line you are given two integers M and N — board sizes in squares

Constraints

1 ≤ M ≤ N ≤ 16

Output Format

Output one number — the maximal number of dominoes, which can be placed.

Sample Input 0

2 4
Sample Output 0

4



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int l,a,b;
    cin>>a>>b;
    l=a*b;
    cout<<l/2;
    return 0;
}
