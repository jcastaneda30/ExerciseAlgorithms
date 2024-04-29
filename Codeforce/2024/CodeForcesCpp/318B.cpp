#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>

using namespace std;

int main(){

    string cadena;
    cin>>cadena;
    string heavy="heavy";
    string metal="metal";
    long long pesado=0, hierro=0;
    if(cadena.size()<10){
        cout<<0<<endl;
        return 0;
    } 
    long long counter=0;
    for(int i=4;i<cadena.size();i++){
        if(cadena[i-4]=='h' && cadena[i-3]=='e' && cadena[i-2]=='a' && cadena[i-1]=='v' && cadena[i]=='y'){
            pesado++;
            continue;
        }else if(cadena[i-4]=='m' && cadena[i-3]=='e' && cadena[i-2]=='t' && cadena[i-1]=='a' && cadena[i]=='l') counter+=pesado;
    }
    cout<<counter<<endl;
    return 0;
}