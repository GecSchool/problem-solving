#include <stdio.h>
int main(void){
    int s,j,h,co,sa;
    scanf("%d%d%d%d%d",&s,&j,&h,&co,&sa);
    if(s>=j)s=j;
    if(s>=h)s=h;
    if(co>=sa)co=sa;
    printf("%d\n",s+co-50);
    return 0;
}