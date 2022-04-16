#include <stdio.h>
int check(int n){
    int ac=0;
    if(n==1){
        return 0;
    }
    for(int i=1;i<n;i++){
        if(n%i==0){
            ac++;
            if(ac==2){
                return 0;
            }
        }
    }
    return 1;
}
int main(void){
    int n,m,sum=0,s=0,small;
    scanf("%d %d",&n,&m);
    for(int i=n;i<=m;i++){
        if(check(i)){
            sum+=i;
            s++;
            if(s==1){
                small=i;
            }
        }
    }
    if(sum==0){
        printf("-1\n");
        return 0;
    }
    printf("%d\n%d\n",sum,small);
    return 0;
}

