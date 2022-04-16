#include <stdio.h>
#include <string.h>

int main(void){
    char num1[4]={0};
    char num2[4]={0};
    scanf("%s",num1);
    scanf("%s",num2);
    for(int i=2;i>-1;i--){
        if(num1[i]>num2[i]){
            for(int s=2;s>-1;s--){
                printf("%c",num1[s]);
            }
            printf("\n");
            return 0;
        }
        else if(num1[i]<num2[i]){
            for(int s=2;s>-1;s--){
                printf("%c",num2[s]);
            }
            printf("\n");    
            return 0;
        }
    }
    return 0;
}