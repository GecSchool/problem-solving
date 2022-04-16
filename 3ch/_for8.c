#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);

	for(int i=0 ;N>=1;N--){
		i++;
		for(int su=1;su<=i;su++)
			printf("*");
	printf("\n");
	}
	return 0;
}
