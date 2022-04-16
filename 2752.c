#include <stdio.h>
int main(void){
    int num[3]={0};
    int tmp,s=0;
    scanf("%d %d %d",&num[0],&num[1],&num[2]);
    for(int i=0;i<3;i++){
        for(int s=0;s<2;s++){
            if(num[s]>num[s+1]){
                tmp=num[s+1];
                num[s+1]=num[s];
                num[s]=tmp;
            }
        }
    }
    for(int i=0;i<3;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}