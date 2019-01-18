The function myfunc takes 2 integers n and m as input. 
The fucntion accepts two integers ’n’ and ‘m’ as its argument. 
Implement the function to find the sum of ’n’ and ‘m’ and check if the number of digits in ’n’ and number of digits in sum of ’n’ and ‘m’ are same. 
If they are same then return the sum of ’n’ and ‘m’ else return ’n’.

Input Format

The function would be called by giving 2 integer inputs

Constraints

0<= N , M <= 100000

Output Format

Return the expected value

Sample Input 0

178 62
Sample Output 0

240



#include <bits/stdc++.h>

using namespace std;

int MyFunc(int n, int m) {
    // Complete this function
    string s = to_string(n);
    string sum = to_string(n+m);
  //  cout<<s<<" "<<sum;
    if(s.length()==sum.length()){
        return n+m;
    }
    else return n;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> array(n);
    for(int array_i = 0; array_i < n; array_i++){
        cin >> array[array_i];
    }
    int result = MyFunc(n, m);
    cout << result << endl;
    return 0;
}
