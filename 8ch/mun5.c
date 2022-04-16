#include <stdio.h>
int main(void){
    int f,l,p,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&f,&l,&p);
        printf("%d%02d\n",(p%f!=0)?(p<=f)?p:p%f:f,(p%f!=0)?p/f+1:p/f);
    }
    return 0;
}
// #include <stdio.h>
//     int main(){
//     int t, h, w, n;
//     int x = 0, y = 1;
//     scanf("%d", &t);
//     while(t--){
//     scanf("%d %d %d", &h, &w, &n);
//         x = n%h;
//         y = n/h + 1;
//         if(x == 0){
//           x = h;
//           y = n/h;}
//     printf("%d%02d\n", x, y); 
//     }
//     return 0;
// }


