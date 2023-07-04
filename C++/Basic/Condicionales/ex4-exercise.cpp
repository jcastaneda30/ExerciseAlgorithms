#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Escriba un numero: ";
    cin>>number;
    if(number==0){
        cout<<"Es cero";
    }else if(number>0){
        cout<<"Es positivo";
    }else{
        cout<<"Es negativo";
    }
}