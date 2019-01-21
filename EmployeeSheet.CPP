You are working for a company. Define a struct as follows :

struct Employee{
	char name[55];
	int salary;
}
Given data of n employees, you are to use any sorting algorithm to sort them according to their salary in ascending order, and print them in the format "name salary".

NOTE : Participants using Java shall use classes instead of structs.

It is guaranteed that all names are distinct. If two people have the same salary, the one with lexicographically smaller name must come before the other.

NOTE : you are not allowed to make any global variables. You must create another function to do the sorting and pass your employee array as a pointer to that function to sort it.

Input Format

First line contains a number N, number of employees.
Next N lines contain one string and one integer each.

Constraints

1 <= name of employee <= 50
1 <= N <= 1000
1 <= salary <= 1000

Output Format

Print the data of all employees in the format "name salary" with details of one employee on one line.

Sample Input 0

5
Abhinav 100
Nischay 50
Sarthak 25
Abhiram 150
Praneeth 200
Sample Output 0

Sarthak 25
Nischay 50
Abhinav 100
Abhiram 150
Praneeth 200




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

struct Employee{
    char name[55];
    int salary;
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j;
    struct Employee a[1000],temp;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i].name>>a[i].salary;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i].salary > a[j].salary){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }else if(a[i].salary == a[j].salary && strcmp(a[i].name,a[j].name)>0){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }else
                continue;
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].salary<<endl;
    }
    return 0;}
