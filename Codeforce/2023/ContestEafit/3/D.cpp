#include<iostream>

using namespace std;

int main(){
    char matriz[8][8];
    int a;
    char color;
    cin>>a;
    int waos;
    while(a--){
        waos=0;
        for(int j=0;j<8;j++){
            for(int i=0;i<8;i++){
                cin>>matriz[j][i];
            };
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