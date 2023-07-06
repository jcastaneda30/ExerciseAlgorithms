#include<iostream>
using namespace std;
int main(){
    double x,y,result;
    cin>>x>>y;
    for(int i=1;i<y;i++){
        x*=x;
    }
    cout<<x;
}