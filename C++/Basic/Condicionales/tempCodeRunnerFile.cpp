#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int eleccion,numero;
    cout<<"Ingrese una de la siguientes opciones\n1.Cubo de un numero\n2.Numero par o impar\n3.Salir"<<endl;
    cin>>eleccion;
    switch (eleccion)
    {
    case 1:
        cout<<"Ingrese el numero: "; cin>>numero;
        cout<<"El cubo del numero es: "<<pow(numero,3);
        break;
    case 2:
        cout<<"Ingrese el numero: "; cin>>numero;
        if(numero==0){
            cout<<"Es cero";
        }else if(numero%2==0){
            cout<<"Es par";
        }else{
            cout<<"Es impar";
        }
        break;
    case 3: 
        break;
    default:
    cout<<"No selecciono ninguna de las opciones";
        break;
    }
    return 0;
}