
Sample Input 0

2
4
1 0 3 2
3
2 1 0
Sample Output 0

Yes
No




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                if(a[i]-a[i+1]==1 || a[i+1]-a[i]==-1){
                    int temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
                else{
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
