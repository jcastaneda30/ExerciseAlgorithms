#include<iostream>
using namespace std;
int main(){
    float alumno1,alumno2,alumno3,alumno4, prom;
    cout<<"Ingrese la nota del alumno1: ";
    cin>>alumno1;
    cout<<"Ingrese la nota del alumno2: ";
    cin>>alumno2;
    cout<<"Ingrese la nota del alumno3: ";
    cin>>alumno3;
    cout<<"Ingrese la nota del alumno4: ";
    cin>>alumno4;
    prom = (alumno1+alumno2+alumno3+alumno4)/4;
    cout<<"El promedio de notas es: "<<prom;
    return 0;
}