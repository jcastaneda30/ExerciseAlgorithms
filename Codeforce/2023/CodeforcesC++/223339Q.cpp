//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include<iostream>

using namespace std;

long long recursion(long long expo,long long actual){
    if(expo==1){
        return actual;
    }else if(expo%2==1){
        return recursion(3*expo + 1 , actual+1);
    }else{
        return recursion(expo/2, actual+1);}
    
}

int main(){ 
    long long T;
    cin>>T;
    cout<<recursion(T,1)<<"\n";
}