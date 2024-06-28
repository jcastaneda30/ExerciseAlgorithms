//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include<iostream>
 

using namespace std;

void recursion(int T){
    if(T==1){
        cout<<T;
        return;
    }
    cout<<T<<" ";
    recursion(T-1);
}

int main(){
    int T;
    cin>>T;
    recursion(T);
}