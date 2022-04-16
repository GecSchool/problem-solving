#include <stdio.h>
int lim[20001][2] = {0, };
int binary(int right,int target){
    int left = 1;
    while(right>left){
        int mid = (right+left)/2;
        if(lim[mid][0]>=target){
            right = mid;
        }
        else{
            left = mid +1 ;
        }
    }
    return right;
}
int main(){
    int t; // test_case
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        // int lim[20001][2] = {0, }; //lim[i][0] = hei , lim[i][1] = wid
        int wid;
        int hei;
        int top = 0;
        scanf("%d",&n);
        for(int j=1;j<=20001;j++) lim[j][0] = 0;
        for(int j=1;j<=20001;j++) lim[j][1] = 10001; 
        for(int j=1;j<=n;j++){
            scanf("%d%d",&wid,&hei);
            if(lim[top][0]>=hei){
                int tmp = binary(top,hei);
                if(lim[tmp-1][1]<=wid&&wid<=lim[tmp+1][1]){
                    lim[tmp][0] = hei;
                    lim[tmp][1] = wid;
                }
            }
            else{
                if(lim[top][1]<=wid){
                    lim[++top][0] = hei;
                    lim[top][1] = wid;
                }
            }
        }
        printf("%d\n",n-top);
    }
    return 0;
}