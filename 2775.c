#include <stdio.h>
int main(void){
    int t,floor,ho;
    int people[15][15]={0};
    for(int i=1;i<15;i++){
        people[0][i]=i;
    }
    for(int i=1;i<15;i++){
        for(int j=1;j<15;j++){
            for(int s=1;s<=j;s++){
                people[i][j]+=people[i-1][s];
            }
        }
    }
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&floor);
        scanf("%d",&ho);
        printf("%d\n",people[floor][ho]);
    }
    return 0;
}