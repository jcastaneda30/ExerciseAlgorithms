#include<iostream>
using namespace std;
int main(){
    int n,result=0,factorial=1,t;
    cin>>n;
    do{
        t=n;
        do{
        factorial*=t;
        t--;}while(t>0);
        result+=factorial;
        factorial = 1;
    }while(n--);
    cout<<result;
}