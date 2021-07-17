#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
 
int num;
cin>>num;
string val="";
int rem{0};


while(num>=2){
    rem = num%2;
    val = val + to_string(rem);
    num=num/2;
}
    rem = num%2;
    val = val+to_string(rem);
    
    reverse(val.begin(), val.end());
    cout<<val;
    return 0;
}