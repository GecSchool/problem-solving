#include <stdio.h>
int main(void){
    int hour[6];
    int min[6];
    int sec[6];
    scanf("%d %d %d %d %d %d",&hour[0],&min[0],&sec[0],&hour[1],&min[1],&sec[1]);
    scanf("%d %d %d %d %d %d",&hour[2],&min[2],&sec[2],&hour[3],&min[3],&sec[3]);
    scanf("%d %d %d %d %d %d",&hour[4],&min[4],&sec[4],&hour[5],&min[5],&sec[5]);
    for(int i=1;i<=5;i+=2){
        sec[i]-=sec[i-1];
    }
    for(int i=1;i<=5;i+=2){
        if(sec[i]<0){
            sec[i]+=60;
            min[i]--;
        }
    }
    for(int i=1;i<=5;i+=2){
        min[i]-=min[i-1];
    }
    for(int i=1;i<=5;i+=2){
        if(min[i]<0){
            min[i]+=60;
            hour[i]--;
        }
    }
    for(int i=1;i<=5;i+=2){
        hour[i]-=hour[i-1];
    }
    printf("%d %d %d\n",hour[1],min[1],sec[1]);
    printf("%d %d %d\n",hour[3],min[3],sec[3]);
    printf("%d %d %d\n",hour[5],min[5],sec[5]);
    return 0;
}