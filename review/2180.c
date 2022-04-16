#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    int b[n+1];
    int multi[n+1]={0};
    for(int i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
}// a/b vs c/d 중 큰거 먼저 계산 해야 한다(b가 영이라면?)
//  a,b 입력 받고 -> 정렬 후 계산 -> 나누기 계산