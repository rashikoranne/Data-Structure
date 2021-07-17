#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n,b;
        scanf("%d", &n);
        int a[n],i,tot=0;

        for(i=0;i<n;i++){
            tot+=a[i];
        }
        if (tot>b)
        {
            printf("YES");
        }else{
            printf("NO");
        }
        
    }
}