#include <stdio.h>
#define ll long long int
// input n -> input a[0]~a[n] -> merge -> input m -> input nums -> for bfind
ll n,m;
void mergeSort(ll p, ll r,ll num[]);
void merge(ll p,ll q ,ll r,ll num[]);
int main(void){
    ll num[100001];
    ll test_num[100001];
    ll result[100001]={0};
    scanf("%lld",&n);
    for(ll i=0;i<n;i++){
        scanf("%lld",&num[i]);
    }
    mergeSort(0,n-1,num);
    scanf("%lld",&m);
    for(ll i=0;i<m;i++){
        scanf("%lld",&test_num[i]);
    }
    for(ll i=0;i<m;i++){
        int ri=n-1;
        int le=0;
        while(le<=ri){
            ll mid=(ri+le)/2;
            if(num[mid]==test_num[i]){
                result[i]=1;
                break;
            }
            else if(num[mid]>test_num[i]){
                result[i]=0;
                ri=mid-1;
            }
            else if(num[mid]<test_num[i]){
                result[i]=0;
                le=mid+1;
            }
        }
    }
    for(ll i=0;i<m;i++){
        printf("%lld\n",result[i]);
    }
    return 0;
}
void mergeSort(ll p, ll r,ll num[]) {
    ll q;
    if(p<r) {
        q = (p+r)/2;
        mergeSort(p , q, num);
        mergeSort(q+1, r, num);
        merge(p, q, r, num);
    }
}
void merge(ll p, ll q, ll r,ll num[]) {
    ll i = p, j = q+1, k = p;
    ll tmp[100001]; // 새 배열
    while(i<=q && j<=r) {
        if(num[i] <= num[j]) tmp[k++] = num[i++];
        else tmp[k++] = num[j++];
    }
    while(i<=q) tmp[k++] = num[i++];
    while(j<=r) tmp[k++] = num[j++];
    for(ll a = p; a<=r; a++) num[a] = tmp[a];
}
