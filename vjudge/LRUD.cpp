#include<iostream>
#include<string>
#include<set>
//https://vjudge.net/contest/598461#problem/C
using namespace std;


int main(){
    int tamanho;
    cin>>tamanho;
    string palabra;
    cin>>palabra;
    set<pair<int,int>> coordenadas;
    pair<int,int> actually={0,0};
    coordenadas.insert(actually);
    for(int i=0;i<palabra.size();i++){
        if(palabra[i]=='R') actually.first+=1;
        if(palabra[i]=='L') actually.first-=1;
        if(palabra[i]=='U') actually.second+=1;
        if(palabra[i]=='D') actually.second-=1;
        if(coordenadas.count(actually)){

            cout<<"Yes"<<endl;
            return 0 ;
        }
        coordenadas.insert(actually);
    }
    cout<<"No"<<endl;
    return 0;
}