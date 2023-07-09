#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char cad1[]="Cadena de prueba";
    char cad2[]=" Waos holy shit";
    char cad3[30];
    strcpy(cad3,cad1);
    strcat(cad3,cad2);
    cout<<cad3;
    return 0;
}