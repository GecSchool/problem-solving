#include <stdio.h> // dp[0] -> -1 dp[1] -> 1 dp[2] -> 2 dp[3] -> 3
int fibo(int n)
{
    int f1 = 1, f2 = 1, tmp, re = 0;
    while (f1 <= n)
    {
        tmp = f2;
        f2 += f1;
        re = f1;
        f1 = tmp;
    }
    return re;
}
int main()
{
    for (int n = 1; n < 400; n++)
    {
        int firstFibo, secondFibo;
        int dp[401];
        for (int i = 0; i < 400; i++)
            dp[i] = -1;
        firstFibo = fibo(n);
        int target = n - firstFibo; // 4 - 3 -> 1
        secondFibo = fibo(target);
        int target2 = target;
        target = target - secondFibo;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 3;
        for (int i = 4; i <= target; i++) // dp[target]
        {
            for (int j = 1; j <= i; j++)
            {
                if (dp[i - j] == -1)
                {
                    dp[i] = j;
                }
                else
                {
                    if (dp[i - j] > (2 * j))
                    {
                        dp[i] = j;
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }
        printf("%d : %d\n", n, (dp[target] == (-1)) ? n : dp[target]);
    }
    return 0;
}