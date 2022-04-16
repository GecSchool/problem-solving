#include <stdio.h>
#include <math.h>
int main(void){
    int t;
    double price;
    scanf("%d",&t);
    while(t--){
        scanf("%lf",&price);
        printf("%.2lf\n",floor((price*0.8+0.05)*100)/100);
    }
    return 0;
}