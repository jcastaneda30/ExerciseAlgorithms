#include<iostream>

using namespace std;

int main(){
    int A,B;
    cin>>A>>B;
    int sockets=1;
    int regletas=0;
    while(sockets<B){
        sockets+=A-1;
        regletas++;
    }
    cout<<regletas<<endl;
    return 0;
}