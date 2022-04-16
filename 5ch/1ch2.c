#include <stdio.h>
int main(void)
{
	int max,n,gec,su;
	max=0;
	su=0;
	for(int i=1;i<=9;++i){
		scanf("%d",&gec);
		
		if(gec>max){
			max=gec;
			su=i;	}
		
		
	}
	printf("%d\n",max);
	printf("%d",su);
	return 0;
}

