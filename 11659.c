#include <stdio.h>
int main()
{
    int n, m, tmp;
    int arr[1000001] = {
        0,
    };
    int num[1000001] = {
        0,
    };
    scanf("%d %d", &n, &m);
    scanf("%d", &arr[1]);
    for (int i = 2; i <= n; i++)
    {
        scanf("%d", &tmp);
        num[i] = tmp;
        arr[i] = arr[i - 1] + tmp;
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", arr[b] - arr[a - 1]);
    }
    return 0;
}