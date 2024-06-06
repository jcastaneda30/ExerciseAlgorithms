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
    int n,k,m;
    cin>>n>>k>>m;
    vector<string> idioma(n);
    vector<int> costos(n);
    map<string,int> minimunPricePositions;
    for(string &t:idioma) cin>>t;
    for(int &t:costos) cin>>t;
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        vector<int> provitionalPosicions;
        int minimo = INT_MAX;
        for(int j=0;j<x;j++){
            int positionWord;
            cin>>positionWord;
            provitionalPosicions.push_back(positionWord);
            minimo = min(minimo,costos[positionWord-1]);
        }
        for(int j=0;j<x;j++){
            minimunPricePositions[idioma[provitionalPosicions[j]-1]]=minimo;
        }
    }
    long long coutn=0;
    for(int i=0;i<m;i++){
        string value;
        cin>>value;
        coutn+=minimunPricePositions[value];
    }
    cout<<coutn<<'\n';
    return 0;
}