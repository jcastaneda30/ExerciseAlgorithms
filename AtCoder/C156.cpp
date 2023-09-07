#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> distancias(N,0);
    for(int i=0;i<N;i++) cin>>distancias[i];
    int maximo = *max_element(distancias.begin(),distancias.end());
    int minimo=99999999;
    for(int j=1;j<maximo+1;j++){
        int provicional=0;
        for(int valor:distancias){
            provicional+=pow((valor-j),2);
        }
        minimo=min(minimo,provicional);
    }
    cout<<minimo<<endl;
}