#include <stdio.h>

int main(void){
    int num;
    int result;
    int i=0;
    int s=0;
    int gec=2;
    scanf("%d",&num);
    result=num-2;
    if(result==-1){
        printf("1");
        return 0;
    }
    else{
        result/=6;
        while(1){
            i+=s;
            if(result<i){
                printf("%d\n",gec-1);
                return 0;
            }
            gec++;
            s++;
        }
            
    }
}