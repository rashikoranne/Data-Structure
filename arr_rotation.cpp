#include <stdio.h>
int main(){
    int t,n,m,i;
    scanf("%d",&t);
    while (t--)
    {
    scanf("%d %d",&n,&m);
    int a[m],j;
    for(i=0;i<m;i++){      
        scanf("%d", &a[i]);
    }
    int count = 0;
    for(j = 0;j<m;j++){
        count+= a[j]; 
        if(j%2==0 && count>=n){
            printf("2");
            break;
        }else if(j%2!=0 && count>=n){
            printf("1");
            break;
        }
    }
    }
    return 0;
}
