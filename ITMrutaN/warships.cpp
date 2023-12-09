#include<iostream>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T,N;
    string Naves,Naves1;
    cin>>Naves>>T; //Tobby
    cin>>Naves1>>N; //Nae
    if (Naves1==Naves){
        if(T>N){
            cout<<"Tobby\n";
        }else if(T<N){
            cout<<"Naebbirac\n";
        }else if(N==T){
            cout<<"Draw\n";
        }
    }
    else if(Naves=="Battleships"){
        if(Naves1=="Destroyers" && T/2>=N){
            cout<<"Naebbirac\n";
        }else{
            cout<<"Tobby\n";
        }
    }
    else if(Naves=="Destroyers"){
        if(Naves1=="Cruisers" && T/2>=N){
            cout<<"Naebbirac\n";
        }else{
            cout<<"Tobby\n";
        }
    }
    
    else if(Naves=="Cruisers"){
        if(Naves1=="Battleships" && T/2>=N){
            cout<<"Naebbirac\n";
        }else{
            cout<<"Tobby\n";
        }
    }
}