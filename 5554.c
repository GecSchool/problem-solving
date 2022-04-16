#include <stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    a+=b;
    a+=c;
    a+=d;
    printf("%d\n%d\n",a/60,a%60);
    return 0;
}