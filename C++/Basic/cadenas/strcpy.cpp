#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char nombre[] = "Jaider";
    char nombreCopy[20];
    strcpy(nombreCopy,nombre); //y=x
    cout<<nombreCopy;
    return 0;
}