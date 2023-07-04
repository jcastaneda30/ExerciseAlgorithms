#include<iostream>
using namespace std;

int main(){
    int a,b,aux;
    cout<<"Ingrese a: ";
    cin>>a;
    cout<<"Ingrese b: ";
    cin>>b;
    aux=a;
    a=b;
    b=aux;
    cout<<"Valor a: "<<a<<"\nValor b: "<<b;
    return 0;
}