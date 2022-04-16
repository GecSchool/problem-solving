#include <stdio.h>
int main(void){
    int sday,day,can,price,temp;
    scanf("%d %d %d %d",&sday,&day,&can,&price);
    temp=sday/day;
    if(sday%day==0)temp--;
    printf("%d\n",price*(temp*can));
    return 0;
}