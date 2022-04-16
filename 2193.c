#include <stdio.h>
#define ll long long
int main(){
    int n;
    scanf("%d",&n);
    ll su[2]={0,1};
    ll tmp;
    for(int i=2;i<=n;i++){
        tmp = su[1];
        su[1] = su[0];
        su[0] += tmp;
    }
    printf("%lld\n",su[0]+su[1]);
    return 0;
}