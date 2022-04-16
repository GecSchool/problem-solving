#include <stdio.h>
#define size 100
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
// int check_cut(int loc[], int cut_max, int cut_num, int loc_num, int len)
// { // 자를 최대 길이 넣어줬을 때 가능한가 체크 하며 가장 가장 앞에 자르는 곳 찾아 리턴
//     // 불가능한 경우
//     // 1. 자르는 횟수가 부족한 경우
//     // 2. 다 자르고 남은 길이가 cut_max보다 클때
//     // 3. 길이 차이 하나가 cut_maX보다 클 때
//     int dif_len = 0;
//     int tmp = len - loc[loc_num];
//     for (int i = loc_num; i > 0; i--)
//     {
//         if (tmp > cut_max)
//         {
//             return -1;
//         }
//         else
//         {
//             dif_len += tmp;
//         }
//         if (dif_len > cut_max)
//         {
//             cut_num -= 1;
//             dif_len = tmp;
//         }
//         if (cut_num == 0)
//         {
//             if (loc[i] > cut_max)
//                 return -1;
//             else
//                 return loc[i];
//         }
//         tmp = loc[i] - loc[i - 1];
//     }
//     return loc[1];
// }
int main()
{
    int len, loc_num, cut_num;
    int loc[size] = {
        0,
    };
    scanf("%d %d %d", &len, &loc_num, &cut_num);
    cut_num = (cut_num >= loc_num) ? loc_num : cut_num;
    for (int i = 1; i <= loc_num; i++)
    {
        scanf("%d", &loc[i]);
    }
    mergeSort(loc, 1, loc_num);
    int right = len;
    int left = 1;
    int first_cut;
    int max_len;
    while (right >= left)
    {
        int mid = (right + left) / 2;
        int tmp = check_cut(loc, mid, cut_num, loc_num, len);
        if (tmp != -1)
        {
            first_cut = tmp;
            max_len = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    printf("%d %d\n", max_len, first_cut);
    return 0;
}