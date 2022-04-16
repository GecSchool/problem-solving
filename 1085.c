#include <stdio.h>
int main(void){
    int x,y,w,h,len_e,len_n,len_s,len_w;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    len_e=w-x;
    len_w=x;
    len_n=h-y;
    len_s=y;
    if(len_e>len_w){
        len_e=len_w;
    }
    if(len_e>len_n){
        len_e=len_n;
    }
    if(len_e>len_s){
        len_e=len_s;
    }
    printf("%d\n",len_e);
}