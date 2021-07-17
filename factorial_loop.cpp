#include <iostream>

using namespace std;

int main(){
    while (true)
    {
 
    long long int num, factorial;
    cout<<"Enter a number to get factorial : ";
    cin>>num;

    factorial = num;

    for (num; num > 1 ; num--)
    {
         factorial = factorial * (num-1);
    
        
    }
    cout<<"Factorial is: "<<factorial<<endl;
            
    }
    
}