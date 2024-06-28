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
    int N,Q;
    cin>>N>>Q;
    vector<pair<int,int>> posiciones;
    posiciones.push_back({0,1});
    int cambios=0;
    for(int i=0;i<Q;i++){
        int value;
        cin>>value;
        if(value==1){
            cambios++;
            char direccion;
            cin>>direccion;
            int tamanho = posiciones.size();
            //cout<<posiciones[tamanho-1].first<<' '<<posiciones[tamanho-1].second<<'\n';
            if(direccion=='U') posiciones.push_back({posiciones[tamanho-1].first+1,posiciones[tamanho-1].second});
            else if(direccion=='D') posiciones.push_back({posiciones[tamanho-1].first-1,posiciones[tamanho-1].second});
            else if(direccion == 'R') posiciones.push_back({posiciones[tamanho-1].first,posiciones[tamanho-1].second+1});
            else posiciones.push_back({posiciones[tamanho-1].first,posiciones[tamanho-1].second-1});
        }else{
            int punto;
            cin>>punto;
            int tamanho = posiciones.size();
            if(posiciones.size()<punto) cout<<punto-cambios<<' '<<0<<'\n';
            else{
                cout<<posiciones[tamanho-punto].second<<' '<<posiciones[tamanho-punto].first<<'\n';
            }
        }
    }
    return 0;
}