#include <stdio.h>
int main(void){
    int a,b,c,d,e,f,sum;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    sum=a+b+c+d+e+f;
    sum-=(e>=f)?f:e;
    if(a>=b)a=b;
    if(a>=c)a=c;
    if(a>=d)a=d;
    sum-=a;
    printf("%d\n",sum);
    return 0;
}