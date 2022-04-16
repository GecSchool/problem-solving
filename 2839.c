#include <stdio.h>
int main(void){
    int n,i=0,result=-1;
    scanf("%d",&n);
    for(;i<n/5+1;i++){
        if((n-i*5)%3==0){
            result=i+(n-i*5)/3;
        }
    }
    printf("%d\n",result);
    return 0;
}