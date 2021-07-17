#include <iostream>

using namespace std;

struct Node {
        int value;
        Node *left;
        Node *right;
        Node *parent;
        Node *currentNode;


        Node(){
            left = nullptr;
            right = nullptr;
            parent = nullptr;
            currentNode = nullptr;
        }

    //--------------------------------IMPLEMENTATION OF INSERT FUNCTION-----------------------------------------
        void insert(int value) {
            if (parent == nullptr)
            {
                Node *newNode = new Node();
                newNode->value = value;
                newNode->left = nullptr;
                newNode->right = nullptr;
                parent = newNode;
                
                cout<<"Adding first Element"<<endl;
            } else {    
                Node *temp = parent;
                while (temp->left != nullptr || temp->right != nullptr)
                {
                    if (value > temp->value)
                    {   
                        if(parent->right == nullptr){
                            break;
                        }
                            temp = temp->right;
                            cout<<"Going right"<<endl;                        
                    } else if(value < temp->value){
                            if (parent->left == nullptr)
                            {
                                break;
                            }
                            temp = temp->left;
                            cout<<"Going left"<<endl;
                    }
                    
                }
                Node *newNode = new Node();
                newNode->value = value;
                newNode->left = nullptr;
                newNode->right = nullptr;

                if(value > temp->value){
                    temp->right = newNode;
                    cout<<"Adding element to the right"<<endl;
                }else if(value < temp->value){
                    temp->left = newNode;
                    cout<<"Adding element to the left"<<endl;
                }
            }
            
        }
        //------------------------------END OF INSERT FUNCTION---------------------------------------------------

        //------------------------------START OF LOOKUP FUNCTION-------------------------------------------------
        void lookup(int value){
            Node *temp = parent;
            
             while (temp->left != nullptr || temp->right != nullptr)
                {
                    if (value > temp->value)
                    {   
                        if(parent->right == nullptr){
                            cout<<"It looks like there aren't many great matches for your search";
                            break;
                        }
                            temp = temp->right;
                            if (temp->value == value)
                            {
                                cout<<"Found! "<<value<<endl;
                                break;
                            } else {
                                cout<<"It looks like there aren't many great matches for your search "<<endl;
                            }
                            
                            cout<<"Going right"<<endl;                        
                    } else if(value < temp->value){
                            if (parent->left == nullptr)
                            {
                                break;
                            }
                            temp = temp->left;
                             if (temp->value == value)
                            {
                                cout<<"Found! "<<value<<endl;
                                break;
                            } else {
                                cout<<"It looks like there aren't many great matches for your search"<<endl;
                            }
                            cout<<"Going left"<<endl;
                    }
        }
        }
        //-------------------------------------END OF LOOKUP FUNCTION------------------------------------


};

int main() {

    Node node1;
    node1.insert(35);
    node1.insert(4);
    node1.insert(40);
    node1.insert(72);
    node1.insert(18);
    node1.insert(80);
    node1.lookup(80);
    return 0;
}
