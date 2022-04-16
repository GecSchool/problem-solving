#include <stdio.h>
int main(void){
    int t,x1,y1,r1,x2,y2,r2,len,r_sum;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        if(x1==x2&&y1==y2&&r1==r2){
            printf("-1\n");
            continue;
        }
        len=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        r_sum=(r1+r2)*(r1+r2);
        if(len>r1*r1&&len>r2*r2){
            if(len-r_sum>0){
                printf("0\n");
            }
            else if(len-r_sum==0){
                printf("1\n");
            }
            else{
                printf("2\n");
            }
        }
        else{
            if()
            

        }
    }
    return 0;
}