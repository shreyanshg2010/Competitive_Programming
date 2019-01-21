Given a number of dates, sort them in such a way that the date that corresponds to the earliest day comes first and the date that corresponds to the latest day comes last.

Input Format

First line contains N, the number of dates. 
Next N lines contain one date each in the following format : 
DD MM YYYY.
The date will be three integers separated by a space where the first integer is the day, the second integer is the month and the third is the year.

Constraints

1 <= N <= 100 
It is guaranteed that the date will be a valid date. 

Output Format

Output N lines. Each line must contain one date. The dates must appear in a sorted format.

Sample Input 0

4
9 8 1996
31 4 1995
30 4 1996
25 12 1997
Sample Output 0

31 4 1995
30 4 1996
9 8 1996
25 12 1997




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct Date{
    int d,m,y;
};
int main() {
    int t,i,j;
    scanf("%d",&t);
    struct Date date[t];
    for(i=0;i<t;i++){
        scanf("%d%d%d",&date[i].d,&date[i].m,&date[i].y);
    }
    for(i=0;i<t-1;i++){
        for(j=i+1;j<t;j++){
            if(date[i].y > date[j].y){
                struct Date temp = date[i];
                date[i] = date[j];
                date[j] = temp;
            }
            if(date[i].y == date[j].y){
                if(date[i].m>date[j].m){
                    struct Date temp = date[i];
                    date[i] = date[j];
                    date[j] = temp;
                }
            }
            if(date[i].y == date[j].y && date[i].m == date[j].m){
                if(date[i].d>date[j].d){
                    struct Date temp = date[i];
                    date[i] = date[j];
                    date[j] = temp;
                }
            }
        }
    }
    for(i=0;i<t;i++){
        printf("%d %d %d\n",date[i].d,date[i].m,date[i].y);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
