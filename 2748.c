#include <stdio.h>
#define ll long long
int main()
{
    int n;
    ll arr[100] = {0, 1};
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    printf("%lld\n", arr[n]);
    return 0;
}