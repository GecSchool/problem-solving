#include <stdio.h>
int main()
{
    int n;
    int tmp, gr = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        if (tmp == 1)
        {
            gr ^= 1;
        }
        else
        {
            if (tmp % 2 == 0)
            {
                gr ^= ((tmp / 2) - 1);
            }
            else
            {
                gr ^= ((tmp / 2) + 1);
            }
        }
    }
    if (gr == 0)
        printf("cubelover\n");
    else
        printf("koosaga\n");
    return 0;
}