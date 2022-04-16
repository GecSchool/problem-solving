#include <stdio.h>
int main(void){
    int n,k,s=1;
    scanf("%d %d",&n,&k);
        for(int i=1;i<=n;i++){
            if(n%i==0){
                if(s==k){
                    printf("%d\n",i);
                    return 0;
                }
                s++;
            }
        }
    printf("0\n");
    return 0;
}