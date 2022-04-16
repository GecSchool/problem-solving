#include <stdio.h>
int main(void)
{
	int gec,k;
	int su;
	scanf("%d%d",&gec,&k);
	for(int i=gec;i>=1;i--){
		scanf("%d",&su);
		if (su<k)
			printf("%d ",su);	
		
	}
	return 0;
}
