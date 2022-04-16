#include <stdio.h>
int main()
{
    int arr[3];
    while (1)
    {
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
        {
            return 0;
        }
        if (arr[0] > arr[1])
        {
            int tmp = arr[0];
            arr[0] = arr[1];
            arr[1] = tmp;
        }
        if (arr[1] > arr[2])
        {
            int tmp = arr[1];
            arr[1] = arr[2];
            arr[2] = tmp;
        }
        if (arr[2] * arr[2] == arr[0] * arr[0] + arr[1] * arr[1])
        {
            printf("right\n");
        }
        // 정렬하기
        else
        {
            printf("wrong\n");
        }
    }
}