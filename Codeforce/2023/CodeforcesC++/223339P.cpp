//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include<iostream>

using namespace std;

long long recursion(long long expo, long long value,long long actual){
    if(actual==value){
        return expo;
    }else if(actual>value){
        return expo-1;
    }
        return recursion(expo+1,value, actual*2);
    
}

int main(){
    long long T;
    cin>>T;
    cout<<recursion(0,T,1)<<"\n";
}