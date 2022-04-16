#include <stdio.h>
int mask,n,tmp[1406250];
void make_mask(int k){ // s%32
    mask = 1;
    mask <<= k;
}
int check(int n){ // n/32 , n%32 = k
    int k = n%32;
    make_mask(k);
    int re=tmp[n/32]&mask;
    tmp[n/32]|=mask;
    return re;
}
int main(){
    while(1){
        if(scanf("%d",&n)==-1){
            return 0;
        }
        if((check(n))==0){
            printf("%d ",n);
        }
    }
}