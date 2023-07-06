#include<iostream>
using namespace std;

int main(){
    int numeros[]={1,2,3,4,5,6,7,8,9,10},max=INT_MIN,suma=0;
    int numeros2[10];
    for(int i=0;i<10;i++){
        suma+=numeros[i];
        numeros2[i]=suma;
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
        if(numeros[i]==numeros2[j]-numeros[i]){
            cout<<numeros[i]<<"  "<<numeros2[j]-numeros[i]<<endl;
            cout<<"True"<<endl;
        }
        }
    }
    return 0;
}