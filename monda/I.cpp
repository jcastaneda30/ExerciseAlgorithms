#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>x>>n;
        if(n>x){
            cout<<-1<<endl;
            continue;
        }
        int initiall = x/n;
        int residuo = x%n;
        vector<int> values(n,initiall);
        for(int i=n-1;i>=0 && residuo>0;i--,residuo--){
            values[i]++;
        }
        for(int a:values){
            cout<<a<<" ";
        }
        cout<<endl;
    }
}