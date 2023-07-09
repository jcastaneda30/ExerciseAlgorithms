#include<iostream>
using namespace std;

int main(){
    
    const int tamano = 4;  // Tamaño de la matriz
    bool comprobante=true;
    int matriz[tamano][tamano] = {
        {1, 2, 3, 4},
        {2, 5, 6, 7},
        {3, 6, 8, 9},
        {4, 7, 9, 10}
    };
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        if(matriz[i][j]!=matriz[j][i]){
            comprobante=false;
        }
        }
    }
    if(comprobante){
        cout<<"Simetrica";
    }else{
        cout<<"No es simetrica";
    }
    
    return 0;
}