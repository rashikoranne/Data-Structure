#include <stdio.h>
#include <string.h>

int main(){
    char str[5];
    int t;
    scanf("%s %d",str,&t);
    while(t--){
    char str1[5];   
    scanf("%s",str1);
    int i,j;
    int count=0;
    for(i=0;i<strlen(str1);i++){
        for(j=0;j<strlen(str1);j++){
            if (str1[j]==str[i])
            {
                count++;
                break;
            }
        }
    }
    if (count==strlen(str))
    {
        printf("YES");
    }else{
        printf("NO");
    }

}
    return 0;
}