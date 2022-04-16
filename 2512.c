#include <stdio.h>
#define ll long long int
int main(void){
    int n;
    ll su=0;
    ll m;
    ll result=0;
    int right=0,left=0;
    scanf("%d",&n);
    ll money[n+1];
    for(int i=0;i<n;i++){
        scanf("%lld",&money[i]);
        su+=money[i];
        if(money[i]>right){
            right=money[i];
        }
    }
    scanf("%lld",&m);
    if(su<=m){
        printf("%d\n",right);
        return 0;
    }
    else{
        while (right>=left)
        {
            ll sum=0;
            ll mid=(right+left)/2;
            for(int i=0;i<n;i++){
                if(mid<=money[i]){
                    sum+=mid;
                }
                else{
                    sum+=money[i];
                }
            }
            if(sum<=m){//sum값 줄여야 한다, mid를 줄여야 한다, right줄이기
                result=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        printf("%lld\n",result);
    }
    return 0;
}

        //     if(sum>=m){//sum값 줄여야 한다, mid를 줄여야 한다, right줄이기
        //         if(result<=mid)
        //             result=mid;
        //         right=mid-1;
        //     }
        //     else{
        //         left=mid+1;
        //     }
        // }