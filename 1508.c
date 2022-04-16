#include <stdio.h>
#define size 50
int main()
{
    int len = 0, peo = 0, loc = 0;
    scanf("%d %d %d", &len, &peo, &loc);
    int arr[size] = {
        0,
    };
    for (int i = 0; i < loc; i++)
    {
        scanf("%d", &loc[i]);
    }
    int right = loc[loc - 1];
    int left = 0;
    int result[size] = {
        0,
    };
    while (right >= left)
    {
        int mid = (right + left) / 2;
    }
}