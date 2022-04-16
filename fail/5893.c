#include <stdio.h>
#include <string.h>
void refix(char number[1001],int);
int main(void){
    char number[1001]={0};
    int number_len,num;
    scanf("%s",number);
    number_len=strlen(number);
    refix(number[1001],number_len);
    for(int i=0;i<number_len;i++){
        number[i]-='0';
    }
    for(int i=0;i<number_len;i++){
        
    }
    return 0;
}

void refix(char number[1001],int len){
    char tmp[1001];
    for(int i=0;i<len;i++){
        tmp[i]=number[len-i];
    }
    strcpy(number,tmp);
    return;
}