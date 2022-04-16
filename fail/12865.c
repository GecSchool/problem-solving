#include <stdio.h>
#define size 101
int max(int n, int m)
{
    if (n > m)
        return 0;
    return 1;
} // 뒤가 더 클 때 1
int main()
{
    int n, weight;
    int ju[size][2] = {
        0,
    };
    int dp[10001] = {
        0,
    };
    int check[10001][size] = {
        0,
    };
    scanf("%d %d", &n, &weight);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d", &ju[i][0], &ju[i][1]);
    }
    for (int i = 1; i <= weight; i++)
    {
        int dp_index = 0;
        int object_index = 0;
        for (int j = 1; j <= n; j++)
        {
            if (i >= ju[j][0])
            {
                if (check[i - ju[j][0]][j] == 0)
                {
                    if (max(dp[i], dp[i - ju[j][0]] + ju[j][1]))
                    {
                        object_index = j;
                        dp_index = i - ju[j][0];
                        dp[i] = dp[dp_index] + ju[j][1];
                    }
                }
            }
        }
        for (int j = 1; j <= n; j++)
        {
            check[i][j] = check[dp_index][j];
        }
        check[i][object_index] = 1;
    }
    printf("%d\n", dp[weight]);
    return 0;
}