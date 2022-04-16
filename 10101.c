#include <stdio.h>
int main(void){
    int angle1,angle2,angle3,angle_sum=0;
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    angle_sum=angle1+angle2+angle3;
    if(angle_sum!=180){
        printf("Error\n");
    }
    else{
        if(angle1==60&&angle2==60&&angle3==60){
            printf("Equilateral\n");
        }
        else if(angle1==angle2||angle2==angle3||angle1==angle3){
            printf("Isosceles\n");
        }
        else if(!(angle1==angle2||angle3==angle2||angle1==angle3)){
            printf("Scalene\n");
        }
    }
    return 0;
}