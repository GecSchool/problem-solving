#include <stdio.h>
int main(void){
    int dp[11] = {0 , 1, 2, 4 };
    int n;
    scanf("%d",&n);
    int number;
    for(int i=4;i<=10;i++){
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    }
    for(int i=0;i<n;i++){
        scanf("%d",&number);
        printf("%d\n",dp[number]);
    }
    return 0;
}