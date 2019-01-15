There are n pictures delivered for the new exhibition. The i-th painting has beauty ai. We know that a visitor becomes happy every time he passes from a painting to a more beautiful one.

We are allowed to arranged pictures in any order. What is the maximum possible number of times the visitor may become happy while passing all pictures from first to last. In other words, we are allowed to rearrange elements of array a in any order. What is the maximum possible number of indices i (1 <= i <= n - 1), such that ai + 1 > ai.

Input Format

The first line of the input contains integer n — the number of painting.

The second line contains the sequence a1, a2, ..., an, where ai means the beauty of the i-th painting.

Constraints

1 <= n <= 1000
1 <= ai <= 1000

Output Format

Print one integer — the maximum possible number of neighbouring pairs, such that ai + 1 > ai, after the optimal rearrangement.

Sample Input 0

4
200 100 100 200
Sample Output 0

2
Explanation 0

Sample Ordering that gives answer 2 :

100 200 100 200



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int n,x,a[1005],cnt,ans;
int main(){
    scanf("%d",&n);
    //cin>>n;
    for (int i=1;i<=n;i++){
        scanf("%d",&x);
        //cin>>x;
        a[x]++;
    }
    while (1){
     if (n==0) break;
     int cnt=0;
     for (int i=1;i<=1000;i++) if (a[i]) cnt++,a[i]--,n--;
     ans+=cnt-1;
    }
   printf("%d\n",ans);
    //cout<<ans;
}




