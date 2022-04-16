#include <stdio.h>
#include <string.h>
char star[2200][2200];
void star(int n);
int main(void)
    int n;
    scanf("%d",&n);
    char star[n][n+1];
    for(int i=0;i<n;i++){
        memset(star,'*',n);
    }//별 채우기
    star(n,star);
    for(int i=0;i<n;i++){
        printf("%s\n",star[i]);
    }//print star
    return 0;
]
char blank(int n){
    int s_x,s_y,f_x,f_y;
    s_x=n/3;
    s_y=n/3;
    f_x=n/3*2-1;
    f_y=n/3*2-1;
    for(int j=s_x;j<=f_x;j++){
        for(int i=s_y;i<=f_y;i++){
            star[j][i]=' ';
        }
    }

}
