#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char cadena[100];
    char cadena2[100];

    cin.getline(cadena,100,'\n');
    strcpy(cadena2,cadena);

    cout<<"Copia cadena: "<< cadena2;
    return 0;
}