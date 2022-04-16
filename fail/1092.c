#include <stdio.h>
int main(void){
    int n;
    int m;
    scanf("%d",&n);
    int crain[n];
    int crain_big=0;
    int box_big=0;
    int tmp;
    int box;
    for(int i=0;i<n;i++){
        scanf("%d",&crain[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(crain[j]>crain[j+1]){
                tmp=crain[j];
                crain[j]=crain[j+1];
                crain[j+1]=tmp;
            }
        }
    }
    scanf("%d",&m);
    int crain_weight[n][m];
    crain_weight={0,};
    for(int i=0;i<n;i++){
        crain_weight[i][0]=crain[i];
    }
    for(int i=0;i<m;i++){
        scanf("%d",&box);
        for(int j=0;j<n;j++){
            if(box<=crain_weight[j][0]){
                while(1){
                    static int s;
                    s++;
                    if(crain_weight[j][s]=='\0'){
                        crain_weight[j][s]=box;
                        break;
                    }
                }
                break;
            }
            else if(j==n-1){
                printf("-1\n");
                return 0;
            }
        }
    }

    return 0;
}