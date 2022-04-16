#include <stdio.h> //mex 하나 들어오면 그거 구하는 함수//재귀함수 이용 캐슁 재귀 거는 법 물어보기
#define size 3000001
int fibo[35] = {1, 1};
int mex[size] = {0, 1, 2, 3};
void gran(void)
{
    for (int i = 4; i < size; i++)
    {
        int b[size] = {
            0,
        };
        for (int j = 1; j < 34; j++)
        {
            if (fibo[j] > i)
                break;
            b[mex[i - fibo[j]]] = 1;
        }
        for (int s = 0; s < size; s++)
        {
            if (b[s] == 1)
                continue;
            mex[i] = s;
            break;
        }
    }
    return;
}
int main()
{
    int n;
    int ans = 0;
    int tmp;
    scanf("%d", &n);
    for (int i = 0; i < 33; i++)
        fibo[i + 2] = fibo[i] + fibo[i + 1];
    gran();
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        ans ^= mex[tmp];
    }
    if (ans != 0)
        printf("koosaga");
    else
        printf("cubelober");
    return 0;
}