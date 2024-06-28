//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include<iostream>
#include<string>

using namespace std;

string recursion(int T, string value){
    if(T==0){
        return value;
    }
    if(T%2==0){
        return recursion(T/2,'0'+value);
    }else{
        return recursion(T/2,'1'+value);
    }
}

int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int numeros;
        cin>>numeros;
        string value=recursion(numeros,"");
        cout<<value<<endl;
    }
        
}