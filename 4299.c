#include <stdio.h>
int main(void){
    int plus,minus,big,small;
    scanf("%d %d",&plus,&minus);
    big=(plus+minus)/2;
    if((plus+minus)%2==1||minus>plus){
        printf("-1\n");
        return 0;
    }
    small=plus-big;
    printf("%d %d\n",big,small);
    return 0;
}