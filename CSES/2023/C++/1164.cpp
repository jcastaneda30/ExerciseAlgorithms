#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    int N,Rooms=1;
    cin>>N;
    map<int,vector<int>> SH;
    vector<int> respuesta;
    for(int i=0;i<N;i++){
        int entrada, salida;
        cin>>entrada>>salida;
        if(SH.empty()){
            SH[salida].push_back(1);
            respuesta.push_back(1);
        }else{
            map<int,vector<int>>::iterator it = SH.begin();
            int clave=it->first;
            if(clave>=entrada){
                std::cout<<clave<<' '<<entrada;
                Rooms++;
                SH[salida].push_back(Rooms);
                respuesta.push_back(Rooms);
            }else{
                int habitacion = SH[clave].back();
                SH[clave].pop_back();
                if(SH[clave].empty()) SH.erase(clave);
                SH[salida].push_back(habitacion);
                respuesta.push_back(habitacion);
            }

        }
    }
    std::cout<<Rooms<<std::endl;
    for(int i=0;i<respuesta.size();i++) std::cout<<respuesta[i]<<' ';
    std::cout<<std::endl;
    return 0;
}