#include<iostream>
#include<vector>
 
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<vector<int>> grafo(N+1);
    grafo[1].push_back(2);
    grafo[2].push_back(3);
    grafo[2].push_back(4);
    grafo[3].push_back(4);
    grafo[4].push_back(1);
    for(int i=1;i<grafo.size();i++){
        cout<<"Nodo "<<i<<": ";
        for(int j=0;j<grafo[i].size();j++){
        cout<<grafo[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}

// Nodo 1: 2
// Nodo 2: 3 4
// Nodo 3: 4
// Nodo 4: 1