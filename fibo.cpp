#include <iostream>
 
 using namespace std;

int fib(int n)
{
    if (n <= 1) {
        return n;
    }
 
    return fib(n - 1) + fib(n - 2);
}
 
int main()
{
    int n = 7;
 
    cout<<"nth Fibonacci number is : "<< fib(n);
 
    return 0;
}


