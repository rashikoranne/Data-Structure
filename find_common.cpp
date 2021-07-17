#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int n,m;
    scanf("%d %d",&n,&m);
    int arr1[n],arr2[m];
    for (int r = 0; r < n; r++)
    {
        scanf("%d", &arr1[r]);
    }

     for (int s = 0; s < m; s++)
    {
        scanf("%d", &arr2[s]);
    }
    
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr2[j]==arr1[i])
            {
                cout<<arr2[j];
            }
            
        }
        
    }
    

    return 0;
}