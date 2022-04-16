#include <stdio.h>
#define size 100000
void mergeSort(int data[], int p, int r);
void merge(int data[], int p, int q, int r);
int main(void){
    int n;
    int x[size],y[size];
    for(int i=0;i<n;i++){
        scanf("%d %d",&x[i],&y[i]);
    }

}

void mergeSort(int data[], int p, int r){ //정렬하고 싶은 배열,시작점,끝점
    int q;
    if(p<r) {
        q = (p+r)/2;
        mergeSort(data, p , q);
        mergeSort(data, q+1, r);
        merge(data, p, q, r);
        return;
    }
}
void merge(int data[], int p, int q, int r) {
    int i = p, j = q+1, k = p;
    int tmp[8]; // 새 배열
    while(i<=q && j<=r) {
        if(data[i] <= data[j]) tmp[k++] = data[i++];
        else tmp[k++] = data[j++];
    }
    while(i<=q) tmp[k++] = data[i++];
    while(j<=r) tmp[k++] = data[j++];
    for(int a = p; a<=r; a++) data[a] = tmp[a];
    return;
}
