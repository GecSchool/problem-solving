#include <stdio.h>
#include <string.h>

int main(void){
    for(int i=0;i<5;i++){
        for(int s=0;i<4;i++){
            printf("s\n");
            goto exit;
        }
        printf("t\n");
    }
    return 0;
}