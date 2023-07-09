#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char cadena1[100];
    char cadena2[100];

    cout<<"Introduzca una cadena: ";
    cin.getline(cadena1,100);
    cout<<"\nIntroduzca otra cadena: ";
    cin.getline(cadena2,100);

    if(strcmp(cadena1,cadena2)==0){
        cout<<"Son iguales: ";
    }else if(strcmp(cadena1,cadena2)>0){
        cout<<cadena1<<" es superior alfabeticamente";
    }else{
        cout<<cadena2<<" es superior alfabeticamente";

    }
    return 0;
}