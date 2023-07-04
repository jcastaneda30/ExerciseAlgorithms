#include<iostream>
using namespace std;

int main(){
    int num;
    char letra = 'a';
    cout<<"Introduzca una letra: "; cin>>letra;
    num = int(letra);
    if(num>=65 && num<=90){
        cout<<"Es una letra mayuscula";
    }else if(num>=97 && num<=122){
        cout<<"Es minuscula";
    }
    return 0;
}