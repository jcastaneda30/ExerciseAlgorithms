#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra[]="Hola";
    char palabra2[]="Hola";

    if(strcmp(palabra,palabra2)==0){
        cout<<"Son iguales";
    }else if(strcmp(palabra,palabra2)>0){
        cout<<"palabra esta primero alfababeticamente";
    }
    return 0;
}