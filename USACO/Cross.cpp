#include<iostream>
#include<vector>
#include<string>
using namespace std;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}


int main(){
    //setIO("blist");
    string vacas;
    cin>>vacas;
    set<string> 
    for(int i=0;i<vacas.size();i++){
        string cadena;
        for(int j=i;j<vacas.size() && j<i+2;j++){
            cadena+=vacas[j];
        }
        if(cadena.size()<2) break;


    }
    return 0;
}