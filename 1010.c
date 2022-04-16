// #include <stdio.h>
// int main(void){
//     int times,left,right,up=1,down=1;
//     scanf("%llu",&times);
//     while(times--){
//         scanf("%llu %llu",&left,&right);
//         for(int i=0;i<left;i++){
//             up*=(right-i);
//         }
//         for(int i=1;i<=left;i++){
//             down*=i;
//         }
//         right=up/down;
//         printf("%llu\n",right);
//     }
//     return 0;
// }

// #include <stdio.h>
// double combination(int n, int r);

// int main() {
// 	int n,i,a,b;
// 	scanf("%d", &n);
// 	for (i = 0; i < n; i++) {
// 		scanf("%d %d", &a, &b);
// 		printf("%.lf\n",combination(b,a));
// 	}
//     return 0;
// }
// double combination(int n,int r) {
// 	int i;
// 	double com = 1;
// 	double com2 = 1;
// 	for (i = n; i > n-r ;i--) {
// 		com = com * i;
// 	}
// 	for (i = r; i >0; i--) {
// 		com2 = com2 * i;
// 	}
// 	return com/com2;
// }
#include <stdio.h>

double fibo(int n) {
	if (n==0)
		return 1;
	return n*f(n-1);
}
double combi(int n, int m) {
	return fibo(n) / (fibo(n - m) * fibo(m));
}
int main(void){
	int t,n,m;
	scanf("%d", &t);
	for (int i = 0; i<t; i++) {
		scanf("%d%d", &n, &m);
		printf("%.lf\n", combi(m, n));
	}
	return 0;
}
