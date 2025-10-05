#include<bits/stdc++.h>
using namespace std;


void print_graph(unordered_map<int, vector<int>> grapgh){

    for(auto it: grapgh){
        cout<<"Node:"<<it.first<<" , Neighboures : ";
        for(int node: it.second){
            cout<<node<<" ";
        }
        cout<<endl;
    }
}



int main(){
    vector<vector<int>>edgeList = {{1,2}, {2,3}, {3,4}, {4,2}, {4,1}};

    unordered_map<int, vector<int>>graph;

    for(int i=0;i<edgeList.size();i++){
        int a = edgeList[i][0], b= edgeList[i][1];
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    print_graph(graph);
}


