#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float x,y,result;
    cout<<"Valor de x: "; cin>>x;
    cout<<"Valor de y: "; cin>>y;

    result = sqrt(x)/(pow(y,2)-1);

    cout<<"El resultado es: "<<result;
    return 0;
}