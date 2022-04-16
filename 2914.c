#include <stdio.h>

int main(void){
    int lbum,mean,mel;
    scanf("%d %d",&lbum,&mean);
    mel=lbum*(mean-1)+1;
    printf("%d",mel);
    return 0;
}