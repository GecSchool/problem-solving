#include <stdio.h>
#include <string.h>
int main(void){
    int fir_time[3]={0};
    int sec_time[3]={0};
    scanf("%d %d",&fir_time[1],&fir_time[0]);
    scanf("%d",&sec_time[0]);
    if(sec_time[0]>=60){
        sec_time[1]=sec_time[0]/60;
        sec_time[0]%=60;
    }
    fir_time[0]+=sec_time[0];
    fir_time[1]+=sec_time[1];
    if(fir_time[0]>=60){
        fir_time[1]+=fir_time[0]/60;
        fir_time[0]%=60;
    }
    if(fir_time[1]>=24){
        fir_time[1]%=24;
    }
    printf("%d %d\n",fir_time[1],fir_time[0]);
    return 0;
}