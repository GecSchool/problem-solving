#include <stdio.h>
int main(void)
{
	int  gob,a,b,c,gec,ha,n=1;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	gob=a*b*c;
	for(int i=0;i<=9;i++){
		
		for(int o=1;o<=9;o++){
			
			ha=gob/n;
			n*=10;
			if(ha==i)
				gec++;}
		printf("%d\n",gec);}
	return 0;
}
