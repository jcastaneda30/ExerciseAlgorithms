#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> values(n);
        for(int i=0;i<n;i++) cin>>values[i];
        cout<<n-1<<endl;
        int counter=2*1e9;
        for(int i=0;i<n-1;i++){
            int minimun = min(values[i],values[i+1]);
            if(i!=n-2){
                cout<<i+1<<' '<<i+2<<' '<<counter<<' '<<minimun<<endl;
                values[i]=counter;
                values[i+1]=minimun;
                counter--;}
            else{
                counter=1000000007;
                cout<<i+1<<' '<<i+2<<' '<<counter<<' '<<minimun<<endl;
                values[i]=counter;
                values[i+1]=minimun;
            }   
        }
            
    }

}