#include <stdio.h>
int selfnum(void);
int su[10000];
int main(void)
{
	
	for (int i=0;i<=9999;i++){
		su[i]=i+1;
	}	
	selfnum();
	for (int i=0;i<=9999;i++){
		if(su[i]==0)
			;
		else
			printf("%d\n",su[i]);}
	return 0;

}
	
int selfnum(){
	
	for(int i=1;i<=10000;i++){
		if(i<10){
			i=i*2;
	}	
		else if(i<100){
			i=i+i/10+i%10;
	}
		else if(i<1000){
			i=i+i/100+i/10+i%10;
	}
		else{
			i=i+i/1000+i/100+i/10+i%10;
	}
		su[i-1]=0;
}		
}
	


	
