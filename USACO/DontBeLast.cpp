#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>
using namespace std;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    unordered_map<string,int> vacas={{"Bessie",0},{"Elsie",0},{"Daisy",0},{"Gertie",0},{"Annabelle",0},{"Maggie",0},{"Henrietta",0}};

    vector<pair<int,string>> elementos;
    setIO("notlast");
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        string nombre;
        int units;
        cin>>nombre>>units;
        vacas[nombre]+=units;

    }
    for(auto &valores:vacas){
        elementos.push_back(make_pair(valores.second,valores.first));
    }
    sort(elementos.begin(),elementos.end());
    int minimo=elementos[0].first;
    string ganadora;
    int minimo2=-1;
    bool indicador = true;
    for(int i=0;i<elementos.size();i++){
        if(elementos[i].first==minimo) continue;
        if(indicador){
            minimo2=elementos[i].first;
            indicador=false;
            ganadora=elementos[i].second;
            continue;
        }
        if(elementos[i].first==minimo2){
            indicador=true;
            break;
        }
    }
    if(indicador){
        cout<<"Tie"<<endl;
    }else{
        cout<<ganadora<<endl;
    }
    return 0;
}