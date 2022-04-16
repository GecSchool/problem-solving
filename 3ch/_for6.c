#include <stdio.h>
int main(void)
{
	int A,B,N;

	scanf("%d",&N);

	for(int i=1;i<=N;i++){
		scanf("%d%d",&A,&B);
		printf("Case #%d: %d\n",i,A+B);
	}
	return 0;
}
