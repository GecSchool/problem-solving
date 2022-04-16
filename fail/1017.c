#include <stdio.h>
#include <string.h>
int try_get[26]={0};
int number[51][51];
int result[26]={0};
int ex_num[51]={0};
int parent[26]={0};
int t;
int check(int);
int dfs(int);
void bubble(int);
int main(void){
    int n,s=1,q=0,x=0,w=0;
    scanf("%d",&t);
    scanf("%d",&n);
    number[0][0]=n;
    if(n%2==0)  {//첫번째 숫자 짝
        for(int i=1;i<t;i++){
            scanf("%d",&n);
            if(n%2==0){
                number[s++][0]=n;
            }
            else{
                ex_num[q++]=n;
            }
        }
        if(s!=q){
            printf("-1\n");
            return 0;
        }
        for(int i=0;i<s;i++){
            for(int a=0;a<q;a++){
                if(check(number[i][0]+ex_num[a])){
                    number[i][a+1]=1;
                }
                else{
                    number[i][a+1]=0;
                }
            }
        }//숫자 넣어주기
        
        for(int i=0;i<q;i++){
            if(number[0][i+1]==1){
                try_get[i]=1;
                for(int j=1;j<n/2;j++){
                    if(dfs(j)!=1){
                        w++;
                        break;
                    }
                }
                if(w==0){
                    result[x++]=ex_num[i];
                }
            }
        }
        for(int i=0;i<q;i++){
            try_get[i]=0;
        }
    }       
    else{//첫번째 숫자 홀
        for(int i=1;i<t;i++){
            scanf("%d",&n);
            if(n%2!=0){
                number[s++][0]=n;
            }
            else{
                ex_num[q++]=n;
            }
        }
        if(s!=q){
            printf("-1\n");
            return 0;
        }
        for(int i=0;i<s;i++){
            for(int a=0;a<q;a++){
                if(check(number[i][0]+ex_num[a])){
                    number[i][a+1]=1;
                }
                else{
                    number[i][a+1]=0;
                }
            }
        }//숫자 넣어주기
        
        for(int i=0;i<q;i++){
            if(number[0][i+1]==1){
                try_get[i]=1;
                for(int j=1;j<n/2;j++){
                    if(dfs(j)!=1){
                        w++;
                        break;
                    }
                }
                if(w==0){
                    result[x++]=ex_num[i];
                }
            }
            w=0;
            for(int i=0;i<q;i++){
            try_get[i]=0;
            }
            for(int i=0;i<q-1;i++){
                parent[i]=0;
            }
        }
    }
    bubble(x);
    for(int i=0;i<x;i++){
        printf("%d ",result[i]);
    }
    return 0;
}
int check(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int dfs(int x){
    //number[i][0]에 있는수 모두 체크
    for(int i=0;i<t/2;i++){
        if(number[x][i+1]==1){
            int y=i;
            if(try_get[y]==1) continue;    
            else
                try_get[y] = 1;
            if(parent[y]==0||dfs(parent[y])){
                parent[y]=x;
                return 1;
            }
        }
    }
    return 0;
}
void bubble(int x){
    int tmp=0;
    for(int i=0;i<x;i++){
        for(int j=0;j<x-1;j++){
            if(result[j]>result[j+1]){
                tmp=result[j+1];
                result[j+1]=result[j];
                result[j]=tmp;
            }
        }
    }
    return ;
}