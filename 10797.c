#include <stdio.h>
int main(){
    int date;
    int d[6];
    int s=0;
    scanf("%d",&date);
    for(int i=0;i<5;i++){
        scanf("%d",&d[i]);
        if(d[i]==date)s++;
    }
    printf("%d\n",s);
    return 0;
}