#include <stdio.h>
#define ll long long
int main(void){
    int n;
    scanf("%d",&n);
    ll dp[1000001] = {0, 1, 2, };
    for(int i=3;i<=n;i++){
        dp[i] = dp[i-1]%15746 + dp[i-2]%15746;
    }
    printf("%lld\n",dp[n]%15746);
    return 0;
}