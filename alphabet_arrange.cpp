#include<iostream>

using namespace std;
int main()
{
        string names[10];

        cout<<"Enter at least 10 names"<<endl;

        for (size_t i = 0; i < 10; i++)
        {    
            cin>>names[i];
            if (names[i] == "done") //If the user types done then read the already input data.
            {
                names[i] = "\0";
                break;
            }
            
        }   
        
        int length = sizeof(names)/sizeof(string);

        for (size_t i = 0; i < length; i++)
        { 
                string *str1 = names+i;            
                string init1 = *str1;

            for (size_t j = i+1; j < length; j++)
            {
                string *str2 = names+j;
                string init2 = *str2;
                
                if (init1[0] > init2[0])
                {
                    string temp = *str1;
                    *str1 = *str2;
                    *str2 = temp;
                }
                 
            }    
        } 

        for (auto data : names)
        {
            cout<<data<<" ";
        }
         
        return 0;
}