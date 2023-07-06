#include<iostream>
using namespace std;
int main(){
    int n,result=0;
    cin>>n;
    do{
        if(n%2!=0){
            result+=n;
            cout<<n<<endl;}
    }while(n--);
    cout<<result;
}