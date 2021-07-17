#include <stdio.h>
#include <string.h>
int main()
{
    int t,i=0;
    scanf("%d", &t);
    while(i<t){
        int arr1[26],arr2[26],j,k,l,counter=0,length;
        char c[26];
        scanf("%s",c);
        for (j=0;j<length;j++) {
            arr1[j] = c[j];
        }
        for(k=length/2;k<length;k++){
            arr2[counter]=c[k];
            counter++;
        }
        int total1=0,total2=0;
        for(l=0;l<length/2;l++){
            total1 = total1 + arr1[l];
            total2 = total2 + arr2[l];
        }
        if(total1==total2){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        i++;
    }
	return 0;
}