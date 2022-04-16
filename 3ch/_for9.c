#include <stdio.h>
int main(void)
{
	int N;

	scanf("%d",&N);

	for(int gil=0 ;N>=1;N--){
		gil+=1;
		for(int i=N;i>=2;--i){
			printf(" ");
		}
		for(int i=1;i<=gil;i++)
			printf("*");

	printf("\n");
	}
	return 0;
}
