#include<iostream>
#include<cmath>

using namespace std;
int main(){
    float x1,x2,a,b,c;
    cout<<"Valor de a: "; cin>>a;
    cout<<"Valor de b: "; cin>>b;
    cout<<"Valor de c: "; cin>>c;

    x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    cout<<"X1 = "<<x1<<"\nX2 = "<< x2;
    return 0;
}