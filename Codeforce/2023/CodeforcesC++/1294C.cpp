#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a=-1,b=-1;
        cin>>n;
        for(int i=2;i*i<n;i++){
            if(n%i==0){
                a=i;
                n/=i;
                break;
            }
        }

        for(int i=2;i*i<n;i++){
            if(n%i==0 && i!=a){
                b=i;
                n/=i;
                break;
            }
        }
        if(b==n || a==n || b==-1 || a==-1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<a<<' '<<b<<' '<<n<<endl;
        }
    }
    return 0;
}