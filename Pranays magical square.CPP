Pranay received a magical square of the size of 2^n×2^𝑛.(x^y stands for yth power of x) It seems to his friend Ishan that one square is boring.
Therefore, he asked Pranay to perform exactly 𝑘 splitting operations. 
A Splitting operation is an operation in which Pranay takes a square of side 𝑎 and cuts it into 4 equal squares of side 𝑎/2.
If the side of the square is equal to 1 ,then a splitting operation cannot be applied to it. 
Pranay is happy to fulfill Ishan's request, but he also wants the condition of Pranay's happiness to be satisfied at the end of all operations.
The condition of Pranay's happiness will be satisfied if the following statement is fulfilled: Let the side length of the lower left square be equal to 𝑎 ,then the side length of the right upper square should also be equal to 𝑎.
There should also be a path between them that consists only of squares with the side of length 𝑎. 
All consecutive squares on a path should have atleast one common side.

Obviously as long as we have one square these conditions are met.So pranay is prepared to fulfill Ishans request only under condition that he is satisfied too.
Tell him it is possible to perform exactly k splitting operations in a certain order so that the condition of pranays happiness is satisfied?
if its possible,tell the size side of squares which form the path from lower left square to upper right square.



Sample Input
3
1 1 
2 2
2 12

Sample Output
YES 0
YES 1
NO



#include <cmath>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;
ll fp(ll a,ll n){
    ll res=1;
    while(n){
        if(n&1) res=res*a;
        a=a*a;
        n>>=1;
    }
    return res;
}
int main(void){
    int t;scanf("%d",&t);
    while(t--){
        ll n,k;scanf("%lld%lld",&n,&k);
        if(n==2&&k==3) printf("NO\n");
        else if(n>31) printf("YES %lld\n",n-1ll);
        else{
            ll a=2;
            int flag=0;
            for(ll i=1;i<=n;i++){
                ll len=n-i;
                ll block=a*a-a*2ll+1ll;
                //printf("%lld\n",block);
                ll k1=(fp(4ll,i)-1ll)/3ll;
                ll k2=(fp(4ll,len)-1ll)/3ll;
                //printf("%lld %lld\n",k1,k2);
                if(k<=k1+k2*block){
                    flag=1;
                    printf("YES %lld\n",len);
                    break;
                }
                //printf("%lld\n",k1+k2*block);
                a*=2ll;
            }
            if(flag==0) printf("NO\n");
        }
    }
    return 0;
}
