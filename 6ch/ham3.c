#include <stdio.h>
int gec=0;
int han(int);

int main(void)
{
	int su;
	scanf("%d",&su);
	han(su);
	printf("%d",gec);
	
}
int han(int su){
	int baek,sib,il,h,t;
	for(int i=1;i<=su;i++){
	if(i<10){
	il=i;	
	gec++;
	}
	else if(i<100){
	sib=i/10;
	il=i%10;
	gec++;
	}
	else if(i<1000){
	baek=i/100;
	sib=(i-100*baek)/10;
	il=i%10;
	h=baek-sib;
	t=sib-il;
		if(h==t)
			gec++;
	}
	else
		;
	}


}
