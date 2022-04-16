#include <stdio.h>
#include <stdlib.h>
#define size 100001
#define ll long long
typedef struct
{
    int a;
    int b;
} arr;
void merge(arr data[], int p, int q, int r)
{
    int i = p, j = q + 1, k = p;
    arr tmp[size]; // 새 배열
    while (i <= q && j <= r)
    {
        if (data[i].a < data[j].a)
            tmp[k++] = data[i++];
        else if (data[i].a > data[j].a)
            tmp[k++] = data[j++];
        else
        {
            if (data[i].b <= data[j].b)
                tmp[k++] = data[i++];
            else
                tmp[k++] = data[j++];
        }
    }
    while (i <= q)
        tmp[k++] = data[i++];
    while (j <= r)
        tmp[k++] = data[j++];
    for (int a = p; a <= r; a++)
        data[a] = tmp[a];
}

void mergeSort(arr data[], int p, int r)
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
    arr *num;
    scanf("%d", &n);
    num = (arr *)malloc(n * sizeof(arr));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i].b);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i].a);
    }
    mergeSort(num, 0, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d %d\n", num[i].a, num[i].b);
    return 0;
}