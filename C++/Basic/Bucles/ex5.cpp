#include<iostream>
using namespace std;
int main(){
    int n,result=0;
    cin>>n;
    do{
        result+=n;
        cout<<n<<endl;
    }while(n--);
    cout<<result;
}