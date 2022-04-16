#include <stdio.h>
#define size 100
int main(){
    int com_num;
    int contact_num;
    int virus[size] ={0,}; // if 0 false true 
    int contact[size][size] = {0,};
    int inode[size] = {0,};
    scanf("%d",&com_num);
    scanf("%d",&contact_num);
    for(int i = 0;i < contact_num;i++){
        int tmp;
        scanf("%d",&tmp);
        scanf("%d",&contact[tmp][inode[tmp]]);
        inode[tmp] += 1;
    }
    for(int i = 0;i < inode[1];i++){
        
    }
}