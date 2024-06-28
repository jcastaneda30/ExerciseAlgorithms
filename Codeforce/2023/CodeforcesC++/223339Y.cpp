//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include<iostream>

using namespace std;

int recursion(int E,int S){
    if(E==S){
        return 1;
    }else if(E>S){
        return 0;
    }
    return recursion(E+1,S)+recursion(E+2,S)+recursion(E+3,S);
}

int main(){ 
    int E,S;
    cin>>E>>S;
    cout<<recursion(E,S)<<"\n";
}