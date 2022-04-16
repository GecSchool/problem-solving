#include <stdio.h>
int main(void){
    unsigned long long int n;
    scanf("%llu",&n);
    if(n==1){
        printf("0\n");
    }
    else printf("%llu\n",n*(n-1));
    return 0;
}