#include <stdio.h>
int main(void){
    int a,sum=0;
    for(int i=0;i<5;i++){
        scanf("%d",&a);
        sum+=(a>=40)?a:40;
    }
    printf("%d\n",sum/5);
    return 0;
}