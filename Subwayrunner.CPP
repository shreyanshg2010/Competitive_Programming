Arrnie is playing the new famous game Subway Runners.
In this game there are three lanes and one starts from any one of the three lanes.
Arrnie plays the game in the following manner :
Switch(1,2)
Switch(2,3)
Switch(1,2)
Switch(2,3).. and so on..

Switch(x,y) is defined as follows :
if Arrnie is on lane x, he switches to lane y.
if Arrnie is on lany y, he switches to lane x.
if he is neither on lane x nor on y, he stays on the current lane.

Given the current lane of Arrnie and the number of moves he has made, Print the number of the lane Arrnie started the game in.

Input Format

First line contains two integers n and x

Constraints

1 <= n <= 2e9
1 <= x <= 3

Output Format

Output the lane number thar Arrnie started the game in.

Sample Input 0

4 3
Sample Output 0

2



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Switch(int ini,int x,int y){
    if(x==2 && y==3){
        if(ini == 2)
            return 3;
        else if(ini == 3)
            return 2;
        else
            return ini;
    }
    if(x==1 && y==2){
        if(ini == 2)
            return 1;
        else if(ini == 1)
            return 2;
        else
            return ini;
    }
    return -1;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, ini;
    cin>>n>>ini;
    int current =ini;
    // checkPath(ini,n);
    while(n>0){
        if(n%2 == 0){
            current=Switch(current,2,3);
        }else{
            current=Switch(current,1,2);
        }
        if(current == -1){
            cout<<"term";
            break;
        }
        n--;
    }
    cout<<current;
    return 0;
}
