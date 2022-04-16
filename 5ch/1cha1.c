#include <stdio.h>

int main(void)
{
	int su,gec;
	int max=-10000001,min=1000000;

	scanf("%d",&su);

	for(int i=su ;i>=1;i--){
		scanf("%d",&gec);
		if (gec>max)
			max=gec;
		if (gec<=min)
			min=gec;
	}
	printf("%d %d",min,max);
	return 0;
}

		
