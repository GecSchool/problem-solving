#include <stdio.h>
int bigger(int n,int m){
    if(n>m) return n;
    return m;
}
int main(void){
    int n; // 최대 날짜
    int t[16] = {0, };
    int dp[16] = {0, };
    int p[16] = {0, };
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%d",&t[i],&p[i]); // t, p 받기
    }
    for(int i=1;i<=n;i++){
        if(i+t[i]<=n+1) dp[i] = p[i];
    }
    for(int i=n;i>=1;i--){
        for(int j=i+t[i];j<=n;j++){
            if(n+1 >= j + t[j]){ // 최대 날짜 +1 >= j날에 날짜 + j 
                dp[i] = bigger(dp[j]+p[i],dp[i]);
            }
        }
    }
    int max = 0;
    for(int i=1;i<=n;i++) max = (max>dp[i])?max:dp[i];
    printf("%d\n",max);
    return 0;
}