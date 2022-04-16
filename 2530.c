#include <stdio.h>
int main(void){
    int time[3]={0};
    int sec;
    scanf("%d %d %d",&time[2],&time[1],&time[0]);
    scanf("%d",&sec);
    time[0]+=sec;
    time[1]+=time[0]/60;
    time[0]%=60;
    time[2]+=time[1]/60;
    time[1]%=60;
    time[2]%=24;
    printf("%d %d %d\n",time[2],time[1],time[0]);
    return 0;
}