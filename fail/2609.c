#include <stdio.h>
int dirtn(int,int su[]);
int check_same(int nn[],int mm[],int,int,int result[1000]);
int main(void){
    int n,m,n_len,m_len,result_len,min=1,max=1;
    int nn[1000]={0};
    int mm[1000]={0};
    int result[1000]={0};
    scanf("%d %d",&n,&m);
        n_len=dirtn(n,nn[1000]);
        m_len=dirtn(m,mm[1000]);
    result_len=check_same(nn,mm,n_len,m_len,result);
    for(int i=0;i<result_len;i++){
        min=
    }
    return 0;
}
int dirtn(int n,int su[1000]){
    int s=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            su[s++]=i;
        }
    }
    return s-1;
}

check_same(int nn[1000],int mm[1000],int n_len,int m_len,int result[1000]){
    int s=0;
    for(int i=0;i<n_len;i++){
        for(int a=0;a<m_len;a++{
            if(nn[i]<mm[a]){
                break;
            }
            if(nn[i]==mm[a]){
                result[s++]=nn[i];
                break;
            }
        }
    }
    return s-1;
}