#include <iostream>

using namespace std;

int main() {

    int arr[] = {6,5,3,1,8};

    int temp{0};
    int ptr;


    int length = sizeof(arr)/sizeof(int);

    
    for (size_t i = 1; i < length; i++)
    {
        
        temp = arr[i];
        ptr = i-1;

        while (temp < arr[ptr] && ptr != -1)
        {
            arr[ptr+1] = arr[ptr];
            ptr--;
        }
        arr[ptr + 1] = temp;

    }
    
    for (auto data : arr)
    {
        cout<<data;
    }
    
    

    return 0;
}