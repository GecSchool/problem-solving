#include <stdio.h>
void check_big(int,int,int);
int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c){
        printf("%d\n",10000+a*1000);
    }
    else if(a==b){
        printf("%d\n",1000+a*100);
    }
    else if(b==c){
        printf("%d\n",1000+c*100);
    }
    else if(a==c){
        printf("%d\n",1000+a*100);
    }
    else{
        check_big(a,b,c);
    }
    return 0;
}
void check_big(int a,int b,int c){
    int biggest=a;
    if(b>=biggest)biggest=b;
    if(c>=biggest)biggest=c;
    printf("%d\n",biggest*100); 
    return ;
}
