#include <stdio.h>
int main(){
    int day, today;
    int days = 0;
    int month;
    scanf("%d%d",&month,&day);
    for(int i=1;i<month;i++){
        switch (i)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            days += 31;
            break;
        case 2:
            days += 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days += 30;
            break;
        default:
            break;
        }
    }
    day = (days+day)%7;
    switch (day)
    {
    case 0:
        printf("SUN");
        break;
    case 1:
        printf("MON");
        break;
    case 2:
        printf("TUE");
        break;
    case 3:
        printf("WED");
        break;
    case 4:
        printf("THU");
        break;
    case 5:
        printf("FRI");
        break;
    case 6:
        printf("SAT");
        break;            
    default:
        break;
    }
    return 0;
}