#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float ladoA,ladoB;
    double resultado;
    cout<<"Lado A del triangulo: "; cin >>ladoA;
    cout<<"Lado B del triangulo: "; cin >>ladoB;
    resultado = pow(pow(ladoA,2)+pow(ladoB,2),1.0/2.0);
    cout<<"Lado C del triangulo: "<<resultado;

    return 0;
}