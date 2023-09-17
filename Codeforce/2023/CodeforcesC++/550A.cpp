#include<iostream>
#include<string>

using namespace std;


int main(){
    string Cadena;
    cin>>Cadena;
    bool absolute=false;
if(Cadena.length()>1){    bool status=false;
    int posicion=0;
    for(int i=0;i<Cadena.length()-2;i++){
        if(Cadena[i]=='A' && Cadena[i+1]=='B'){
            status=true;
            posicion=i+2;
            break;
        }
    }
    
    if(status){
        
        for(int i=posicion;i<Cadena.length()-1;i++){
            if(Cadena[i]=='B' && Cadena[i+1]=='A'){
                absolute=true;
                break;
            }
        }
    }
    status=false;
    posicion=0;
    for(int i=0;i<Cadena.length()-2;i++){
        if(Cadena[i]=='B' && Cadena[i+1]=='A'){
            status=true;
            posicion=i+2;
            break;
        }
    }
    if(status){
        for(int i=posicion;i<Cadena.length()-1;i++){
            if(Cadena[i]=='A' && Cadena[i+1]=='B'){
                absolute=true;
                break;
            }
        }
    }
    }
    if(absolute){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}