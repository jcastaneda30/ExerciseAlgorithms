//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

#include<iostream>

using namespace std;
void recursion(int T){
    if(T==0){
        return;
    }
    recursion(T-1);
    cout<<"I love Recursion\n";
}
int main(){
    int T;
    cin>>T;
    recursion(T);
}
