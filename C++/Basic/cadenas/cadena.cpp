#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char palabra[] = "Palabra";

    char palabra2[] = {'P','a','l','a','b','r','a','\0'};
    char nombre[20];

    cout<<"Digite su nombre: ";
    cin.getline(nombre,20,'\n');
    
    cout<<nombre;
}