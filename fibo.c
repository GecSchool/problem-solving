#include <stdio.h> // fibo 사이 값 구해준 후
#define ll long long
int main()
{
    ll f1 = 1, f2 = 1, tmp;
    int s = 0;
    while (f1 <= 3 * 1e6)
    {
        tmp = f2;
        f2 += f1;
        f1 = tmp;
        s++;
        printf("%d : %lld\n", s, f1);
    }
    printf("%d", s);

    return 0;
}