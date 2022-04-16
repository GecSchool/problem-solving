#include <stdio.h>
void bubble(int number[],int);
int main(void){
    int n;
    scanf("%d",&n);
    int number[n+1];
    int bub_num[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
        bub_num[i]=number[i];
    }
    bubble(bub_num,n);//입력 후 배열
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++)
        if(bub_num[n-j-1])
    }
}
void bubble(int number[],int n){
    int tmp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(number[j]>number[j+1]){
                tmp=number[j+1];
                number[j+1]=number[j];
                number[j]=tmp;
            }
        }
    }
    return 0;
}//버블 정렬
