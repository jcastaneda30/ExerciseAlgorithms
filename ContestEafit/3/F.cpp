#include<iostream>

using namespace std;

int main(){
    int testcase,distanciaX,distanciaY,total,a,b;
    int casos[3][2];
    cin>>testcase;
    for(int i=0;i<testcase;i++){
        for(int j=0;j<3;j++) {for(int h=0;h<2;h++) {cin>>casos[j][h];}}
        distanciaX = casos[0][0]-casos[1][0]; 
        if(distanciaX<0) distanciaX=-distanciaX;
        distanciaY = casos[0][1]-casos[1][1]; 
        if(distanciaY<0) distanciaY=-distanciaY;
        total = distanciaX+distanciaY;
        if(casos[0][0]==casos[1][0] && casos[0][0]==casos[2][0] && ((casos[0][1]<casos[2][1] && casos[2][1]<casos[1][1]) || (casos[0][1]>casos[2][1] && casos[2][1]>casos[1][1]))) total+=2;//comprobando x
        else if(casos[0][1]==casos[1][1] && casos[0][1]==casos[2][1] && ((casos[0][0]<casos[2][0] && casos[2][0]<casos[1][0]) || (casos[0][0]>casos[2][0] && casos[2][0]>casos[1][0]))) total+=2;//comprobando y
        cout<<total<<endl;
    }

    return 0;
}