#include <stdio.h>
int main(void){
    int pps,s;
    int a,b,c,d,e;
    scanf("%d %d",&pps,&s);
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    pps*=s;
    printf("%d %d %d %d %d",a-pps,b-pps,c-pps,d-pps,e-pps);
    printf("\n");
    return 0;
}