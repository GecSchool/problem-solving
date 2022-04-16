#include <stdio.h>
#include <string.h>

int main(void){
    char sentence[1000000]={0};
    int space=0;
    scanf("%[^\n]",sentence);
        if(sentence[0]==' '&&strlen(sentence)==1){
        printf("0\n");
        return 0;
    }
    for(int i=1;i<strlen(sentence)-1;i++){
        if(sentence[i]==' '){
            space+=1;
        }
    }
    printf("%d\n",space+1);
    return 0;
}