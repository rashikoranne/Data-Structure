#include <iostream>

using namespace std;


int factorial(int n){
    if (n==1)
    {
        return n;
    }
    return factorial(n-1) * n;
}

int main(){

    int num = factorial(5);
    cout<<num<<endl;
    return 0;
}

