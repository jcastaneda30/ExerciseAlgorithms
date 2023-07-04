#include<iostream>
using namespace std;

int main(){
    int numero1,numero2;
    cout<<"Inserte 2 numeros: ";
        cin>>numero1>>numero2;
    if(numero1>numero2){
        cout<<numero1<<" es mayor que "<<numero2;
    }else{
        cout<<numero2<<" es mayor que "<<numero1;
    }
}