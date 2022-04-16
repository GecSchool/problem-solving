#include <stdio.h>
int main(void)
{
	int a=0,b=0,c=0,n;
	char gec[80]={0};
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		scanf("%s",gec);

	for(int s=0;s<=79;s++){
		if(gec[s]=='O')
			a++;	
		
				
		else if(gec[s]=='X'){
			for(int e=1;e<=a;e++){
				b+=e;		
			}
			c+=b;
			b=0;
			a=0;
			continue;
		}
	
		else{ 	
			for(int e=1;e<=a;e++){
				b+=e;
			}
			c+=b;
			break;	
		}
	}

	printf("%d\n",c);
	c=0;
	a=0;
	b=0;	
	
	}
	return 0;
}
