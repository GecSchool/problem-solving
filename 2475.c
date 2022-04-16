#include <stdio.h>
int main(void){
    int num1,num2,num3,num4,num5,num6;
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
    num6=num1*num1+num2*num2+num3*num3+num4*num4+num5*num5;
    printf("%d\n",num6%10);
    return 0;
}