#include <stdio.h>
#define size 1000001
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
int binary_search(int arr[], int right, int target)
{
    int left = 0;
    while (left <= right)
    {
        int mid = (right + left) / 2;
        if (arr[mid] > target)
        {
            right = mid - 1;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
}
int unique(int arr[], int arr_size, int s[])
{
    int top = 0;
    s[0] = arr[top];
    for (int i = 1; i <= arr_size - 1; i++)
    {
        if (s[top] == arr[i])
            continue;
        s[++top] = arr[i];
    }
    return top;
}
int main()
{
    int n;
    int arr[size] = {
        0,
    };
    int tmp[size] = {
        0,
    };
    int s[size] = {
        0,
    };
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        tmp[i] = arr[i];
    }
    mergeSort(tmp, 0, n - 1);
    int u_size = unique(tmp, n, s);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", binary_search(s, u_size, arr[i]));
    }
    return 0;
}