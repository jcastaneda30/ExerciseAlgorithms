#include<iostream>
using namespace std;

int main(){
    float a,b,c,d,result=0;
    cout<<"Ingrese a: "; cin>>a;
    cout<<"Ingrese b: "; cin>>b;
    cout<<"Ingrese c: "; cin>>c;
    cout<<"Ingrese d: "; cin>>d;
    result = a+(b/(c-d));
    cout.precision(3);
    cout<<"Resultado: "<<result;
    return 0;
}