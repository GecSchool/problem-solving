#include <stdio.h>

int main(void){
    int n,re=1;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        re*=i;
    }
    printf("%d",re);
    return 0;
}