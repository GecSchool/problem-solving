#include <stdio.h>
int main()
{
    int m;
    int gr = 0;
    int tmp;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &tmp);
        gr ^= tmp;
    }
    if (gr != 0)
        printf("koosaga\n");
    else
        printf("cubelover\n");
    return 0;
}