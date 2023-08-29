#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int numero;
    cin>>numero;
    int modulo;
    int i=1;
    while(i<1E9+1){
        if(numero%i<numero){
            modulo=i;
        }else{break;}
        i*=10;
    }
    cout<<modulo;

    return 0;
}