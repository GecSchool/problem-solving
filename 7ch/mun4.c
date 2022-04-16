// #include <stdio.h>
// #include <string.h>

// int main(void){
//     char S[20]={0};
//     char R[160]={0};
//     int S_len;
//     int T;
//     int n;
//     int s;
//     scanf("%d",&T);
//     for(int i=0;i<T;i++){
//         s=0;
//         scanf("%d",&n);
//         scanf("%s",S);
//         S_len=strlen(S);
//         for(int q=0;q<S_len;q++){
//             for(int a=0;a<n;a++,s++){
//                 R[s]=S[q];
//             }
//         }    
//         printf("%s\n",R);
//         memset(S,0,sizeof(S));
//         memset(R,0,sizeof(R));
//     }
//     return 0;
// }
#include <stdio.h>
#include <string.h>

int main(void) {
	
	int T,R;
	char S[20];
	
    	scanf("%d", &T);
	
	for(int i=0; i<T; i++) {
				
		scanf("%d %s", &R, S);
		
		for(int i=0; i < strlen(S); i++) 
			for(int j=0; j<R; j++) printf("%c", S[i]);
		
		printf("\n");
	}

}