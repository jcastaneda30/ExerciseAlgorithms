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
        cin>>plabra>> palabra2;
        if(plabra==palabra2){
            cout<<"E\n";
            continue;
        }
        if(plabra=="tijeras" && palabra2=="papel") {
            cout<<"A\n";
            continue;
        }
        if(plabra=="tijeras" && palabra2=="piedra") {
            cout<<"B\n";
            continue;
        }
        if(plabra=="papel" && palabra2=="tijeras") {
            cout<<"B\n";
            continue;
        }
        if(plabra=="papel" && palabra2=="piedra") {
            cout<<"A\n";
            continue;
        }
        if(plabra=="piedra" && palabra2=="tijeras") {
            cout<<"A\n";
            continue;
        }
        if(plabra=="piedra" && palabra2=="papel") {
            cout<<"B\n";
            continue;
        }
    }
}