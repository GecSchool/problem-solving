#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int num[10001] = {0, };
    int NUM;
    for(int i=0;i<n;i++){
        scanf("%d",&NUM);
        num[NUM]++;
    }
    for(int i=1;i<=10000;i++){
        for(int j=0;j<num[i];j++){
            printf("%d\n",i);
        }
    }
    return 0;
}