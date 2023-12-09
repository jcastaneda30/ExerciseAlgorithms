#include<iostream>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    cin>>T;
    string plabra,palabra2;
    for(int i=0;i<T;i++){
        int X,Y;
        cin>>X>>Y;
        for(int i=X;i<=Y;i++){
            int valor = i%5;
            if(valor==2 || valor==3){
                cout<<i<<"-";
            }
        }
        cout<<endl;
    }
}