#include<iostream>

using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    if(n%k==0){
        cout<<k;
    }
    else if(k>=n){
        cout<<n;
    }
    else if(k==1){
        cout<<k;
    }
    else{
    long long cajas=(n/k)+1;
    long long respuesta = n/cajas;
    cout<<respuesta;
    }
    return 0;
}