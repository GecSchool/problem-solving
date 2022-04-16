#include <stdio.h>
int main(void)
{
	int a,n,gec=0,b=0,gil;
	float per;
	scanf("%d",&n);
	int jum[1000]={0};
	for(int i=1;i<=n;i++){	
	scanf("%d",&a);
		for(int e=1;e<=a;e++){
		scanf("%d",&gil);
		jum[e-1]=gil;
		gec+=jum[e-1];
		}	
		gec=gec/a;
		for(int e=1;e<=a;e++){
		if(jum[e-1]>gec)
			b++;
		}

	per=(float)b/(float)a*(float)100;

	printf("%.3f%\n",per);

	gec=0;
	b=0;
	
	}

	return 0;

}
