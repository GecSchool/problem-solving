#include <stdio.h>
int main(void){
    int s,t;
    int j1,m1,s1,e1;
    int j2,m2,s2,e2;
    scanf("%d %d %d %d",&j1,&m1,&s1,&e1);
    scanf("%d %d %d %d",&j2,&m2,&s2,&e2);
    s=j1+m1+s1+e1;
    t=j2+m2+s2+e2;
    if(s>=t){
        printf("%d\n",s);
    }
    else{
        printf("%d\n",t);
    }
    return 0;
}