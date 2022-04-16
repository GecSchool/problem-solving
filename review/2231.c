#include <stdio.h>
int check(int n){
    int len=1;
    while (n/=10==0)
    {
        len++;
    }
    return len;
}
int main(void){
    int n,sum,len;
    scanf("%d",&n);
    len=check(n);
    for(int i=n-len*9;1;i++){
        sum=n;
    }
    printf("0\n");
    return 0;
}