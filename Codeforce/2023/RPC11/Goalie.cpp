#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    float y,x,r;
    float m,x1,x2,y1,y2,x0,y0;
    cin>>y>>x>>r;
    m=y/-x;
    x0=0;
    y0=y;
    x1=(2*m*(m*x0-y0)+sqrt((2*m*(m*x0))*(2*m*(m*x0))-4*(m*m+1)*((-y0*-y0)-r*r)))/2*(m*m + 1);
    x2=(2*m*(m*x0-y0)-sqrt((2*m*(m*x0))*(2*m*(m*x0))-4*(m*m+1)*((-y0*-y0)-r*r)))/2*(m*m + 1);
    y1=sqrt(r*r-x1);
    y2=sqrt(r*r-x2);
    float minimoAngu=0;
    float elegidoX=0;
    float elegidoY=0;
    if(isnan(x1) && isnan(x2)){
        cout<<-1<<endl;
        return 0;
    } 
    minimoAngu = max(x1,x2);
    if(minimoAngu==x1){
        elegidoX=x1;
        elegidoY=y1;
    }else{
        elegidoX=x2;
        elegidoY=y2;
    }
    if(y1<0){
        elegidoX=x2;
        elegidoY=y2;
    }else if(y2<0){
        elegidoX=x1;
        elegidoY=y1;
    }
    double angulo = atan2(elegidoY, elegidoX);
    double my_pi = 3.141592653589793238462643383279502884L;
    // Convertir el ángulo de radianes a grados si es necesario
    double angulo_grados = angulo * 180 / my_pi;
    cout << angulo_grados<<endl;
    return 0;
}