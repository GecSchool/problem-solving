#include <stdio.h>
int bigger(int n, int m)
{
    if (n < m)
        return m;
    return n;
}
int max = 0;
int check(int n)
{
    int tmp = 0, s = 0, c = 0;
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            s++;
        }
        else
        {
            n -= 1;
            c++;
        }
    }
    max = bigger(max, s);
    return c;
}
int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        tmp = check(tmp);
        ans += tmp;
    }
    printf("%d\n", ans + max);
    return 0;
}