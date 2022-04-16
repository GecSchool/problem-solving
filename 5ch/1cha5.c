#include <stdio.h>
int main(void)
{
	int cc,su,input;
	float gec=0;
	scanf("%d",&su);
	float score[su];
	cc=0;
	for(int i=0;i<=su-1;i++){
		scanf("%d",&input);
		score[i]=input;
		}
	for(int i=0;i<=su-1;i++){
		if(score[i]>cc)
			cc=score[i];
	}
	
	for(int i=0;i<=su-1;i++){
		score[i]=score[i]*100/cc;
		gec+=score[i];
	}
	gec=gec/su;
	printf("%f",gec);
	return 0;
}	
