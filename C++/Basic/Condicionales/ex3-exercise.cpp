#include<iostream>
using namespace std;

int main(){
    int numero1,numero2,numero3;
    cout<<"Inserte 3 numeros"<<endl;
    cin>>numero1>>numero2>>numero3;
    if(numero1>numero2){
        if(numero1>numero3){
            cout<<"Es el mayor numero: "<<numero1;
        }else{
            cout<<"Es el mayor numero: "<<numero3;
        }
    }else{
        if(numero2>numero3){
            cout<<"Es el mayor numero: "<<numero2;
        }else{
            cout<<"Es el mayor numero: "<<numero3;
        }
    }
}