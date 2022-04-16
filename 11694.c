#include <stdio.h>
int main()
{
    int n, one = 0, tmp, gr = 0;
    int arr[101] = {
        0,
    };
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        if (tmp == 1)
            one += 1;
        gr ^= tmp;
        arr[i] = tmp;
    }
    if (n == 1)
    {
        if (arr[0] != 1)
        {
            printf("koosaga");
            return 0;
        }
        else
        {
            printf("cubelover");
            return 0;
        }
    }
    if (n == one)
    {
        if (one % 2 != 0)
        {
            printf("cubelover");
            return 0;
        }
        else
        {
            printf("koosaga");
            return 0;
        }
    }
    if (one == 0 || one % 2 == 1)
    {
        if (gr != 0)
            printf("koosaga");
        else
            printf("cubelover");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                continue;
            else
            {
                if (((gr ^ arr[i]) ^ 1) == 0)
                {
                    printf("koosaga");
                    return 0;
                }
            }
        }
        printf("cubelover");
    }
    return 0;
}