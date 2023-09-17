#include<iostream>
using namespace std;

int main(){
    int a,b,c,number;
    cin>>number;
    for(int i=0;i<number;i++){
        cin>>a>>b>>c;
        if(a>c || b>c){
            cout<<"-\n";
        }else{
            cout<<"+\n";
        }
    }
        return 0;
}