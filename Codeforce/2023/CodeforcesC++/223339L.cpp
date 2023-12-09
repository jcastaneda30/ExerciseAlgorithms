//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include<iostream>
#include<string>
#include<vector>

using namespace std;

long long recursion(int index, vector<int> &value,long long suma){
    if(index==value.size()){
        return suma;
    }
        return recursion(index+1,value, suma+value[index]);
    
}

int main(){
    int T;
    cin>>T;
    vector<int> valores;
    for(int i=0;i<T;i++){
        int numeros;
        cin>>numeros;
        valores.push_back(numeros);
    }
    cout<<recursion(0,valores,0)<<"\n";

}