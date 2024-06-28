#include<iostream>
#include<vector>

using namespace std;

int main(){
    int casos;
    cin>>casos;
    int tiempoServicio=0,tiempoPaciencia=0,pacienciaUsada=0;
    vector<int> happy;  
    int id,llegada,service,patience;
    cin>>id>>llegada>>service>>patience;
    happy.push_back(id);
    tiempoServicio=llegada+service;
    casos--;
    while(casos--){
        cin>>id>>llegada>>service>>patience;
        tiempoPaciencia=llegada+patience;
        if(tiempoPaciencia>=tiempoServicio){
            pacienciaUsada=tiempoServicio-llegada;
            if(pacienciaUsada<0) pacienciaUsada=0;
            tiempoServicio=llegada+service+pacienciaUsada;
            happy.push_back(id);
        }
    }
    for(int i=0;i<happy.size();i++){
        cout<<happy[i]<<"\n";
    }
    return 0;
}