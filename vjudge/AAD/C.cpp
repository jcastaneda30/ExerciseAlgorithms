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
    int N,M;
    cin>>N>>M;
    vector<pair<int,int>> problemasOrdenados;
    vector<int> problemas;
    for(int i=0;i<M;i++){
        int a;
        cin>>a;
        problemasOrdenados.push_back(make_pair(a,i));
        problemas.push_back(a);
    }
    sort(problemasOrdenados.begin(),problemasOrdenados.end());
    vector<string> jugadores;
    vector<int> puntuacion;
    int maxPoints=-1;
    for(int i=0;i<N;i++){
        string cadena;
        cin>>cadena;
        jugadores.push_back(cadena);
        int point = 0;
        for(int j=0;j<M;j++){
            if(cadena[j]=='o') point+=problemas[j];
        }
        point+=i+1;
        puntuacion.push_back(point);
        maxPoints = max(maxPoints,point);
    }
    for(int i=0;i<N;i++){
        int problemas=0;
        if(puntuacion[i]<maxPoints){
            int actualPuntuacion=puntuacion[i];
            for(int j=M-1;j>=0;j--){
                if(jugadores[i][problemasOrdenados[j].second]=='x'){
                    problemas++;
                    actualPuntuacion+=problemasOrdenados[j].first;
                    if(actualPuntuacion>maxPoints){
                        break;
                    }
                }
            }
        }
        cout<<problemas<<endl;
    }
    return 0;
}