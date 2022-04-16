#include <stdio.h>
#define ll long long
ll arr[50];
void answer(ll n, ll m)
{
    for (int i = 0; i < m; i++)
    {
        if (n % 2LL == 0LL)
        {
            printf("%lld ", arr[i] * (n + (1LL << (m - i)) - 2LL));
            n /= 2LL;
        }
        else
        {
            printf("%lld ", arr[i] * n);
            n = (n + 1LL) / 2LL;
        }
    }
    return;
}
int main()
{
    ll n, m;
    scanf("%lld%lld", &n, &m);
    for (int i = 0; i < m; i++)
        scanf("%lld", &arr[i]);
    answer(n, m);
    return 0;
}
// #include <stdio.h>
// void solve(long long n, long long m)
// {
//     long long a;
//     if (m == 0)
//         return;
//     if (n % 2 == 0)
//     {
//         scanf("%lld", &a);
//         solve(n / 2, m - 1);
//         printf("%lld ", a * (n + (1 << m) - 2));
//     }
//     else
//     {
//         scanf("%lld", &a);
//         printf("%lld ", a * n);
//         solve((n + 1) / 2, m - 1);
//     }
// }
// int main()
// {
//     long long n, m;
//     scanf("%lld%lld", &n, &m);
//     solve(n, m);
//     return 0;
// }