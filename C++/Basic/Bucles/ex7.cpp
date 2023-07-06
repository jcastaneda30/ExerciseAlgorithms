#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,result=0;
    cin>>n;
    do{
        result+=pow(2,n);
        n--;
    }while(n>0);
    cout<<result;
}