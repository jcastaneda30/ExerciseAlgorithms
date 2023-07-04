#include<iostream>
using namespace std;

int main(){
    int num,num2,num3,num4;
    cout<<"Introduzca 4 numeros letra: "<<endl; cin>>num>>num2>>num3>>num4;
    if(num4==num || num4==num3 || num4==num2){
        cout<<"Es igual a uno de los numeros anteriores";
    }
    return 0;
}