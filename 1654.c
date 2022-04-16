#include <stdio.h>
#define ll long long int
#define size 100001
ll n,m;
ll sum=0;
ll len[size];
ll max=0;
ll answer=0;
int main(void){
    scanf("%lld%lld",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%lld",&len[i]);
        sum+=len[i];
        if(max<len[i]){
            max=len[i];
        }
    }//get len
    // if(m==1){
    //     printf("%lld\n",max);
    //     return 0;
    // }//if(k==1) print 1_len;
    ll right=sum,left=1;
    while (right>=left)
    {
        ll result=0;
        ll mid=(right+left)/2;
        for(int i=0;i<n;i++){
            result+=len[i]/mid;
        }
        if(result>=m){//mid is too small 
            left=mid+1;
            if(answer<mid)
                answer=mid; 
        }
        else{//mid is too big
            right=mid-1;
        }
    }
    printf("%lld\n",answer);
    return 0;
}