#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <iomanip> // Para std::setw
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<int> numeros(N, 0);
    vector<char> caracteres(N, '+');
    vector<pair<int,int>> posiciones(N,{-1,-1});
    map<long long, vector<long long>> valores;
    cin >> numeros[0];
    for (int i = 1; i < N; i++)
    {
        cin >> caracteres[i];
        cin >> numeros[i];
        numeros[i] = numeros[i]%2;
    }
    int inicio = 0;
    for(int i=0;i<N;i++){
        if(caracteres[i]=='*'){
            posiciones[i]={inicio,0};
            posiciones[inicio]={inicio,0};
        }else{
            inicio=i;
        }
    }    
    int fin=N-1;
    for(int i=N-1;i>=1;i--){
        if(caracteres[i]=='*'){
            posiciones[i]={posiciones[i].first,fin};
            posiciones[i-1]={posiciones[i].first,fin};
        }else{
            fin=i-1;
        }
    }    
    long long suma = 0;
    long long impar = 0, par = 0;
    for(int i=0;i<N;i++){
        if(posiciones[i].first!=-1){
            long long cantidadPar=0,cantidadImpar=0;
            for(int j=posiciones[i].first;j<=posiciones[i].second;j++){
                if(numeros[j]==0)cantidadPar++;
                if(numeros[j]==1)cantidadImpar++;
            }
            valores[posiciones[i].first]={cantidadPar,cantidadImpar, cantidadPar>0};
            if(cantidadPar==0) impar+=1;
            else par+=1;
            i=posiciones[i].second;
        }else{
            if(numeros[i]==0)par++;
            else impar++;
        }
    }
    cout<<"par: "<<par<<' '<<impar<<endl;
    if(impar==0) cout<<"even\n";
    else if(par==0) cout<<"odd\n";
    else if(impar%2==0){
        cout<<"even\n";
    } else cout<<"odd\n";
    for(int i=0;i<M;i++){
        int X,Y;
        cin>>X>>Y;
        if(posiciones[X-1].first!=-1){
            int cambio = valores[posiciones[X-1].first][0]>0;
            if(Y%2==0){
                if(valores[posiciones[X-1].first][1]>0)valores[posiciones[X-1].first][1]--;
                valores[posiciones[X-1].first][0]++;
                
            }else{
                if(valores[posiciones[X-1].first][0]>0)valores[posiciones[X-1].first][0]--;
                valores[posiciones[X-1].first][1]++;
            }
            int cambio2=-1;
            cambio2=valores[posiciones[X-1].first][0]>0;
            if(cambio==0 && cambio2==1) {par+=1;impar--;}
            else if(cambio==1 && cambio2==0) {impar+=1;par--;}

        }else{
            if(numeros[X-1]==0){par--;}
            else impar--;
            numeros[X-1]=Y%2;
            if(numeros[X-1]==0)par++;
            else impar++;
        }
        if(impar==0) cout<<"even\n";
        else  if(par==0) cout<<"odd\n";
        else if(impar%2==0){
            cout<<"even\n";
        }else cout<<"odd\n";
    }
    return 0;
}