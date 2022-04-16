#include <stdio.h>
#include <string.h>
int main(void){
    char word[101]={0};
    char alpha[26]={0};
    int gec=0;
    int times;
    scanf("%d",&times);
    for(int i=0;i<times;i++){
        scanf("%s",word);
        alpha[0]=word[0];
        for(int s=1,e=0;s<strlen(word);s++){
            if(word[s]!=alpha[e]){
                alpha[e+1]=word[s];
                e++;
            }
        }
        for(int s=0;s<strlen(alpha)-1;s++){
            for(int a=s+1;a<strlen(alpha);a++){
                if(alpha[s]==alpha[a]){
                    goto exit;
                }
            }
        }
        gec+=1;
exit:        
        memset(word,0,sizeof(word));
        memset(alpha,0,sizeof(alpha));
    }
    printf("%d",gec);
    return 0;
}