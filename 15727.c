#include <stdio.h>
int main(void){
    int l;
    scanf("%d",&l);
    if(l%5==0){
        printf("%d\n",l/5);
    }
    else{
        printf("%d\n",l/5+1);
    }
}