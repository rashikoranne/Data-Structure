#include <iostream>
#include <vector>

using namespace std;

void sortVector(vector<int> vec){

    for (int first_num = 0; first_num < vec.size()-1; first_num++)
    {
        for (int second_num = first_num+1; second_num < vec.size() ; second_num++)
        {
            if (vec[first_num] > vec[second_num])
            {
                int temp = vec[second_num];
                vec[second_num] = vec[first_num];
                vec[first_num] = temp;
            }

        }
        
}
for (auto data : vec)
{
    cout<<data<<", ";
}

}

int main(){

    vector<int> myVector = {20,12,3,2,21,2,1};
    sortVector(myVector);

    return 0;
}