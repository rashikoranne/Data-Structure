#include <stdio.h>

int main(){
    int bro1,bro2,bro3;
    scanf("%d %d %d", &bro1,&bro2,&bro3);
    if(bro1>bro2 && bro1>bro3){
        printf("%d",bro1);
    }else if(bro2>bro1 && bro2>bro3){
        printf("%d",bro2);
    }else{
        printf("%d", bro3);
    }

    return 0;
}