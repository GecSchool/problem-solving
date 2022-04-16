#include <stdio.h>
#include <string.h>
int main()
{
    int n, tmp, gr = 0, fir;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        gr ^= (tmp - 2);
    }
    char first_king[10] = {
        0,
    };
    scanf("%s", first_king);
    if (strcmp(first_king, "Whiteking") == 0)
    {
        fir = 0;
    }
    else
        fir = 1;
    if (gr == 0)
    {
        if (fir == 1)
            printf("Whiteking\n");
        else
            printf("Blackking\n");
    }
    else
    {
        if (fir == 1)
            printf("Blackking\n");
        else
            printf("Whiteking\n");
    }
    return 0;
}