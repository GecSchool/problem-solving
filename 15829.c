#include <stdio.h>
#include <string.h>
#define ll long long
#define size 51
int main(void){
    int len;
    scanf("%d",&len);
    char str[size];
    ll hash=0;
    scanf("%s",str);
    for(int i=0;i<len;i++){
        int s=i;
        ll su = 1;
        while(s--){
            su *= 31;
        }   
        hash += su*(str[i]-'a'+1);
    }
    printf("%lld\n",hash/1234567891);
    return 0;
}
