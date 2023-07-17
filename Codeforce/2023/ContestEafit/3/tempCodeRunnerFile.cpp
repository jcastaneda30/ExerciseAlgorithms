#include<iostream>

using namespace std;

int main(){
    char matriz[8][8];
    int a;
    char color;
    cin>>a;
    int waos;
    for(int i=0;i<a;i++){
        waos=0;
        for(int j=0;j<8;j++){
            cin>>matriz[j];
        }
        for(int filas=0;filas<8;filas++){
            for(int columnas=0;columnas<8;columnas++){
                if(matriz[filas][columnas]=='R') waos++;
            }
            if(waos==8) break;
            else waos = 0 ;
        }
        if(waos==8) cout<<'R'<<endl;
        else cout<<'B'<<endl;
    }
    return 0;
}