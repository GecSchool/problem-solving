#include <stdio.h>
#define size 100000
void mergeSort(int data[], int p, int r);
void merge(int data[], int p, int q, int r);
int main(){
    int n,t;
    int arr[size];
    scanf("%d%d",&n,&t);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    for(int i=0;i<t;i++){
        int tmp[size];
        int i,j,k;
        scanf("%d%d%d",&i,&j,&k);
        for(int s=0;s<=j-i;s++) tmp[s] = arr[i+s-1]; 
        mergeSort(tmp,0,j-i);
        printf("%d\n",tmp[k-1]);
    }   
    return 0;
}

void mergeSort(int data[], int p, int r) { //정렬하고 싶은 배열,시작점,끝점
    int q;
    if(p<r) {
        q = (p+r)/2;
        mergeSort(data, p , q);
        mergeSort(data, q+1, r);
        merge(data, p, q, r);
    }
}
void merge(int data[], int p, int q, int r) {
    int i = p, j = q+1, k = p;
    int tmp[size]; // 새 배열
    while(i<=q && j<=r) {
        if(data[i] <= data[j]) tmp[k++] = data[i++];
        else tmp[k++] = data[j++];
    }
    while(i<=q) tmp[k++] = data[i++];
    while(j<=r) tmp[k++] = data[j++];
    for(int a = p; a<=r; a++) data[a] = tmp[a];
}