#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> values;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            a*=((i%2)?1:-1);
            values.push_back(a);
        }
        set<long long> existe;
        existe.insert(0);
        long long suma=0;
        bool monda=false;
        for(int i=0;i<n;i++){
            suma+=values[i];
            if(existe.count(suma)>0){
                cout<<"YES"<<endl;
                monda=true;
                break;
            }
            existe.insert(suma);
        }
        if(!monda){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}