#include <stdio.h>
int main(){
    int n;
    int sum = 0;
    int tmp;
    scanf("%d",&n);
    n = 1000 - n;
    tmp = n/500;
    sum += tmp;
    n -= 500*tmp;
    tmp = n/100;
    sum += tmp;
    n -= 100*tmp;
    tmp = n/50;
    sum += tmp;
    n -= 50*tmp;
    tmp = n/10;
    sum += tmp;
    n -= 10*tmp;
    tmp = n/5;
    sum += tmp;
    n -= 5*tmp;
    tmp = n;
    sum += tmp;
    printf("%d\n",sum);
    return 0;
}