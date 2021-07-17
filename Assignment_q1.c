#include <stdio.h>
#include<string.h>
int main() 
    {
        int t;
        scanf("%d",&t);
        while(t--)
            {
                char s[1000000];
                scanf("%s",s);
                int l=strlen(s);
                int c=0;
                for(int i=0;i<l;i++)
                    {
                       
                        if(s[i]=='1')
                        c++;
                    }
                if(c%2==0)
                    {
                        printf("LOSE\n");
                    }
                else
                    {
                        printf("WIN\n");
                    }
            }
        return 0;
    }