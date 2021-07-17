#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct Graph{

        vector<int> value;
        map<int, vector<int>> adjacentList;
        int numberOfNodes;

    Graph(){
        numberOfNodes = 0;
        //node1 = {};
    }

    void addVertex(int key){
        adjacentList.insert(make_pair(key,value));
        numberOfNodes++;
    }

    void connectEdge(int vertex1,int vertex2){
        auto first_it = adjacentList.find(vertex1);
        auto second_it = adjacentList.find(vertex2);

        if(first_it == adjacentList.end() || second_it == adjacentList.end() || vertex1 == vertex2) {
            cout<<"Invalid Vertices"<<endl;
        } else {
            vector<int> newVec;
            if (adjacentList.at(vertex1).empty())
            {   
                value = {};
                newVec = {};
                newVec = {vertex2};
                value = newVec;
                adjacentList.at(vertex1) = newVec;
                value = {};
                newVec = {};
                newVec = {vertex1};
                value = newVec;
                adjacentList.at(vertex2) = newVec; 
            }else{
                value = {};
                value = adjacentList.at(vertex1);
                value.push_back(vertex2);
                adjacentList.at(vertex1) = value;
                value = {};
                value = adjacentList.at(vertex2);
                value.push_back(vertex1);
                adjacentList.at(vertex2) = value;
            }
            
        }

    }

    void displayNode(){
           for (auto itr = adjacentList.begin(); itr != adjacentList.end(); itr++)
           {
               cout<<itr->first<<"------> ";

               auto secondItr = itr->second.begin();
               if (secondItr == itr->second.end())
               {
                   cout<<"Not connected to any node"<<endl;
               }
               for (secondItr; secondItr < itr->second.end(); secondItr++)
               {   
                 cout<<*secondItr<<" ";
               }
               cout<<endl;
               
           }


    }
};

int main(){
    Graph node;
    node.addVertex(0);
    node.addVertex(1);
    node.addVertex(2);
    node.connectEdge(1,0);
    node.connectEdge(1,2);
    node.connectEdge(0,2);
    node.displayNode();
    
    return 0;
}