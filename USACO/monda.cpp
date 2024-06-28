#include<iostream>
#include<string>

using namespace std;

int main(){
    string cadena;
    cin>>cadena;
    char winner;
    int a=0,b=0;
    for(int i=0;i<cadena.size();i++){
        if(cadena[i]=='A'){
            i++;
            a+=cadena[i]-'0';
        }else{
            i++;
            b+=cadena[i]-'0';
        }
        if(a>=11 && a-b>=2){
            winner='A';
            break;
        }else if(b>=11 && b-a>=2){
            winner='B';
            break;
        }
        
    }
    cout<<winner<<endl;
}