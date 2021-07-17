// #include <iostream>
// #include <cstring>

// using namespace std;

// int main(){

//     char str1[] = "gbbggbb";
    
//     int length = strlen(str1),count = 0;

//     for (int i = 0; i < length; i++)
//     {
//         if (str1[i]=='b' && str1[i+1]=='g')
//         {
//             count++;
//             i=i+1;
            
//         }else if(str1[i]=='g' && str1[i+1]=='b'){
//             count++;
//             i=i+1;
//         }
//     }
//     cout<<count;
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    char students[100001];
    scanf("%s",students);
    int count=0,i,t;
    
    
    for (i=0;i<strlen(students);i++) {
        
        if(students[i]=='b' && students[i+1]=='g'){
            count++;
            i+=1;
        }else if(students[i]=='g' && students[i+1]=='b'){
            count++;
            i+=1;
        }   

    }
    printf("%d",count);
    }

	return 0;
}