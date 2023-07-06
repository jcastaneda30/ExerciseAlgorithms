#include<iostream>
using namespace std;

int main(){
    int tamano=0,number;
    cout<<"Ingrese el tamano del vector de numeros: "; cin>>tamano;
    int vector[100];
    for(int i=0;i<tamano;i++){
        cout<<"Ingrese el valor del vector en la posicion "<<i<<": ";
        cin>>vector[i];
      
    }
    for(int i=0;i<tamano+1;i++){
        cout<<i<<". "<<vector[i]<<endl;
    }
}