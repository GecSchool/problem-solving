#include <stdio.h>
#include <string.h>
void remove_space(char insert_sen[101],char tset_case[101]){
    int in_len = strlen(insert_sen);
    int location = 0;
    for(int i=0;i<in_len;i++){
        if(insert_sen[i]!=' ') tset_case[location++] = insert_sen[i];
    }
    return ;
}
void divide(char test_case[101],int test_len,char test_1[100],char test_2[100]){
    test_1[0] = test_case[0];
    int i;
    char ss;
    for(i = 1;i<test_len;i++){
        ss = test_case[i];
        if(test_case[i]=='~'||test_case[i]=='('||(test_case[i]>='a'&&test_case[i]<='z')){
            if(test_case[i-1]==')'||(test_case[i-1]>='a'&&test_case[i-1]<='z')){
                break;
            }
        }
        test_1[i] = test_case[i];
    }
    for(int n=i,j=0;n<test_len;n++,j++) test_2[j] = test_case[n];
    return ;
}
int main(){
    int test_len;
    int n;
    scanf("%d ",&n);
    for(int i=0;i<n;i++){
        char insert_sen[101] = {0, };
        char test_case[101] = {0, };
        char test_1[100] = {0, };
        char test_2[100] = {0, };
        gets(insert_sen);
        remove_space(insert_sen,test_case);
        test_len = strlen(test_case);
        divide(test_case,test_len,test_1,test_2);


  
    }
    return 0;
}