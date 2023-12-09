#include<iostream>
#include<algorithm>
#include<deque>
#include<vector>
#include<cmath>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    for(int i=0;i<t;i++){
        char letra;
        int tamamo;
        string cadena;
        cin>>tamamo>>letra;
        cin>>cadena;
        if(letra=='g'){
            cout<<"0\n";
            continue;
        }
        cadena+=cadena;
        int respuesta=-999999;
        vector<int> pG;
        for(int i=0;i<cadena.size();i++){
            if(cadena[i]=='g'){
                pG.push_back(i);
            }
        }
 
        for(int i=0;i<cadena.size();i++){
            if(pG[pG.size() - 1]<i) break;
            if(cadena[i]==letra){
                int Posicion=*upper_bound(pG.begin(),pG.end(),i);
                respuesta=max(respuesta,Posicion-i);
            }
        }
        cout<<respuesta<<"\n";
    }
}