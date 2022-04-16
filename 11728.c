#include <stdio.h>
#define size 1000001
int main()
{
    int arr_1[size] = {
        0,
    };
    int arr_2[size] = {
        0,
    };
    int n, m;
    int top_1 = 0, top_2 = 0;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr_1[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &arr_2[i]);
    int s = n + m;
    while (s--)
    {

        if (arr_1[top_1] >= arr_2[top_2])
        {
            if (top_2 == m)
                printf("%d ", arr_1[top_1++]);
            else
                printf("%d ", arr_2[top_2++]);
        }
        else
        {
            if (top_1 == n)
                printf("%d ", arr_2[top_2++]);
            else
                printf("%d ", arr_1[top_1++]);
        }
    }
    return 0;
}