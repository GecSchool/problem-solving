#include <stdio.h>
#define size 100001
int bigger(int n, int m)
{
    if (n > m)
        return n;
    return m;
}
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
    int arr[size] = {
        0,
    };
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    mergeSort(arr, 1, n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = bigger(ans, (n - i) * arr[i + 1]);
    }
    printf("%d\n", ans);
    return 0;
}