#include <stdio.h>
int main(void)
{
	int gec=0;
	for(int i=1;i<=9;i++){
		for(int o=1;o<=9;o++)
			gec++;
	}
	printf("%d",gec);
	return 0;
}
