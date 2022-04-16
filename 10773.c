#include <stdio.h>
#define size 100001
int main()
{
    int n, top = -1;
    int stack[size];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        if (tmp == 0)
        {
            top -= 1;
        }
        else
        {
            stack[++top] = tmp;
        }
    }
    int sum = 0;
    for (int i = 0; i <= top; i++)
        sum += stack[i];
    printf("%d\n", sum);
    return 0;
}