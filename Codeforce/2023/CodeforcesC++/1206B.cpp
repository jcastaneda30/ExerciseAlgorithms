#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    vector<long long> datos(t);
    for(int i=0;i<t;i++) cin>>datos[i];
    long long monedas=0;
    int k=0;
    for(int j=0;j<t;j++){
        if(datos[j]!=0){
            if(datos[j]>1){
                monedas+=datos[j]-1;
                datos[j]=1;
            }else if(datos[j]<-1){
                monedas+=-datos[j]-1;
                datos[j]=-1;
            }
        }else{
            k++;
        }
    }
    int signo = 1;
    if(k==0){
        for(int dato:datos) signo*=dato;
        if(signo>0){
            cout<<monedas;
        }else{
            cout<<monedas+2;
        }
    }else{
//        for(int h=0;h<t;h++){
//                if(datos[h]==0 && k>1){
//                    k--;
//                    datos[h]=1;
//                    monedas++;
//                }
//        }
        monedas+=k;
        cout<<monedas;
    }
    return 0;
}