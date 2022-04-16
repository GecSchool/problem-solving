#include <stdio.h>

int main(void){
    long double n;
    long double m;
    long double many;
    long double namu;
    scanf("%Lf %Lf",&n,&m);
    many=n/m;
    namu=int(m)%int(n);
    return 0;
}