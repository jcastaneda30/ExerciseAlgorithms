#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabras[100];
    int longitud = 0;
    cout<<"Introduzca una palabra: ";
    cin.getline(palabras,100,'\n');
    longitud =strlen(palabras);
    if(longitud>10){
        cout<<palabras;
    }

    return 0;}