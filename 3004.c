#include <stdio.h>
int main(void){
    int n;
    int num=2;
    scanf("%d",&n);
    if(n==1){
        printf("2\n");
        return 0;
    }
    for(int i=1;i<n;i++){
        num+=(i-1)/2+2;
    }
    printf("%d\n",num);
    return 0;
}