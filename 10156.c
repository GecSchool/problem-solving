#include <stdio.h>
int main(void){
    int price,money,su;
    scanf("%d %d %d",&price,&su,&money);
    printf("%d\n",(price*su>=money)?price*su-money:0);
    return 0;
}