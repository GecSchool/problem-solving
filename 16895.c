#include <stdio.h> // xor != 0 -> 0 xor == 0 -> 반복문 돌며 확인해 보기
int arr[1001] = {
    0,
};
int main()
{
    int n;
    int tmp, gr = 0;
    int ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        gr ^= tmp;
        arr[i] = tmp;
    }
    if (gr == 0)
    {
        printf("0\n");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            if (((gr ^ arr[i]) ^ j) == 0)
            {
                ans += 1;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
