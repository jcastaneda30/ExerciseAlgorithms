#include<iostream>
using namespace std;

int main(){
    float a,b,result=0;
    cout<<"Ingrese a: "; cin>>a;
    cout<<"Ingrese b: "; cin>>b;
    result = a/b + 1;
    cout.precision(3);
    cout<<"Resultado: "<<result;
    return 0;
}