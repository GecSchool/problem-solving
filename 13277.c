#include <stdio.h>
#include <string.h>
#define su 300000
void changenum(char number[su],int);
int main(void){
    char number1[su]={0};
    char number2[su]={0};
    char result[su]={0};
    int number1_len,number2_len,result_len;
    scanf("%s",number1);
    scanf("%s",number2);
    number1_len=strlen(number1);
    number2_len=strlen(number2);
    changenum(number1,number1_len);
    changenum(number2,number2_len);
    for(int i=0;i<number1_len;i++){
        number1[i]-='0';
    }
    for(int i=0;i<number2_len;i++){
        number2[i]-='0';
    }
    for(int i=0;i<number1_len;i++){
        for(int s=0,n=i;s<number2_len-1;s++,n++){    
            result[n]+=(number2[s]*number1[i]);
                if((number2[s]*number1[i])/10==0){
                    result_len=n+1;
                }
                else{
                    result_len=n+2;
                }
        }
        for(int s=0;s<result_len;s++){
            result[s+1]+=result[s]/10;
            result[s]=result[s]%10;
        }
    }
    for(int i=0;i<result_len;i++){
        result[i]+='0';
    }
    changenum(result,result_len);
    printf("%s\n",result);
    return 0;
}
void changenum(char number[su],int number_len){
    char tmp[su]={0};
    for(int i=0;i<number_len;i++){
        tmp[i]=number[number_len-i-1];
    }
    for(int i=0;i<number_len;i++){
        number[i]=tmp[i];
    }
    return ;
}
