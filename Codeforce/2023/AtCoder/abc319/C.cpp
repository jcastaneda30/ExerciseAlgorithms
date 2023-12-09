#include<iostream>
#include<string>
#include<vector>

using namespace std;
void generarCombinaciones(vector<vector<int>> &bigC,const vector<int>& elementos, int k, vector<int>& combinacion, int inicio) {
    if (combinacion.size() == k) {
        bigC.push_back(combinacion);
        return;
    }

    for (int i = inicio; i < elementos.size(); ++i) {
        combinacion.push_back(elementos[i]);
        generarCombinaciones(bigC,elementos, k, combinacion, i + 1);
        combinacion.pop_back();
    }
}

int main(){
    vector<int> values;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int elemn;
            cin>>elemn;
            values.push_back(elemn);
        }
    }
    vector<vector<int>> bigC;
    int  contador =0;
    int k = 3; // Tamaño de las combinaciones
    vector<int> combinacionActual;

    generarCombinaciones(bigC,values, k, combinacionActual, 0);
    for(vector<int> combination:bigC){
        for (size_t i = 0; i < combination.size(); ++i) {
            std::cout << combination[i] << " ";
        }
        cout<<endl;

        if(combination[0]==combination[1] && combination[1]!=combination[2] || combination[2]==combination[1] && combination[1]!=combination[0] || combination[2]==combination[0] && combination[1]!=combination[0]) contador++;
    }

    cout<<(float)contador/(float)84<<endl;
    return 0;
}