#include<iostream>
using namespace std;

int main(){
    float practica,teorica,participacion, notafinal;
    cout<<"Nota practica: "; cin >> practica;
    cout<<"Nota teorica: "; cin >> teorica;
    cout<<"Nota participacion: "; cin >> participacion;

    notafinal = practica*0.3+teorica*0.6+participacion*0.1;

    cout<<"La nota final es: "<<notafinal;

    return 0;
}