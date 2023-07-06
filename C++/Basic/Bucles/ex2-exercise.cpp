#include<iostream>
using namespace std;

int main(){
    int i=1,suma=0,max=INT_MIN,min=INT_MAX,numero;
    while(i<7){
        cout<<"Escriba la temperatura "<<i<<": ";
        cin>>numero;
        suma+=numero;
        if(numero>max){
            max=numero;
        }
        if(numero<min){
            min=numero;
        }
        i++;
    }
    cout<<suma/6<<endl;
    cout<<min<<endl;
    cout<<max<<endl;
    return 0;
}