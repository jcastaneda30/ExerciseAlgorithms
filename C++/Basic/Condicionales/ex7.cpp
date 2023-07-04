#include<iostream>
using namespace std;

int main(){
    int number,unidades,decenas,centenas,miles;
    cout<<"Introduzca el numero: "; cin>>number;

    unidades=number%10;
    decenas=number%100-unidades;
    centenas=number%1000-decenas-unidades;
    miles=number-decenas-unidades;
    
}