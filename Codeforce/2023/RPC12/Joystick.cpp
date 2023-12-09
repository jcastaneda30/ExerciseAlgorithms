#include<iostream>
#include<string>

using namespace std;

int main(){
    int tamano;
    cin>>tamano;
    string nombreAnterior;
    cin>>nombreAnterior;
    string nombreNuevo;
    cin>>nombreNuevo;
    int tiempo=0;
    for(int i=0;i<tamano;i++){
        int aciiAnt = static_cast<int>(nombreAnterior[i]);
        int aciiNew = static_cast<int>(nombreNuevo[i]);
        int tardado = min(abs(aciiAnt-aciiNew),min(abs(static_cast<int>('Z')-aciiAnt)+(aciiNew-64),abs(static_cast<int>('A')-aciiAnt)+abs(aciiNew-91)));
        tiempo+=abs(tardado);
    }
    cout<<tiempo<<endl;
}