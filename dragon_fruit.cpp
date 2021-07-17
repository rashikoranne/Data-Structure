#include<stdio.h>

int main(){
    int t,n,m,k,d;
    scanf("%d", &t);
    while(t--){
    scanf("%d %d %d",&n,&m,&k);
    if (n>m)
    {
        d=n-m;
        d-=k;
    } else if(n<m){
        d=m-n;
        d-=k;
    }
    if(d<0){
        d=0;
    }
    printf("%d\n", d);
}
    return 0;
}