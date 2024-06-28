#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    int N,Q;
    cin>>N>>Q;
    map<int,vector<int>> valores;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        valores[a].push_back(i+1);
    }
    for(int j=0;j<Q;j++){
        int x,k;
        cin>>x>>k;
        auto it = valores.find(x);
        if(it!=valores.end()){
            int tamanho=valores[x].size();
            if(tamanho>=k){
                cout<<valores[x][k-1]<<endl;
            }else cout<<"-1"<<endl;
        }else cout<<"-1"<<endl;
    }
    return 0;
}