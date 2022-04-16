#include <stdio.h>
#include <inttypes.h>
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
// int print_uint128(uint128_t n) {
//   if (n == 0)  return printf("0\n");

//   char str[40] = {0}; // log10(1 << 128) + '\0'
//   char *s = str + sizeof(str) - 1; // start at the end
//   while (n != 0) {
//     if (s == str) return -1; // never happens

//     *--s = "0123456789"[n % 10]; // save last digit
//     n /= 10;                     // drop it
//   }
//   return printf("%s\n", s);
// }
int main(){
    char dp[101];
    char par[101];
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i = 1;i <= m;i++){
        dp[i] = n-(i-1);
        par[i] = i; 
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            int tmp = gcd(dp[j],par[i]);
            if(tmp!=1){
                dp[j] /= tmp;
                par[i] /= tmp;
            }
        }
    }
    int tmp;
    // uint128_t result = 1;
    
    // for(int i=1;i<=m;i++) result *= dp[i];
    // tmp = print_uint128(result);
    // printf("%" PRIu64 "\n", result);
    // printf("%lld\n",(long long)result);
    return 0;
}