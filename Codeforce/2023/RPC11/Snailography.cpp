#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int N;
    string encrypt;
    cin>>N;
    cin>>encrypt;
    vector<vector<string>> matriz(N,(vector<string>(N,"#")));
    vector<vector<bool>> matrizVisitados(N,(vector<bool>(N,false)));
    int centro=N/2;
    int hashCounter=N*N-encrypt.size();
    int letra=encrypt.size()-1;
    for(int etapa=0;etapa<=centro;etapa++){
        if(etapa==centro){
            matriz[centro][centro]=encrypt[letra];
            break;
        }
        for(int row=etapa;row<N-etapa;row++){//Descenso vertical
            if(hashCounter>0){
                hashCounter--;
                continue;
            }
            
            matriz[row][etapa]=encrypt[letra];
            letra--;
        }

        for(int col=etapa+1;col<N-etapa;col++){//Derecha
            if(hashCounter>0){
                hashCounter--;
                continue;
            }
            matriz[N-1-etapa][col]=encrypt[letra];
            letra--;
        }

        for(int row=N-2-etapa;row>=etapa;row--){//Ascenso vertical
            if(hashCounter>0){
                hashCounter--;
                continue;
            }
            matriz[row][N-1-etapa]=encrypt[letra];
            letra--;
        }
        for(int col=N-2-etapa;col>=etapa+1;col--){//Izquierda
            if(hashCounter>0){
                hashCounter--;
                continue;
            }
            matriz[etapa][col]=encrypt[letra];
            letra--;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if(matriz[i][j]=="#") continue;
            cout << matriz[i][j];
        }
        
    }
    cout << endl; // Salto de línea para separar las filas
}