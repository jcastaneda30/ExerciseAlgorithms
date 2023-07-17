#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string lista[] = {"one","two","three","four","five","six","seven","eight","nine",};
    int n;
    int n2;
    cin>>n>>n2;
    for(int i=n;i<=n2;i++){
        if (i<=9){
            cout<<lista[i-1]<<endl;
        }else{
            if(i%2==0){
                cout<<"even"<<endl;
            }else{
                cout<<"odd"<<endl;
            }
        }
    }
    return 0;
}