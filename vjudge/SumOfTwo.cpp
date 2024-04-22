#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    vector<int> values(n);
    map<int,vector<int>> posiciones;
    for(int i=0;i<n;i++) {
        cin>>values[i];
        posiciones[values[i]].push_back(i);
    }
    for(int i=0;i<n;i++){
        int buscar = x-values[i];
        if(!posiciones[buscar].empty()){
            for(int j=0;j<(int)posiciones[buscar].size();j++){
                if(posiciones[buscar][j]!=i){
                    cout<<i+1<<" "<<posiciones[buscar][j]+1<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}