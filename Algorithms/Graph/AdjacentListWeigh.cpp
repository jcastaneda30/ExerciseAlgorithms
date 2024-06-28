#include<iostream>
#include<vector>
 
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<vector<pair<int,int>>> grafo(N+1);
    grafo[1].push_back({2,5});
    grafo[2].push_back({3,7});
    grafo[2].push_back({4,6});
    grafo[3].push_back({4,5});
    grafo[4].push_back({1,2});
    return 0;
}