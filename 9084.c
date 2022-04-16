#include <stdio.h>
int bigger(int n,int m){
    if(n>m) return n;
    return m;
}
int main(void){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int coin[21] = {0, };
        int total;
        int n;
        int dp[10001] = {1, };

        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&coin[i]);
        }
        // for(int i=1;1<=n;i++) dp[coin[i]];
        scanf("%d",&total);
        for(int i=1;i<=n;i++){ // i = 사용하는 코인
            for(int j=coin[i];j<=total;j++){ // j = 만들 금액금액 
                dp[j] += dp[j-coin[i]];
            
            }
        }
        printf("%d\n",dp[total]);
    }
    return 0;
}