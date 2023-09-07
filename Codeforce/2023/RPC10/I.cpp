#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N,Max=-1;
    cin>>N;
    map<int,int> saltos;
    for(int i=0;i<N;i++){
        int xi; cin>>xi;
        Max=max(xi,Max);
        saltos[xi]=xi;
    }
    map<int,bool> vacios;
    Max=Max+2;
    for(int i=0;i<Max;i++){
        if(!saltos[i]){
            vacios[i]=1;
        }
    }
    int Q;
    cin>>Q;
    for(int i=0;i<Q;i++){
        int rana;
        cin>>rana;
        auto it = *vacios.upper_bound(saltos[rana]);
        auto end= *vacios.rbegin();
        if(it.first==end.first){
            vacios[it.first+1]=1;
        }
        saltos[rana]=it.first;
        vacios[saltos[rana]]=1;
        vacios.erase(it.first);
        cout<<it.first<<"\n";
    }
    return 0;
}