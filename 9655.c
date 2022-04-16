#include <stdio.h>
int main()
{ // 상근이 입장에서 보자 홀수면 상근이가 이긴다
    int n;
    scanf("%d", &n);
    if (n % 2 == 1)
        printf("SK\n");
    else
        printf("CY\n");
    return 0;
}