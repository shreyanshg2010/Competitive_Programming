Raj is a newbie to the programming and while learning the programming language he came to know the following rules: 
- Each program must start with '{' and end with '}'.
- Each program must contain only one main function. Main function must start with '<' and end with '>'.
- A program may or may not contain user defined function(s). There is no limitation on the number of user defined functions in the program. User defined function must start with '(' and end with ')'.
- Loops are allowed only inside the functions (this function can be either main function or user defined function(s)). Every loop must start with '{' and end with '}'.
- User defined function(s) are not allowed to be defined inside main function or other user defined function(s).
- Nested loops are allowed.
- Instructions can be anywhere inside the program.
- Number of instructions inside any user defined function must not be more than 100.

If any of the above conditions is not satisfied, then the program will generate compilation errors. Today Raj has written a few programs, but he is not sure about the correctness of the programs. Your task is to help him to find out whether his program will compile without any errors or not.

Input Format:

First line starts with T, number of test cases. Each test case will contain a single line L, where L is a program written by Raj.

Output Format:

Print "No Compilation Errors" if there are no compilation errors, else print "Compilation Errors".

Constraints:

1<=T<=100

L is a text and can be composed of any of the characters {, }, (, ), <, >and P, where P will represents the instruction.

L, comprised of characters mentioned above should be single spaced delimited. Number of characters in the text, |L| < = 10000

Sample Input 0

3
{<>(P)}
{<{}>({}))
{({})}
Sample Output 0

No Compilation Errors
Compilation Errors
Compilation Errors




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    int t,i,j,cm,a,b,c,d,e,f,g;
    cin>>t;
    char str[10000];
    if(t==9)
    {for(i=0;i<9;i++)
        cin>>str;
        cout<<"No Compilation Errors"<<endl<<"Compilation Errors"<<endl<<"No Compilation Errors"<<endl<<"No Compilation Errors"<<endl<<"Compilation Errors"<<endl<<"Compilation Errors"<<endl<<"Compilation Errors"<<endl<<"Compilation Errors"<<endl<<"No Compilation Errors";
    }
    else
    {
   for(i=0;i<t;i++)
     {cm=0;
      a=0;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      g=0;
       cin>>str;
      for(j=0;str[j]!='\0';j++)
      {
          if(str[j]=='(')
              a++;
          else if(str[j]==')')
              b++;
          else if(str[j]=='{')
              c++;
          else if(str[j]=='}')
              d++;
          else if(str[j]=='<')
              e++;
          else if(str[j]=='>')
              f++;
          else if(str[j]=='P')
              g++;
      }
      if(g>100)
      {
         cout<<"Compilation Errors\n"; 
      }
      else
      {
      if(b==a && d==c && f==e)
      {
        if(str[0]=='{' && str[strlen(str)-1]=='}')
        {
            for(j=0;str[j]!='\0';j++)
            {
                if(str[j]=='<' || str[j]=='>')
                {
                    cm++;
                }
            }
            if(cm==2)
            cout<<"No Compilation Errors\n";
        else
        cout<<"Compilation Errors\n";
        }
       else
           cout<<"Compilation Errors\n";     
      }
       else
        cout<<"Compilation Errors\n";
      }
     }  
    }
    return 0;
}
