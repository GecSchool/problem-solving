#include <stdio.h>
int main(){
    int n;
    int k;
    int coin[10] = {0, };
    scanf("%d%d",&n,&k);
    int tmp = k;
    int result = 0;
    for(int i=0;i<n;i++) scanf("%d",&coin[i]);
    for(int i=n-1;i>=0;i--){
        if(coin[i]<=k&&k!=0){
            tmp = k/coin[i];
            result += tmp;
            k -= coin[i]*tmp;
        }
    }
    printf("%d\n",result);
    return 0;
}