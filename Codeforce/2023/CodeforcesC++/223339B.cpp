//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

#include<iostream>
 

using namespace std;

void recursion(int T,int countt){
    if(T==countt){
        cout<<T<<"\n";
        return;
    }
    cout<<countt<<"\n";
    recursion(T,countt+1);
}

int main(){
    int T;
    cin>>T;
    recursion(T,1);
}