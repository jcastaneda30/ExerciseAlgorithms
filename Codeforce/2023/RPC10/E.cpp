#include<iostream>
#include<set>
#include <climits>
#include <algorithm>

using namespace std;

int main(){
    int n,m, x,y;
    pair<int,int> punto;
    cin>>n;
    set<set<pair<int,int>>> conjuntoFiguras;
    for(int i=0;i<n;i++){
        cin>>m;
        set<pair<int,int>> figura;
        set<pair<int,int>> figuraModificada;
        for(int j=0;j<m;j++){
            cin>>x;cin>>y;
            pair<int,int> puntoFigura=make_pair(x,y);
            figura.insert(puntoFigura);
        }
        pair<int, int> puntoMinimo = *min_element(figura.begin(), figura.end());

        set<pair<int, int>> figuraTrasladada;

        for (const auto& punto : figura) {
            figuraTrasladada.insert(make_pair(punto.first - puntoMinimo.first, punto.second - puntoMinimo.second));
        }
        conjuntoFiguras.insert(figuraTrasladada);
    }
    cout<<conjuntoFiguras.size()<<"\n";
    return 0;
}