//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include<iostream>
#include<string>

using namespace std;

void recursion(int countt,int T,string &pp){
    if(T==countt){
        cout<<pp[countt]<<"\n";
        return;
    }
    cout<<pp[countt]<<" ";
    recursion(countt+1,T,pp);
}

int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        string numeros;
        cin>>numeros;
        recursion(0,numeros.size()-1,numeros);

    }
        
}