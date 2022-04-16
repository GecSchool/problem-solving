#include <stdio.h>
#define size 50
void merge(int data[], int p, int q, int r)
{
    int i = p, j = q + 1, k = p;
    int tmp[size]; // 새 배열
    while (i <= q && j <= r)
    {
        if (data[i] <= data[j])
            tmp[k++] = data[i++];
        else
            tmp[k++] = data[j++];
    }
    while (i <= q)
        tmp[k++] = data[i++];
    while (j <= r)
        tmp[k++] = data[j++];
    for (int a = p; a <= r; a++)
        data[a] = tmp[a];
}
void mergeSort(int data[], int p, int r)
{ //정렬하고 싶은 배열,시작점,끝점
    int q;
    if (p < r)
    {
        q = (p + r) / 2;
        mergeSort(data, p, q);
        mergeSort(data, q + 1, r);
        merge(data, p, q, r);
    }
}
int main()
{
    int n;
    int arr_1[size] = {
        0,
    };
    int arr_2[size] = {
        0,
    };
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr_1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr_2[i]);
    }
    mergeSort(arr_1, 0, n - 1);
    mergeSort(arr_2, 0, n - 1);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += arr_1[i] * arr_2[n - i - 1];
    }
    printf("%d\n", ans);
    return 0;
}