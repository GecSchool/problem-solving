#include <stdio.h>
#include <string.h>
#define TRUE 1
int main()
{
    while (TRUE)
    {
        char arr[6] = {
            0,
        };
        int arr_len = 0;
        int result = 0;
        scanf("%s", arr);
        arr_len = strlen(arr);
        if (arr_len == 1 && arr[0] == '0')
            break;
        if (arr_len == 1)
        {
            printf("yes\n");
            continue;
        }
        if (arr_len % 2 == 0) // 짝수 개
        {
            for (int i = 0; i < arr_len / 2; i++)
            {
                if (arr[i] != arr[arr_len - 1 - i])
                {
                    result = 1;
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < arr_len / 2; i++)
            {
                if (arr[i] != arr[arr_len - 1 - i])
                {
                    result = 1;
                    break;
                }
            }
        }
        if (result)
            printf("no\n");
        else
            printf("yes\n");
    }
}