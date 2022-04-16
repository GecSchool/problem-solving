#include <stdio.h>
int main(void)
{
	long a,b,c,to,gec;

	scanf("%ld%ld%ld",&a,&b,&c);
	gec=a%(c-b);
	if(b>=c)
	printf("-1");
	else {
	gec=a/(c-b);
	printf("%ld",gec+1);
	}
	return 0;
}
