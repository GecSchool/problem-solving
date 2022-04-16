#include <stdio.h>
int main(void){
    int a1,a2,a3,c1,c2,c3;
    scanf("%d %d %d",&a1,&a2,&a3);
    scanf("%d %d %d",&c1,&c2,&c3);
    printf("%d %d %d\n",c1-a3,c2/a2,c3-a1);
    return 0;
}