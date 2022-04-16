#include <stdio.h>
int main(){
    int n,m,t;
    scanf("%d %d %d",&n,&m,&t);
    printf("%d %d\n",t/m,t-t/m*m);
    return 0;
}