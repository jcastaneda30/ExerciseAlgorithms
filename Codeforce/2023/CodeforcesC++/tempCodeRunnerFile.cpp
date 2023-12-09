//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool backtraking(int X,vector<int> &S,long long suma,int index){
    if(suma==X && index==S.size()){
        return true;
    }
    if(suma>X && index==S.size()){
        return false;
    }
    if(index==S.size()){
        return false;
    }
    if(backtraking(X,S,suma+S[index],index+1)) return true;
    if(backtraking(X,S,suma-S[index],index+1)) return true;
    return false;

}

int main(){ 
    int N;
    long long X;
    cin>>N>>X;
    vector<int> numeros;
    for(int i=0;i<N;i++){
        int valor;
        cin>>valor;
        numeros.push_back(valor);
    }
    string hola  = backtraking(X,numeros,numeros[0],1)?"YES":"NO";
    cout<<hola<<"\n";
}