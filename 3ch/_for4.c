#include <stdio.h>
int main(void)
{
	int N,hap=0;
	scanf("%d",&N);
	int A,B;
	for(;N>=1;N--){
		scanf("%d%d",&A,&B);
		hap=A+B;
		printf("%d\n",hap);
	}
	return 0;

	}

