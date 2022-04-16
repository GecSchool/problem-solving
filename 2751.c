#include <stdio.h>
int n;
void merge(int num[], int p, int s, int r) {
    int i = p, j = s+1, k = p;
    int tmp[n+1]; 
    while(i<=s && j<=r) {
        if(num[i] <= num[j]) tmp[k++] = num[i++];
        else tmp[k++] = num[j++];
    }
    while(i<=s) tmp[k++] = num[i++];
    while(j<=r) tmp[k++] = num[j++];
    for(int a = p; a<=r; a++) num[a] = tmp[a];
}


void mergesort(int num[], int p, int r) { //정렬하고 싶은 배열,시작점,끝점
    int s;
    if(p<r) {
        s = (p+r)/2;
        mergesort(num, p , s);
        mergesort(num, s+1, r);
        merge(num, p, s, r);
    }
}
int main(void){
    scanf("%d",&n);
    int num[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    mergesort(num,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d\n",num[i]);
    }
    return 0;
}
