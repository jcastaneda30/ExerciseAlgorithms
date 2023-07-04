#include<iostream>
using namespace std;

int main(){
    float a,b,c,d,e,f,result=0;
    cout<<"Ingrese a: "; cin>>a;
    cout<<"Ingrese b: "; cin>>b;
    cout<<"Ingrese c: "; cin>>c;
    cout<<"Ingrese d: "; cin>>d;
    cout<<"Ingrese e: "; cin>>e;
    cout<<"Ingrese f: "; cin>>f;
    result = (a+(b/c))/(d+(e/f));
    cout.precision(3);
    cout<<"Resultado: "<<result;
    return 0;
}