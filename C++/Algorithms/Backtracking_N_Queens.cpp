#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> result; //Un vector de vectores 
//donde guardaremos el resultado

//Esta funcion tiene como fin determinar si es seguro
//Poner la reina en un lugar o no
bool issafe(vector<vector<int>> board,int row,int column){
    int i,j;
    int n=board.size();
    for(i=0;i<column;i++){
        if(board[row][i]){//Esta comprobacion es para determinar
        //si hay alguna otra reina en la fila
            return false;
        }
    }
    for(i=row,j=column;j>=0 && i>=0;i--,j--){//Con esta vamos a determinar la diagonal izquierda superior
        if(board[i][j]){
            return false;
        }
    }
    for(i=row,j=column;j>=0 && i<n;i++,j--){//Con esta vamos a determinar la diagonal izquierda superior
        if(board[i][j]){
            return false;
        }
    }
    return true;
}
bool solution(vector<vector<int>> &board,int column){
    int n=board.size();
    if(column==n){
        vector<int> v;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    v.push_back(j+1);
                }
            }
        }
        result.push_back(v);
        return true;
    }
    bool res=false;
    for(int i=0;i<n;i++){
        if(issafe(board,i,column)){
            board[i][column]=1;
            res=solution(board,column+1)||res;
            board[i][column]=0;

        }
    }
}
int main(){

    return 0;
}