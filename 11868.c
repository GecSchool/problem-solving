#include <stdio.h>
#define ll long long
int main()
{
    ll n, tmp, gr = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &tmp);
        gr ^= tmp;
    }
    if (gr == 0)
        printf("cubelover\n");
    else
        printf("koosaga\n");
    return 0;
}