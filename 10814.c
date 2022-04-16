#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    char *arr[200][100001] = {
        0,
    };
    int num[201] = {
        0,
    };
    for (int i = 0; i < n; i++)
    {
        int tmp;
        char s[101] = {
            0,
        };

        scanf("%d", &tmp);
        scanf("%s", s);
        arr[tmp - 1][num[tmp]] = malloc(strlen(s) + 1);
        strcpy(arr[tmp - 1][num[tmp]], s);
        num[tmp] += 1;
    }
    for (int i = 1; i <= 200; i++)
    {
        for (int j = 0; j <= num[i] - 1; j++)
        {
            printf("%d %s\n", i, arr[i - 1][j]);
        }
    }
    return 0;
}