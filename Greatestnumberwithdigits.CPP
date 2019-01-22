#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void findMaximumNum(string str, int k, string& max) 
{ 
    // return if no swaps left 
    if(k == 0) 
        return; 
  
    int n = str.length(); 
      
    // consider every digit 
    for (int i = 0; i < n - 1; i++) 
    { 
       
        // and compare it with all digits after it 
        for (int j = i + 1; j < n; j++) 
        { 
            // if digit at position i is less than digit 
            // at position j, swap it and check for maximum 
            // number so far and recurse for remaining swaps 
            if (str[i] < str[j]) 
            { 
                // swap str[i] with str[j] 
                swap(str[i], str[j]); 
  
                // If current num is more than maximum so far 
                if (str.compare(max) > 0) 
                    max = str; 
  
                // recurse of the other k - 1 swaps 
                findMaximumNum(str, k - 1, max); 
  
                // backtrack 
                swap(str[i], str[j]); 
            } 
        } 
    } 
} 
  
// Driver code 
int main() 
{ 
    string str ;
    cin>>str;
  
    int k = 4; 
  
    string max = str; 
    findMaximumNum(str, k, max); 
  
    cout << max << endl; 
  
    return 0; 
} 
