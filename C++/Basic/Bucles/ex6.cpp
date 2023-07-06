#include<iostream>
using namespace std;
int main(){
    int n,result=1;
    cin>>n;
    do{
        result*=n;
        cout<<n<<endl;
        n--;
    }while(n>0);
    cout<<result;
}