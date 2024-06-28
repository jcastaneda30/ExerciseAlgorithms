#include<iostream>
#include<string>
//https://vjudge.net/contest/598461#problem/A
using namespace std;


int main(){
    string palabra;
    cin>>palabra;
    for(int i=0;i<palabra.size();i++){
        if(isupper(palabra[i])){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}